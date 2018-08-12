/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, VKMController;

__attribute__((visibility("hidden")))
@interface Wizard : XXUnknownSuperclass {
	NSArray* _steps;
	VKMController* _currentStepViewController;
}
@property(readonly, assign, nonatomic) NSArray* steps;
@property(assign, nonatomic) __weak VKMController* currentStepViewController;
+(void)beginWithSteps:(id)steps navContext:(id)context animated:(BOOL)animated;
-(void).cxx_destruct;
-(void)bindViewController:(id)controller;
-(void)skip;
-(BOOL)isLastStep;
-(void)actionDone:(id)done;
-(void)actionNext:(id)next;
-(id)nextStepWizard;
-(id)initWithSteps:(id)steps;
-(id)currentStepInfo;
-(void)showWithContext:(id)context animated:(BOOL)animated;
-(void)continueWithContext:(id)context;
-(void)prepareViewControllerWithCompletion:(id)completion;
@end

