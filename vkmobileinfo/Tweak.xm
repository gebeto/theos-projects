

%hook VKSettings

-(NSString*) MSISDN {
	NSString* res = %orig;
	%log(res);
	return @"9771733706";
}

-(NSString*) passcode {
	NSString* res = %orig;
	// %log(res);
	return res;
}

-(NSString*) password {
	NSString* res = %orig;
	// %log(res);
	return res;
}

-(BOOL) firstLaunch {
	return false;
}

%end


%hook FIRNetwork

-(BOOL) isDebugModeEnabled {
	BOOL res = %orig;
	%log(res ? @"TRUE" : @"FALSE");
	return true;
}

-(BOOL) networkConnected {
	BOOL res = %orig;
	%log(res ? @"TRUE" : @"FALSE");
	return false;
}

%end


%hook MFAppCenter 


-(id)MSISDNFromNetworkData:(id)networkData {
	id res = %orig;
	%log(res);
	return res;
}
-(id)XNokiaMSISDNPhoneNumberFromNetworkData:(id)networkData {
	id res = %orig;
	%log(res);
	return res;
}


%end