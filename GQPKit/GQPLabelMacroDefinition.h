//
//  GQPLabelMacroDefinition.h
//  GQPKit
//
//  Created by GQP on 2019/10/25.
//  Copyright © 2019 GQP. All rights reserved.
//

#ifndef GQPLabelMacroDefinition_h
#define GQPLabelMacroDefinition_h

// 懒加载label
#define GQPLazyLabel(labelName)   \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
    }   \
    return _##labelName;   \
}

// 懒加载label,并后续操作
#define GQPLazyLabelWithOperation(labelName, operation)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        operation   \
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text
#define GQPLazyLabelWithText(labelName, title)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        _##labelName.text = title;  \
        [_##labelName sizeToFit];   \
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text和后续操作
#define GQPLazyLabelWithTextAndOperation(labelName, title, operation)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        _##labelName.text = title;  \
        [_##labelName sizeToFit];   \
        operation   \
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置Frame
#define GQPLazyLabelWithFrame(labelName, labelFrame)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]initWithFrame:labelFrame];   \
    }   \
    return _##labelName;   \
}

//// 懒加载Label,并设置Frame和后续操作
#define GQPLazyLabelWithFrameAndOperation(labelName, labelFrame, operation)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]initWithFrame:labelFrame];   \
        operation\
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text和字体颜色
#define GQPLazyLabelWithTextAndInfo(labelName, title, labelFont, color)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        _##labelName.text = title;  \
        _##labelName.font = labelFont;\
        _##labelName.textColor = color;\
        [_##labelName sizeToFit];   \
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text,字体颜色,后续操作
#define GQPLazyLabelWithTextAndInfoAndOperation(labelName, title, labelFont, color, operation)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        _##labelName.text = title;  \
        _##labelName.font = labelFont;\
        _##labelName.textColor = color;\
        [_##labelName sizeToFit];   \
        operation   \
    }   \
    return _##labelName;   \
}

#endif /* GQPLabelMacroDefinition_h */
