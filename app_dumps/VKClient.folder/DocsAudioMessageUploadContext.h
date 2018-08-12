/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DocsUploadContext.h"

@class VKAudioMessage, NSData;

__attribute__((visibility("hidden")))
@interface DocsAudioMessageUploadContext : DocsUploadContext {
	VKAudioMessage* _representationByLocalAudioMessage;
	NSData* _recordData;
}
@property(retain, nonatomic) VKAudioMessage* representationByLocalAudioMessage;
@property(retain, nonatomic) NSData* recordData;
+(id)docsAudioMessageContextWithSession:(id)session opusRecord:(id)record;
-(void).cxx_destruct;
-(BOOL)handleResultServerData:(id)data uploadData:(id)data2 saveData:(id)data3;
-(void)loadUploadData:(id)data;
-(id)requestForUploadServer;
@end

