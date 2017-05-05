




%hook IGFeedPhotoView

-(void) onTap:(id)arg
{
	%log(arg);
}

-(void) onDoubleTap:(id)arg
{
	%log(arg);
}

-(id)imageURL
{
	id res = %orig;
	%log(res);
	return res;
}

%end