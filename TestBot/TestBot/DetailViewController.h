//
//  DetailViewController.h
//  TestBot
//
//  Created by mobileappci on 1/15/14.
//  Copyright (c) 2014 mobileappci. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
