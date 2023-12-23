//
//  InstanceManager.h
//  
//
//  Created by Hiệp Hoàng on 24/12/2023.
//

#ifndef InstanceManager_h
#define InstanceManager_h

@interface InstanceManager : NSObject<CXCallObserverDelegate>
+ (RNStringeeInstanceManager*)instance;
@property NSMutableDictionary <NSString *, NSString *> *callMap;
@end


#endif /* InstanceManager_h */
