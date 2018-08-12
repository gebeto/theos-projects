

// %hook PackageListController

// -(id)initWithDatabase:(id)database title:(id)title
// {
// 	id res = %orig;
// 	%log(res);
// 	%log(database);
// 	%log(title);
// 	return res;
// }

// %end




%hook SearchController

-(id)initWithDatabase:(id)database query:(id)query
{
	id res = %orig(database, @"VK");
	%log(res);
	%log(database);
	%log(query);
	return res;	
}

-(void)didSelectPackage:(id)package
{
	%log(package);
	%orig;
}

%end