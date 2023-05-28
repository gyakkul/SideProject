// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUV.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleSubUV() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleSubUVBase();
	ENGINE_API UClass* Z_Construct_UClass_USubUVAnimation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleSubUV::StaticRegisterNativesUParticleModuleSubUV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleSubUV);
	UClass* Z_Construct_UClass_UParticleModuleSubUV_NoRegister()
	{
		return UParticleModuleSubUV::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleSubUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubImageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubImageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRealTime_MetaData[];
#endif
		static void NewProp_bUseRealTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRealTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleSubUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleSubUVBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "SubImage Index" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation_MetaData[] = {
		{ "Comment", "/** \n\x09 * SubUV animation asset to use.\n\x09 * When specified, optimal bounding geometry for each SubUV frame will be used when rendering the sprites for this emitter instead of full quads.\n\x09 * This reduction in overdraw can reduce the GPU cost of rendering the emitter by 2x or 3x, depending on how much unused space was in the texture.\n\x09 * The bounding geometry is generated off of the texture alpha setup in the SubUV Animation asset, so that has to match what the material is using for opacity, or clipping will occur.\n\x09 * When specified, SubImages_Horizontal and SubImages_Vertical will come from the asset instead of the Required Module.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "SubUV animation asset to use.\nWhen specified, optimal bounding geometry for each SubUV frame will be used when rendering the sprites for this emitter instead of full quads.\nThis reduction in overdraw can reduce the GPU cost of rendering the emitter by 2x or 3x, depending on how much unused space was in the texture.\nThe bounding geometry is generated off of the texture alpha setup in the SubUV Animation asset, so that has to match what the material is using for opacity, or clipping will occur.\nWhen specified, SubImages_Horizontal and SubImages_Vertical will come from the asset instead of the Required Module." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSubUV, Animation), Z_Construct_UClass_USubUVAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex_MetaData[] = {
		{ "Category", "SubUV" },
		{ "Comment", "/**\n\x09 *\x09The index of the sub-image that should be used for the particle.\n\x09 *\x09The value is retrieved using the RelativeTime of the particles.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "The index of the sub-image that should be used for the particle.\nThe value is retrieved using the RelativeTime of the particles." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex = { "SubImageIndex", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleSubUV, SubImageIndex), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_MetaData[] = {
		{ "Category", "Realtime" },
		{ "Comment", "/** \n\x09 *\x09If true, use *real* time when updating the image index.\n\x09 *\x09The movie will update regardless of the slomo settings of the game.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/SubUV/ParticleModuleSubUV.h" },
		{ "ToolTip", "If true, use *real* time when updating the image index.\nThe movie will update regardless of the slomo settings of the game." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_SetBit(void* Obj)
	{
		((UParticleModuleSubUV*)Obj)->bUseRealTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime = { "bUseRealTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleSubUV), &Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_SubImageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleSubUV_Statics::NewProp_bUseRealTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleSubUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleSubUV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleSubUV_Statics::ClassParams = {
		&UParticleModuleSubUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleSubUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleSubUV()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleSubUV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleSubUV.OuterSingleton, Z_Construct_UClass_UParticleModuleSubUV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleSubUV.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleSubUV>()
	{
		return UParticleModuleSubUV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleSubUV);
	UParticleModuleSubUV::~UParticleModuleSubUV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleSubUV, UParticleModuleSubUV::StaticClass, TEXT("UParticleModuleSubUV"), &Z_Registration_Info_UClass_UParticleModuleSubUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleSubUV), 2353867171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_3804860260(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_SubUV_ParticleModuleSubUV_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
