// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ViewModels/Stack/NiagaraStackEntry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraStackEntry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEntry_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackErrorItem_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSpacer();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackSpacer_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStackIssueSeverity;
	static UEnum* EStackIssueSeverity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStackIssueSeverity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStackIssueSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("EStackIssueSeverity"));
		}
		return Z_Registration_Info_UEnum_EStackIssueSeverity.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<EStackIssueSeverity>()
	{
		return EStackIssueSeverity_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::Enumerators[] = {
		{ "EStackIssueSeverity::Error", (int64)EStackIssueSeverity::Error },
		{ "EStackIssueSeverity::Warning", (int64)EStackIssueSeverity::Warning },
		{ "EStackIssueSeverity::Info", (int64)EStackIssueSeverity::Info },
		{ "EStackIssueSeverity::CustomNote", (int64)EStackIssueSeverity::CustomNote },
		{ "EStackIssueSeverity::None", (int64)EStackIssueSeverity::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::Enum_MetaDataParams[] = {
		{ "CustomNote.Name", "EStackIssueSeverity::CustomNote" },
		{ "Error.Name", "EStackIssueSeverity::Error" },
		{ "Info.Name", "EStackIssueSeverity::Info" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEntry.h" },
		{ "None.Name", "EStackIssueSeverity::None" },
		{ "Warning.Name", "EStackIssueSeverity::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"EStackIssueSeverity",
		"EStackIssueSeverity",
		Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity()
	{
		if (!Z_Registration_Info_UEnum_EStackIssueSeverity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStackIssueSeverity.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_EStackIssueSeverity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStackIssueSeverity.InnerSingleton;
	}
	void UNiagaraStackEntry::StaticRegisterNativesUNiagaraStackEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackEntry);
	UClass* Z_Construct_UClass_UNiagaraStackEntry_NoRegister()
	{
		return UNiagaraStackEntry::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StackEditorData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ErrorChildren_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorChildren_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ErrorChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEntry.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEntry.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_StackEditorData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEntry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_StackEditorData = { "StackEditorData", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEntry, StackEditorData), Z_Construct_UClass_UNiagaraStackEditorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_StackEditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_StackEditorData_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraStackEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEntry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEntry, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren_Inner = { "ErrorChildren", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraStackErrorItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren_MetaData[] = {
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEntry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren = { "ErrorChildren", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraStackEntry, ErrorChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraStackEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_StackEditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraStackEntry_Statics::NewProp_ErrorChildren,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackEntry_Statics::ClassParams = {
		&UNiagaraStackEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraStackEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEntry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackEntry()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackEntry.OuterSingleton, Z_Construct_UClass_UNiagaraStackEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackEntry.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackEntry>()
	{
		return UNiagaraStackEntry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackEntry);
	UNiagaraStackEntry::~UNiagaraStackEntry() {}
	void UNiagaraStackSpacer::StaticRegisterNativesUNiagaraStackSpacer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraStackSpacer);
	UClass* Z_Construct_UClass_UNiagaraStackSpacer_NoRegister()
	{
		return UNiagaraStackSpacer::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraStackSpacer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraStackSpacer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraStackEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraStackSpacer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ViewModels/Stack/NiagaraStackEntry.h" },
		{ "ModuleRelativePath", "Public/ViewModels/Stack/NiagaraStackEntry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraStackSpacer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraStackSpacer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraStackSpacer_Statics::ClassParams = {
		&UNiagaraStackSpacer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraStackSpacer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraStackSpacer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraStackSpacer()
	{
		if (!Z_Registration_Info_UClass_UNiagaraStackSpacer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraStackSpacer.OuterSingleton, Z_Construct_UClass_UNiagaraStackSpacer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraStackSpacer.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraStackSpacer>()
	{
		return UNiagaraStackSpacer::StaticClass();
	}
	UNiagaraStackSpacer::UNiagaraStackSpacer() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraStackSpacer);
	UNiagaraStackSpacer::~UNiagaraStackSpacer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics::EnumInfo[] = {
		{ EStackIssueSeverity_StaticEnum, TEXT("EStackIssueSeverity"), &Z_Registration_Info_UEnum_EStackIssueSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2184409014U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraStackEntry, UNiagaraStackEntry::StaticClass, TEXT("UNiagaraStackEntry"), &Z_Registration_Info_UClass_UNiagaraStackEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackEntry), 1204420058U) },
		{ Z_Construct_UClass_UNiagaraStackSpacer, UNiagaraStackSpacer::StaticClass, TEXT("UNiagaraStackSpacer"), &Z_Registration_Info_UClass_UNiagaraStackSpacer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraStackSpacer), 1090474785U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_2243550182(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_ViewModels_Stack_NiagaraStackEntry_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
