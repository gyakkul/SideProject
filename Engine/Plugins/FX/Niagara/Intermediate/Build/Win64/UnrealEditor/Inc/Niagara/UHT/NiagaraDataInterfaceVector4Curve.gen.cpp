// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceVector4Curve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVector4Curve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceVector4Curve::StaticRegisterNativesUNiagaraDataInterfaceVector4Curve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVector4Curve);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_NoRegister()
	{
		return UNiagaraDataInterfaceVector4Curve::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WCurve;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WCurveCookedEditorCache;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Data Interface allowing sampling of vector curves. */" },
		{ "DisplayName", "Curve for Vector4's" },
		{ "IncludePath", "NiagaraDataInterfaceVector4Curve.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
		{ "ToolTip", "Data Interface allowing sampling of vector curves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, XCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, YCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurve = { "ZCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, ZCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurve = { "WCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, WCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurve_MetaData)) }; // 778017158
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurveCookedEditorCache = { "XCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, XCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurveCookedEditorCache = { "YCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, YCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurveCookedEditorCache = { "ZCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, ZCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector4Curve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurveCookedEditorCache = { "WCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector4Curve, WCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurveCookedEditorCache_MetaData)) }; // 778017158
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_XCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_YCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_ZCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::NewProp_WCurveCookedEditorCache,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVector4Curve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::ClassParams = {
		&UNiagaraDataInterfaceVector4Curve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVector4Curve>()
	{
		return UNiagaraDataInterfaceVector4Curve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVector4Curve);
	UNiagaraDataInterfaceVector4Curve::~UNiagaraDataInterfaceVector4Curve() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceVector4Curve)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVector4Curve, UNiagaraDataInterfaceVector4Curve::StaticClass, TEXT("UNiagaraDataInterfaceVector4Curve"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector4Curve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVector4Curve), 3562844956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h_2275316308(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector4Curve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
