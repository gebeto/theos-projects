

%hook RequestBuilder

- (NSURL*) baseURL {
	NSURL* res = %orig;
	%log(res);
	%log([res class]);

	// NSString* apiUrl = @"napi1.privatbank.ua/iapi2";
	NSString* apiUrl = @"github.com/gebeto";
	NSString *urlstring = [NSString stringWithFormat:@"https://%@/", apiUrl];
	NSURL *newUrl = [NSURL URLWithString:urlstring];
	return newUrl;

	// return res;
}

%end
