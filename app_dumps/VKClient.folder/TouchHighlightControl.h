/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TouchHighlightControl : XXUnknownSuperclass {
	BOOL _animated;
}
@property(assign, nonatomic) BOOL animated;
-(void)rebuildAccessibility;
-(void)layoutSubviews;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)updateHighlight;
-(void)updateHighlight:(BOOL)highlight animated:(BOOL)animated;
-(id)initWithFrame:(CGRect)frame;
@end

