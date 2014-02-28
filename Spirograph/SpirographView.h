//
//  SpirographView.h
//  Spirograph
//
//  Created by Ryan on 2/23/14.
//  Copyright (c) 2014 Michael Toth. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpirographView : UIView {
    UIView *overWriteView;
    CGFloat lastL,lastK;
}

@property (nonatomic) CGFloat l;
@property (nonatomic) CGFloat k;
@property (nonatomic) CGFloat stepSize;
@property (nonatomic) NSUInteger numberOfSteps;

@property (nonatomic) BOOL overWrite;

@end
