

%hook VKAuthorizationContext


-(id)scope
{
	id res = %orig;
	%log(res);
	return res;
}

-(id)clientId
{
	id res = %orig;
	%log(res);
	return res;
}


%end