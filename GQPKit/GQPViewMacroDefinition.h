//
//  GQPViewMacroDefinition.h
//  GQPKit
//
//  Created by GQP on 2019/10/25.
//  Copyright © 2019 GQP. All rights reserved.
//

#ifndef GQPViewMacroDefinition_h
#define GQPViewMacroDefinition_h

// 快速设置frame
#define GQPViewSetFrame(viewName, viewFrame) viewName.frame = viewFrame;

// 快速设置center
#define GQPViewSetCenter(viewName, centerVar) viewName.center = centerVar;

// 快速设置背景色
#define GQPViewSetBackgroundColor(viewName, viewBackgroundColor) viewName.backgroundColor = viewBackgroundColor;


// 懒加载view
#define GQPLazyView(viewName)   \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]init];   \
    }   \
    return _##viewName;   \
}

// 懒加载view,并后续操作
#define GQPLazyViewWithOperation(viewName, operation)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]init];   \
        operation   \
    }   \
    return _##viewName;   \
}

// 懒加载view,并设置Frame
#define GQPLazyViewWithFrame(viewName, viewFrame)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]initWithFrame:viewFrame];   \
    }   \
    return _##viewName;   \
}

// 懒加载view,并设置Frame和背景颜色
#define GQPLazyViewWithFrameAndColor(viewName, viewFrame, viewColor)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]initWithFrame:viewFrame];   \
        _##viewName.backgroundColor = viewColor;    \
    }   \
    return _##viewName;   \
}

// 懒加载view,并设置Frame,背景颜色,后续操作
#define GQPLazyViewWithFrameAndColorAndOperation(viewName, viewFrame, viewColor, operation)    \
- (UIView *)viewName {    \
    if (!_##viewName) {   \
        _##viewName = [[UIView alloc]initWithFrame:viewFrame];   \
        _##viewName.backgroundColor = viewColor;    \
        operation   \
    }   \
    return _##viewName;   \
}

#endif /* GQPViewMacroDefinition_h */
