// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/GroupActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroupActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_AGroupActor();
	UNREALED_API UClass* Z_Construct_UClass_AGroupActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void AGroupActor::StaticRegisterNativesAGroupActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGroupActor);
	UClass* Z_Construct_UClass_AGroupActor_NoRegister()
	{
		return AGroupActor::StaticClass();
	}
	struct Z_Construct_UClass_AGroupActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GroupActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupActors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGroupActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/GroupActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
	void Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((AGroupActor*)Obj)->bLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AGroupActor), &Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_Inner = { "GroupActors", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors = { "GroupActors", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGroupActor, GroupActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_Inner = { "SubGroups", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AGroupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Editor/GroupActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups = { "SubGroups", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGroupActor, SubGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGroupActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_bLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_GroupActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGroupActor_Statics::NewProp_SubGroups,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGroupActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGroupActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGroupActor_Statics::ClassParams = {
		&AGroupActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AGroupActor_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::PropPointers), 0),
		0,
		0x048802A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGroupActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGroupActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGroupActor()
	{
		if (!Z_Registration_Info_UClass_AGroupActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGroupActor.OuterSingleton, Z_Construct_UClass_AGroupActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGroupActor.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<AGroupActor>()
	{
		return AGroupActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGroupActor);
	AGroupActor::~AGroupActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGroupActor, AGroupActor::StaticClass, TEXT("AGroupActor"), &Z_Registration_Info_UClass_AGroupActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGroupActor), 3114925746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_4252151275(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_GroupActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
