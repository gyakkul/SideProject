// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTaskResource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTaskResource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	void UGameplayTaskResource::StaticRegisterNativesUGameplayTaskResource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTaskResource);
	UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister()
	{
		return UGameplayTaskResource::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTaskResource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManualResourceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ManualResourceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoResourceID_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_AutoResourceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManuallySetID_MetaData[];
#endif
		static void NewProp_bManuallySetID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManuallySetID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTaskResource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayTaskResource.h" },
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID_MetaData[] = {
		{ "Category", "Task Resource" },
		{ "ClampMax", "15" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Overrides AutoResourceID. -1 means auto ID will be applied */" },
		{ "EditCondition", "bManuallySetID" },
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
		{ "ToolTip", "Overrides AutoResourceID. -1 means auto ID will be applied" },
		{ "UIMax", "15" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID = { "ManualResourceID", nullptr, (EPropertyFlags)0x0020080000014015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTaskResource, ManualResourceID), METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID = { "AutoResourceID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTaskResource, AutoResourceID), METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_MetaData[] = {
		{ "Category", "Task Resource" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/GameplayTaskResource.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_SetBit(void* Obj)
	{
		((UGameplayTaskResource*)Obj)->bManuallySetID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID = { "bManuallySetID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGameplayTaskResource), &Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTaskResource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_ManualResourceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_AutoResourceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTaskResource_Statics::NewProp_bManuallySetID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTaskResource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTaskResource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTaskResource_Statics::ClassParams = {
		&UGameplayTaskResource::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayTaskResource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::PropPointers),
		0,
		0x041000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTaskResource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTaskResource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTaskResource()
	{
		if (!Z_Registration_Info_UClass_UGameplayTaskResource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTaskResource.OuterSingleton, Z_Construct_UClass_UGameplayTaskResource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTaskResource.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTaskResource>()
	{
		return UGameplayTaskResource::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTaskResource);
	UGameplayTaskResource::~UGameplayTaskResource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTaskResource, UGameplayTaskResource::StaticClass, TEXT("UGameplayTaskResource"), &Z_Registration_Info_UClass_UGameplayTaskResource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTaskResource), 3847686441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_150069635(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTaskResource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
