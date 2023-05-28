// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AimOffsetBlendSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimOffsetBlendSpace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace();
	ENGINE_API UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAimOffsetBlendSpace::StaticRegisterNativesUAimOffsetBlendSpace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAimOffsetBlendSpace);
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace_NoRegister()
	{
		return UAimOffsetBlendSpace::StaticClass();
	}
	struct Z_Construct_UClass_UAimOffsetBlendSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAimOffsetBlendSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlendSpace,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An Aim Offset is an asset that stores a blendable series of poses to help a character aim a weapon.\n */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AimOffsetBlendSpace.h" },
		{ "ModuleRelativePath", "Classes/Animation/AimOffsetBlendSpace.h" },
		{ "ToolTip", "An Aim Offset is an asset that stores a blendable series of poses to help a character aim a weapon." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAimOffsetBlendSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAimOffsetBlendSpace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams = {
		&UAimOffsetBlendSpace::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAimOffsetBlendSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAimOffsetBlendSpace()
	{
		if (!Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton, Z_Construct_UClass_UAimOffsetBlendSpace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAimOffsetBlendSpace.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAimOffsetBlendSpace>()
	{
		return UAimOffsetBlendSpace::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAimOffsetBlendSpace);
	UAimOffsetBlendSpace::~UAimOffsetBlendSpace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAimOffsetBlendSpace, UAimOffsetBlendSpace::StaticClass, TEXT("UAimOffsetBlendSpace"), &Z_Registration_Info_UClass_UAimOffsetBlendSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAimOffsetBlendSpace), 846814502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_1103610508(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AimOffsetBlendSpace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
