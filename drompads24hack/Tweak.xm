

%hook LDPUser

-(bool) isPresetPurchased:(long long)arg
{
	return YES;
}

-(bool) adsRemoved
{
	return YES;
}

%end

