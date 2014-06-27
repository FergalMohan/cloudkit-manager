//
//  SPRMessageViewController.h
//  Simple CloudKit Messenger Sample
//
//  Created by Jen Dron on 6/27/14.
//  Copyright (c) 2014 Sprynthesis. All rights reserved.
//

#import <UIKit/UIKit.h>
@import CloudKit;

@interface SPRMessageViewController : UIViewController
@property (nonatomic, strong) CKRecord *messageRecord;
@end
