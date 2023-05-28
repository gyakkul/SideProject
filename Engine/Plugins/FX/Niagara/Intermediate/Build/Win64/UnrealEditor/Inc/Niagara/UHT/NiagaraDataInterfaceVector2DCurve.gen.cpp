// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceVector2DCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVector2DCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceVector2DCurve::StaticRegisterNativesUNiagaraDataInterfaceVector2DCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVector2DCurve);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_NoRegister()
	{
		return UNiagaraDataInterfaceVector2DCurve::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics
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
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_XCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_YCurveCookedEditorCache;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Data Interface allowing sampling of vector curves. */" },
		{ "DisplayName", "Curve for Vector2D's" },
		{ "IncludePath", "NiagaraDataInterfaceVector2DCurve.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector2DCurve.h" },
		{ "ToolTip", "Data Interface allowing sampling of vector curves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector2DCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurve = { "XCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector2DCurve, XCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector2DCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurve = { "YCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector2DCurve, YCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurve_MetaData)) }; // 778017158
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector2DCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurveCookedEditorCache = { "XCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector2DCurve, XCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVector2DCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurveCookedEditorCache = { "YCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVector2DCurve, YCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurveCookedEditorCache_MetaData)) }; // 778017158
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_XCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::NewProp_YCurveCookedEditorCache,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVector2DCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::ClassParams = {
		&UNiagaraDataInterfaceVector2DCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVector2DCurve>()
	{
		return UNiagaraDataInterfaceVector2DCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVector2DCurve);
	UNiagaraDataInterfaceVector2DCurve::~UNiagaraDataInterfaceVector2DCurve() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceVector2DCurve)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVector2DCurve, UNiagaraDataInterfaceVector2DCurve::StaticClass, TEXT("UNiagaraDataInterfaceVector2DCurve"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVector2DCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVector2DCurve), 3687140064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h_3749066557(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVector2DCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
