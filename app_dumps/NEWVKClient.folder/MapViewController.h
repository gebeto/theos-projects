/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MKMapViewDelegate.h"
#import "VKClient-Structs.h"
#import "VKMController.h"

@class UIBarButtonItem, SimpleMapAnnotation, NSString, MKMapView, CLLocationManager, UIToolbar;

__attribute__((visibility("hidden")))
@interface MapViewController : VKMController <MKMapViewDelegate> {
	BOOL overriden;
	int supportedMaps;
	int mode;
	int state;
	BOOL init;
	CLLocationCoordinate2D initLocation;
	int _thumbSize;
	CLLocationManager* _locationManager;
	MKMapView* _map;
	UIToolbar* _toolbar;
	SimpleMapAnnotation* _annotation;
	UIBarButtonItem* _buttonLocate;
	id _handler;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id handler;
@property(retain, nonatomic) UIBarButtonItem* buttonLocate;
@property(retain, nonatomic) SimpleMapAnnotation* annotation;
@property(retain, nonatomic) UIToolbar* toolbar;
@property(retain, nonatomic) MKMapView* map;
@property(retain, nonatomic) CLLocationManager* locationManager;
+(id)mapViewForSelectionWithThumbSize:(int)thumbSize handler:(id)handler;
+(id)mapViewForCoordinateString:(id)coordinateString;
+(id)mapViewForCoordinate:(CLLocationCoordinate2D)coordinate;
-(void).cxx_destruct;
-(void)mapView:(id)view annotationView:(id)view2 didChangeDragState:(unsigned)state fromOldState:(unsigned)oldState;
-(id)mapView:(id)view viewForAnnotation:(id)annotation;
-(void)mapView:(id)view didUpdateUserLocation:(id)location;
-(void)cancel:(id)cancel;
-(void)done:(id)done;
-(void)selectInitialAnnotation;
-(void)actionGesture:(id)gesture;
-(void)actionLocate:(id)locate;
-(void)actionAction:(id)action;
-(void)viewWillAppear:(BOOL)view;
-(void)setLocation:(CLLocationCoordinate2D)location;
-(void)focus;
-(void)viewDidLoad;
-(void)loadView;
-(void)refreshDone;
-(void)change:(id)change;
-(void)dealloc;
@end

