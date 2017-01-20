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
