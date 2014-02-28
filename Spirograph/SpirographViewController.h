//
//  SpirographViewController.h
//  Spirograph
//
//  Created by Michael Toth on 2/20/14.
//  Copyright (c) 2014 Michael Toth. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SpirographView.h"
#import "HarmonigraphView.h"

@interface SpirographViewController : UIViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet HarmonigraphView *harmonigraphView;
@property (weak, nonatomic) IBOutlet UISlider *lSlider;
@property (weak, nonatomic) IBOutlet UISlider *kSlider;
@property (weak, nonatomic) IBOutlet SpirographView *spirographView;
@property (weak, nonatomic) IBOutlet UITextField *stepSizeTextField;
@property (weak, nonatomic) IBOutlet UITextField *numberOfStepsTextField;
@property (weak, nonatomic) IBOutlet UISegmentedControl *overWriteSegmentControl;

- (IBAction)lChanged:(id)sender;
- (IBAction)kChanged:(id)sender;
- (IBAction)redraw:(id)sender;

@end
