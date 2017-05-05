
// %hook VKAccessToken

// -(NSString*) accessToken
// {
// 	NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];

//     NSString* token = [defaults objectForKey:@"accessToken"];

// 	%log([defaults objectForKey:@"accessToken"]);
// 	%log(@"TOKEN = %@", token);
// 	return token;
// }

// %end


%hook GADCSIConfiguration

-(NSString*) userAgent
{
	id res = %orig;
	%log(res);
	return res;
}

%end

%hook GADDevice

-(NSString*) userAgentString
{
	id res = %orig;
	%log(res);
	return res;
}

%end

