//
//  DCHImageCardCollectionViewCell.h
//  Kaleidoscope-of-500px
//
//  Created by Derek Chen on 5/14/15.
//  Copyright (c) 2015 Derek Chen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DCHLinearGradientView.h"

extern const CGFloat DCHImageCardCollectionViewCell_DescLabelHeight;

@class DCHPhotoModel;

@interface DCHImageCardCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet DCHLinearGradientView *gradientView;
@property (weak, nonatomic) IBOutlet UILabel *titlelabel;
@property (nonatomic, strong, readonly) UIImageView *featureImageView;

+ (NSString *)cellIdentifier;

- (void)refreshWithPhotoModel:(DCHPhotoModel *)photoModel imageSize:(CGSize)imageSize;
- (void)refreshWithPhotoModel:(DCHPhotoModel *)photoModel imageSize:(CGSize)imageSize onScrollView:(UIScrollView *)scrollView scrollOnView:(UIView *)view;

- (UIImage *)image;

@end
