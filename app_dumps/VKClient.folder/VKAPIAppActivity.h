/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"
#import "NSObject.h"
#import "VKAPIAppActivity.h"

@class VKAPIApp, NSNumber, VKUser, VKAPIAppActivity, NSDictionary, NSString;

@protocol VKAPIAppActivity <NSObject>
@property(readonly, retain, nonatomic) VKAPIAppActivity* domain;
@end

__attribute__((visibility("hidden")))
@interface VKAPIAppActivity : VKDomain <VKAPIAppActivity> {
	BOOL _allowSelection;
	NSNumber* _app_id;
	NSNumber* _user_id;
	int _type;
	NSDictionary* _data;
	NSString* _text_format;
	NSDictionary* _text_parameters;
	unsigned _date;
	VKAPIApp* _app;
	VKUser* _user;
}
@property(readonly, retain, nonatomic) VKAPIAppActivity* domain;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL allowSelection;
@property(retain, nonatomic) VKUser* user;
@property(retain, nonatomic) VKAPIApp* app;
@property(assign, nonatomic) unsigned date;
@property(retain, nonatomic) NSDictionary* text_parameters;
@property(retain, nonatomic) NSString* text_format;
@property(retain, nonatomic) NSDictionary* data;
@property(assign, nonatomic) int type;
@property(retain, nonatomic) NSNumber* user_id;
@property(retain, nonatomic) NSNumber* app_id;
+(void)initialize;
-(void).cxx_destruct;
-(Class)rendererClass;
-(BOOL)process:(id)process context:(id)context;
@end

