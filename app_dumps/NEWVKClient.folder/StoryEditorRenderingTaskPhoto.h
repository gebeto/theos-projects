/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoryEditorRenderingTask.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface StoryEditorRenderingTaskPhoto : XXUnknownSuperclass <StoryEditorRenderingTask> {
	NSURL* _resultURL;
	NSString* _localIdentifier;
}
@property(readonly, copy, nonatomic) NSString* localIdentifier;
@property(readonly, assign, nonatomic) NSURL* resultURL;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)saveToCameraRollOnCompletion;
-(void)onRenderingCompletion:(id)completion;
-(void)cancel;
-(void)startRendering;
-(id)initWithPhoto:(id)photo;
@end

