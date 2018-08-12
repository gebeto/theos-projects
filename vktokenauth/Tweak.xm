
%hook VKAPI

+(void)setUpAPIRequest:(id)request caching:(BOOL)caching
{
	%log(request);
	%orig;
}

%end