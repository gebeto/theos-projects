#import <UIKit/UIKit.h>

UIPanGestureRecognizer* recognizer;
UIView* res;
UIView* box;

%hook VKSelector

-(UIView*) view
{
	res = %orig;

	recognizer = [[UIPanGestureRecognizer alloc] initWithTarget:self action:@selector(pan)];

	box = [[UIView alloc] initWithFrame:CGRectMake(20,20,100,100)];
	box.backgroundColor = [UIColor yellowColor];
	[box addGestureRecognizer:recognizer];

	[res addSubview:box];

	return res;
}

%new
-(void) pan 
{
	CGPoint point = [recognizer locationInView:res];
	box.center = point;
}

%end