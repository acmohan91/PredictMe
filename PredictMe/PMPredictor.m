//
//  PMPredictor.m
//  PredictMe
//
//  Created by AC on 22/11/13.
//  Copyright (c) 2013 Mohan. All rights reserved.
//

#import "PMPredictor.h"

@implementation PMPredictor

-(NSArray *)predictions {
    if (_predictions == nil) {
        _predictions=[[NSArray alloc] initWithObjects:@"It is Certain",@"It is decidely so",@"All signs say YES",@"My Reply is NO",@"The outcome is doubtful",@"Unable to answer NOW",@"Concentrate and ask again", nil];
    }
    return _predictions;
}

-(NSString *) randomPrediction{
    
    int random=arc4random_uniform(self.predictions.count);
    
    return [self.predictions objectAtIndex:random];
}

@end
