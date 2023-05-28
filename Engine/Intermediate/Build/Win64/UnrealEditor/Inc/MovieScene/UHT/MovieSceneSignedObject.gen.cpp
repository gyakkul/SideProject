// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneSignedObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneSignedObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	void UMovieSceneSignedObject::StaticRegisterNativesUMovieSceneSignedObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneSignedObject);
	UClass* Z_Construct_UClass_UMovieSceneSignedObject_NoRegister()
	{
		return UMovieSceneSignedObject::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneSignedObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Signature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Signature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneSignedObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSignedObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// namespace UE\n" },
		{ "IncludePath", "MovieSceneSignedObject.h" },
		{ "ModuleRelativePath", "Public/MovieSceneSignedObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "namespace UE" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature_MetaData[] = {
		{ "Comment", "/** Unique generation signature */" },
		{ "ModuleRelativePath", "Public/MovieSceneSignedObject.h" },
		{ "ToolTip", "Unique generation signature" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature = { "Signature", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneSignedObject, Signature), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneSignedObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneSignedObject_Statics::NewProp_Signature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneSignedObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneSignedObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneSignedObject_Statics::ClassParams = {
		&UMovieSceneSignedObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneSignedObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSignedObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneSignedObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneSignedObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneSignedObject()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneSignedObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneSignedObject.OuterSingleton, Z_Construct_UClass_UMovieSceneSignedObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneSignedObject.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneSignedObject>()
	{
		return UMovieSceneSignedObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneSignedObject);
	UMovieSceneSignedObject::~UMovieSceneSignedObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneSignedObject, UMovieSceneSignedObject::StaticClass, TEXT("UMovieSceneSignedObject"), &Z_Registration_Info_UClass_UMovieSceneSignedObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneSignedObject), 988760914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_2967064996(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneSignedObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
