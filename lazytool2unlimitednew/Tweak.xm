%config(generator=internal);

// NSString* res = @"Activation is successful: Unlimited by Slavik Nychkalo:)";
NSString* res = @"Unlimited by Slavik Nychkalo:)";

%hook GlobalData

-(void)setActivationResult:(NSString*)arg
{
	%orig(@"Unlimited by Slavik Nychkalo:)");
}

-(NSString*)activationResult
{
	return @"Unlimited by Slavik Nychkalo:)";
}

-(void)setActivationIsOk:(BOOL)arg
{
	%orig(TRUE);
}

-(void)setActivationkosi:(BOOL)arg
{
	%orig(TRUE);
}

-(BOOL)activationIsOk
{
	return TRUE;
}

-(BOOL)activationkosi
{
	return TRUE;
}

-(void)setLazyID:(NSString*)arg
{
	%orig(@"Slavik Nychkalo");
}

-(NSString*)lazyID
{
	return @"Slavik Nychkalo";
}

-(BOOL)needToHideAds
{
	return TRUE;
}

-(void)setNeedToHideAds:(BOOL)arg
{
	%orig(TRUE);
}

%end