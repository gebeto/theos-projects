

%hook AuthToken

-(id)initWithUserID:(id)userID token:(id)token 
{
	// token = @"d1baac10c67f0258d76118233613d703c92e45f83101170941f7aa2abcaf7cb29478129d4195c2d391137";
	// userID = @1;
	id res = %orig(userID, token);
	%log(res);
	%log(userID);
	%log(token);
	return res;
}

+(id)authTokenWithUserID:(id)userID token:(id)token
{
	// token = @"d1baac10c67f0258d76118233613d703c92e45f83101170941f7aa2abcaf7cb29478129d4195c2d391137";
	// userID = @1;
	id res = %orig(userID, token);
	%log(res);
	%log(userID);
	%log(token);
	return res;	
}

%new
-(NSNumber*)userID
{
	return @1;
}

%end

