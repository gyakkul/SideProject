// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUVMovie.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUVMovie() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSubUVMovie::StaticRegisterNativesUParticleModuleSubUVMovie()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSubUVMovie);
	UClass* Z_Construct_UClass_UParticleModuleSubUVMovie_NoRegister()
	{
		return UParticleModuleSubUVMovie::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSubUVMovie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmitterTime_MetaData[];
#endif
		static void NewProp_bUseEmitterTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmitterTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartingFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUV,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SubUV Movie" },
		{ "HideCategories", "Object Object Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "Comment", "/**\n\x09 *\x09If true, use the emitter time to look up the frame rate.\n\x09 *\x09If false (default), use the particle relative time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "If true, use the emitter time to look up the frame rate.\nIf false (default), use the particle relative time." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_SetBit(void* Obj)
	{
		((UParticleModuleSubUVMovie*)Obj)->bUseEmitterTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime = { "bUseEmitterTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSubUVMovie), &Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "Comment", "/**\n\x09 *\x09The frame rate the SubUV images should be 'flipped' thru at.\n\x09 \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "The frame rate the SubUV images should be 'flipped' thru at." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSubUVMovie, FrameRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame_MetaData[] = {
		{ "Category", "Flipbook" },
		{ "Comment", "/**\n\x09 *\x09The starting image index for the SubUV (1 = the first frame).\n\x09 *\x09""Assumes order of Left->Right, Top->Bottom\n\x09 *\x09If greater than the last frame, it will clamp to the last one.\n\x09 *\x09If 0, then randomly selects a starting frame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUVMovie.h" },
		{ "ToolTip", "The starting image index for the SubUV (1 = the first frame).\nAssumes order of Left->Right, Top->Bottom\nIf greater than the last frame, it will clamp to the last one.\nIf 0, then randomly selects a starting frame." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame = { "StartingFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSubUVMovie, StartingFrame), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_bUseEmitterTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::NewProp_StartingFrame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUVMovie>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::ClassParams = {
		&UParticleModuleSubUVMovie::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSubUVMovie()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSubUVMovie.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSubUVMovie.OuterSingleton, Z_Construct_UClass_UParticleModuleSubUVMovie_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSubUVMovie.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUVMovie>()
	{
		return UParticleModuleSubUVMovie::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUVMovie);
	UParticleModuleSubUVMovie::~UParticleModuleSubUVMovie() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSubUVMovie, UParticleModuleSubUVMovie::StaticClass, TEXT("UParticleModuleSubUVMovie"), &Z_Registration_Info_UClass_UParticleModuleSubUVMovie, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSubUVMovie), 3275797422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_3661714521(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUVMovie_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
