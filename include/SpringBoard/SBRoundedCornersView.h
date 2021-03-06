/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class SBWallpaperClipView, UIView;

@interface SBRoundedCornersView : SBUnknownSuperclass {
	float _cornerRadius;	// 48 = 0x30
	UIView *_contentView;	// 52 = 0x34
	SBWallpaperClipView *_topLeftCorner;	// 56 = 0x38
	SBWallpaperClipView *_topRightCorner;	// 60 = 0x3c
	SBWallpaperClipView *_bottomLeftCorner;	// 64 = 0x40
	SBWallpaperClipView *_bottomRightCorner;	// 68 = 0x44
}
- (id)initWithFrame:(CGRect)frame cornerRadius:(float)radius content:(id)content wallpaperView:(id)view;	// 0xe6191
- (void)updateWallpaperOffsets;	// 0xe81a9
- (void)setFrame:(CGRect)frame;	// 0xe7fe1
- (void)dealloc;	// 0xe7f45
@end
