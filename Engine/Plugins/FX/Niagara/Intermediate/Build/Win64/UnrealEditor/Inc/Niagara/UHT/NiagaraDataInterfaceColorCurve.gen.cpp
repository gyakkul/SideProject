// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceColorCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceColorCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceColorCurve();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCurveBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceColorCurve::StaticRegisterNativesUNiagaraDataInterfaceColorCurve()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceColorCurve);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_NoRegister()
	{
		return UNiagaraDataInterfaceColorCurve::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCurve;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GreenCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlueCurveCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaCurveCookedEditorCache;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::Class_MetaDataParams[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Data Interface allowing sampling of color curves. */" },
		{ "DisplayName", "Curve for Colors" },
		{ "IncludePath", "NiagaraDataInterfaceColorCurve.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
		{ "ToolTip", "Data Interface allowing sampling of color curves." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurve = { "RedCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, RedCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurve = { "GreenCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, GreenCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurve = { "BlueCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, BlueCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurve_MetaData[] = {
		{ "Category", "Curve" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurve = { "AlphaCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, AlphaCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurve_MetaData)) }; // 778017158
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurveCookedEditorCache = { "RedCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, RedCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurveCookedEditorCache = { "GreenCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, GreenCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurveCookedEditorCache = { "BlueCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, BlueCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurveCookedEditorCache_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurveCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceColorCurve.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurveCookedEditorCache = { "AlphaCurveCookedEditorCache", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceColorCurve, AlphaCurveCookedEditorCache), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurveCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurveCookedEditorCache_MetaData)) }; // 778017158
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurve,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_RedCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_GreenCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_BlueCurveCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::NewProp_AlphaCurveCookedEditorCache,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceColorCurve>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::ClassParams = {
		&UNiagaraDataInterfaceColorCurve::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceColorCurve()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceColorCurve.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceColorCurve.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceColorCurve_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceColorCurve.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceColorCurve>()
	{
		return UNiagaraDataInterfaceColorCurve::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceColorCurve);
	UNiagaraDataInterfaceColorCurve::~UNiagaraDataInterfaceColorCurve() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDataInterfaceColorCurve)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceColorCurve, UNiagaraDataInterfaceColorCurve::StaticClass, TEXT("UNiagaraDataInterfaceColorCurve"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceColorCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceColorCurve), 3232377395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_3265383064(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceColorCurve_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
