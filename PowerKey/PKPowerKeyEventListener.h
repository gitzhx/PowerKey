//
//  PKPowerKeyEventListener.h
//  PowerKey
//
//  Created by Peter Kamb on 8/15/13.
//  Copyright (c) 2013 Peter Kamb. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PKPowerKeyEventListener : NSObject

@property (assign) CGKeyCode powerKeyReplacementKeyCode;
@property (nonatomic, retain) NSURL *scriptURL;

+ (PKPowerKeyEventListener *)sharedEventListener;
- (void)monitorPowerKey;

CGEventRef copyEventTapCallBack(CGEventTapProxy proxy, CGEventType type, CGEventRef event, void *refcon);

- (CGEventRef)newPowerKeyEventOrUnmodifiedSystemDefinedEvent:(CGEventRef)systemEvent;
- (CGEventRef)newPowerKeyReplacementEvent;

- (void)runScript;

- (BOOL)isValidScriptWithURL:(NSURL *)url;
- (void)runScriptWithURL:(NSURL *)url;

- (BOOL)isValidAppleScriptWithURL:(NSURL *)url;
- (void)runAppleScriptWithURL:(NSURL *)url;

@end
