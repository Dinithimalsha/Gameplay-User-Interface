// This file is part of the FidelityFX Super Resolution 3.1 Unreal Engine Plugin.
//
// Copyright (c) 2023-2024 Advanced Micro Devices, Inc. All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#pragma once

#include "FFXRHIBackend.h"
#include "GlobalShader.h"

//-------------------------------------------------------------------------------------
// Permutation variables for FFX shaders.
//-------------------------------------------------------------------------------------
class FFX_UseHalf : SHADER_PERMUTATION_BOOL("FFX_HALF");
class FFX_PreferWave64 : SHADER_PERMUTATION_BOOL("_FFX_PREFER_WAVE64_");

//-------------------------------------------------------------------------------------
// Common base class for the FFX shaders that handles the permutation support.
//-------------------------------------------------------------------------------------
class FFXRHIBACKEND_API FFXGlobalShader : public FGlobalShader
{
public:
	FFXGlobalShader() = default;
	FFXGlobalShader(const ShaderMetaType::CompiledShaderInitializerType Init) : FGlobalShader(Init) {}

	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters);
	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment, bool bPreferWave64);
};
