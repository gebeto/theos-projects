/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Renderer.h"

@class VKAPIAppRequest;

__attribute__((visibility("hidden")))
@interface AppRequestRenderer : Renderer {
}
@property(retain, nonatomic) VKAPIAppRequest* domain;
+(void)buildExtra:(id)extra;
+(void)build:(id)build;
+(BOOL)shouldAddSpaceBetweenFirstLineAndSecondLine;
+(unsigned)buttonPriorityForButtonPlace:(unsigned)buttonPlace;
+(void)prepareLayout:(id)layout;
+(id)rendererElements;
-(void)actionMainPhoto:(id)photo;
-(void)setupCell:(id)cell;
-(id)appID;
-(int)requestType;
-(void)actionHide:(id)hide;
-(void)actionPlay:(id)play;
@end

