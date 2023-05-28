// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraStackEditorData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackEditorData() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraStackEditorData::StaticRegisterNativesUNiagaraStackEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEditorData);
	UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister()
	{
		return UNiagaraStackEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideDisabledModules_MetaData[];
#endif
		static void NewProp_bHideDisabledModules_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideDisabledModules;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StackEntryKeyToExpandedMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToExpandedMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToExpandedMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToExpandedMap;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StackEntryKeyToExpandedOverviewMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToExpandedOverviewMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToExpandedOverviewMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToExpandedOverviewMap;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FTextPropertyParams NewProp_StackEntryKeyToDisplayName_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_StackEntryKeyToDisplayName_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEntryKeyToDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_StackEntryKeyToDisplayName;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_DismissedStackIssueIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DismissedStackIssueIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DismissedStackIssueIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEditorDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor only UI data for emitters. */" },
		{ "IncludePath", "NiagaraStackEditorData.h" },
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
		{ "ToolTip", "Editor only UI data for emitters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_SetBit(void* Obj)
	{
		((UNiagaraStackEditorData*)Obj)->bHideDisabledModules = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules = { "bHideDisabledModules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraStackEditorData), &Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_ValueProp = { "StackEntryKeyToExpandedMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_Key_KeyProp = { "StackEntryKeyToExpandedMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap = { "StackEntryKeyToExpandedMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToExpandedMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_ValueProp = { "StackEntryKeyToExpandedOverviewMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_Key_KeyProp = { "StackEntryKeyToExpandedOverviewMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap = { "StackEntryKeyToExpandedOverviewMap", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToExpandedOverviewMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_ValueProp = { "StackEntryKeyToDisplayName", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_Key_KeyProp = { "StackEntryKeyToDisplayName_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName = { "StackEntryKeyToDisplayName", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEditorData, StackEntryKeyToDisplayName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_Inner = { "DismissedStackIssueIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraStackEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds = { "DismissedStackIssueIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEditorData, DismissedStackIssueIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_bHideDisabledModules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToExpandedOverviewMap,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_StackEntryKeyToDisplayName,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEditorData_Statics::NewProp_DismissedStackIssueIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEditorData_Statics::ClassParams = {
		&UNiagaraStackEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEditorData()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEditorData.OuterSingleton, Z_Construct_UClass_UNiagaraStackEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEditorData.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEditorData>()
	{
		return UNiagaraStackEditorData::StaticClass();
	}
	UNiagaraStackEditorData::UNiagaraStackEditorData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEditorData);
	UNiagaraStackEditorData::~UNiagaraStackEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackEditorData, UNiagaraStackEditorData::StaticClass, TEXT("UNiagaraStackEditorData"), &Z_Registration_Info_UClass_UNiagaraStackEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEditorData), 4270218856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_1756922505(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraStackEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
