//
//  Copyright 2021 Google LLC
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <GoogleMobileAds/GoogleMobileAds.h>
#import <UIKit/UIKit.h>

// [START app_open_ad_manager_delegate]
@protocol AppOpenAdManagerDelegate <NSObject>
/// Method to be invoked when an app open ad life cycle is complete (i.e. dismissed or fails to
/// show).
- (void)adDidComplete;
@end
// [END app_open_ad_manager_delegate]

@interface AppOpenAdManager : NSObject <GADFullScreenContentDelegate>

@property (nonatomic, weak) id <AppOpenAdManagerDelegate> _Nullable delegate;

+ (nonnull AppOpenAdManager *)sharedInstance;
- (void)loadAd;
- (void)showAdIfAvailable;

@end
