//
//  PlagaDefines.h
//  PlagaSDK
//
//  Created by ilous12 on 13. 7. 24..
//  Copyright (c) 2013년 MS2. All rights reserved.
//

#import <UIKit/UIKit.h>

/**---------------------------------------------------------------------------------------
 * @name this enum value uses under "Error Handling"
 *  ---------------------------------------------------------------------------------------
 */

typedef enum : NSInteger {
    PlagaErrorCodeRecorder                  = -101,
    PlagaErrorCodeCameraAssetWriter,
    PlagaErrorCodeSurfaceAssetWriter,
    PlagaErrorCodeAssetLibrary,
    PlagaErrorCodeCameraCapturer,
    PlagaErrorCodeCoreAudioCapturer,
    PlagaErrorCodeGLESCapturer,
    PlagaErrorCodeCameraController,
    PlagaErrorCodeSyncController,
    PlagaErrorCodeRecordMenuView,
    PlagaErrorCodeUIEvent,
    PlagaErrorCodeURLScheme,
    
    PlagaErrorCodeOAuth,
    PlagaErrorCodeCommHubOpenAPI,
    PlagaErrorCodeP4MOpenAPI,
} PlagaErrorCode;

extern NSString *const PlagaErrorDomain;
extern NSString *const PlagaException;

@interface PlagaError : NSObject

+ (NSString *)getErrorType:(PlagaErrorCode) type;

@end

