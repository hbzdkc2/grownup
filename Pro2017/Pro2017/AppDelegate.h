//
//  AppDelegate.h
//  Pro2017
//
//  Created by hbzdkc on 2017/1/7.
//  Copyright © 2017年 hbzdkc2017. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

