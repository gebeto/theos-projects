#import <UIKit/UIKit.h>


%hook VSCOLibraryDataSource

-(NSArray*) filters {
	NSArray* res = %orig;
	%log(res);
	return res;
}

%end

%hook VSCOLibrarySelectionViewController

-(id) dataSource {
	id res = %orig;
	%log(res);
	return res;
}

%end

%hook VSPSQLFilter

-(id) init {
	id res = %orig;
	%log(res);
	return res;
}

%end





%hook AppDelegate

-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
	BOOL result = %orig(arg1, arg2);
	dispatch_async(dispatch_get_main_queue(), ^{
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"CRACKED!"
												 	message:@"Cracked by Slavik Nychkalo"
												 	delegate:nil
												 	cancelButtonTitle:@"Thanks!"
												 	otherButtonTitles:nil];
		[alert show];
		[alert release];
	});
	return result;
}

%end