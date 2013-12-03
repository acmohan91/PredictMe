//
//  PMPredictor.h
//  PredictMe
//
//  Created by AC on 22/11/13.
//  Copyright (c) 2013 Mohan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PMPredictor : NSObject {
    NSArray *_predictions;
}

@property (nonatomic,strong,readonly) NSArray *predictions;
-(NSString *) randomPrediction;

@end
