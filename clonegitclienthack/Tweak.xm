


%hook DLLCloneSettingsManager

-(bool) productIsPurchased:(id)arg
{
	return true;
}

-(void) setProduct:(id)arg1 isPurchased:(bool)arg2
{
	%orig(arg1, true);
}

%end