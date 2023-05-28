// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/ParameterSourcesVec2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParameterSourcesVec2() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange;
class UScriptStruct* FGizmoVec2ParameterChange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("GizmoVec2ParameterChange"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FGizmoVec2ParameterChange>()
{
	return FGizmoVec2ParameterChange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.\n * IGizmoVec2ParameterSource implementations use this to track changes and emit delta information.\n */" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "FGizmoVec2ParameterChange represents a change in the value of an IGizmoVec2ParameterSource.\nIGizmoVec2ParameterSource implementations use this to track changes and emit delta information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoVec2ParameterChange>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue = { "InitialValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoVec2ParameterChange, InitialValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGizmoVec2ParameterChange, CurrentValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_InitialValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewProp_CurrentValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"GizmoVec2ParameterChange",
		sizeof(FGizmoVec2ParameterChange),
		alignof(FGizmoVec2ParameterChange),
		Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGizmoVec2ParameterChange()
	{
		if (!Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.InnerSingleton, Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange.InnerSingleton;
	}
	void UGizmoBaseVec2ParameterSource::StaticRegisterNativesUGizmoBaseVec2ParameterSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoBaseVec2ParameterSource);
	UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource_NoRegister()
	{
		return UGizmoBaseVec2ParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,\n * which is not functional but adds an OnParameterChanged delegate for further subclasses.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesVec2.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "UGizmoBaseVec2ParameterSource is a base implementation of IGizmoVec2ParameterSource,\nwhich is not functional but adds an OnParameterChanged delegate for further subclasses." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UGizmoVec2ParameterSource_NoRegister, (int32)VTABLE_OFFSET(UGizmoBaseVec2ParameterSource, IGizmoVec2ParameterSource), false },  // 252723469
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoBaseVec2ParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::ClassParams = {
		&UGizmoBaseVec2ParameterSource::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoBaseVec2ParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoBaseVec2ParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoBaseVec2ParameterSource>()
	{
		return UGizmoBaseVec2ParameterSource::StaticClass();
	}
	UGizmoBaseVec2ParameterSource::UGizmoBaseVec2ParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoBaseVec2ParameterSource);
	UGizmoBaseVec2ParameterSource::~UGizmoBaseVec2ParameterSource() {}
	void UGizmoLocalVec2ParameterSource::StaticRegisterNativesUGizmoLocalVec2ParameterSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoLocalVec2ParameterSource);
	UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource_NoRegister()
	{
		return UGizmoLocalVec2ParameterSource::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastChange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastChange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoBaseVec2ParameterSource,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource \n * (by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter\n * and emits update events via the OnParameterChanged delegate.\n */" },
		{ "IncludePath", "BaseGizmos/ParameterSourcesVec2.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
		{ "ToolTip", "UGizmoBaseVec2ParameterSource is an implementation of IGizmoVec2ParameterSource\n(by way of UGizmoBaseVec2ParameterSource) which locally stores the relevant Parameter\nand emits update events via the OnParameterChanged delegate." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLocalVec2ParameterSource, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange_MetaData[] = {
		{ "ModuleRelativePath", "Public/BaseGizmos/ParameterSourcesVec2.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange = { "LastChange", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoLocalVec2ParameterSource, LastChange), Z_Construct_UScriptStruct_FGizmoVec2ParameterChange, METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange_MetaData)) }; // 1174370331
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::NewProp_LastChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoLocalVec2ParameterSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::ClassParams = {
		&UGizmoLocalVec2ParameterSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoLocalVec2ParameterSource()
	{
		if (!Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.OuterSingleton, Z_Construct_UClass_UGizmoLocalVec2ParameterSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoLocalVec2ParameterSource>()
	{
		return UGizmoLocalVec2ParameterSource::StaticClass();
	}
	UGizmoLocalVec2ParameterSource::UGizmoLocalVec2ParameterSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoLocalVec2ParameterSource);
	UGizmoLocalVec2ParameterSource::~UGizmoLocalVec2ParameterSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ScriptStructInfo[] = {
		{ FGizmoVec2ParameterChange::StaticStruct, Z_Construct_UScriptStruct_FGizmoVec2ParameterChange_Statics::NewStructOps, TEXT("GizmoVec2ParameterChange"), &Z_Registration_Info_UScriptStruct_GizmoVec2ParameterChange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoVec2ParameterChange), 1174370331U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoBaseVec2ParameterSource, UGizmoBaseVec2ParameterSource::StaticClass, TEXT("UGizmoBaseVec2ParameterSource"), &Z_Registration_Info_UClass_UGizmoBaseVec2ParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoBaseVec2ParameterSource), 3830538611U) },
		{ Z_Construct_UClass_UGizmoLocalVec2ParameterSource, UGizmoLocalVec2ParameterSource::StaticClass, TEXT("UGizmoLocalVec2ParameterSource"), &Z_Registration_Info_UClass_UGizmoLocalVec2ParameterSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoLocalVec2ParameterSource), 3624478821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_393865351(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_ParameterSourcesVec2_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
