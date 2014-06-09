//////////////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2012 Freshplanet (http://freshplanet.com | opensource@freshplanet.com)
//  
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//  
//    http://www.apache.org/licenses/LICENSE-2.0
//  
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//  
//////////////////////////////////////////////////////////////////////////////////////

#import "FlashRuntimeExtensions.h"
#import <AVFoundation/AVAudioPlayer.h>
#import <AVFoundation/AVPlayerItem.h>
#import <AVFoundation/AVAsset.h>

FREObject loadUrl(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);
FREObject play(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);
FREObject pauseFunction(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);
FREObject stop(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);
FREObject closeFunction(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getLength(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);
FREObject getProgress(FREContext context, void* functionData, uint32_t argc, FREObject argv[]);

// ANE Setup
void AirAACPlayerContextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctionsToTest, const FRENamedFunction** functionsToSet);
void AirAACPlayerContextFinalizer(FREContext ctx);
void AirAACPlayerInitializer(void** extDataToSet, FREContextInitializer* ctxInitializerToSet, FREContextFinalizer* ctxFinalizerToSet);
void AirAACPlayerFinalizer(void *extData);

NSMutableDictionary* soundPlayers;
AVAudioPlayer* getPlayerFromContext(FREContext context);
void removePlayerFromContext(FREContext context);
void setPlayer(NSString* url, AVAudioPlayer* player);
AVAudioPlayer* getPlayer(NSString* url);
void removePlayer(NSString* url);