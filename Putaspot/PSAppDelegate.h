//
//  PSAppDelegate.h
//  Putaspot
//
//  Created by Alexander Simson on 2012-06-06.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PSViewController;

@interface PSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) PSViewController *viewController;

@end
