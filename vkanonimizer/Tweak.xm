// application/x-www-form-urlencoded

%hook VKAPI


+(id)apiURL {
	id res = %orig;
	%log(res, [res class]);

    /*
    NSData *returnData = [[NSData alloc]init];
    NSString* postString = @"u=https://api.vk.com/method/users.get";

    //Build the Request
    NSMutableURLRequest *request = [[NSMutableURLRequest alloc] initWithURL:[NSURL URLWithString:@"http://ipfaker.net/includes/process.php?action=update"]];
    [request setHTTPMethod:@"HEAD"];
    [request setValue:[NSString stringWithFormat:@"%lu", (unsigned long)[postString length]] forHTTPHeaderField:@"Content-length"];
    [request setValue:@"application/x-www-form-urlencoded" forHTTPHeaderField:@"Content-Type"];
    [request setHTTPBody:[postString dataUsingEncoding:NSUTF8StringEncoding]];

    //Send the Request
    NSHTTPURLResponse *resp;
    returnData = [NSURLConnection sendSynchronousRequest: request returningResponse:&resp error: nil];

    //Get the Result of Request
    NSString *response = [[NSString alloc] initWithBytes:[returnData bytes] length:[returnData length] encoding:NSUTF8StringEncoding];
    
    
    bool debug = YES;

    if (debug && response) {
    	NSDictionary *dictionary = [resp allHeaderFields];
		%log(dictionary);
        // NSLog(@"Response >>>> %@",response);
    }
    */

	return [NSURL URLWithString:@"https://api.vk.com/method/"];
}

+(void)setUpAPIRequest:(id)request caching:(BOOL)caching
{
	// id res = %orig;
	%log(request);
	%orig;
	// return res;
}

%end