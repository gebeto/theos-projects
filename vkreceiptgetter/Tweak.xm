


%hook MTRGHosts

// +(id)logHost;
+(id)adHostForAdFormat:(id)adFormat 
{
	id res = %orig;
	%log(res, [res class]);
	return res;
}

%end