/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Component5.h"
#import "VKClient-Structs.h"


__attribute__((visibility("hidden")))
@interface FutureComponentContext : Component5 {
	Component5* _component;
	id _block;
}
@property(copy, nonatomic) id block;
@property(retain, nonatomic) Component5* component;
+(id)component:(id)component block:(id)block;
-(void).cxx_destruct;
-(BOOL)isUtility;
-(id)nodeForState:(id)state context:(id)context;
@end

