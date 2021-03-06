/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSPointerArray, VKSession, Index, NSDictionary, NSObject, NSDate;
@protocol ModelRenderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Model : XXUnknownSuperclass {
	NSObject<OS_dispatch_queue>* queue;
	BOOL _loading;
	id<ModelRenderDelegate> _renderDelegate;
	VKSession* _session;
	NSPointerArray* _observers;
	Index* _index;
	NSDate* _lastUpdateDate;
	NSDictionary* _eventsDispatch;
}
@property(readonly, assign, nonatomic) BOOL loading;
@property(retain) Index* index;
@property(readonly, retain, nonatomic) NSPointerArray* observers;
@property(readonly, retain, nonatomic) VKSession* session;
@property(assign) id<ModelRenderDelegate> renderDelegate;
@property(retain, nonatomic) NSDate* lastUpdateDate;
@property(retain, nonatomic) NSDictionary* eventsDispatch;
+(void)updateBuilder:(id)builder enumerateIdentity:(id)identity withBlock:(id)block;
+(void)updateBuilder:(id)builder enumerateIdentityWithBlock:(id)block;
+(void)updateBuilder:(id)builder enumerateObjectsOfClass:(Class)aClass withBlock:(id)block;
+(void)updateBuilder:(id)builder enumerateObjectsWithBlock:(id)block;
+(id)with:(id)with;
-(void)performBlock:(id)block;
-(void)invalidateRenderedIndex;
-(id)componentRenderContextForObject:(id)object context:(id)context;
-(id)componentForObject:(id)object withContext:(id)context;
-(id)renderObject:(id)object withContext:(id)context;
-(id)renderedObject:(id)object withContext:(id)context;
-(id)renderObject:(id)object;
-(id)renderObject:(id)object withComponent:(id)component context:(id)context;
-(id)renderObject:(id)object withComponent:(id)component;
-(id)prerenderContext;
-(id)defaultPrerenderContext;
-(Class)renderContextClass;
-(void)appear;
-(void)activate;
-(void)touch;
-(void)reset;
-(BOOL)requireViewed;
-(void)viewed:(id)viewed;
-(void)discovered:(id)discovered;
-(void)storeLastUpdate;
-(void)changeIndex:(id)index withUpdate:(id)update;
-(void)enqueue:(id)enqueue;
-(void)changeLoading:(BOOL)loading;
-(void)notifyUpdated:(id)updated;
-(void)notify:(SEL)notify o1:(id)a1 o2:(id)a2;
-(void)notify:(SEL)notify object:(id)object;
-(void)notify:(SEL)notify;
-(void)removeModelObserver:(id)observer;
-(void)addModelObserver:(id)observer;
-(void)dealloc;
-(BOOL)isSameModel:(id)model;
-(void)dispatchDomainEvent:(id)event;
-(BOOL)isForegroundModelForEventContext:(id)eventContext;
-(id)initWithSession:(id)session;
-(void)registerForEvents:(id)events;
-(id)editingActionForIndex:(id)index withIndexPath:(id)indexPath;
-(int)editingStyleForForTable:(id)table index:(id)index indexPath:(id)path;
@end

