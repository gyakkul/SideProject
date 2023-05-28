// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sections/MovieSceneCameraShakeSection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneCameraShakeSection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister();
	MOVIESCENETRACKS_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData;
class UScriptStruct* FMovieSceneCameraShakeSectionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, (UObject*)Z_Construct_UPackage__Script_MovieSceneTracks(), TEXT("MovieSceneCameraShakeSectionData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData.OuterSingleton;
}
template<> MOVIESCENETRACKS_API UScriptStruct* StaticStruct<FMovieSceneCameraShakeSectionData>()
{
	return FMovieSceneCameraShakeSectionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneCameraShakeSectionData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Class of the camera shake to play */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ToolTip", "Class of the camera shake to play" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, ShakeClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "Comment", "/** Scalar that affects shake intensity */" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ToolTip", "Scalar that affects shake intensity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, PlayScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_MetaData)) }; // 1413967709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneCameraShakeSectionData, UserDefinedPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlayScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewProp_UserDefinedPlaySpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
		nullptr,
		&NewStructOps,
		"MovieSceneCameraShakeSectionData",
		sizeof(FMovieSceneCameraShakeSectionData),
		alignof(FMovieSceneCameraShakeSectionData),
		Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData.InnerSingleton;
	}
	void UMovieSceneCameraShakeSection::StaticRegisterNativesUMovieSceneCameraShakeSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneCameraShakeSection);
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection_NoRegister()
	{
		return UMovieSceneCameraShakeSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShakeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShakeClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShakeClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedPlaySpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedPlaySpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "Sections/MovieSceneCameraShakeSection.h" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData_MetaData[] = {
		{ "Category", "Camera Shake" },
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData = { "ShakeData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, ShakeData), Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData_MetaData)) }; // 2923888832
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass = { "ShakeClass", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, ShakeClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale = { "PlayScale", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, PlayScale_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, PlaySpace_DEPRECATED), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_MetaData)) }; // 1413967709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sections/MovieSceneCameraShakeSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace = { "UserDefinedPlaySpace", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneCameraShakeSection, UserDefinedPlaySpace_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_ShakeClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlayScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_PlaySpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::NewProp_UserDefinedPlaySpace,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneCameraShakeSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::ClassParams = {
		&UMovieSceneCameraShakeSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneCameraShakeSection()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.OuterSingleton, Z_Construct_UClass_UMovieSceneCameraShakeSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneCameraShakeSection.OuterSingleton;
	}
	template<> MOVIESCENETRACKS_API UClass* StaticClass<UMovieSceneCameraShakeSection>()
	{
		return UMovieSceneCameraShakeSection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneCameraShakeSection);
	UMovieSceneCameraShakeSection::~UMovieSceneCameraShakeSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneCameraShakeSectionData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneCameraShakeSectionData_Statics::NewStructOps, TEXT("MovieSceneCameraShakeSectionData"), &Z_Registration_Info_UScriptStruct_MovieSceneCameraShakeSectionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneCameraShakeSectionData), 2923888832U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneCameraShakeSection, UMovieSceneCameraShakeSection::StaticClass, TEXT("UMovieSceneCameraShakeSection"), &Z_Registration_Info_UClass_UMovieSceneCameraShakeSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneCameraShakeSection), 3018872608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_1941590893(TEXT("/Script/MovieSceneTracks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneCameraShakeSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
