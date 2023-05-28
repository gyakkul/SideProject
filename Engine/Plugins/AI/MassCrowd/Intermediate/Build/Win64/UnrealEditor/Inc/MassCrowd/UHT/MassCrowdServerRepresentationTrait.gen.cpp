// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdServerRepresentationTrait.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdServerRepresentationTrait() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdServerRepresentationTrait();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdServerRepresentationTrait_NoRegister();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdServerRepresentationTrait::StaticRegisterNativesUMassCrowdServerRepresentationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdServerRepresentationTrait);
	UClass* Z_Construct_UClass_UMassCrowdServerRepresentationTrait_NoRegister()
	{
		return UMassCrowdServerRepresentationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TemplateActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Crowd Server Representation" },
		{ "IncludePath", "MassCrowdServerRepresentationTrait.h" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_TemplateActor_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Actor class of this agent when spawned on server */" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationTrait.h" },
		{ "ToolTip", "Actor class of this agent when spawned on server" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_TemplateActor = { "TemplateActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdServerRepresentationTrait, TemplateActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_TemplateActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_TemplateActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_Params_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Configuration parameters for the representation processor */" },
		{ "ModuleRelativePath", "Public/MassCrowdServerRepresentationTrait.h" },
		{ "ToolTip", "Configuration parameters for the representation processor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassCrowdServerRepresentationTrait, Params), Z_Construct_UScriptStruct_FMassRepresentationParameters, METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_Params_MetaData)) }; // 4265060599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_TemplateActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::NewProp_Params,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdServerRepresentationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::ClassParams = {
		&UMassCrowdServerRepresentationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdServerRepresentationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdServerRepresentationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdServerRepresentationTrait.OuterSingleton, Z_Construct_UClass_UMassCrowdServerRepresentationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdServerRepresentationTrait.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdServerRepresentationTrait>()
	{
		return UMassCrowdServerRepresentationTrait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdServerRepresentationTrait);
	UMassCrowdServerRepresentationTrait::~UMassCrowdServerRepresentationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdServerRepresentationTrait, UMassCrowdServerRepresentationTrait::StaticClass, TEXT("UMassCrowdServerRepresentationTrait"), &Z_Registration_Info_UClass_UMassCrowdServerRepresentationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdServerRepresentationTrait), 2894542109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationTrait_h_2541557363(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdServerRepresentationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
