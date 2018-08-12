

%hook VKGroupProfile

-(BOOL)process:(id)process context:(id)context
{
	BOOL res = %orig;
	%log(process);
	%log(context);
	return res;
}

%end


%hook GroupModal

+(id)requestForGroupID:(id)groupID withExtraFields:(BOOL)extraFields withMarketProducts:(BOOL)marketProducts
{
	id res = %orig;
	%log(res);
	return res;
}

%end