#import <UIKit/UIKit.h>

%hook AppDelegate

-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2
{
	BOOL result = %orig(arg1, arg2);
	%log(@"!!!APP IS STARTED!!!");
	return result;
}

%end



%hook GlitchShop

-(bool) videoEditingEnabled
{
	return true;
}

-(bool) liveEditingEnabled
{
	return true;
}

-(bool) useHighResolution
{
	return true;
}

-(bool)filterPack1Unlocked
{
	return true;
}

%end


%hook MediaTypeSelectionViewController

-(id) btnCamera
{
	UIButton* res = %orig;
	
	res.titleLabel.lineBreakMode = UILineBreakModeWordWrap;
	res.titleLabel.textAlignment = NSTextAlignmentCenter;
	[res setTitle:[res.titleLabel.text stringByAppendingString:@"\n\ncracked by Slavik Nychkalo"] forState:UIControlStateNormal];

	return res;
}


-(id) btnVideo
{
	UIButton* res = %orig;

	res.titleLabel.lineBreakMode = UILineBreakModeWordWrap;
	res.titleLabel.textAlignment = NSTextAlignmentCenter;
	[res setTitle:[res.titleLabel.text stringByAppendingString:@"\n\ncracked by Slavik Nychkalo"] forState:UIControlStateNormal];

	return res;
}



%end