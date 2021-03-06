//
//  PKAppDelegate.h
//  PowerKey
//
//  Created by Peter Kamb on 4/23/13.
//  Copyright (c) 2013 Peter Kamb. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "PKPreferencesController.h"

NSString *const kPowerKeyReplacementKeycodeKey;
NSString *const kPowerKeyShouldShowPreferencesWindowWhenLaunchedKey;
NSString *const kPowerKeyScriptURLKey;

@interface PKAppDelegate : NSObject <NSApplicationDelegate>

@property (nonatomic, retain) PKPreferencesController *preferences;

- (void)applicationDidFinishLaunching:(NSNotification *)aNotification;
- (BOOL)applicationShouldHandleReopen:(NSApplication *)theApplication hasVisibleWindows:(BOOL)flag;

@end