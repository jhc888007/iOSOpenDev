/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */




@protocol SBUIUserAgent <NSObject>
- (void)updateInterfaceOrientationIfNecessary;
- (int)activeInterfaceOrientation;
- (id)foregroundApplicationDisplayID;
- (id)foregroundDisplayID;
- (id)topSuspendedEventsOnlyDisplayID;
- (BOOL)deviceIsLocked;
- (BOOL)lockScreenIsShowing;
- (int)networkUsageTypeForAppWithDisplayID:(id)displayID;
- (BOOL)homeScreenIsDisplayingWallpaper;
- (id)createWallpaperView:(int)view;
- (BOOL)springBoardIsActive;
- (BOOL)canUserLaunchIcon;
- (BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
- (void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
- (BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
- (BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
- (BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
- (void)dimScreen:(BOOL)screen;
- (void)setIdleText:(id)text;
- (void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
- (void)playRingtoneAtPath:(id)path;
- (void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
- (void)stopRinging;
- (void)prepareToAnswerCall;
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
- (BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
- (id)modalBulletinAlertHandlerRegistry;
- (BOOL)isSBUILoggingEnabled;
@end

