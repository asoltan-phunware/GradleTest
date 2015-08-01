//
//  DetailViewController.h
//  GradleTest
//
//  Created by Andrew Soltan on 8/1/15.
//  Copyright (c) 2015 Andrew Soltan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

