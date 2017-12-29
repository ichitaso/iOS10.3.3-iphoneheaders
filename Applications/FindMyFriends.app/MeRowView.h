/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@class UIView, NSLayoutConstraint, UILabel, BackdropView, CNAvatarView, NSString;

@interface MeRowView : UIControl <CNAvatarViewDelegate> {

	char _tapped;
	UIView* _avatarView;
	NSLayoutConstraint* _lineHeightConstraint;
	UILabel* _friendNameLabel;
	UILabel* _locationLabel;
	BackdropView* _backdrop;
	CNAvatarView* _contactAvatarView;

}

@property (nonatomic,retain) NSLayoutConstraint * lineHeightConstraint;              //@synthesize lineHeightConstraint=_lineHeightConstraint - In the implementation block
@property (nonatomic,retain) UILabel * friendNameLabel;                              //@synthesize friendNameLabel=_friendNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                //@synthesize locationLabel=_locationLabel - In the implementation block
@property (assign,nonatomic) char tapped;                                            //@synthesize tapped=_tapped - In the implementation block
@property (nonatomic,retain) BackdropView * backdrop;                                //@synthesize backdrop=_backdrop - In the implementation block
@property (nonatomic,retain) CNAvatarView * contactAvatarView;                       //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                    //@synthesize avatarView=_avatarView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)friendNameLabel;
-(void)setFriendNameLabel:(UILabel *)arg1 ;
-(void)updateMeImage;
-(NSLayoutConstraint *)lineHeightConstraint;
-(void)setLineHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(char)arg1 ;
-(void)update;
-(BackdropView *)backdrop;
-(void)setBackdrop:(BackdropView *)arg1 ;
-(void)setTapped:(char)arg1 ;
-(char)tapped;
-(void)longPressed:(id)arg1 ;
-(UIView *)avatarView;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(char)shouldShowActionsForAvatarView:(id)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(void)setAvatarView:(UIView *)arg1 ;
-(CNAvatarView *)contactAvatarView;
-(void)setContactAvatarView:(CNAvatarView *)arg1 ;
@end
