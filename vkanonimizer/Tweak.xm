
%hook VKAPI


+(id) apiURL {
	id res = %orig;
	%log(res, [res class]);

	return [NSURL URLWithString:@"https://api.vk.com/method/"];
}

// +(void) setUpAPIRequest:(id)request caching:(BOOL)caching
// {
// 	%log(request);
// 	%orig;
// }

%end