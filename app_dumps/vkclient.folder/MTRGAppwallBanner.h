/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MTRGBanner.h"

@class UIColor, NSNumber, MTRGImageData, NSString;

@interface MTRGAppwallBanner : MTRGBanner {
	BOOL _hasNotification;
	BOOL _itemHighlight;
	BOOL _subitem;
	BOOL _main;
	BOOL _requireCategoryHighlight;
	BOOL _banner;
	BOOL _requireWifi;
	NSString* _status;
	NSString* _mrgsId;
	NSString* _title;
	NSString* _descriptionText;
	NSString* _paidType;
	NSNumber* _rating;
	UIColor* _coinsBgColor;
	UIColor* _coinsTextColor;
	MTRGImageData* _icon;
	MTRGImageData* _statusImage;
	MTRGImageData* _bubbleIcon;
	MTRGImageData* _gotoAppIcon;
	MTRGImageData* _coinsIcon;
	MTRGImageData* _crossNotifIcon;
	MTRGImageData* _itemHighlightIcon;
	unsigned _votes;
	unsigned _coins;
}
@property(assign, nonatomic) unsigned coins;
@property(assign, nonatomic) unsigned votes;
@property(assign, nonatomic) BOOL requireWifi;
@property(assign, nonatomic) BOOL banner;
@property(assign, nonatomic) BOOL requireCategoryHighlight;
@property(assign, nonatomic) BOOL main;
@property(assign, nonatomic) BOOL subitem;
@property(assign, nonatomic) BOOL itemHighlight;
@property(assign, nonatomic) BOOL hasNotification;
@property(retain, nonatomic) MTRGImageData* itemHighlightIcon;
@property(retain, nonatomic) MTRGImageData* crossNotifIcon;
@property(retain, nonatomic) MTRGImageData* coinsIcon;
@property(retain, nonatomic) MTRGImageData* gotoAppIcon;
@property(retain, nonatomic) MTRGImageData* bubbleIcon;
@property(retain, nonatomic) MTRGImageData* statusImage;
@property(retain, nonatomic) MTRGImageData* icon;
@property(retain, nonatomic) UIColor* coinsTextColor;
@property(retain, nonatomic) UIColor* coinsBgColor;
@property(retain, nonatomic) NSNumber* rating;
@property(copy, nonatomic) NSString* paidType;
@property(copy, nonatomic) NSString* descriptionText;
@property(copy, nonatomic) NSString* title;
@property(copy, nonatomic) NSString* mrgsId;
@property(copy, nonatomic) NSString* status;
-(void).cxx_destruct;
@end

