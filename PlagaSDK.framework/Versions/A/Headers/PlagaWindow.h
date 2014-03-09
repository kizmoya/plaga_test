//
//  PlagaWindow.h
//  PlagaSDK
//
//  Created by ilous12 on 13. 7. 24..
//  Copyright (c) 2013년 MS2. All rights reserved.
//

#import <UIKit/UIKit.h>

/** This class implementes a plaga menu
    You must replace your UIWindow to PlagaWindow.
 */

@interface PlagaWindow : UIWindow

/**---------------------------------------------------------------------------------------
 * @name this method uses under "PlagaWindow"
 *  ---------------------------------------------------------------------------------------
 */

/** This is class method for PlagaWindow
 
 You can get current window instance.

 @result instance if returned successfully, nil otherwise
 */
+ (PlagaWindow *)window;

@end

