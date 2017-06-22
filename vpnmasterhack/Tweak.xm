


%hook SysUtil

+(bool) isVip
{
	return YES;
}

%end


%hook ACVPNServerArea

-(bool) isVip
{
	return YES;
}

%end


%hook ACUserCenter

-(bool) isVip
{
	return YES;
}

%end


%hook ACPurchaseViewController

-(bool) isSubscribedUser
{
	return YES;
}

%end