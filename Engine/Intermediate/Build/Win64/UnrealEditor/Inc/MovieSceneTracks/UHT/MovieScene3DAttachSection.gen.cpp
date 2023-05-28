// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieScene3DAttachSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachSection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	void UMovieScene3DAttachSection::StaticRegisterNativesUMovieScene3DAttachSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieScene3DAttachSection);
	UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister()
	{
		return UMovieScene3DAttachSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieScene3DAttachSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachComponentName;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFullRevertOnDetach_MetaData[];
#endif
		static void NewProp_bFullRevertOnDetach_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullRevertOnDetach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReAttachOnDetach_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReAttachOnDetach;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetachmentLocationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetachmentLocationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetachmentLocationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetachmentRotationRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetachmentRotationRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetachmentRotationRule;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DetachmentScaleRule_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetachmentScaleRule_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DetachmentScaleRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieScene3DAttachSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A 3D Attach section\n */" },
		{ "IncludePath", "Sections/MovieScene3DAttachSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
		{ "ToolTip", "A 3D Attach section" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachSocketName), METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName = { "AttachComponentName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachComponentName), METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	void Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_SetBit(void* Obj)
	{
		((UMovieScene3DAttachSection*)Obj)->bFullRevertOnDetach = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach = { "bFullRevertOnDetach", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieScene3DAttachSection), &Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach = { "ReAttachOnDetach", nullptr, (EPropertyFlags)0x0014000800082008, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, ReAttachOnDetach), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule = { "AttachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule = { "AttachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule = { "AttachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_MetaData)) }; // 1532071077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule = { "DetachmentLocationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentLocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_MetaData)) }; // 1263074275
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule = { "DetachmentRotationRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentRotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_MetaData)) }; // 1263074275
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule = { "DetachmentScaleRule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_MetaData)) }; // 1263074275
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachComponentName,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_bFullRevertOnDetach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_ReAttachOnDetach,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_AttachmentScaleRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentLocationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentRotationRule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieScene3DAttachSection_Statics::NewProp_DetachmentScaleRule,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister, (int32)VTABLE_OFFSET(UMovieScene3DAttachSection, IMovieSceneEntityProvider), false },  // 1947645787
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieScene3DAttachSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieScene3DAttachSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieScene3DAttachSection_Statics::ClassParams = {
		&UMovieScene3DAttachSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieScene3DAttachSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieScene3DAttachSection()
	{
		if (!Z_Registration_Info_UClass_UMovieScene3DAttachSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieScene3DAttachSection.OuterSingleton, Z_Construct_UClass_UMovieScene3DAttachSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieScene3DAttachSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieScene3DAttachSection>()
	{
		return UMovieScene3DAttachSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachSection);
	UMovieScene3DAttachSection::~UMovieScene3DAttachSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieScene3DAttachSection, UMovieScene3DAttachSection::StaticClass, TEXT("UMovieScene3DAttachSection"), &Z_Registration_Info_UClass_UMovieScene3DAttachSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieScene3DAttachSection), 1146398665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_225483145(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieScene3DAttachSection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
