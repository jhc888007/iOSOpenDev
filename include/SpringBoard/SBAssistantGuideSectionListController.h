/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class NSMutableArray, UITableView, SBAssistantGuideDomainModel;

@interface SBAssistantGuideSectionListController : SBUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	UITableView *_tableView;	// 4 = 0x4
	SBAssistantGuideDomainModel *_currentDomain;	// 8 = 0x8
	NSMutableArray *_cells;	// 12 = 0xc
}
@property(retain, nonatomic) SBAssistantGuideDomainModel *currentDomain;	// G=0x19cc51; S=0x19d0cd; @synthesize=_currentDomain
@property(readonly, assign, nonatomic) UITableView *tableView;	// G=0x19cc41; @synthesize=_tableView
- (id)initWithView:(id)view;	// 0x19cc61
- (void)dealloc;	// 0x19d169
// declared property setter: - (void)setCurrentDomain:(id)domain;	// 0x19d0cd
- (void)_reloadCellsForCurrentDomain;	// 0x19ce35
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x19ce15
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x19cdd1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x19cd75
// declared property getter: - (id)tableView;	// 0x19cc41
// declared property getter: - (id)currentDomain;	// 0x19cc51
@end