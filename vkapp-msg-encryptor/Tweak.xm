#import <UIKit/UIKit.h>

// Send MESSAGE
%hook PendingMessage

+(id)messageWithBody:(id)body sendeer:(id)sendeer attachments:(id)attachments
{
	NSMutableDictionary *prefs = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/com.slaviknychkalo.vkmessagedecoderprefs.plist"];
    if(prefs)
    {
    	BOOL MDisEnabled = YES;
        MDisEnabled = ( [prefs objectForKey:@"Enable"] ? [[prefs objectForKey:@"Enable"] boolValue] : MDisEnabled );
		if (MDisEnabled == YES){
			NSData *plainData = [body dataUsingEncoding:NSUTF8StringEncoding];
			NSString *base64String = [plainData base64EncodedStringWithOptions:0];
			NSString *result = [NSString stringWithFormat:@":VKApp:%@:VKApp:", base64String];
			return %orig(result, sendeer, attachments);
		}
    }
	return %orig;
}

%end

// READ DECODE
%hook MessageRenderer

-(id) textView
{
	UITextView* result = %orig;
	id base64StringRAW = [NSString stringWithFormat:@"%@", result.text];
	NSArray *base = [base64StringRAW componentsSeparatedByString:@":VKApp:"];
	if ([base count] == 3)
	{
		NSString *base64String = [[base objectAtIndex:1] retain];
		NSData *decodedData = [[NSData alloc] initWithBase64EncodedString:base64String options:0];
		NSString *decodedString = [[NSString alloc] initWithData:decodedData encoding:NSUTF8StringEncoding];
		[result setText:decodedString]; 
	}
	return result;
}

%end


// Cloud Message decoder
%hook VKMessage

-(NSString*)body
{
	NSString* res = %orig;
	if([self performSelector:@selector(read_state)])
	{
		id base64StringRAW = res;
		NSArray *base = [base64StringRAW componentsSeparatedByString:@":VKApp:"];
		if ([base count] == 3)
		{
			NSString *base64String = [[base objectAtIndex:1] retain];
			NSData *decodedData = [[NSData alloc] initWithBase64EncodedString:base64String options:0];
			NSString *decodedString = [[NSString alloc] initWithData:decodedData encoding:NSUTF8StringEncoding];
			res = decodedString; 
		}
	}
	return res;
}

%end
