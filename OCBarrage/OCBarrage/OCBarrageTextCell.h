//
//  OCBarrageTextCell.h
//  TestApp
//
//  Created by QMTV on 2017/8/23.
//  Copyright © 2017年 LFC. All rights reserved.
//

#import "OCBarrageCell.h"
#import "OCBarrageTextDescriptor.h"

NS_ASSUME_NONNULL_BEGIN

@interface OCBarrageTextCell : OCBarrageCell {
    CATextLayer *_textlayer;
}

@property (nonatomic, strong) OCBarrageTextDescriptor *textDescriptor;

- (void)updateTextlayerContentAndBounds;
@end

NS_ASSUME_NONNULL_END
