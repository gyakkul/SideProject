// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassStateTreeSubsystem.h"
#include "StateTreeInstanceData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassStateTreeSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeSubsystem();
	MASSAIBEHAVIOR_API UClass* Z_Construct_UClass_UMassStateTreeSubsystem_NoRegister();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeInstanceData();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem;
class UScriptStruct* FMassStateTreeInstanceDataItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("MassStateTreeInstanceDataItem"));
	}
	return Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FMassStateTreeInstanceDataItem>()
{
	return FMassStateTreeInstanceDataItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Generation_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Generation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassStateTreeInstanceDataItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_InstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_InstanceData = { "InstanceData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStateTreeInstanceDataItem, InstanceData), Z_Construct_UScriptStruct_FStateTreeInstanceData, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_InstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_InstanceData_MetaData)) }; // 4128275611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_Generation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_Generation = { "Generation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassStateTreeInstanceDataItem, Generation), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_Generation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_Generation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_InstanceData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewProp_Generation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"MassStateTreeInstanceDataItem",
		sizeof(FMassStateTreeInstanceDataItem),
		alignof(FMassStateTreeInstanceDataItem),
		Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem()
	{
		if (!Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem.InnerSingleton, Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem.InnerSingleton;
	}
	void UMassStateTreeSubsystem::StaticRegisterNativesUMassStateTreeSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassStateTreeSubsystem);
	UClass* Z_Construct_UClass_UMassStateTreeSubsystem_NoRegister()
	{
		return UMassStateTreeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassStateTreeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceDataArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceDataArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceDataArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassStateTreeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A subsystem managing StateTree assets in Mass\n*/" },
		{ "IncludePath", "MassStateTreeSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassStateTreeSubsystem.h" },
		{ "ToolTip", "A subsystem managing StateTree assets in Mass" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray_Inner = { "InstanceDataArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem, METADATA_PARAMS(nullptr, 0) }; // 3448717101
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassStateTreeSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray = { "InstanceDataArray", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassStateTreeSubsystem, InstanceDataArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray_MetaData)) }; // 3448717101
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassStateTreeSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassStateTreeSubsystem_Statics::NewProp_InstanceDataArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassStateTreeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassStateTreeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassStateTreeSubsystem_Statics::ClassParams = {
		&UMassStateTreeSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassStateTreeSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassStateTreeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassStateTreeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassStateTreeSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassStateTreeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassStateTreeSubsystem.OuterSingleton, Z_Construct_UClass_UMassStateTreeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassStateTreeSubsystem.OuterSingleton;
	}
	template<> MASSAIBEHAVIOR_API UClass* StaticClass<UMassStateTreeSubsystem>()
	{
		return UMassStateTreeSubsystem::StaticClass();
	}
	UMassStateTreeSubsystem::UMassStateTreeSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassStateTreeSubsystem);
	UMassStateTreeSubsystem::~UMassStateTreeSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassStateTreeInstanceDataItem::StaticStruct, Z_Construct_UScriptStruct_FMassStateTreeInstanceDataItem_Statics::NewStructOps, TEXT("MassStateTreeInstanceDataItem"), &Z_Registration_Info_UScriptStruct_MassStateTreeInstanceDataItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassStateTreeInstanceDataItem), 3448717101U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassStateTreeSubsystem, UMassStateTreeSubsystem::StaticClass, TEXT("UMassStateTreeSubsystem"), &Z_Registration_Info_UClass_UMassStateTreeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassStateTreeSubsystem), 1826496514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_3469895700(TEXT("/Script/MassAIBehavior"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_MassStateTreeSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
