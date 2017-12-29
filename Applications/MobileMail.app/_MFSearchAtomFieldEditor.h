/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/_MFAtomFieldEditor.h>

@class _MFSearchAtomTextView, MFAtomSearchBar;

@interface _MFSearchAtomFieldEditor : _MFAtomFieldEditor {

	struct {
		unsigned animatePlaceholderOnResignFirstResponder : 1;
		unsigned deferringFirstResponder : 1;
		unsigned preventSelectionViewActivation : 1;
	}  _flags;

}

@property (getter=_hostView,nonatomic,retain,readonly) _MFSearchAtomTextView * hostView; 
@property (getter=_searchBar,nonatomic,retain,readonly) MFAtomSearchBar * searchBar; 
@property (nonatomic,readonly) char deferringFirstResponder; 
@property (assign,nonatomic) char preventSelectionViewActivation; 
-(id)_searchBar;
-(void)setPreventSelectionViewActivation:(char)arg1 ;
-(char)deferringFirstResponder;
-(id)_hostView;
-(char)preventSelectionViewActivation;
-(char)resignFirstResponder;
-(char)canBecomeFirstResponder;
-(float)_baselineOffsetFromBottom;
-(float)_firstBaselineOffsetFromTop;
-(void)_becomeFirstResponder;
-(char)canResignFirstResponder;
-(id)initWithFrame:(CGRect)arg1 textContainer:(id)arg2 ;
@end

