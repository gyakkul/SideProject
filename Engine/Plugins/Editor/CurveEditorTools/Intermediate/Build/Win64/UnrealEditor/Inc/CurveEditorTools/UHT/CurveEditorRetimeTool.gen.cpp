// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tools/CurveEditorRetimeTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorRetimeTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CURVEEDITORTOOLS_API UClass* Z_Construct_UClass_UCurveEditorRetimeToolData();
	CURVEEDITORTOOLS_API UClass* Z_Construct_UClass_UCurveEditorRetimeToolData_NoRegister();
	CURVEEDITORTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor();
	UPackage* Z_Construct_UPackage__Script_CurveEditorTools();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor;
class UScriptStruct* FCurveEditorRetimeAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor, (UObject*)Z_Construct_UPackage__Script_CurveEditorTools(), TEXT("CurveEditorRetimeAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor.OuterSingleton;
}
template<> CURVEEDITORTOOLS_API UScriptStruct* StaticStruct<FCurveEditorRetimeAnchor>()
{
	return FCurveEditorRetimeAnchor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueInSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ValueInSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelected_MetaData[];
#endif
		static void NewProp_bIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tools/CurveEditorRetimeTool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveEditorRetimeAnchor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_ValueInSeconds_MetaData[] = {
		{ "Comment", "/** The time on the Timeline that this anchor is anchored at. */" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorRetimeTool.h" },
		{ "ToolTip", "The time on the Timeline that this anchor is anchored at." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_ValueInSeconds = { "ValueInSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCurveEditorRetimeAnchor, ValueInSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_ValueInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_ValueInSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected_MetaData[] = {
		{ "Comment", "/** Is this anchor currently selected? */" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorRetimeTool.h" },
		{ "ToolTip", "Is this anchor currently selected?" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected_SetBit(void* Obj)
	{
		((FCurveEditorRetimeAnchor*)Obj)->bIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected = { "bIsSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FCurveEditorRetimeAnchor), &Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_ValueInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewProp_bIsSelected,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditorTools,
		nullptr,
		&NewStructOps,
		"CurveEditorRetimeAnchor",
		sizeof(FCurveEditorRetimeAnchor),
		alignof(FCurveEditorRetimeAnchor),
		Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor()
	{
		if (!Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor.InnerSingleton, Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor.InnerSingleton;
	}
	void UCurveEditorRetimeToolData::StaticRegisterNativesUCurveEditorRetimeToolData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorRetimeToolData);
	UClass* Z_Construct_UClass_UCurveEditorRetimeToolData_NoRegister()
	{
		return UCurveEditorRetimeToolData::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorRetimeToolData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetimingAnchors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetimingAnchors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RetimingAnchors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/CurveEditorRetimeTool.h" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorRetimeTool.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors_Inner = { "RetimingAnchors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor, METADATA_PARAMS(nullptr, 0) }; // 4107483081
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors_MetaData[] = {
		{ "Comment", "// List of anchor points. Assumes they're in order from lowest input time to greatest.\n" },
		{ "ModuleRelativePath", "Private/Tools/CurveEditorRetimeTool.h" },
		{ "ToolTip", "List of anchor points. Assumes they're in order from lowest input time to greatest." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors = { "RetimingAnchors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorRetimeToolData, RetimingAnchors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors_MetaData)) }; // 4107483081
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::NewProp_RetimingAnchors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorRetimeToolData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::ClassParams = {
		&UCurveEditorRetimeToolData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorRetimeToolData()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorRetimeToolData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorRetimeToolData.OuterSingleton, Z_Construct_UClass_UCurveEditorRetimeToolData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorRetimeToolData.OuterSingleton;
	}
	template<> CURVEEDITORTOOLS_API UClass* StaticClass<UCurveEditorRetimeToolData>()
	{
		return UCurveEditorRetimeToolData::StaticClass();
	}
	UCurveEditorRetimeToolData::UCurveEditorRetimeToolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorRetimeToolData);
	UCurveEditorRetimeToolData::~UCurveEditorRetimeToolData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics::ScriptStructInfo[] = {
		{ FCurveEditorRetimeAnchor::StaticStruct, Z_Construct_UScriptStruct_FCurveEditorRetimeAnchor_Statics::NewStructOps, TEXT("CurveEditorRetimeAnchor"), &Z_Registration_Info_UScriptStruct_CurveEditorRetimeAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveEditorRetimeAnchor), 4107483081U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorRetimeToolData, UCurveEditorRetimeToolData::StaticClass, TEXT("UCurveEditorRetimeToolData"), &Z_Registration_Info_UClass_UCurveEditorRetimeToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorRetimeToolData), 22528165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_1421350684(TEXT("/Script/CurveEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_CurveEditorTools_Source_CurveEditorTools_Private_Tools_CurveEditorRetimeTool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
