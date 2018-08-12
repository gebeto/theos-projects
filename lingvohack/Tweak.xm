%hook RMStoreUserDefaultsPersistence
-(BOOL)isOurchasedProtuctOfIdentifier:(id)arg1
{
	return TRUE;
}
%end

%hook CSettingsData
-(BOOL)isDictionaryPurchased:(id)arg1
{
	return TRUE;
}
%end

%hook CPurchaseInfo
-(BOOL)isItemPurchased:(id)arg1
{
	return TRUE;
}
%end

%hook CContentManager
-(BOOL)isItemPurchased:(id)arg1
{
	return TRUE;
}

-(BOOL)hasPaidPurchasedDictionaries
{
	return TRUE;
}
%end