

%hook ETSubscriptionInfo

-(long long) type
{
	return 2;
}

-(long long) daysLeftToExpire
{
	return 100500;
}

-(bool) isOver
{
	return false;
}

%end