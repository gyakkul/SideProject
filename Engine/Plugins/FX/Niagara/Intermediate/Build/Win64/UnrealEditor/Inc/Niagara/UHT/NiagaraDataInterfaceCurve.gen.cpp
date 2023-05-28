// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurve_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceCurve::StaticRegisterNativesUNiagaraDataInterfaceCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCurve);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurve_NoRegister()
	{
		return UNiagaraDataInterfaceCurve::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveCookedEditorCache;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Data Interface allowing sampling of float curves. */" },
		{ "DisplayName", "Curve for Floats" },
		{ "IncludePath", "NiagaraDataInterfaceCurve.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurve.h" },
		{ "ToolTip", "Data Interface allowing sampling of float curves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceCurve, Curve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_Curve_MetaData)) }; // 778017158
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_CurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_CurveCookedEditorCache = { "CurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceCurve, CurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_CurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_CurveCookedEditorCache_MetaData)) }; // 778017158
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_Curve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::NewProp_CurveCookedEditorCache,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::ClassParams = {
		&UNiagaraDataInterfaceCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurve()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCurve>()
	{
		return UNiagaraDataInterfaceCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCurve);
	UNiagaraDataInterfaceCurve::~UNiagaraDataInterfaceCurve() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceCurve)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCurve, UNiagaraDataInterfaceCurve::StaticClass, TEXT("UNiagaraDataInterfaceCurve"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCurve), 338111003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_675234828(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
