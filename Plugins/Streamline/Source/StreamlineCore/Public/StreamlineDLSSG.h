/*
* Copyright (c) 2022 - 2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
*
* NVIDIA CORPORATION, its affiliates and licensors retain all intellectual
* property and proprietary rights in and to this material, related
* documentation and any modifications thereto. Any use, reproduction,
* disclosure or distribution of this material and related documentation
* without an express license agreement from NVIDIA CORPORATION or
* its affiliates is strictly prohibited.
*/
#pragma once

#include "CoreMinimal.h"
#include "StreamlineCore.h"
class FStreamlineRHI;
void RegisterStreamlineDLSSGHooks(FStreamlineRHI* InStreamlineRHI);
void UnregisterStreamlineDLSSGHooks();

bool IsDLSSGActive();

enum class EStreamlineFeatureSupport;
extern STREAMLINECORE_API EStreamlineFeatureSupport QueryStreamlineDLSSGSupport();
extern STREAMLINECORE_API bool IsStreamlineDLSSGSupported();



extern STREAMLINECORE_API void GetStreamlineDLSSGFrameTiming(float& FrameRateInHertz, int32& FramesPresented);


class FRHICommandListImmediate;
struct FRHIStreamlineArguments;
class FSceneViewFamily;
class FRDGBuilder;
void AddStreamlineDLSSGStateRenderPass(FRDGBuilder& GraphBuilder, uint32 ViewID, const FIntRect& SecondaryViewRect);
void BeginRenderViewFamilyDLSSG(FSceneViewFamily& InViewFamily);
void GetDLSSGStatusFromStreamline(bool bQueryOncePerAppLifetimeValues = false);