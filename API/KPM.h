//
//  KPM.h
//  WidowMakerSDK
//
//  Created by Pradeep Kushwaha on 20/04/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface KPM : NSObject
+ (instancetype)sh;
- (void) setBundleName:(NSString *)appName;
- (void) setToken:(NSString*)token;
- (void) paid:(void (^)(void))execute;
@end

NS_ASSUME_NONNULL_END
