
%hook VKUtil

+(id)safeBrowserURL:(id)url ref:(id)ref token:(id)token
{
	return url;
}

+(id)safeBrowserURL:(id)url
{
	return url;
}

%end