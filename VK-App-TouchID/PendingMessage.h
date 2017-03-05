@interface PendingMessage

+(id)messageWithBody:(id)body sendeer:(id)sendeer attachments:(id)attachments;
+(void)initialize;
-(void)updateAttachments;
-(void)dealloc;
-(id)init;

@end