// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneObjectBindingID() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MOVIESCENE_API UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace;
	static UEnum* EMovieSceneObjectBindingSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("EMovieSceneObjectBindingSpace"));
		}
		return Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.OuterSingleton;
	}
	template<> MOVIESCENE_API UEnum* StaticEnum<EMovieSceneObjectBindingSpace>()
	{
		return EMovieSceneObjectBindingSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::Enumerators[] = {
		{ "EMovieSceneObjectBindingSpace::Local", (int64)EMovieSceneObjectBindingSpace::Local },
		{ "EMovieSceneObjectBindingSpace::Root", (int64)EMovieSceneObjectBindingSpace::Root },
		{ "EMovieSceneObjectBindingSpace::Unused", (int64)EMovieSceneObjectBindingSpace::Unused },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enumeration specifying how a movie scene object binding ID relates to the sequence */" },
		{ "Local.Comment", "/** The object binding sequence ID resolves from a local sequence (ie, it may need to accumulate a parent sequence ID before it resolves correctly) */" },
		{ "Local.Name", "EMovieSceneObjectBindingSpace::Local" },
		{ "Local.ToolTip", "The object binding sequence ID resolves from a local sequence (ie, it may need to accumulate a parent sequence ID before it resolves correctly)" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "Root.Comment", "/** The object binding sequence ID resolves from the root of the sequence */" },
		{ "Root.Name", "EMovieSceneObjectBindingSpace::Root" },
		{ "Root.ToolTip", "The object binding sequence ID resolves from the root of the sequence" },
		{ "ToolTip", "Enumeration specifying how a movie scene object binding ID relates to the sequence" },
		{ "Unused.Comment", "/** Default value for any newly-constructed bindings */" },
		{ "Unused.Hidden", "" },
		{ "Unused.Name", "EMovieSceneObjectBindingSpace::Unused" },
		{ "Unused.ToolTip", "Default value for any newly-constructed bindings" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		"EMovieSceneObjectBindingSpace",
		"EMovieSceneObjectBindingSpace",
		Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace()
	{
		if (!Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.InnerSingleton, Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID;
class UScriptStruct* FMovieSceneObjectBindingID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, (UObject*)Z_Construct_UPackage__Script_MovieScene(), TEXT("MovieSceneObjectBindingID"));
	}
	return Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID.OuterSingleton;
}
template<> MOVIESCENE_API UScriptStruct* StaticStruct<FMovieSceneObjectBindingID>()
{
	return FMovieSceneObjectBindingID::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolveParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolveParentIndex;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Persistent identifier to a specific object binding within a sequence hierarchy.\n * \n * Binding IDs come in 3 flavors with Local and External being preferred as they are reslilient towards sequences being authored in isolation or included in other root sequences:\n *     Local: (ResolveParentIndex == 0) SequenceID relates to _this sequence's_ local hierarchy; represents an object binding within the same sequence as the ID is resolved, or inside one of its sub-sequences. Sequence ID must be remapped at runtime.\n *     External: (ResolveParentIndex > 0) SequenceID is local to the parent sequence of this one denoted by the parent index (ie, 1 = parent, 2 = grandparent etc). Sequence ID must be remapped at runtime.\n *     Fixed: Represents a binding anywhere in the sequence; always resolved from the root sequence.\n *\n * Fixed bindings will break if the sequence is evaluated inside a different root sequence.\n */" },
		{ "HasNativeMake", "" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "Persistent identifier to a specific object binding within a sequence hierarchy.\n\nBinding IDs come in 3 flavors with Local and External being preferred as they are reslilient towards sequences being authored in isolation or included in other root sequences:\n    Local: (ResolveParentIndex == 0) SequenceID relates to _this sequence's_ local hierarchy; represents an object binding within the same sequence as the ID is resolved, or inside one of its sub-sequences. Sequence ID must be remapped at runtime.\n    External: (ResolveParentIndex > 0) SequenceID is local to the parent sequence of this one denoted by the parent index (ie, 1 = parent, 2 = grandparent etc). Sequence ID must be remapped at runtime.\n    Fixed: Represents a binding anywhere in the sequence; always resolved from the root sequence.\n\nFixed bindings will break if the sequence is evaluated inside a different root sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovieSceneObjectBindingID>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid_MetaData[] = {
		{ "Category", "Binding" },
		{ "Comment", "/** Identifier for the object binding within the sequence */" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "Identifier for the object binding within the sequence" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID_MetaData[] = {
		{ "Comment", "/** Sequence ID stored as an int32 so that it can be used in the blueprint VM */" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "Sequence ID stored as an int32 so that it can be used in the blueprint VM" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID = { "SequenceID", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, SequenceID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_ResolveParentIndex_MetaData[] = {
		{ "Comment", "/** The parent index to resolve the sequence ID from. 0 signifies the sequence this binding ID is serialized within, -1 signifies the root sequence (previously EMovieSceneObjectBindingSpace::Root) */" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "The parent index to resolve the sequence ID from. 0 signifies the sequence this binding ID is serialized within, -1 signifies the root sequence (previously EMovieSceneObjectBindingSpace::Root)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_ResolveParentIndex = { "ResolveParentIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, ResolveParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_ResolveParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_ResolveParentIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_MetaData[] = {
		{ "Comment", "/** DEPRECATED: The binding's resolution space */" },
		{ "ModuleRelativePath", "Public/MovieSceneObjectBindingID.h" },
		{ "ToolTip", "DEPRECATED: The binding's resolution space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMovieSceneObjectBindingID, Space_DEPRECATED), Z_Construct_UEnum_MovieScene_EMovieSceneObjectBindingSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_MetaData)) }; // 3772622621
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_SequenceID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_ResolveParentIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewProp_Space,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
		nullptr,
		&NewStructOps,
		"MovieSceneObjectBindingID",
		sizeof(FMovieSceneObjectBindingID),
		alignof(FMovieSceneObjectBindingID),
		Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID()
	{
		if (!Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID.InnerSingleton, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics::EnumInfo[] = {
		{ EMovieSceneObjectBindingSpace_StaticEnum, TEXT("EMovieSceneObjectBindingSpace"), &Z_Registration_Info_UEnum_EMovieSceneObjectBindingSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3772622621U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics::ScriptStructInfo[] = {
		{ FMovieSceneObjectBindingID::StaticStruct, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID_Statics::NewStructOps, TEXT("MovieSceneObjectBindingID"), &Z_Registration_Info_UScriptStruct_MovieSceneObjectBindingID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovieSceneObjectBindingID), 1341447431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_1698847734(TEXT("/Script/MovieScene"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieScene_Public_MovieSceneObjectBindingID_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
