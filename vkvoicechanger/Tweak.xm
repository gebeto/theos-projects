#import <UIKit/UIPasteboard.h>

%hook VKAudioMessage

-(NSString*) link_ogg
{
	NSString* res = %orig;
	%log(res);
	UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
	pasteboard.string = res;
	return res;
}

%end


%hook VKAPModel

-(void)sendSelectedGraffiti:(id)graffiti
{
	%log(graffiti);
	%orig;
}

-(void)sendGraffitiImage:(id)image
{
	%log(image); 
	
	SBApplication *runningApp = [(SpringBoard *)self _accessibilityFrontMostApplication];
	// We're in application, resign app
	[runningApp notifyResignActiveForReason:1];
	
	UIImagePickerController * picker = [[UIImagePickerController alloc] init];
    picker.delegate = runningApp;
    [picker setSourceType:(UIImagePickerControllerSourceTypePhotoLibrary)];
    [self presentViewController:picker animated:YES completion:Nil];

	%orig;
}

%new
- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info
{

    [self dismissViewControllerAnimated:NO completion:nil];
  //.....
}

%end