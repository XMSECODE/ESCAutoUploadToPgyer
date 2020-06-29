//
//  ESCNetWorkManager.h
//  AutoUploadToPgyer
//
//  Created by xiangmingsheng on 02/09/2017.
//  Copyright © 2017 XMSECODE. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ESCNetWorkManager : NSObject

+ (void)uploadToPgyerWithFilePath:(NSString *)filePath
                             uKey:(NSString *)uKey
                          api_key:(NSString *)api_key
                         password:(NSString *)password
           buildUpdateDescription:(NSString *)buildUpdateDescription
                         progress:(void (^)(NSProgress * progress))cuploadProgress
                          success:(void (^)(NSDictionary *result))success
                          failure:(void (^)(NSError *error))failure;

+ (void)uploadToFirimWithFilePath:(NSString *)filePath
                        api_token:(NSString *)api_token
           buildUpdateDescription:(NSString *)buildUpdateDescription
                         progress:(void (^)(NSProgress * progress))cuploadProgress
                          success:(void (^)(NSDictionary *result))success
                          failure:(void (^)(NSError *error))failure;

@end
