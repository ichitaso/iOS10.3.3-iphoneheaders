/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UIWebFindOnPageHighlighterDelegate.h>

@protocol NotesFindViewControllerDelegate;
@class NotesFindOnPageHighlighter, NSString;

@interface NotesFindViewController : UIViewController <UISearchBarDelegate, UIWebFindOnPageHighlighterDelegate> {

	id<NotesFindViewControllerDelegate> _findDelegate;
	NotesFindOnPageHighlighter* _highlighter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nextPreviousControlValueChanged:(id)arg1 ;
-(char)hasActiveHighlights;
-(id)initWithContentLayer:(id)arg1 ;
-(void)stopFind:(char)arg1 animated:(char)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)keyboardDidHide;
-(void)findOnPageHighlighterDidHighlightMatch:(id)arg1 ;
-(void)doneButtonTapped;
-(void)updateUI;
-(void)setSearchTerm:(id)arg1 ;
-(void)resetSearch;
@end

