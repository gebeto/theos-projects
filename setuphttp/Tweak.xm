

%hook ActivationController


-(NSURL*) activationURL
{
	NSURL* res = %orig;
	%log(res);
	return res;
}


%end