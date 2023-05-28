// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/ParameterSourcesFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterSourcesFloat() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange;
class UScriptStruct* FGizmoFloatParameterChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoFloatParameterChange, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoFloatParameterChange"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoFloatParameterChange>()
{
	return FGizmoFloatParameterChange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.\n * IGizmoFloatParameterSource implementations use this to track changes and emit delta information.\n */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "FGizmoVec2ParameterChange represents a change in the value of an IGizmoFloatParameterSource.\nIGizmoFloatParameterSource implementations use this to track changes and emit delta information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoFloatParameterChange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoFloatParameterChange, InitialValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoFloatParameterChange, CurrentValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewProp_CurrentValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"GizmoFloatParameterChange",
		sizeof(FGizmoFloatParameterChange),
		alignof(FGizmoFloatParameterChange),
		Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoFloatParameterChange()
	{
		if (!Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.InnerSingleton, Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange.InnerSingleton;
	}
	void UGizmoBaseFloatParameterSource::StaticRegisterNativesUGizmoBaseFloatParameterSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBaseFloatParameterSource);
	UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource_NoRegister()
	{
		return UGizmoBaseFloatParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,\n * which is not functional but adds an OnParameterChanged delegate for further subclasses.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesFloat.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "UGizmoBaseFloatParameterSource is a base implementation of IGizmoFloatParameterSource,\nwhich is not functional but adds an OnParameterChanged delegate for further subclasses." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoFloatParameterSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseFloatParameterSource, IGizmoFloatParameterSource), false },  // 918597738
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseFloatParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams = {
		&UGizmoBaseFloatParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoBaseFloatParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoBaseFloatParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseFloatParameterSource>()
	{
		return UGizmoBaseFloatParameterSource::StaticClass();
	}
	UGizmoBaseFloatParameterSource::UGizmoBaseFloatParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseFloatParameterSource);
	UGizmoBaseFloatParameterSource::~UGizmoBaseFloatParameterSource() {}
	void UGizmoLocalFloatParameterSource::StaticRegisterNativesUGizmoLocalFloatParameterSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLocalFloatParameterSource);
	UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource_NoRegister()
	{
		return UGizmoLocalFloatParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseFloatParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource\n * (by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter\n * and emits update events via the OnParameterChanged delegate.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesFloat.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
		{ "ToolTip", "UGizmoLocalFloatParameterSource is an implementation of IGizmoFloatParameterSource\n(by way of UGizmoBaseFloatParameterSource) which locally stores the relevant Parameter\nand emits update events via the OnParameterChanged delegate." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLocalFloatParameterSource, Value), METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesFloat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLocalFloatParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoFloatParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange_MetaData)) }; // 2655893966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::NewProp_LastChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLocalFloatParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams = {
		&UGizmoLocalFloatParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLocalFloatParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoLocalFloatParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLocalFloatParameterSource>()
	{
		return UGizmoLocalFloatParameterSource::StaticClass();
	}
	UGizmoLocalFloatParameterSource::UGizmoLocalFloatParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLocalFloatParameterSource);
	UGizmoLocalFloatParameterSource::~UGizmoLocalFloatParameterSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ScriptStructInfo[] = {
		{ FGizmoFloatParameterChange::StaticStruct, Z_Construct_UScriptStruct_FGizmoFloatParameterChange_Statics::NewStructOps, TEXT("GizmoFloatParameterChange"), &Z_Registration_Info_UScriptStruct_GizmoFloatParameterChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoFloatParameterChange), 2655893966U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBaseFloatParameterSource, UGizmoBaseFloatParameterSource::StaticClass, TEXT("UGizmoBaseFloatParameterSource"), &Z_Registration_Info_UClass_UGizmoBaseFloatParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBaseFloatParameterSource), 600974566U) },
		{ Z_Construct_UClass_UGizmoLocalFloatParameterSource, UGizmoLocalFloatParameterSource::StaticClass, TEXT("UGizmoLocalFloatParameterSource"), &Z_Registration_Info_UClass_UGizmoLocalFloatParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLocalFloatParameterSource), 1590676377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_4022755932(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesFloat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
