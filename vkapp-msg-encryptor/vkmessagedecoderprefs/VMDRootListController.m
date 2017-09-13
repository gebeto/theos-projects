#include "VMDRootListController.h"

@implementation VMDRootListController

- (NSArray *)specifiers {
	if (!_specifiers) {
		_specifiers = [[self loadSpecifiersFromPlistName:@"Root" target:self] retain];
	}

	return _specifiers;
}

- (void)change
{
	NSLog(@"Kill VK");
	system("killall vkclient");
}

@end
