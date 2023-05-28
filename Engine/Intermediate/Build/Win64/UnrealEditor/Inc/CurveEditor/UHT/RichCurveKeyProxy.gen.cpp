// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RichCurveKeyProxy.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRichCurveKeyProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();
	CURVEEDITOR_API UClass* Z_Construct_UClass_URichCurveKeyProxy();
	CURVEEDITOR_API UClass* Z_Construct_UClass_URichCurveKeyProxy_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void URichCurveKeyProxy::StaticRegisterNativesURichCurveKeyProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URichCurveKeyProxy);
	UClass* Z_Construct_UClass_URichCurveKeyProxy_NoRegister()
	{
		return URichCurveKeyProxy::StaticClass();
	}
	struct Z_Construct_UClass_URichCurveKeyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URichCurveKeyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichCurveKeyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RichCurveKeyProxy.h" },
		{ "ModuleRelativePath", "Private/RichCurveKeyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URichCurveKeyProxy_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick */" },
		{ "ModuleRelativePath", "Private/RichCurveKeyProxy.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URichCurveKeyProxy_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URichCurveKeyProxy, Value), Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(Z_Construct_UClass_URichCurveKeyProxy_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URichCurveKeyProxy_Statics::NewProp_Value_MetaData)) }; // 2110700958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URichCurveKeyProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URichCurveKeyProxy_Statics::NewProp_Value,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URichCurveKeyProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister, (int32)VTABLE_OFFSET(URichCurveKeyProxy, ICurveEditorKeyProxy), false },  // 626884676
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URichCurveKeyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URichCurveKeyProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URichCurveKeyProxy_Statics::ClassParams = {
		&URichCurveKeyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URichCurveKeyProxy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URichCurveKeyProxy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URichCurveKeyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URichCurveKeyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URichCurveKeyProxy()
	{
		if (!Z_Registration_Info_UClass_URichCurveKeyProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URichCurveKeyProxy.OuterSingleton, Z_Construct_UClass_URichCurveKeyProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URichCurveKeyProxy.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<URichCurveKeyProxy>()
	{
		return URichCurveKeyProxy::StaticClass();
	}
	URichCurveKeyProxy::URichCurveKeyProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URichCurveKeyProxy);
	URichCurveKeyProxy::~URichCurveKeyProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URichCurveKeyProxy, URichCurveKeyProxy::StaticClass, TEXT("URichCurveKeyProxy"), &Z_Registration_Info_UClass_URichCurveKeyProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URichCurveKeyProxy), 67887951U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_4173398176(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_RichCurveKeyProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
