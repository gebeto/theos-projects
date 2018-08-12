/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface VKAPI : XXUnknownSuperclass {
}
+(id)requestForSearchMessages:(id)searchMessages offset:(int)offset count:(int)count owner:(id)owner success:(id)success failure:(id)failure;
+(id)requestForSearchDialogs:(id)searchDialogs success:(id)success failure:(id)failure;
+(id)requestForTypingInDialog:(id)dialog success:(id)success failure:(id)failure;
+(id)requestForUploadToServer:(id)server data:(id)data fieldName:(id)name fileName:(id)name4 additionalParameters:(id)parameters;
+(id)requestForUploadToServer:(id)server data:(id)data fieldName:(id)name fileName:(id)name4;
+(id)requestForMessagesWithMID:(id)mid success:(id)success failure:(id)failure;
+(id)requestForMessagesInDialog:(id)dialog offset:(int)offset count:(int)count startMID:(int)mid success:(id)success failure:(id)failure;
+(id)requestForChatWithDialogId:(id)dialogId success:(id)success failure:(id)failure;
+(id)requestForHistoryWithDid:(id)requestForHistoryWith count:(int)count offset:(int)offset startMID:(int)mid;
+(id)addDialogId:(id)anId toParameters:(id)parameters;
+(id)requestForDialogsExtWithOffset:(int)offset count:(int)count startMID:(int)mid success:(id)success failure:(id)failure;
+(id)requestForOwners:(id)owners success:(id)success failure:(id)failure;
+(id)requiredFieldsForMessages;
+(id)requiredGroupFields;
+(id)didFromLPS:(id)lps;
+(BOOL)isSingleUserLPS:(id)lps;
+(id)pointCoordinatesFromGeoData:(id)geoData;
+(id)validMultiDialogData:(id)data;
+(id)validMessageData:(id)data;
+(id)validDialogData:(id)data;
+(id)validGroupData:(id)data;
+(id)validUserData:(id)data;
+(id)midFromMessageData:(id)messageData;
+(BOOL)isRead:(id)read;
+(id)expectOKSuccess:(id)success failure:(id)failure;
+(BOOL)is1Response:(id)response;
+(id)expectDictionarySuccess:(id)success failure:(id)failure;
+(id)expectArrayWithCountSuccess:(id)countSuccess failure:(id)failure;
+(id)expectArraySuccess:(id)success failure:(id)failure;
+(void)setUpAPIRequest:(id)request caching:(BOOL)caching;
+(id)authURL;
+(id)apiURL;
+(void)setup;
@end

