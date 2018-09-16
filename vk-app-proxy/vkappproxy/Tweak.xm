
%hook VKAPI


+(id) apiURL {
	id res = %orig;
	%log(res, [res class]);

	// return [NSURL URLWithString:@"https://api.vk.com/method/"];
	// return [NSURL URLWithString:@"https://vk-app-proxy.herokuapp.com/method/"];
	// return [NSURL URLWithString:@"http://vkapi.sproject.space/method/"];
	return [NSURL URLWithString:@"http://192.168.0.101:5000/method/"];
}

// +(void) setUpAPIRequest:(id)request caching:(BOOL)caching
// {
// 	%log(request);
// 	%orig;
// }

%end