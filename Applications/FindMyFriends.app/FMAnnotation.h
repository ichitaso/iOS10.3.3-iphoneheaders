/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FMAccuracyOverlay, UIColor, UIImage, NSString;


@protocol FMAnnotation <NSObject>
@property (nonatomic,retain) FMAccuracyOverlay * overlay; 
@property (assign,nonatomic) double horizontalAccuracy; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (assign,nonatomic) double distanceFromUser; 
@property (assign,nonatomic) char isBorderEnabled; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIImage * largeAnnotationIcon; 
@property (nonatomic,retain) UIImage * smallAnnotationIcon; 
@property (nonatomic,retain) UIImage * largeOverlayIcon; 
@property (nonatomic,retain) UIImage * smallOverlayIcon; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1;

@required
-(UIColor *)tintColor;
-(void)setTintColor:(id)arg1;
-(FMAccuracyOverlay *)overlay;
-(void)setHorizontalAccuracy:(double)arg1;
-(char)hasKnownLocation;
-(CLLocationCoordinate2D)coordinate;
-(double)horizontalAccuracy;
-(void)setOverlay:(id)arg1;
-(char)isThisDevice;
-(double)distanceFromUser;
-(void)setDistanceFromUser:(double)arg1;
-(char)isBorderEnabled;
-(UIImage *)largeAnnotationIcon;
-(UIImage *)smallAnnotationIcon;
-(UIImage *)largeOverlayIcon;
-(void)setLargeOverlayIcon:(id)arg1;
-(UIImage *)smallOverlayIcon;
-(void)setSmallOverlayIcon:(id)arg1;
-(void)setIsBorderEnabled:(char)arg1;
-(void)setSmallAnnotationIcon:(id)arg1;
-(void)setLargeAnnotationIcon:(id)arg1;

@end

