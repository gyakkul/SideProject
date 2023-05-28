// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/ComponentVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentVisualizer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPath();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyNameAndIndex();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyNameAndIndex;
class UScriptStruct* FPropertyNameAndIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyNameAndIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyNameAndIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyNameAndIndex, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("PropertyNameAndIndex"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyNameAndIndex.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FPropertyNameAndIndex>()
{
	return FPropertyNameAndIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyNameAndIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyNameAndIndex, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyNameAndIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"PropertyNameAndIndex",
		sizeof(FPropertyNameAndIndex),
		alignof(FPropertyNameAndIndex),
		Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyNameAndIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyNameAndIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyNameAndIndex.InnerSingleton, Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyNameAndIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentPropertyPath;
class UScriptStruct* FComponentPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentPropertyPath, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ComponentPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentPropertyPath.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FComponentPropertyPath>()
{
	return FComponentPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentOwningActor_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ParentOwningActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastResortComponentPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LastResortComponentPtr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a chain of properties from the parent actor of a given component, to the component itself.\n */" },
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
		{ "ToolTip", "Describes a chain of properties from the parent actor of a given component, to the component itself." },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentPropertyPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_ParentOwningActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_ParentOwningActor = { "ParentOwningActor", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentPropertyPath, ParentOwningActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_ParentOwningActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_ParentOwningActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_LastResortComponentPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_LastResortComponentPtr = { "LastResortComponentPtr", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentPropertyPath, LastResortComponentPtr), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_LastResortComponentPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_LastResortComponentPtr_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain_Inner = { "PropertyChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyNameAndIndex, METADATA_PARAMS(nullptr, 0) }; // 2670933883
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/ComponentVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain = { "PropertyChain", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentPropertyPath, PropertyChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain_MetaData)) }; // 2670933883
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_ParentOwningActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_LastResortComponentPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewProp_PropertyChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"ComponentPropertyPath",
		sizeof(FComponentPropertyPath),
		alignof(FComponentPropertyPath),
		Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentPropertyPath.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ComponentVisualizer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ComponentVisualizer_h_Statics::ScriptStructInfo[] = {
		{ FPropertyNameAndIndex::StaticStruct, Z_Construct_UScriptStruct_FPropertyNameAndIndex_Statics::NewStructOps, TEXT("PropertyNameAndIndex"), &Z_Registration_Info_UScriptStruct_PropertyNameAndIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyNameAndIndex), 2670933883U) },
		{ FComponentPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FComponentPropertyPath_Statics::NewStructOps, TEXT("ComponentPropertyPath"), &Z_Registration_Info_UScriptStruct_ComponentPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentPropertyPath), 899123047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ComponentVisualizer_h_2802469295(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ComponentVisualizer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ComponentVisualizer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
