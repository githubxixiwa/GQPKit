//
//  GQPMacroDefinition.h
//  GQPKit
//
//  Created by GQP on 2019/10/25.
//  Copyright © 2019 GQP. All rights reserved.
//

#ifndef GQPMacroDefinition_h
#define GQPMacroDefinition_h

#pragma mark - 通知 NSNotification
#define GQKNotifyCenter \
[NSNotificationCenter defaultCenter]

#define GQKNotifyAdd(notiName, notiSelect) \
[[NSNotificationCenter defaultCenter] addObserver:self selector:notiSelect name:notiName object:nil]

#define GQKNotifyPost(notiName, notiObject) \
[[NSNotificationCenter defaultCenter] postNotificationName:notiName object:notiObject]

#define GQKNotifyRemoveAll() \
[[NSNotificationCenter defaultCenter] removeObserver:self]

#define GQKNotifyRemoveName(notiName) \
[[NSNotificationCenter defaultCenter] removeObserver:self name:notiName object:nil]

#pragma mark - 偏好设置
#define GQKUserDefaultsStandard [NSUserDefaults standardUserDefaults]

#endif /* GQPMacroDefinition_h */
