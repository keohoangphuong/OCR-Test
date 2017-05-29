//
//  AppDelegate.h
//  OCR-Test
//
//  Created by Keo Hoang Phuong on 5/25/17.
//  Copyright © 2017 Keo Hoang Phuong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

