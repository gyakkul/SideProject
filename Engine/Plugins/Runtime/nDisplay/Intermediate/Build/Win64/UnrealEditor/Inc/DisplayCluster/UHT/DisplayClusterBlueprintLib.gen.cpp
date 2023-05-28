// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/DisplayClusterBlueprintLib.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterBlueprintLib() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterChromakeyCardActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterRootActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintLib();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintLib_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	DEFINE_FUNCTION(UDisplayClusterBlueprintLib::execFindChromakeyCardsForRootActor)
	{
		P_GET_OBJECT(ADisplayClusterRootActor,Z_Param_RootActor);
		P_GET_TSET_REF(ADisplayClusterChromakeyCardActor*,Z_Param_Out_OutChromakeyCards);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDisplayClusterBlueprintLib::FindChromakeyCardsForRootActor(Z_Param_RootActor,Z_Param_Out_OutChromakeyCards);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintLib::execFindLightCardsForRootActor)
	{
		P_GET_OBJECT(ADisplayClusterRootActor,Z_Param_RootActor);
		P_GET_TSET_REF(ADisplayClusterLightCardActor*,Z_Param_Out_OutLightCards);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDisplayClusterBlueprintLib::FindLightCardsForRootActor(Z_Param_RootActor,Z_Param_Out_OutLightCards);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintLib::execDuplicateLightCards)
	{
		P_GET_TARRAY(ADisplayClusterLightCardActor*,Z_Param_OriginalLightcards);
		P_GET_TARRAY_REF(ADisplayClusterLightCardActor*,Z_Param_Out_OutNewLightCards);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDisplayClusterBlueprintLib::DuplicateLightCards(Z_Param_OriginalLightcards,Z_Param_Out_OutNewLightCards);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintLib::execCreateLightCard)
	{
		P_GET_OBJECT(ADisplayClusterRootActor,Z_Param_RootActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADisplayClusterLightCardActor**)Z_Param__Result=UDisplayClusterBlueprintLib::CreateLightCard(Z_Param_RootActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDisplayClusterBlueprintLib::execGetAPI)
	{
		P_GET_TINTERFACE_REF(IDisplayClusterBlueprintAPI,Z_Param_Out_OutAPI);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDisplayClusterBlueprintLib::GetAPI(Z_Param_Out_OutAPI);
		P_NATIVE_END;
	}
	void UDisplayClusterBlueprintLib::StaticRegisterNativesUDisplayClusterBlueprintLib()
	{
		UClass* Class = UDisplayClusterBlueprintLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateLightCard", &UDisplayClusterBlueprintLib::execCreateLightCard },
			{ "DuplicateLightCards", &UDisplayClusterBlueprintLib::execDuplicateLightCards },
			{ "FindChromakeyCardsForRootActor", &UDisplayClusterBlueprintLib::execFindChromakeyCardsForRootActor },
			{ "FindLightCardsForRootActor", &UDisplayClusterBlueprintLib::execFindLightCardsForRootActor },
			{ "GetAPI", &UDisplayClusterBlueprintLib::execGetAPI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics
	{
		struct DisplayClusterBlueprintLib_eventCreateLightCard_Parms
		{
			ADisplayClusterRootActor* RootActor;
			ADisplayClusterLightCardActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventCreateLightCard_Parms, RootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventCreateLightCard_Parms, ReturnValue), Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Create a new light card parented to the given nDisplay root actor. */" },
		{ "DisplayName", "DisplayCluster Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ToolTip", "Create a new light card parented to the given nDisplay root actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintLib, nullptr, "CreateLightCard", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::DisplayClusterBlueprintLib_eventCreateLightCard_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics
	{
		struct DisplayClusterBlueprintLib_eventDuplicateLightCards_Parms
		{
			TArray<ADisplayClusterLightCardActor*> OriginalLightcards;
			TArray<ADisplayClusterLightCardActor*> OutNewLightCards;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginalLightcards_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalLightcards;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutNewLightCards_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNewLightCards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OriginalLightcards_Inner = { "OriginalLightcards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OriginalLightcards = { "OriginalLightcards", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventDuplicateLightCards_Parms, OriginalLightcards), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OutNewLightCards_Inner = { "OutNewLightCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OutNewLightCards = { "OutNewLightCards", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventDuplicateLightCards_Parms, OutNewLightCards), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OriginalLightcards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OriginalLightcards,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OutNewLightCards_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::NewProp_OutNewLightCards,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Create duplicates of a list of existing light cards. */" },
		{ "DisplayName", "DisplayCluster Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ToolTip", "Create duplicates of a list of existing light cards." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintLib, nullptr, "DuplicateLightCards", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::DisplayClusterBlueprintLib_eventDuplicateLightCards_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics
	{
		struct DisplayClusterBlueprintLib_eventFindChromakeyCardsForRootActor_Parms
		{
			const ADisplayClusterRootActor* RootActor;
			TSet<ADisplayClusterChromakeyCardActor*> OutChromakeyCards;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutChromakeyCards_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutChromakeyCards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_RootActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventFindChromakeyCardsForRootActor_Parms, RootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_RootActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_OutChromakeyCards_ElementProp = { "OutChromakeyCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ADisplayClusterChromakeyCardActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_OutChromakeyCards = { "OutChromakeyCards", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventFindChromakeyCardsForRootActor_Parms, OutChromakeyCards), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_OutChromakeyCards_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::NewProp_OutChromakeyCards,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Gets a list of all chromakey card actors on the level linked to the specified root actor. */" },
		{ "DisplayName", "DisplayCluster Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ToolTip", "Gets a list of all chromakey card actors on the level linked to the specified root actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintLib, nullptr, "FindChromakeyCardsForRootActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::DisplayClusterBlueprintLib_eventFindChromakeyCardsForRootActor_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics
	{
		struct DisplayClusterBlueprintLib_eventFindLightCardsForRootActor_Parms
		{
			const ADisplayClusterRootActor* RootActor;
			TSet<ADisplayClusterLightCardActor*> OutLightCards;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLightCards_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_OutLightCards;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_RootActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventFindLightCardsForRootActor_Parms, RootActor), Z_Construct_UClass_ADisplayClusterRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_RootActor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_OutLightCards_ElementProp = { "OutLightCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_OutLightCards = { "OutLightCards", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventFindLightCardsForRootActor_Parms, OutLightCards), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_RootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_OutLightCards_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::NewProp_OutLightCards,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Gets a list of all light card actors on the level linked to the specified root actor. */" },
		{ "DisplayName", "DisplayCluster Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ToolTip", "Gets a list of all light card actors on the level linked to the specified root actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintLib, nullptr, "FindLightCardsForRootActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::DisplayClusterBlueprintLib_eventFindLightCardsForRootActor_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics
	{
		struct DisplayClusterBlueprintLib_eventGetAPI_Parms
		{
			TScriptInterface<IDisplayClusterBlueprintAPI> OutAPI;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_OutAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::NewProp_OutAPI = { "OutAPI", nullptr, (EPropertyFlags)0x0014000000000180, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterBlueprintLib_eventGetAPI_Parms, OutAPI), Z_Construct_UClass_UDisplayClusterBlueprintAPI_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::NewProp_OutAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "/** Return Display Cluster API interface. */" },
		{ "DisplayName", "DisplayCluster Module API" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ToolTip", "Return Display Cluster API interface." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterBlueprintLib, nullptr, "GetAPI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::DisplayClusterBlueprintLib_eventGetAPI_Parms), Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterBlueprintLib);
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintLib_NoRegister()
	{
		return UDisplayClusterBlueprintLib::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintLib_CreateLightCard, "CreateLightCard" }, // 1163239946
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintLib_DuplicateLightCards, "DuplicateLightCards" }, // 1343219031
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindChromakeyCardsForRootActor, "FindChromakeyCardsForRootActor" }, // 134690175
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintLib_FindLightCardsForRootActor, "FindLightCardsForRootActor" }, // 1393088551
		{ &Z_Construct_UFunction_UDisplayClusterBlueprintLib_GetAPI, "GetAPI" }, // 63538614
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Blueprint API function library\n */" },
		{ "IncludePath", "Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintLib.h" },
		{ "ToolTip", "Blueprint API function library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterBlueprintLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::ClassParams = {
		&UDisplayClusterBlueprintLib::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintLib()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterBlueprintLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterBlueprintLib.OuterSingleton, Z_Construct_UClass_UDisplayClusterBlueprintLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterBlueprintLib.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterBlueprintLib>()
	{
		return UDisplayClusterBlueprintLib::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterBlueprintLib);
	UDisplayClusterBlueprintLib::~UDisplayClusterBlueprintLib() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterBlueprintLib, UDisplayClusterBlueprintLib::StaticClass, TEXT("UDisplayClusterBlueprintLib"), &Z_Registration_Info_UClass_UDisplayClusterBlueprintLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterBlueprintLib), 614204338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintLib_h_1199615539(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
