
%hook APICurrentUser
-(id) mediumMemberAt {
	return @1;
}
%end

%hook APICurrentUserBuilder
-(id) mediumMemberAt {
	return @1;
}
%end

%hook APIUser
-(id) mediumMemberAt {
	return @1;
}
%end
%hook APIUserBuilder

-(id) mediumMemberAt {
	return @1;
}
%end


%hook APIIJDataUser
-(id) mediumMemberAt {
	return @1;
}
%end
%hook APIIJDataUserBuilder
-(id) mediumMemberAt {
	return @1;
}
%end