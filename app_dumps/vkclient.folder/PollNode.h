/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5Node.h"

@class TextStyle, TextComponent, NSArray;

__attribute__((visibility("hidden")))
@interface PollNode : Component5Node {
	NSArray* _answerComponents;
	TextComponent* _descriptionComponent;
	TextStyle* _descriptionTextStyle;
}
@property(retain, nonatomic) TextStyle* descriptionTextStyle;
@property(retain, nonatomic) TextComponent* descriptionComponent;
@property(retain, nonatomic) NSArray* answerComponents;
-(void).cxx_destruct;
@end

