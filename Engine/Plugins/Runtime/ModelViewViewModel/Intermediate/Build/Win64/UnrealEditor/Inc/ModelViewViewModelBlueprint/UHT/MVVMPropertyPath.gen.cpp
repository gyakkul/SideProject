// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMPropertyPath.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMPropertyPath() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EBindingKind();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath;
class UScriptStruct* FMVVMBlueprintFieldPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMBlueprintFieldPath"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMBlueprintFieldPath>()
{
	return FMVVMBlueprintFieldPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingReference;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingKind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingKind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingKind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A single item in a Property Path\n */" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
		{ "ToolTip", "A single item in a Property Path" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBlueprintFieldPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingReference_MetaData[] = {
		{ "Category", "MVVM" },
		{ "Comment", "/** Reference to property for this binding. */" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
		{ "ToolTip", "Reference to property for this binding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingReference = { "BindingReference", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintFieldPath, BindingReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingReference_MetaData)) }; // 2112165407
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind_MetaData[] = {
		{ "Comment", "/** If we are referencing a UFunction or FProperty */" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
		{ "ToolTip", "If we are referencing a UFunction or FProperty" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind = { "BindingKind", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintFieldPath, BindingKind), Z_Construct_UEnum_UMG_EBindingKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind_MetaData)) }; // 3494567057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewProp_BindingKind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMBlueprintFieldPath",
		sizeof(FMVVMBlueprintFieldPath),
		alignof(FMVVMBlueprintFieldPath),
		Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath;
class UScriptStruct* FMVVMBlueprintPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModelBlueprint(), TEXT("MVVMBlueprintPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath.OuterSingleton;
}
template<> MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* StaticStruct<FMVVMBlueprintPropertyPath>()
{
	return FMVVMBlueprintPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingReference;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BindingKind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingKind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BindingKind;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base path to properties for MVVM view models and widgets.\n * \n * Used to associate properties within MVVM bindings in editor & during MVVM compilation\n */" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
		{ "ToolTip", "Base path to properties for MVVM view models and widgets.\n\nUsed to associate properties within MVVM bindings in editor & during MVVM compilation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMBlueprintPropertyPath>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath, METADATA_PARAMS(nullptr, 0) }; // 2152436711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "MVVM" },
		{ "Comment", "/** Reference to property for this binding. */" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
		{ "ToolTip", "Reference to property for this binding." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintPropertyPath, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths_MetaData)) }; // 2152436711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_WidgetName_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintPropertyPath, WidgetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_WidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_WidgetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_ContextId_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_ContextId = { "ContextId", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintPropertyPath, ContextId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_ContextId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_ContextId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingReference_MetaData[] = {
		{ "Comment", "// Use the Paths. BindingReference and BindingKind are deprecated.\n" },
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
		{ "ToolTip", "Use the Paths. BindingReference and BindingKind are deprecated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingReference = { "BindingReference", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintPropertyPath, BindingReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingReference_MetaData)) }; // 2112165407
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind_MetaData[] = {
		{ "ModuleRelativePath", "Public/MVVMPropertyPath.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind = { "BindingKind", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMBlueprintPropertyPath, BindingKind), Z_Construct_UEnum_UMG_EBindingKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind_MetaData)) }; // 3494567057
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_Paths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_WidgetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_ContextId,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewProp_BindingKind,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
		nullptr,
		&NewStructOps,
		"MVVMBlueprintPropertyPath",
		sizeof(FMVVMBlueprintPropertyPath),
		alignof(FMVVMBlueprintPropertyPath),
		Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_Statics::ScriptStructInfo[] = {
		{ FMVVMBlueprintFieldPath::StaticStruct, Z_Construct_UScriptStruct_FMVVMBlueprintFieldPath_Statics::NewStructOps, TEXT("MVVMBlueprintFieldPath"), &Z_Registration_Info_UScriptStruct_MVVMBlueprintFieldPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBlueprintFieldPath), 2152436711U) },
		{ FMVVMBlueprintPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FMVVMBlueprintPropertyPath_Statics::NewStructOps, TEXT("MVVMBlueprintPropertyPath"), &Z_Registration_Info_UScriptStruct_MVVMBlueprintPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMBlueprintPropertyPath), 4275434123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_3276373023(TEXT("/Script/ModelViewViewModelBlueprint"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMPropertyPath_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
