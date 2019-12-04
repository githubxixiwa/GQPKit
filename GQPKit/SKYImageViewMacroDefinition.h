//
//  SKYImageViewMacroDefinition.h
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#ifndef SKYImageViewMacroDefinition_h
#define SKYImageViewMacroDefinition_h

// 懒加载imageView
#define SKYLazyImageView(imageViewName)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,和后续操作
#define SKYLazyImageViewWithOperation(imageViewName, operation)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
        operation   \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView和设置image
#define SKYLazyImageViewWithImage(imageViewName, imageVar)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
        _##imageViewName.image = imageVar;  \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,设置image,后续操作
#define SKYLazyImageViewWithImageAndOperation(imageViewName, imageVar, operation)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
        _##imageViewName.image = imageVar;  \
        operatio    n\
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,设置frame,设置image
#define SKYLazyImageViewWithFrameAndImage(imageViewName, imageViewFrame, imageVar)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]initWithFrame:imageViewFrame];   \
        _##imageViewName.image = imageVar;  \
        _##imageViewName.contentMode = UIViewContentModeScaleAspectFit; \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,设置frame,设置image,后续操作
#define SKYLazyImageViewWithFrameAndImageAndOperation(imageViewName, imageViewFrame, imageVar, operation)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]initWithFrame:imageViewFrame];   \
        _##imageViewName.image = imageVar;  \
        _##imageViewName.contentMode = UIViewContentModeScaleAspectFit; \
        operation   \
    }   \
    return _##imageViewName;   \
}

#endif /* SKYImageViewMacroDefinition_h */
