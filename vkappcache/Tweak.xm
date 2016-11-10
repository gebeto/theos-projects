#import <UIKit/UIKit.h>
#import "MyButton.h"

@interface VKMRendererCell : UITableViewCell
@end

@interface VKAudio
@property(retain, nonatomic) NSString* url;
@property(retain, nonatomic) NSString* audioName;
@end

@interface AudioRenderer
@property(retain, nonatomic) VKAudio* domain;
@end

%hook AudioRenderer

-(void)renderCell:(VKMRendererCell*)cell
{
    MyButton* button = [MyButton buttonWithType:UIButtonTypeRoundedRect];
    button.frame = CGRectMake(240, 25, 65, 24);
    // set the button title here if it will always be the same
    [button setTitle:@"URL" forState:UIControlStateNormal];

    // button.tag = 1;
    button.url = self.domain.url;
    [button addTarget:self action:@selector(looongPress:) forControlEvents:UIControlEventTouchUpInside];
    [cell addSubview:button];
	%orig(cell);
	%log(cell);
}


%new
-(void)looongPress:(MyButton*)sender
{
	dispatch_async(dispatch_get_main_queue(), ^{
		UIPasteboard *pasteboard = [UIPasteboard generalPasteboard];
		pasteboard.string = sender.url;
		UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Скопировано" 
	                                                    message:@"Ссилка на песню скопирована!"
	                                                    delegate:self 
	                                                    cancelButtonTitle:@"ЗБС" 
	                                                    otherButtonTitles:nil];
	    [alert show];
	});	
}

%end
