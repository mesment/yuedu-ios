//
//  ActionTableViewCell.h
//  YueduFM
//
//  Created by StarNet on 9/24/15.
//  Copyright (c) 2015 StarNet. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ExpandTableViewCell.h"

@interface ActionTableViewCell : ExpandTableViewCell

@property (nonatomic, retain) IBOutlet UIVButton* downloadButton;
@property (nonatomic, retain) IBOutlet UIVButton* favorButton;
@property (nonatomic, retain) IBOutlet UIVButton* shareButton;
@property (nonatomic, retain) IBOutlet UIVButton* deleteButton;

- (IBAction)onDownloadButtonPressed:(id)sender;
- (IBAction)onFavorButtonPressed:(id)sender;
- (IBAction)onShareButtonPressed:(id)sender;
- (IBAction)onDeleteButtonPressed:(id)sender;

@end
