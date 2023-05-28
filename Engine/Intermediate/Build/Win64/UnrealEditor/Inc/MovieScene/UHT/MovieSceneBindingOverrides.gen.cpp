// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneBindingOverrides.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneBindingOverrides() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData;
class UScriptStruct* FMovieSceneBindingOverrideData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneBindingOverrideData"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneBindingOverrideData>()
{
	return FMovieSceneBindingOverrideData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectBindingId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectBindingId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverridesDefault_MetaData[];
#endif
		static void NewProp_bOverridesDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridesDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Movie scene binding override data */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Movie scene binding override data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneBindingOverrideData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies the object binding to override. */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies the object binding to override." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId = { "ObjectBindingId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBindingOverrideData, ObjectBindingId), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId_MetaData)) }; // 1341447431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies the object to override the binding with. */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies the object to override the binding with." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneBindingOverrideData, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true). */" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "Specifies whether the default assignment should remain bound (false) or if this should completely override the default binding (true)." },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit(void* Obj)
	{
		((FMovieSceneBindingOverrideData*)Obj)->bOverridesDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault = { "bOverridesDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieSceneBindingOverrideData), &Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_ObjectBindingId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewProp_bOverridesDefault,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneBindingOverrideData",
		sizeof(FMovieSceneBindingOverrideData),
		alignof(FMovieSceneBindingOverrideData),
		Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData.InnerSingleton;
	}
	void UMovieSceneBindingOverrides::StaticRegisterNativesUMovieSceneBindingOverrides()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneBindingOverrides);
	UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister()
	{
		return UMovieSceneBindingOverrides::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneBindingOverrides_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BindingData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A one-to-many definition of movie scene object binding IDs to overridden objects that should be bound to that binding.\n */" },
		{ "IncludePath", "MovieSceneBindingOverrides.h" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A one-to-many definition of movie scene object binding IDs to overridden objects that should be bound to that binding." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_Inner = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData, METADATA_PARAMS(nullptr, 0) }; // 822277652
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** The actual binding data */" },
		{ "DisplayName", "Binding Overrides" },
		{ "ModuleRelativePath", "Public/MovieSceneBindingOverrides.h" },
		{ "ToolTip", "The actual binding data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneBindingOverrides, BindingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_MetaData)) }; // 822277652
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::NewProp_BindingData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneBindingOverrides>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams = {
		&UMovieSceneBindingOverrides::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneBindingOverrides()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton, Z_Construct_UClass_UMovieSceneBindingOverrides_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneBindingOverrides.OuterSingleton;
	}
	template<> MOVIESCENE_API UClass* StaticClass<UMovieSceneBindingOverrides>()
	{
		return UMovieSceneBindingOverrides::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneBindingOverrides);
	UMovieSceneBindingOverrides::~UMovieSceneBindingOverrides() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneBindingOverrideData::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneBindingOverrideData_Statics::NewStructOps, TEXT("MovieSceneBindingOverrideData"), &Z_Registration_Info_UScriptStruct_MovieSceneBindingOverrideData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneBindingOverrideData), 822277652U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneBindingOverrides, UMovieSceneBindingOverrides::StaticClass, TEXT("UMovieSceneBindingOverrides"), &Z_Registration_Info_UClass_UMovieSceneBindingOverrides, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneBindingOverrides), 4147514259U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_113791902(TEXT("/Script/MovieScene"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneBindingOverrides_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
