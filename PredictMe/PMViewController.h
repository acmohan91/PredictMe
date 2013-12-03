//
//  PMViewController.h
//  PredictMe
//
//  Created by AC on 22/11/13.
//  Copyright (c) 2013 Mohan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PMPredictor;

@interface PMViewController : UIViewController 

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) PMPredictor *predictor;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;


@end
