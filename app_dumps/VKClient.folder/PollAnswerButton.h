/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKClient-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSNumberFormatter, UILabel, UIView, UIImageView;

__attribute__((visibility("hidden")))
@interface PollAnswerButton : XXUnknownSuperclass {
	BOOL _pollHasAnswer;
	BOOL _currentAnswer;
	unsigned _votes;
	unsigned _totalVotes;
	unsigned _maxVotes;
	UIView* _progressView;
	UILabel* _percentLabel;
	UILabel* _titleLabel;
	UIImageView* _checkmarkImageView;
	NSNumberFormatter* _percentFormatter;
}
@property(assign, nonatomic, getter=isCurrentAnswer) BOOL currentAnswer;
@property(assign, nonatomic) BOOL pollHasAnswer;
@property(assign, nonatomic) unsigned maxVotes;
@property(assign, nonatomic) unsigned totalVotes;
@property(assign, nonatomic) unsigned votes;
@property(retain, nonatomic) NSNumberFormatter* percentFormatter;
@property(retain, nonatomic) UIImageView* checkmarkImageView;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UILabel* percentLabel;
@property(retain, nonatomic) UIView* progressView;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
