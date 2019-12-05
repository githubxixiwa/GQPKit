//
//  GQPButtonMacroDefinition.h
//  GQPKit
//
//  Created by GQP on 2019/10/25.
//  Copyright © 2019 GQP. All rights reserved.
//

#ifndef GQPButtonMacroDefinition_h
#define GQPButtonMacroDefinition_h

// button快速设置图片
#define GQPButtonSetImageWithState(buttonName, imageVar, buttonState) [buttonName setImage:imageVar forState:buttonState];

// button快速设置默认图片
#define GQPButtonSetImage(buttonName, imageVar) GQPButtonSetImageWithState(buttonName, imageVar, UIControlStateNormal)

// button快速设置高亮图片
#define GQPButtonSetHighlightedImage(buttonName, imageVar) GQPButtonSetImageWithState(buttonName, imageVar, UIControlStateHighlighted)

// button快速设置title,state
#define GQPButtonSetTitleWithState(buttonName, title, buttonState) [buttonName setTitle:title forState:buttonState];

// button快速设置默认title
#define GQPButtonSetTitle(buttonName, title) [buttonName setTitle:title forState:UIControlStateNormal];

// button快速设置高亮title
#define GQPButtonSetHighlightedTitle(buttonName, title) [buttonName setTitle:title forState:UIControlStateHighlighted];

// button快速设置textColor,state
#define GQPButtonSetTextColorWithState(buttonName, textColor, buttonState) [buttonName setTitleColor:textColor forState:buttonState];

// button快速设置默认textColor
#define GQPButtonSetTextColor(buttonName, textColor) [buttonName setTitleColor:textColor forState:UIControlStateNormal];

// button快速设置高亮textColor
#define GQPButtonSetHighlightedTextColor(buttonName, textColor) [buttonName setTitleColor:textColor forState:UIControlStateHighlighted];

// button快速设置font
#define GQPButtonSetTextFont(buttonName, textFont)  buttonName.titleLabel.font = textFont;

// button快速设置 sizeToFit
#define GQPButtonSizeToFit(buttonName) [buttonName sizeToFit];

// button快速设置点击事件
#define GQPButtonAddSelectorWithTarget(buttonName, target, sel) [buttonName addTarget:target action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];

// button快速设置点击事件 target为self
#define GQPButtonAddTarget(buttonName, sel) GQPButtonAddSelectorWithTarget(buttonName, self, sel)

// 懒加载button
#define GQPLazyButton(buttonName)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,tager方法
#define GQPLazyButtonWithSelector(buttonName, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button和后续操作
#define GQPLazyButtonWithOperation(buttonName, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,tager方法,后续操作
#define GQPLazyButtonWithSelectorAndOperation(buttonName, sel, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button和设置title,color
#define GQPLazyButtonWithTitle(buttonName, title, textColor, textFont)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName sizeToFit];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置title,color,后续操作
#define GQPLazyButtonWithTitleAndOperation(buttonName, title, textColor, textFont, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName sizeToFit];  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button和设置title,color,tager方法
#define GQPLazyButtonWithTitleAndSelector(buttonName, title, textColor, textFont, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName sizeToFit];  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置title,color,tager方法,后续操作
#define GQPLazyButtonWithTitleAndSelectorAndOperation(buttonName, title, textColor, textFont, sel, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName sizeToFit];  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame
#define GQPLazyButtonWithFrame(buttonName, buttonFrame)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,后续操作
#define GQPLazyButtonWithFrameAndOperation(buttonName, buttonFrame, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,tager方法
#define GQPLazyButtonWithFrameAndSelector(buttonName, buttonFrame, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,tager方法,后续操作
#define GQPLazyButtonWithFrameAndSelectorAndOperation(buttonName, buttonFrame, sel, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置默认图片
#define GQPLazyButtonWithImage(buttonName, imageVar)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置默认图片,后续操作
#define GQPLazyButtonWithImageAndOperation(buttonName, imageVar, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];\
        [_##buttonName sizeToFit];  \
        operation\
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置默认图片,tager方法
#define GQPLazyButtonWithImageAndSelector(buttonName, imageVar, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置默认图片,tager方法,后续操作
#define GQPLazyButtonWithImageAndSelectorAndOperation(buttonName, imageVar, sel, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];\
        [_##buttonName sizeToFit];  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation\
    }   \
    return _##buttonName;   \
}


// 懒加载button和设置image,title
#define GQPLazyButtonWithImageAndTitle(buttonName, imageVar, title, textColor, textFont)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置image,title,后续操作
#define GQPLazyButtonWithImageAndTitleAndOperation(buttonName, imageVar, title, textColor, textFont, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button和设置image,title,tager方法
#define GQPLazyButtonWithImageAndTitleAndSelector(buttonName, imageVar, title, textColor, textFont, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置image,title,tager方法,后续操作
#define GQPLazyButtonWithImageAndTitleAndSelectorAndOperation(buttonName, imageVar, title, textColor, textFont, sel, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setTitle:title forState:UIControlStateNormal];   \
        [_##buttonName setTitleColor:textColor forState:UIControlStateNormal];   \
        _##buttonName.titleLabel.font = textFont;   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation   \
    }   \
    return _##buttonName;   \
}


//// 懒加载button,设置frame,设置默认图片
//#define GQPLazyButtonWithFrameAndImage(buttonName, buttonFrame, imageVar)   \
//- (UIButton *)buttonName {    \
//    if (!_##buttonName) {   \
//        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
//        _##buttonName.frame = buttonFrame;  \
//        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
//    }   \
//    return _##buttonName;   \
//}
//
//// 懒加载button,设置frame,设置默认图片,后续操作
//#define GQPLazyButtonWithFrameAndImageAndOperation(buttonName, buttonFrame, imageVar, operation)   \
//- (UIButton *)buttonName {    \
//    if (!_##buttonName) {   \
//        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
//        _##buttonName.frame = buttonFrame;  \
//        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
//        operation   \
//    }   \
//    return _##buttonName;   \
//}

// 懒加载button,设置frame,设置默认图片,tager方法
#define GQPLazyButtonWithFrameAndImage(buttonName, buttonFrame, imageVar, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,设置默认图片,tager方法,后续操作
#define GQPLazyButtonWithFrameAndImageAndOperation(buttonName, buttonFrame, imageVar, operation, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation   \
    }   \
    return _##buttonName;   \
}


#endif /* GQPButtonMacroDefinition_h */
