/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"
#import "NSMutableCopying.h"

@class Dimensions, Colors, TextStyle, Drawables, Resources;

__attribute__((visibility("hidden")))
@interface StyleSheet : XXUnknownSuperclass <NSCopying, NSMutableCopying> {
	Colors* _colors;
	Dimensions* _dimensions;
	Resources* _resources;
	Drawables* _drawables;
	TextStyle* _headingTextStyle;
	TextStyle* _heavyHeadingTextStyle;
	TextStyle* _heavyDescriptionTextStyle;
	TextStyle* _regularTextStyle;
	TextStyle* _descriptionTextStyle;
	TextStyle* _profileNameTextStyle;
	TextStyle* _recommendationsTitleTextStyle;
	TextStyle* _linkTextStyle;
	TextStyle* _mentionTextStyle;
	TextStyle* _snippetButtonTitleTextStyle;
	TextStyle* _primaryButtonTitleTextStyle;
	TextStyle* _secondaryButtonTitleTextStyle;
	TextStyle* _cellButtonTitleTextStyle;
	TextStyle* _chatMessageTextStyle;
	TextStyle* _teaserTitleTextStyle;
	TextStyle* _teaserSubtitleTextStyle;
}
@property(retain, nonatomic) Drawables* drawables;
@property(retain, nonatomic) Resources* resources;
@property(retain, nonatomic) Dimensions* dimensions;
@property(retain, nonatomic) Colors* colors;
@property(retain, nonatomic) TextStyle* teaserSubtitleTextStyle;
@property(retain, nonatomic) TextStyle* teaserTitleTextStyle;
@property(retain, nonatomic) TextStyle* chatMessageTextStyle;
@property(retain, nonatomic) TextStyle* cellButtonTitleTextStyle;
@property(retain, nonatomic) TextStyle* secondaryButtonTitleTextStyle;
@property(retain, nonatomic) TextStyle* primaryButtonTitleTextStyle;
@property(retain, nonatomic) TextStyle* snippetButtonTitleTextStyle;
@property(retain, nonatomic) TextStyle* mentionTextStyle;
@property(retain, nonatomic) TextStyle* linkTextStyle;
@property(retain, nonatomic) TextStyle* recommendationsTitleTextStyle;
@property(retain, nonatomic) TextStyle* profileNameTextStyle;
@property(retain, nonatomic) TextStyle* descriptionTextStyle;
@property(retain, nonatomic) TextStyle* regularTextStyle;
@property(retain, nonatomic) TextStyle* heavyDescriptionTextStyle;
@property(retain, nonatomic) TextStyle* heavyHeadingTextStyle;
@property(retain, nonatomic) TextStyle* headingTextStyle;
+(id)defaultResources;
+(id)darkStyleSheet;
+(id)defaultStyleSheet;
-(void).cxx_destruct;
-(id)mutableCopyWithZone:(NSZone*)zone;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithStyleSheet:(id)styleSheet;
@end

