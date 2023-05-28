// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScenePropertyBinding() {}
// Cross Module References
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding;
class UScriptStruct* FMovieScenePropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieScenePropertyBinding, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieScenePropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieScenePropertyBinding>()
{
	return FMovieScenePropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseClassLookup_MetaData[];
#endif
		static void NewProp_bCanUseClassLookup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseClassLookup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Source property binding information for an entity on a moviescene timeline\n * Comprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup\n */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Source property binding information for an entity on a moviescene timeline\nComprises a leaf property name and a path and a cached boolean signifying whether the binding is allowed to perform a fast class-wise property lookup" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieScenePropertyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Leaf name of the property to animate */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Leaf name of the property to animate" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePropertyBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Comment", "/** Full path to the property from the object including struct and array indirection */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "Full path to the property from the object including struct and array indirection" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieScenePropertyBinding, PropertyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_MetaData[] = {
		{ "Comment", "/** True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise */" },
		{ "ModuleRelativePath", "Public/EntitySystem/MovieScenePropertyBinding.h" },
		{ "ToolTip", "True if this property can be considered for fast property offset resolution(ie the property address is _always_ a constant offset from the obejct ptr), false otherwise" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit(void* Obj)
	{
		((FMovieScenePropertyBinding*)Obj)->bCanUseClassLookup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup = { "bCanUseClassLookup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMovieScenePropertyBinding), &Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_PropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewProp_bCanUseClassLookup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieScenePropertyBinding",
		sizeof(FMovieScenePropertyBinding),
		alignof(FMovieScenePropertyBinding),
		Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieScenePropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics::ScriptStructInfo[] = {
		{ FMovieScenePropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FMovieScenePropertyBinding_Statics::NewStructOps, TEXT("MovieScenePropertyBinding"), &Z_Registration_Info_UScriptStruct_MovieScenePropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieScenePropertyBinding), 3954660747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_277711983(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_EntitySystem_MovieScenePropertyBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
