﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GoogleMobileAds.Api.RewardBasedVideoAd
struct RewardBasedVideoAd_t2581948736;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_t1880931879;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_t347919082;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t344857101;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_t3179524098;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t3289624707;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t1756611910;
// GoogleMobileAds.Api.Reward
struct Reward_t1753549929;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdRequest3179524098.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_EventArgs3289624707.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_AdFailedToLo1756611910.h"
#include "AssemblyU2DCSharp_GoogleMobileAds_Api_Reward1753549929.h"

// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::.ctor()
extern "C"  void RewardBasedVideoAd__ctor_m2372173098 (RewardBasedVideoAd_t2581948736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GoogleMobileAds.Api.RewardBasedVideoAd GoogleMobileAds.Api.RewardBasedVideoAd::get_Instance()
extern "C"  RewardBasedVideoAd_t2581948736 * RewardBasedVideoAd_get_Instance_m444264380 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_add_OnAdLoaded_m2393171179 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_remove_OnAdLoaded_m4260274658 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void RewardBasedVideoAd_add_OnAdFailedToLoad_m484174617 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
extern "C"  void RewardBasedVideoAd_remove_OnAdFailedToLoad_m2523470252 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t347919082 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_add_OnAdOpening_m2880667366 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_remove_OnAdOpening_m1937389131 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_add_OnAdStarted_m3158848609 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdStarted(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_remove_OnAdStarted_m929306086 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_add_OnAdClosed_m3641983760 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_remove_OnAdClosed_m372417905 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C"  void RewardBasedVideoAd_add_OnAdRewarded_m800253052 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t344857101 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdRewarded(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
extern "C"  void RewardBasedVideoAd_remove_OnAdRewarded_m404723285 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t344857101 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::add_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_add_OnAdLeavingApplication_m1193936490 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::remove_OnAdLeavingApplication(System.EventHandler`1<System.EventArgs>)
extern "C"  void RewardBasedVideoAd_remove_OnAdLeavingApplication_m486857371 (RewardBasedVideoAd_t2581948736 * __this, EventHandler_1_t1880931879 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::LoadAd(GoogleMobileAds.Api.AdRequest,System.String)
extern "C"  void RewardBasedVideoAd_LoadAd_m2531670208 (RewardBasedVideoAd_t2581948736 * __this, AdRequest_t3179524098 * ___request0, String_t* ___adUnitId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GoogleMobileAds.Api.RewardBasedVideoAd::IsLoaded()
extern "C"  bool RewardBasedVideoAd_IsLoaded_m3802076007 (RewardBasedVideoAd_t2581948736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::Show()
extern "C"  void RewardBasedVideoAd_Show_m1293521189 (RewardBasedVideoAd_t2581948736 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::.cctor()
extern "C"  void RewardBasedVideoAd__cctor_m2917396157 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__0(System.Object,System.EventArgs)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__0_m1335792545 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__1_m679979307 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, AdFailedToLoadEventArgs_t1756611910 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__2(System.Object,System.EventArgs)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__2_m489480683 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__3(System.Object,System.EventArgs)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__3_m3911388176 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__4(System.Object,System.EventArgs)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__4_m535426317 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__5(System.Object,System.EventArgs)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__5_m184196914 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, EventArgs_t3289624707 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GoogleMobileAds.Api.RewardBasedVideoAd::<RewardBasedVideoAd>m__6(System.Object,GoogleMobileAds.Api.Reward)
extern "C"  void RewardBasedVideoAd_U3CRewardBasedVideoAdU3Em__6_m348708435 (RewardBasedVideoAd_t2581948736 * __this, Il2CppObject * ___sender0, Reward_t1753549929 * ___args1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
