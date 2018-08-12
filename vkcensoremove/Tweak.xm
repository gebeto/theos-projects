

%hook VKGroupProfile

-(BOOL)process:(NSMutableDictionary*)process context:(id)context
{
	NSMutableDictionary *customData = process.mutableCopy;
    NSMutableDictionary *grp =  [(NSMutableDictionary*)customData[@"grp"] mutableCopy];
	
	// NSLog(@"GRP %@", grp);	
	grp[@"is_adult"] = 0;

    customData[@"grp"] = grp;
	
	BOOL res = %orig(customData, context);

	return res;
}

%end



%hook VKRequestBuilder

-(NSMutableDictionary*) p
{
	NSMutableDictionary* res = %orig;
	if (res[@"online"]) {
		res[@"online"] = @"API.account.setOffline()";
	}
	// %log(res);
	return res;
}

-(NSString*) method
{
	id res = %orig;
	%log(res);
	return res;
}

// -(NSMutableArray*) vars
// {
// 	id res = %orig;
// 	%log(res);
// 	return res;
// }

%end


%hook VKExecuteBuilder

-(NSMutableString*) c
{
	NSMutableString* res = %orig;
	// [res replaceOccurrencesOfString:@"SOME SHIT"
 	//						withString:@"SOME NEW SHIT"
 	//						options:NSLiteralSearch
 	//						range:NSMakeRange(0, res.length)];
	// %log(res);
	return res;
}

%end


%hook VKRequestArgsBuilder

// -(NSMutableDictionary*) args
// {
// 	NSMutableDictionary* res = %orig;
// 	%log(res);
// 	return res;
// }

%end


%hook VKRequest

-(NSDictionary*) parameters
{
	NSDictionary* res = %orig;
	%log(res);
	[res setObject:@"" forKey:@"type"];
	%log(res);
	return res;
}

-(NSString*) method
{
	NSString* res = %orig;
	%log(res);
	return res;
}


%end

