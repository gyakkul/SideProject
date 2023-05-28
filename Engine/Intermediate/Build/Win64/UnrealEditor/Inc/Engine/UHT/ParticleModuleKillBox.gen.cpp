// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Kill/ParticleModuleKillBox.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleKillBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBox();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleKillBox_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleKillBox::StaticRegisterNativesUParticleModuleKillBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleKillBox);
	UClass* Z_Construct_UClass_UParticleModuleKillBox_NoRegister()
	{
		return UParticleModuleKillBox::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleKillBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LowerLeftCorner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LowerLeftCorner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpperRightCorner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpperRightCorner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolute_MetaData[];
#endif
		static void NewProp_bAbsolute_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKillInside_MetaData[];
#endif
		static void NewProp_bKillInside_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKillInside;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAxisAlignedAndFixedSize_MetaData[];
#endif
		static void NewProp_bAxisAlignedAndFixedSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAxisAlignedAndFixedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleKillBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleKillBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Kill Box" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Kill/ParticleModuleKillBox.h" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** The lower left corner of the box. */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "The lower left corner of the box." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner = { "LowerLeftCorner", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleKillBox, LowerLeftCorner), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** The upper right corner of the box. */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "The upper right corner of the box." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner = { "UpperRightCorner", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleKillBox, UpperRightCorner), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** If true, the box coordinates are in world space./ */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "If true, the box coordinates are in world space./" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_SetBit(void* Obj)
	{
		((UParticleModuleKillBox*)Obj)->bAbsolute = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute = { "bAbsolute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleKillBox), &Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/**\n\x09 *\x09If true, particles INSIDE the box will be killed. \n\x09 *\x09If false (the default), particles OUTSIDE the box will be killed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "If true, particles INSIDE the box will be killed.\nIf false (the default), particles OUTSIDE the box will be killed." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_SetBit(void* Obj)
	{
		((UParticleModuleKillBox*)Obj)->bKillInside = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside = { "bKillInside", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleKillBox), &Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_MetaData[] = {
		{ "Category", "Kill" },
		{ "Comment", "/** If true, the box will always be axis aligned and non-scalable. */" },
		{ "ModuleRelativePath", "Classes/Particles/Kill/ParticleModuleKillBox.h" },
		{ "ToolTip", "If true, the box will always be axis aligned and non-scalable." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_SetBit(void* Obj)
	{
		((UParticleModuleKillBox*)Obj)->bAxisAlignedAndFixedSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize = { "bAxisAlignedAndFixedSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleKillBox), &Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleKillBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_LowerLeftCorner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_UpperRightCorner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAbsolute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bKillInside,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleKillBox_Statics::NewProp_bAxisAlignedAndFixedSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleKillBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleKillBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleKillBox_Statics::ClassParams = {
		&UParticleModuleKillBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleKillBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleKillBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleKillBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleKillBox()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleKillBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleKillBox.OuterSingleton, Z_Construct_UClass_UParticleModuleKillBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleKillBox.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleKillBox>()
	{
		return UParticleModuleKillBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleKillBox);
	UParticleModuleKillBox::~UParticleModuleKillBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleKillBox, UParticleModuleKillBox::StaticClass, TEXT("UParticleModuleKillBox"), &Z_Registration_Info_UClass_UParticleModuleKillBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleKillBox), 3133844633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_1485753528(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Kill_ParticleModuleKillBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
