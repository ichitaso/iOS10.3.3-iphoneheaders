/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/PHContactTableViewCell.h>
#import <FaceTime/PHFrecentCellProtocol.h>

@protocol PHFrecentCellDelegate;
@class UIDateLabel, UILabel, NSString;

@interface FTRecentsTableViewCell : PHContactTableViewCell <PHFrecentCellProtocol> {

	UIDateLabel* _dateLabel;
	id<PHFrecentCellDelegate> _delegate;
	UILabel* _enDashLabel;

}

@property (assign,nonatomic) id<PHFrecentCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * enDashLabel;                           //@synthesize enDashLabel=_enDashLabel - In the implementation block
@property (nonatomic,readonly) UIDateLabel * dateLabel;                       //@synthesize dateLabel=_dateLabel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)prepareSubviewsForFilter:(id)arg1 ;
-(void)loadContentViewConstraints;
-(UILabel *)enDashLabel;
-(void)setEnDashLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<PHFrecentCellDelegate>)arg1 ;
-(id<PHFrecentCellDelegate>)delegate;
-(UIDateLabel *)dateLabel;
-(void)updateFonts;
-(void)loadContentView;
@end

