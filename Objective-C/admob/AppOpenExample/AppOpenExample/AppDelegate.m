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

#import "AppDelegate.h"

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application
    didFinishLaunchingWithOptions:(NSDictionary<NSString *, __kindof NSObject *> *)launchOptions {
  return YES;
}

// [START show_ad_on_foreground]
- (void) applicationDidBecomeActive:(UIApplication *)application {
  // Show the app open ad when the app is foregrounded.
  [AppOpenAdManager.sharedInstance showAdIfAvailable];
}
// [END show_ad_on_foreground]

@end
