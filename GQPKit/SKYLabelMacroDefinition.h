//
//  SKYLabelMacroDefinition.h
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#ifndef SKYLabelMacroDefinition_h
#define SKYLabelMacroDefinition_h

// 懒加载label
#define SKYLazyLabel(labelName)   \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
    }   \
    return _##labelName;   \
}

// 懒加载label,并后续操作
#define SKYLazyLabelWithOperation(labelName, operation)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        operation   \
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text
#define SKYLazyLabelWithText(labelName, title)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]init];   \
        _##labelName.text = title;  \
        [_##labelName sizeToFit];   \
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text和后续操作
#define SKYLazyLabelWithTextAndOperation(labelName, title, operation)    \
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
#define SKYLazyLabelWithFrame(labelName, labelFrame)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]initWithFrame:labelFrame];   \
    }   \
    return _##labelName;   \
}

//// 懒加载Label,并设置Frame和后续操作
#define SKYLazyLabelWithFrameAndOperation(labelName, labelFrame, operation)    \
- (UILabel *)labelName {    \
    if (!_##labelName) {   \
        _##labelName = [[UILabel alloc]initWithFrame:labelFrame];   \
        operation\
    }   \
    return _##labelName;   \
}

// 懒加载Label,并设置text和字体颜色
#define SKYLazyLabelWithTextAndInfo(labelName, title, labelFont, color)    \
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
#define SKYLazyLabelWithTextAndInfoAndOperation(labelName, title, labelFont, color, operation)    \
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

#endif /* SKYLabelMacroDefinition_h */
