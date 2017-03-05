/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class VKPostSettings, NSArray;

@interface VKShareSettingsController : XXUnknownSuperclass {
	VKPostSettings* _currentSettings;
	NSArray* _rows;
}
@property(retain, nonatomic) NSArray* rows;
@property(retain, nonatomic) VKPostSettings* currentSettings;
-(void).cxx_destruct;
-(void)switchChanged:(id)changed;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidLoad;
-(id)initWithPostSettings:(id)postSettings;
@end
