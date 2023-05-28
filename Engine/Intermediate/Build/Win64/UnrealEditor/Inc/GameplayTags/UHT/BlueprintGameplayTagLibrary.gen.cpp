// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintGameplayTagLibrary.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintGameplayTagLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister();
	GAMEPLAYTAGS_API UClass* Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagQuery();
	UPackage* Z_Construct_UPackage__Script_GameplayTags();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(Z_Param_GameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTagContainer)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execNotEqual_TagContainerTagContainer)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_A);
		P_GET_PROPERTY(FStrProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execNotEqual_TagTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_A);
		P_GET_PROPERTY(FStrProperty,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_TagTag(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execDoesTagAssetInterfaceHaveTag)
	{
		P_GET_TINTERFACE(IGameplayTagAssetInterface,Z_Param_TagContainerInterface);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(Z_Param_TagContainerInterface,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execHasAllMatchingGameplayTags)
	{
		P_GET_TINTERFACE(IGameplayTagAssetInterface,Z_Param_TagContainerInterface);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(Z_Param_TagContainerInterface,Z_Param_Out_OtherContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery)
	{
		P_GET_STRUCT(FGameplayTagQuery,Z_Param_TagQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagQuery*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(Z_Param_TagQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execBreakGameplayTagContainer)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_GameplayTagContainer);
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_GameplayTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(Z_Param_Out_GameplayTagContainer,Z_Param_Out_GameplayTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_SingleTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(Z_Param_SingleTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromArray)
	{
		P_GET_TARRAY_REF(FGameplayTag,Z_Param_Out_GameplayTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(Z_Param_Out_GameplayTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTagContainer)
	{
		P_GET_STRUCT(FGameplayTagContainer,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execNotEqual_GameplayTagContainer)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_A);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTagContainer)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_A);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execAppendGameplayTagContainers)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InOutTagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InTagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(Z_Param_Out_InOutTagContainer,Z_Param_Out_InTagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execRemoveGameplayTag)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::RemoveGameplayTag(Z_Param_Out_TagContainer,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execAddGameplayTag)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintGameplayTagLibrary::AddGameplayTag(Z_Param_Out_TagContainer,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execGetAllActorsOfClassMatchingTagQuery)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_GameplayTagQuery);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(Z_Param_WorldContextObject,Z_Param_ActorClass,Z_Param_Out_GameplayTagQuery,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execDoesContainerMatchTagQuery)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(Z_Param_Out_TagContainer,Z_Param_Out_TagQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execIsTagQueryEmpty)
	{
		P_GET_STRUCT_REF(FGameplayTagQuery,Z_Param_Out_TagQuery);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::IsTagQueryEmpty(Z_Param_Out_TagQuery);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execHasAllTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAllTags(Z_Param_Out_TagContainer,Z_Param_Out_OtherContainer,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execHasAnyTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasAnyTags(Z_Param_Out_TagContainer,Z_Param_Out_OtherContainer,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execHasTag)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::HasTag(Z_Param_Out_TagContainer,Z_Param_Tag,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execGetNumGameplayTagsInContainer)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_TagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(Z_Param_Out_TagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execGetTagName)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_GameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UBlueprintGameplayTagLibrary::GetTagName(Z_Param_Out_GameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execIsGameplayTagValid)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_GameplayTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::IsGameplayTagValid(Z_Param_GameplayTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execNotEqual_GameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_A);
		P_GET_STRUCT(FGameplayTag,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_A);
		P_GET_STRUCT(FGameplayTag,Z_Param_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(Z_Param_A,Z_Param_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMatchesAnyTags)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagOne);
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OtherContainer);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::MatchesAnyTags(Z_Param_TagOne,Z_Param_Out_OtherContainer,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintGameplayTagLibrary::execMatchesTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_TagOne);
		P_GET_STRUCT(FGameplayTag,Z_Param_TagTwo);
		P_GET_UBOOL(Z_Param_bExactMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintGameplayTagLibrary::MatchesTag(Z_Param_TagOne,Z_Param_TagTwo,Z_Param_bExactMatch);
		P_NATIVE_END;
	}
	void UBlueprintGameplayTagLibrary::StaticRegisterNativesUBlueprintGameplayTagLibrary()
	{
		UClass* Class = UBlueprintGameplayTagLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameplayTag", &UBlueprintGameplayTagLibrary::execAddGameplayTag },
			{ "AppendGameplayTagContainers", &UBlueprintGameplayTagLibrary::execAppendGameplayTagContainers },
			{ "BreakGameplayTagContainer", &UBlueprintGameplayTagLibrary::execBreakGameplayTagContainer },
			{ "DoesContainerMatchTagQuery", &UBlueprintGameplayTagLibrary::execDoesContainerMatchTagQuery },
			{ "DoesTagAssetInterfaceHaveTag", &UBlueprintGameplayTagLibrary::execDoesTagAssetInterfaceHaveTag },
			{ "EqualEqual_GameplayTag", &UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTag },
			{ "EqualEqual_GameplayTagContainer", &UBlueprintGameplayTagLibrary::execEqualEqual_GameplayTagContainer },
			{ "GetAllActorsOfClassMatchingTagQuery", &UBlueprintGameplayTagLibrary::execGetAllActorsOfClassMatchingTagQuery },
			{ "GetDebugStringFromGameplayTag", &UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTag },
			{ "GetDebugStringFromGameplayTagContainer", &UBlueprintGameplayTagLibrary::execGetDebugStringFromGameplayTagContainer },
			{ "GetNumGameplayTagsInContainer", &UBlueprintGameplayTagLibrary::execGetNumGameplayTagsInContainer },
			{ "GetTagName", &UBlueprintGameplayTagLibrary::execGetTagName },
			{ "HasAllMatchingGameplayTags", &UBlueprintGameplayTagLibrary::execHasAllMatchingGameplayTags },
			{ "HasAllTags", &UBlueprintGameplayTagLibrary::execHasAllTags },
			{ "HasAnyTags", &UBlueprintGameplayTagLibrary::execHasAnyTags },
			{ "HasTag", &UBlueprintGameplayTagLibrary::execHasTag },
			{ "IsGameplayTagValid", &UBlueprintGameplayTagLibrary::execIsGameplayTagValid },
			{ "IsTagQueryEmpty", &UBlueprintGameplayTagLibrary::execIsTagQueryEmpty },
			{ "MakeGameplayTagContainerFromArray", &UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromArray },
			{ "MakeGameplayTagContainerFromTag", &UBlueprintGameplayTagLibrary::execMakeGameplayTagContainerFromTag },
			{ "MakeGameplayTagQuery", &UBlueprintGameplayTagLibrary::execMakeGameplayTagQuery },
			{ "MakeLiteralGameplayTag", &UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTag },
			{ "MakeLiteralGameplayTagContainer", &UBlueprintGameplayTagLibrary::execMakeLiteralGameplayTagContainer },
			{ "MatchesAnyTags", &UBlueprintGameplayTagLibrary::execMatchesAnyTags },
			{ "MatchesTag", &UBlueprintGameplayTagLibrary::execMatchesTag },
			{ "NotEqual_GameplayTag", &UBlueprintGameplayTagLibrary::execNotEqual_GameplayTag },
			{ "NotEqual_GameplayTagContainer", &UBlueprintGameplayTagLibrary::execNotEqual_GameplayTagContainer },
			{ "NotEqual_TagContainerTagContainer", &UBlueprintGameplayTagLibrary::execNotEqual_TagContainerTagContainer },
			{ "NotEqual_TagTag", &UBlueprintGameplayTagLibrary::execNotEqual_TagTag },
			{ "RemoveGameplayTag", &UBlueprintGameplayTagLibrary::execRemoveGameplayTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Adds a single tag to the passed in tag container\n\x09 *\n\x09 * @param InOutTagContainer\x09\x09The container that will be appended too.\n\x09 * @param Tag\x09\x09\x09\x09\x09The tag to add to the container\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Adds a single tag to the passed in tag container\n\n@param InOutTagContainer             The container that will be appended too.\n@param Tag                                   The tag to add to the container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "AddGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::BlueprintGameplayTagLibrary_eventAddGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics
	{
		struct BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms
		{
			FGameplayTagContainer InOutTagContainer;
			FGameplayTagContainer InTagContainer;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InOutTagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InTagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InOutTagContainer = { "InOutTagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms, InOutTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer = { "InTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms, InTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InOutTagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::NewProp_InTagContainer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Appends all tags in the InTagContainer to InOutTagContainer\n\x09 *\n\x09 * @param InOutTagContainer\x09\x09The container that will be appended too.\n\x09 * @param InTagContainer\x09\x09The container to append.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Appends all tags in the InTagContainer to InOutTagContainer\n\n@param InOutTagContainer             The container that will be appended too.\n@param InTagContainer                The container to append." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "AppendGameplayTagContainers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::BlueprintGameplayTagLibrary_eventAppendGameplayTagContainers_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms
		{
			FGameplayTagContainer GameplayTagContainer;
			TArray<FGameplayTag> GameplayTags;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer = { "GameplayTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms, GameplayTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms, GameplayTags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::NewProp_GameplayTags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Breaks tag container into explicit array of tags */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Breaks tag container into explicit array of tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "BreakGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::BlueprintGameplayTagLibrary_eventBreakGameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics
	{
		struct BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagQuery TagQuery;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the specified tag container matches the given Tag Query\n\x09 * \n\x09 * @param TagContainer\x09\x09\x09""Container to check if it matches all of the tags in the other container\n\x09 * @param TagQuery\x09\x09\x09\x09Query to match against\n\x09 * \n\x09 * @return True if the container matches the query, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container matches the given Tag Query\n\n@param TagContainer                  Container to check if it matches all of the tags in the other container\n@param TagQuery                              Query to match against\n\n@return True if the container matches the query, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "DoesContainerMatchTagQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::BlueprintGameplayTagLibrary_eventDoesContainerMatchTagQuery_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms
		{
			TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TagContainerInterface;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_TagContainerInterface = { "TagContainerInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms, TagContainerInterface), Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_TagContainerInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Check if the specified tag container has the specified tag, using the specified tag matching types\n\x09 *\n\x09 * @param TagContainerInterface\x09\x09""An Interface to a tag container\n\x09 * @param Tag\x09\x09\x09\x09\x09\x09Tag to check for in the container\n\x09 *\n\x09 * @return True if the container has the specified tag, false if it does not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container has the specified tag, using the specified tag matching types\n\n@param TagContainerInterface         An Interface to a tag container\n@param Tag                                           Tag to check for in the container\n\n@return True if the container has the specified tag, false if it does not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "DoesTagAssetInterfaceHaveTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::BlueprintGameplayTagLibrary_eventDoesTagAssetInterfaceHaveTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms
		{
			FGameplayTag A;
			FGameplayTag B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms, B), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (GameplayTag)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "EqualEqual_GameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms
		{
			FGameplayTagContainer A;
			FGameplayTagContainer B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms, B), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns true if the values are equal (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DisplayName", "Equal (GameplayTagContainer)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are equal (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "EqualEqual_GameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::BlueprintGameplayTagLibrary_eventEqualEqual_GameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms
		{
			UObject* WorldContextObject;
			TSubclassOf<AActor>  ActorClass;
			FGameplayTagQuery GameplayTagQuery;
			TArray<AActor*> OutActors;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagQuery;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery = { "GameplayTagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, GameplayTagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery_MetaData)) }; // 689482789
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_GameplayTagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Get an array of all actors of a specific class (or subclass of that class) which match the specified gameplay tag query.\n\x09 * \n\x09 * @param ActorClass\x09\x09\x09""Class of actors to fetch\n\x09 * @param GameplayTagQuery\x09\x09Query to match against\n\x09 * \n\x09 */" },
		{ "DeterminesOutputType", "ActorClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Get an array of all actors of a specific class (or subclass of that class) which match the specified gameplay tag query.\n\n@param ActorClass                    Class of actors to fetch\n@param GameplayTagQuery              Query to match against" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetAllActorsOfClassMatchingTagQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::BlueprintGameplayTagLibrary_eventGetAllActorsOfClassMatchingTagQuery_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms
		{
			FGameplayTag GameplayTag;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Returns an FString representation of a gameplay tag for debugging purposes.\n\x09 *\n\x09 * @param GameplayTag\x09The tag to get the debug string from.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns an FString representation of a gameplay tag for debugging purposes.\n\n@param GameplayTag   The tag to get the debug string from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetDebugStringFromGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms
		{
			FGameplayTagContainer TagContainer;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Returns an FString listing all of the gameplay tags in the tag container for debugging purposes.\n\x09 *\n\x09 * @param TagContainer\x09The tag container to get the debug string from.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns an FString listing all of the gameplay tags in the tag container for debugging purposes.\n\n@param TagContainer  The tag container to get the debug string from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetDebugStringFromGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::BlueprintGameplayTagLibrary_eventGetDebugStringFromGameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms
		{
			FGameplayTagContainer TagContainer;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer_MetaData)) }; // 3057219007
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Get the number of gameplay tags in the specified container\n\x09 * \n\x09 * @param TagContainer\x09Tag container to get the number of tags from\n\x09 * \n\x09 * @return The number of tags in the specified container\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Get the number of gameplay tags in the specified container\n\n@param TagContainer  Tag container to get the number of tags from\n\n@return The number of tags in the specified container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetNumGameplayTagsInContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::BlueprintGameplayTagLibrary_eventGetNumGameplayTagsInContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics
	{
		struct BlueprintGameplayTagLibrary_eventGetTagName_Parms
		{
			FGameplayTag GameplayTag;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetTagName_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag_MetaData)) }; // 1225434376
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventGetTagName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns FName of this tag */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns FName of this tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "GetTagName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::BlueprintGameplayTagLibrary_eventGetTagName_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms
		{
			TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
			FGameplayTagContainer OtherContainer;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TagContainerInterface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_TagContainerInterface = { "TagContainerInterface", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms, TagContainerInterface), Z_Construct_UClass_UGameplayTagAssetInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_TagContainerInterface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_OtherContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Comment", "/**\n\x09 * Check Gameplay tags in the interface has all of the specified tags in the tag container (expands to include parents of asset tags)\n\x09 *\n\x09 * @param TagContainerInterface\x09\x09""An Interface to a tag container\n\x09 * @param OtherContainer\x09\x09\x09""A Tag Container\n\x09 *\n\x09 * @return True if the tagcontainer in the interface has all the tags inside the container.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check Gameplay tags in the interface has all of the specified tags in the tag container (expands to include parents of asset tags)\n\n@param TagContainerInterface         An Interface to a tag container\n@param OtherContainer                        A Tag Container\n\n@return True if the tagcontainer in the interface has all the tags inside the container." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasAllMatchingGameplayTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::BlueprintGameplayTagLibrary_eventHasAllMatchingGameplayTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasAllTags_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAllTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAllTags_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAllTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAllTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_OtherContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the specified tag container has ALL of the tags in the other container\n\x09 * \n\x09 * @param TagContainer\x09\x09\x09""Container to check if it matches all of the tags in the other container\n\x09 * @param OtherContainer\x09\x09""Container to check against. If this is empty, the check will succeed\n\x09 * @param bExactMatch\x09\x09\x09If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\x09\x09\x09\n\x09 * \n\x09 * @return True if the container has ALL of the tags in the other container\n\x09 */" },
		{ "Keywords", "DoesContainerMatchAllTagsInContainer" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container has ALL of the tags in the other container\n\n@param TagContainer                  Container to check if it matches all of the tags in the other container\n@param OtherContainer                Container to check against. If this is empty, the check will succeed\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has ALL of the tags in the other container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasAllTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::BlueprintGameplayTagLibrary_eventHasAllTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasAnyTags_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAnyTags_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasAnyTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_OtherContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the specified tag container has ANY of the tags in the other container\n\x09 * \n\x09 * @param TagContainer\x09\x09\x09""Container to check if it matches any of the tags in the other container\n\x09 * @param OtherContainer\x09\x09""Container to check against.\n\x09 * @param bExactMatch\x09\x09\x09If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\x09\x09\x09\n\x09 * \n\x09 * @return True if the container has ANY of the tags in the other container\n\x09 */" },
		{ "Keywords", "DoesContainerMatchAnyTagsInContainer" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag container has ANY of the tags in the other container\n\n@param TagContainer                  Container to check if it matches any of the tags in the other container\n@param OtherContainer                Container to check against.\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has ANY of the tags in the other container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasAnyTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::BlueprintGameplayTagLibrary_eventHasAnyTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventHasTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
			bool bExactMatch;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer_MetaData)) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventHasTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasTag_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventHasTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventHasTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the tag container has the specified tag\n\x09 *\n\x09 * @param TagContainer\x09\x09\x09""Container to check for the tag\n\x09 * @param Tag\x09\x09\x09\x09\x09Tag to check for in the container\n\x09 * @param bExactMatch\x09\x09\x09If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\x09\x09\x09\n\x09 *\n\x09 * @return True if the container has the specified tag, false if it does not\n\x09 */" },
		{ "Keywords", "DoesContainerHaveTag" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the tag container has the specified tag\n\n@param TagContainer                  Container to check for the tag\n@param Tag                                   Tag to check for in the container\n@param bExactMatch                   If true, the tag has to be exactly present, if false then TagContainer will include it's parent tags while matching\n\n@return True if the container has the specified tag, false if it does not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "HasTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::BlueprintGameplayTagLibrary_eventHasTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics
	{
		struct BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms
		{
			FGameplayTag GameplayTag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_GameplayTag = { "GameplayTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms, GameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_GameplayTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns true if the passed in gameplay tag is non-null */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the passed in gameplay tag is non-null" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "IsGameplayTagValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::BlueprintGameplayTagLibrary_eventIsGameplayTagValid_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics
	{
		struct BlueprintGameplayTagLibrary_eventIsTagQueryEmpty_Parms
		{
			FGameplayTagQuery TagQuery;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagQuery_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_TagQuery_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventIsTagQueryEmpty_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_TagQuery_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_TagQuery_MetaData)) }; // 689482789
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventIsTagQueryEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventIsTagQueryEmpty_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Check if the specified tag query is empty\n\x09 * \n\x09 * @param TagQuery\x09\x09\x09\x09Query to check\n\x09 * \n\x09 * @return True if the query is empty, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Check if the specified tag query is empty\n\n@param TagQuery                              Query to check\n\n@return True if the query is empty, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "IsTagQueryEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::BlueprintGameplayTagLibrary_eventIsTagQueryEmpty_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms
		{
			TArray<FGameplayTag> GameplayTags;
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayTags;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_Inner = { "GameplayTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags = { "GameplayTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms, GameplayTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_GameplayTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Creates a FGameplayTagContainer from the array of passed in tags */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a FGameplayTagContainer from the array of passed in tags" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeGameplayTagContainerFromArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromArray_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms
		{
			FGameplayTag SingleTag;
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleTag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_SingleTag = { "SingleTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms, SingleTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_SingleTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Creates a FGameplayTagContainer containing a single tag */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a FGameplayTagContainer containing a single tag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeGameplayTagContainerFromTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::BlueprintGameplayTagLibrary_eventMakeGameplayTagContainerFromTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms
		{
			FGameplayTagQuery TagQuery;
			FGameplayTagQuery ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagQuery;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_TagQuery = { "TagQuery", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms, TagQuery), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) }; // 689482789
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagQuery, METADATA_PARAMS(nullptr, 0) }; // 689482789
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_TagQuery,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Creates a literal FGameplayTagQuery\n\x09 *\n\x09 * @param\x09TagQuery\x09value to set the FGameplayTagQuery to\n\x09 *\n\x09 * @return\x09The literal FGameplayTagQuery\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a literal FGameplayTagQuery\n\n@param       TagQuery        value to set the FGameplayTagQuery to\n\n@return      The literal FGameplayTagQuery" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeGameplayTagQuery", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::BlueprintGameplayTagLibrary_eventMakeGameplayTagQuery_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms
		{
			FGameplayTag Value;
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Creates a literal FGameplayTag */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a literal FGameplayTag" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeLiteralGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms
		{
			FGameplayTagContainer Value;
			FGameplayTagContainer ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms, Value), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Creates a literal FGameplayTagContainer */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Creates a literal FGameplayTagContainer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MakeLiteralGameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::BlueprintGameplayTagLibrary_eventMakeLiteralGameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms
		{
			FGameplayTag TagOne;
			FGameplayTagContainer OtherContainer;
			bool bExactMatch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OtherContainer;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_TagOne = { "TagOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms, TagOne), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer = { "OtherContainer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms, OtherContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_TagOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_OtherContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Determine if TagOne matches against any tag in OtherContainer\n\x09 * \n\x09 * @param TagOne\x09\x09\x09Tag to check for match\n\x09 * @param OtherContainer\x09""Container to check against.\n\x09 * @param bExactMatch\x09\x09If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\x09 * \n\x09 * @return True if TagOne matches any tags explicitly present in OtherContainer\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Determine if TagOne matches against any tag in OtherContainer\n\n@param TagOne                        Tag to check for match\n@param OtherContainer        Container to check against.\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\n@return True if TagOne matches any tags explicitly present in OtherContainer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MatchesAnyTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::BlueprintGameplayTagLibrary_eventMatchesAnyTags_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventMatchesTag_Parms
		{
			FGameplayTag TagOne;
			FGameplayTag TagTwo;
			bool bExactMatch;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagOne;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagTwo;
		static void NewProp_bExactMatch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExactMatch;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagOne = { "TagOne", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesTag_Parms, TagOne), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagTwo = { "TagTwo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventMatchesTag_Parms, TagTwo), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesTag_Parms*)Obj)->bExactMatch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch = { "bExactMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventMatchesTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventMatchesTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_TagTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_bExactMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Determine if TagOne matches against TagTwo\n\x09 * \n\x09 * @param TagOne\x09\x09\x09Tag to check for match\n\x09 * @param TagTwo\x09\x09\x09Tag to check match against\n\x09 * @param bExactMatch\x09\x09If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\x09\x09\x09\n\x09 * \n\x09 * @return True if TagOne matches TagTwo\n\x09 */" },
		{ "Keywords", "DoGameplayTagsMatch" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Determine if TagOne matches against TagTwo\n\n@param TagOne                        Tag to check for match\n@param TagTwo                        Tag to check match against\n@param bExactMatch           If true, the tag has to be exactly present, if false then TagOne will include it's parent tags while matching\n\n@return True if TagOne matches TagTwo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "MatchesTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::BlueprintGameplayTagLibrary_eventMatchesTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms
		{
			FGameplayTag A;
			FGameplayTag B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms, B), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (GameplayTag)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_GameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::BlueprintGameplayTagLibrary_eventNotEqual_GameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms
		{
			FGameplayTagContainer A;
			FGameplayTagContainer B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A_MetaData)) }; // 3057219007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms, B), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B_MetaData)) }; // 3057219007
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns true if the values are not equal (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DisplayName", "Not Equal (GameplayTagContainer)" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Returns true if the values are not equal (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_GameplayTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::BlueprintGameplayTagLibrary_eventNotEqual_GameplayTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms
		{
			FGameplayTagContainer A;
			FString B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStrPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms, A), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms, B), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "PinOptions" },
		{ "Comment", "/** Checks if a gameplay tag containers's name and a string are not equal to one another */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Checks if a gameplay tag containers's name and a string are not equal to one another" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_TagContainerTagContainer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::BlueprintGameplayTagLibrary_eventNotEqual_TagContainerTagContainer_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms
		{
			FGameplayTag A;
			FString B;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
		static const UECodeGen_Private::FStrPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms, A), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms, B), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "PinOptions" },
		{ "Comment", "/** Checks if a gameplay tag's name and a string are not equal to one another */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Checks if a gameplay tag's name and a string are not equal to one another" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "NotEqual_TagTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::BlueprintGameplayTagLibrary_eventNotEqual_TagTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics
	{
		struct BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms
		{
			FGameplayTagContainer TagContainer;
			FGameplayTag Tag;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) }; // 3057219007
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms), &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_TagContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "GameplayTags" },
		{ "Comment", "/**\n\x09 * Remove a single tag from the passed in tag container, returns true if found\n\x09 *\n\x09 * @param InOutTagContainer\x09\x09The container that will be appended too.\n\x09 * @param Tag\x09\x09\x09\x09\x09The tag to add to the container\n\x09 */" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ToolTip", "Remove a single tag from the passed in tag container, returns true if found\n\n@param InOutTagContainer             The container that will be appended too.\n@param Tag                                   The tag to add to the container" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintGameplayTagLibrary, nullptr, "RemoveGameplayTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::BlueprintGameplayTagLibrary_eventRemoveGameplayTag_Parms), Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintGameplayTagLibrary);
	UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary_NoRegister()
	{
		return UBlueprintGameplayTagLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTags,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AddGameplayTag, "AddGameplayTag" }, // 4233288306
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_AppendGameplayTagContainers, "AppendGameplayTagContainers" }, // 653720928
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_BreakGameplayTagContainer, "BreakGameplayTagContainer" }, // 2037387903
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery, "DoesContainerMatchTagQuery" }, // 2791438814
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag, "DoesTagAssetInterfaceHaveTag" }, // 3053279920
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTag, "EqualEqual_GameplayTag" }, // 3386744689
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_EqualEqual_GameplayTagContainer, "EqualEqual_GameplayTagContainer" }, // 891668370
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetAllActorsOfClassMatchingTagQuery, "GetAllActorsOfClassMatchingTagQuery" }, // 1104104147
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTag, "GetDebugStringFromGameplayTag" }, // 4210125105
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetDebugStringFromGameplayTagContainer, "GetDebugStringFromGameplayTagContainer" }, // 2049689868
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer, "GetNumGameplayTagsInContainer" }, // 3469416003
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_GetTagName, "GetTagName" }, // 3780163727
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags, "HasAllMatchingGameplayTags" }, // 289797952
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAllTags, "HasAllTags" }, // 1526345429
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasAnyTags, "HasAnyTags" }, // 1852654846
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_HasTag, "HasTag" }, // 2858373331
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsGameplayTagValid, "IsGameplayTagValid" }, // 836970057
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_IsTagQueryEmpty, "IsTagQueryEmpty" }, // 2913929716
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromArray, "MakeGameplayTagContainerFromArray" }, // 561292846
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagContainerFromTag, "MakeGameplayTagContainerFromTag" }, // 2378153862
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeGameplayTagQuery, "MakeGameplayTagQuery" }, // 1245234567
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag, "MakeLiteralGameplayTag" }, // 4274217091
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MakeLiteralGameplayTagContainer, "MakeLiteralGameplayTagContainer" }, // 3340647096
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesAnyTags, "MatchesAnyTags" }, // 927098778
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_MatchesTag, "MatchesTag" }, // 3988551986
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTag, "NotEqual_GameplayTag" }, // 513749735
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_GameplayTagContainer, "NotEqual_GameplayTagContainer" }, // 3833314108
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagContainerTagContainer, "NotEqual_TagContainerTagContainer" }, // 3340381073
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_NotEqual_TagTag, "NotEqual_TagTag" }, // 2286702739
		{ &Z_Construct_UFunction_UBlueprintGameplayTagLibrary_RemoveGameplayTag, "RemoveGameplayTag" }, // 2946592110
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueprintGameplayTagLibrary.h" },
		{ "ModuleRelativePath", "Classes/BlueprintGameplayTagLibrary.h" },
		{ "ScriptName", "GameplayTagLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintGameplayTagLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::ClassParams = {
		&UBlueprintGameplayTagLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintGameplayTagLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary.OuterSingleton;
	}
	template<> GAMEPLAYTAGS_API UClass* StaticClass<UBlueprintGameplayTagLibrary>()
	{
		return UBlueprintGameplayTagLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintGameplayTagLibrary);
	UBlueprintGameplayTagLibrary::~UBlueprintGameplayTagLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintGameplayTagLibrary, UBlueprintGameplayTagLibrary::StaticClass, TEXT("UBlueprintGameplayTagLibrary"), &Z_Registration_Info_UClass_UBlueprintGameplayTagLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintGameplayTagLibrary), 1437873013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_3405721265(TEXT("/Script/GameplayTags"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
