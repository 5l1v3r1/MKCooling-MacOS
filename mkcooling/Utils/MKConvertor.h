//
//  MKConvertor.h
//  mkcooling
//
//  Created by mist on 2019/10/6.
//  Copyright © 2019 mistak1992. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MKConvertor : NSObject

+ (NSString *)stringWithHexNumber:(NSUInteger)hexNumber;

+ (NSInteger)numberWithHexString:(NSString *)hexString;

+ (NSString *)hexStringFromData:(NSData *)data;

+ (NSData*)dataForHexString:(NSString *)hexString;

@end

NS_ASSUME_NONNULL_END
