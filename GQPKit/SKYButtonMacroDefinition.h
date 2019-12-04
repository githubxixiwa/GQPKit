//
//  SKYButtonMacroDefinition.h
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#ifndef SKYButtonMacroDefinition_h
#define SKYButtonMacroDefinition_h

// button快速设置图片
#define SKYButtonSetImageWithState(buttonName, imageVar, buttonState) [buttonName setImage:imageVar forState:buttonState];

// button快速设置默认图片
#define SKYButtonSetImage(buttonName, imageVar) SKYButtonSetImageWithState(buttonName, imageVar, UIControlStateNormal)

// button快速设置高亮图片
#define SKYButtonSetHighlightedImage(buttonName, imageVar) SKYButtonSetImageWithState(buttonName, imageVar, UIControlStateHighlighted)

// button快速设置title,state
#define SKYButtonSetTitleWithState(buttonName, title, buttonState) [buttonName setTitle:title forState:buttonState];

// button快速设置默认title
#define SKYButtonSetTitle(buttonName, title) [buttonName setTitle:title forState:UIControlStateNormal];

// button快速设置高亮title
#define SKYButtonSetHighlightedTitle(buttonName, title) [buttonName setTitle:title forState:UIControlStateHighlighted];

// button快速设置textColor,state
#define SKYButtonSetTextColorWithState(buttonName, textColor, buttonState) [buttonName setTitleColor:textColor forState:buttonState];

// button快速设置默认textColor
#define SKYButtonSetTextColor(buttonName, textColor) [buttonName setTitleColor:textColor forState:UIControlStateNormal];

// button快速设置高亮textColor
#define SKYButtonSetHighlightedTextColor(buttonName, textColor) [buttonName setTitleColor:textColor forState:UIControlStateHighlighted];

// button快速设置font
#define SKYButtonSetTextFont(buttonName, textFont)  buttonName.titleLabel.font = textFont;

// button快速设置 sizeToFit
#define SKYButtonSizeToFit(buttonName) [buttonName sizeToFit];

// button快速设置点击事件
#define SKYButtonAddSelectorWithTarget(buttonName, target, sel) [buttonName addTarget:target action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];

// button快速设置点击事件 target为self
#define SKYButtonAddTarget(buttonName, sel) SKYButtonAddSelectorWithTarget(buttonName, self, sel)

// 懒加载button
#define SKYLazyButton(buttonName)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,tager方法
#define SKYLazyButtonWithSelector(buttonName, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button和后续操作
#define SKYLazyButtonWithOperation(buttonName, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,tager方法,后续操作
#define SKYLazyButtonWithSelectorAndOperation(buttonName, sel, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button和设置title,color
#define SKYLazyButtonWithTitle(buttonName, title, textColor, textFont)   \
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
#define SKYLazyButtonWithTitleAndOperation(buttonName, title, textColor, textFont, operation)   \
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
#define SKYLazyButtonWithTitleAndSelector(buttonName, title, textColor, textFont, sel)   \
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
#define SKYLazyButtonWithTitleAndSelectorAndOperation(buttonName, title, textColor, textFont, sel, operation)   \
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
#define SKYLazyButtonWithFrame(buttonName, buttonFrame)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,后续操作
#define SKYLazyButtonWithFrameAndOperation(buttonName, buttonFrame, operation)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        operation   \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,tager方法
#define SKYLazyButtonWithFrameAndSelector(buttonName, buttonFrame, sel)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        _##buttonName.frame = buttonFrame;  \
        [_##buttonName addTarget:self action:@selector(sel) forControlEvents:UIControlEventTouchUpInside];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置frame,tager方法,后续操作
#define SKYLazyButtonWithFrameAndSelectorAndOperation(buttonName, buttonFrame, sel, operation)   \
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
#define SKYLazyButtonWithImage(buttonName, imageVar)   \
- (UIButton *)buttonName {    \
    if (!_##buttonName) {   \
        _##buttonName = [UIButton buttonWithType:UIButtonTypeCustom];   \
        [_##buttonName setImage:imageVar forState:UIControlStateNormal];    \
        [_##buttonName sizeToFit];  \
    }   \
    return _##buttonName;   \
}

// 懒加载button,设置默认图片,后续操作
#define SKYLazyButtonWithImageAndOperation(buttonName, imageVar, operation)   \
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
#define SKYLazyButtonWithImageAndSelector(buttonName, imageVar, sel)   \
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
#define SKYLazyButtonWithImageAndSelectorAndOperation(buttonName, imageVar, sel, operation)   \
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
#define SKYLazyButtonWithImageAndTitle(buttonName, imageVar, title, textColor, textFont)   \
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
#define SKYLazyButtonWithImageAndTitleAndOperation(buttonName, imageVar, title, textColor, textFont, operation)   \
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
#define SKYLazyButtonWithImageAndTitleAndSelector(buttonName, imageVar, title, textColor, textFont, sel)   \
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
#define SKYLazyButtonWithImageAndTitleAndSelectorAndOperation(buttonName, imageVar, title, textColor, textFont, sel, operation)   \
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
//#define SKYLazyButtonWithFrameAndImage(buttonName, buttonFrame, imageVar)   \
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
//#define SKYLazyButtonWithFrameAndImageAndOperation(buttonName, buttonFrame, imageVar, operation)   \
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
#define SKYLazyButtonWithFrameAndImage(buttonName, buttonFrame, imageVar, sel)   \
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
#define SKYLazyButtonWithFrameAndImageAndOperation(buttonName, buttonFrame, imageVar, operation, sel)   \
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


#endif /* SKYButtonMacroDefinition_h */
