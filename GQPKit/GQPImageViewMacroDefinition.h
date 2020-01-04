//
//  GQPImageViewMacroDefinition.h
//  GQPKit
//
//  Created by GQP on 2019/10/25.
//  Copyright © 2019 GQP. All rights reserved.
//

#ifndef GQPImageViewMacroDefinition_h
#define GQPImageViewMacroDefinition_h

// 懒加载imageView
#define GQPLazyImageView(imageViewName)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,和后续操作
#define GQPLazyImageViewWithOperation(imageViewName, operation)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
        operation   \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView和设置image
#define GQPLazyImageViewWithImage(imageViewName, imageVar)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
        _##imageViewName.image = imageVar;  \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,设置image,后续操作
#define GQPLazyImageViewWithImageAndOperation(imageViewName, imageVar, operation)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]init];   \
        _##imageViewName.image = imageVar;  \
        operatio    n\
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,设置frame,设置image
#define GQPLazyImageViewWithFrameAndImage(imageViewName, imageViewFrame, imageVar)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]initWithFrame:imageViewFrame];   \
        _##imageViewName.image = imageVar;  \
        _##imageViewName.contentMode = UIViewContentModeScaleAspectFit; \
    }   \
    return _##imageViewName;   \
}

// 懒加载imageView,设置frame,设置image,后续操作
#define GQPLazyImageViewWithFrameAndImageAndOperation(imageViewName, imageViewFrame, imageVar, operation)   \
- (UIImageView *)imageViewName {    \
    if (!_##imageViewName) {   \
        _##imageViewName = [[UIImageView alloc]initWithFrame:imageViewFrame];   \
        _##imageViewName.image = imageVar;  \
        _##imageViewName.contentMode = UIViewContentModeScaleAspectFit; \
        operation   \
    }   \
    return _##imageViewName;   \
}

#endif /* GQPImageViewMacroDefinition_h */
