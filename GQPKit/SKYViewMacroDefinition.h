//
//  SKYViewMacroDefinition.h
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#ifndef SKYViewMacroDefinition_h
#define SKYViewMacroDefinition_h

// 快速设置frame
#define SKYViewSetFrame(viewName, viewFrame) viewName.frame = viewFrame;

// 快速设置center
#define SKYViewSetCenter(viewName, centerVar) viewName.center = centerVar;

// 快速设置背景色
#define SKYViewSetBackgroundColor(viewName, viewBackgroundColor) viewName.backgroundColor = viewBackgroundColor;


// 懒加载view
#define SKYLazyView(viewName)   \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]init];   \
    }   \
    return _##viewName;   \
}

// 懒加载view,并后续操作
#define SKYLazyViewWithOperation(viewName, operation)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]init];   \
        operation   \
    }   \
    return _##viewName;   \
}

// 懒加载view,并设置Frame
#define SKYLazyViewWithFrame(viewName, viewFrame)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]initWithFrame:viewFrame];   \
    }   \
    return _##viewName;   \
}

// 懒加载view,并设置Frame和背景颜色
#define SKYLazyViewWithFrameAndColor(viewName, viewFrame, viewColor)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]initWithFrame:viewFrame];   \
        _##viewName.backgroundColor = viewColor;    \
    }   \
    return _##viewName;   \
}

// 懒加载view,并设置Frame,背景颜色,后续操作
#define SKYLazyViewWithFrameAndColorAndOperation(viewName, viewFrame, viewColor, operation)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]initWithFrame:viewFrame];   \
        _##viewName.backgroundColor = viewColor;    \
        operation   \
    }   \
    return _##viewName;   \
}

#endif /* SKYViewMacroDefinition_h */
