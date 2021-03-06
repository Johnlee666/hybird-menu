//
//  LoginViewController.h
//  HybridMenu-iOS
//
//  Created by 李展 on 2017/5/30.
//  Copyright © 2017年 JohnLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginHandler.h"
@interface LoginViewController : UIViewController
@property LoginHandler *handler;
+ (void)noLoginWith:(UIViewController *)viewController
       successBlock:(SuccessBlock)successBlock
        failedBlock:(FailedBlock)failedBlock;
- (instancetype)initWithSuccessBlock:(SuccessBlock)successBlock failedBlock:(FailedBlock)failedBlock;
@end
