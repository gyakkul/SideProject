// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPBookmarkBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBookmarkBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VPBookmark();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmarkBlueprintLibrary();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmarkBlueprintLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPBookmarkBlueprintLibrary::execCreateVPBookmarkName)
	{
		P_GET_OBJECT(AActor,Z_Param_Bookmark);
		P_GET_PROPERTY(FStrProperty,Z_Param_FormatString);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GeneratedNumber);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_GeneratedLetter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVPBookmarkBlueprintLibrary::CreateVPBookmarkName(Z_Param_Bookmark,Z_Param_FormatString,Z_Param_Out_GeneratedNumber,Z_Param_Out_GeneratedLetter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmarkBlueprintLibrary::execGetAllVPBookmark)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(UVPBookmark*,Z_Param_Out_OutBookmarks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBookmarkBlueprintLibrary::GetAllVPBookmark(Z_Param_WorldContextObject,Z_Param_Out_OutBookmarks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmarkBlueprintLibrary::execGetAllVPBookmarkActors)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVPBookmarkBlueprintLibrary::GetAllVPBookmarkActors(Z_Param_WorldContextObject,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmarkBlueprintLibrary::execFindVPBookmark)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVPBookmark**)Z_Param__Result=UVPBookmarkBlueprintLibrary::FindVPBookmark(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UVPBookmarkBlueprintLibrary::StaticRegisterNativesUVPBookmarkBlueprintLibrary()
	{
		UClass* Class = UVPBookmarkBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVPBookmarkName", &UVPBookmarkBlueprintLibrary::execCreateVPBookmarkName },
			{ "FindVPBookmark", &UVPBookmarkBlueprintLibrary::execFindVPBookmark },
			{ "GetAllVPBookmark", &UVPBookmarkBlueprintLibrary::execGetAllVPBookmark },
			{ "GetAllVPBookmarkActors", &UVPBookmarkBlueprintLibrary::execGetAllVPBookmarkActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics
	{
		struct VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms
		{
			AActor* Bookmark;
			FString FormatString;
			FString GeneratedNumber;
			FString GeneratedLetter;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Bookmark;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FormatString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FormatString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedNumber;
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedLetter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_Bookmark = { "Bookmark", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms, Bookmark), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_FormatString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_FormatString = { "FormatString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms, FormatString), METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_FormatString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_FormatString_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_GeneratedNumber = { "GeneratedNumber", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms, GeneratedNumber), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_GeneratedLetter = { "GeneratedLetter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms, GeneratedLetter), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms), &Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_Bookmark,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_FormatString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_GeneratedNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_GeneratedLetter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkBlueprintLibrary, nullptr, "CreateVPBookmarkName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::VPBookmarkBlueprintLibrary_eventCreateVPBookmarkName_Parms), Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics
	{
		struct VPBookmarkBlueprintLibrary_eventFindVPBookmark_Parms
		{
			const AActor* Actor;
			UVPBookmark* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventFindVPBookmark_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventFindVPBookmark_Parms, ReturnValue), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkBlueprintLibrary, nullptr, "FindVPBookmark", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::VPBookmarkBlueprintLibrary_eventFindVPBookmark_Parms), Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics
	{
		struct VPBookmarkBlueprintLibrary_eventGetAllVPBookmark_Parms
		{
			const UObject* WorldContextObject;
			TArray<UVPBookmark*> OutBookmarks;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutBookmarks_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutBookmarks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventGetAllVPBookmark_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_OutBookmarks_Inner = { "OutBookmarks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_OutBookmarks = { "OutBookmarks", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventGetAllVPBookmark_Parms, OutBookmarks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_OutBookmarks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::NewProp_OutBookmarks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkBlueprintLibrary, nullptr, "GetAllVPBookmark", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::VPBookmarkBlueprintLibrary_eventGetAllVPBookmark_Parms), Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics
	{
		struct VPBookmarkBlueprintLibrary_eventGetAllVPBookmarkActors_Parms
		{
			const UObject* WorldContextObject;
			TArray<AActor*> OutActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventGetAllVPBookmarkActors_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmarkBlueprintLibrary_eventGetAllVPBookmarkActors_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmarkBlueprintLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmarkBlueprintLibrary, nullptr, "GetAllVPBookmarkActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::VPBookmarkBlueprintLibrary_eventGetAllVPBookmarkActors_Parms), Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPBookmarkBlueprintLibrary);
	UClass* Z_Construct_UClass_UVPBookmarkBlueprintLibrary_NoRegister()
	{
		return UVPBookmarkBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_CreateVPBookmarkName, "CreateVPBookmarkName" }, // 560534182
		{ &Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_FindVPBookmark, "FindVPBookmark" }, // 1185219212
		{ &Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmark, "GetAllVPBookmark" }, // 944363859
		{ &Z_Construct_UFunction_UVPBookmarkBlueprintLibrary_GetAllVPBookmarkActors, "GetAllVPBookmarkActors" }, // 1897068726
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPBookmarkBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VPBookmarkBlueprintLibrary.h" },
		{ "ScriptName", "VPBookmarkLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPBookmarkBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::ClassParams = {
		&UVPBookmarkBlueprintLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPBookmarkBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVPBookmarkBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPBookmarkBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVPBookmarkBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPBookmarkBlueprintLibrary.OuterSingleton;
	}
	template<> VPBOOKMARK_API UClass* StaticClass<UVPBookmarkBlueprintLibrary>()
	{
		return UVPBookmarkBlueprintLibrary::StaticClass();
	}
	UVPBookmarkBlueprintLibrary::UVPBookmarkBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPBookmarkBlueprintLibrary);
	UVPBookmarkBlueprintLibrary::~UVPBookmarkBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPBookmarkBlueprintLibrary, UVPBookmarkBlueprintLibrary::StaticClass, TEXT("UVPBookmarkBlueprintLibrary"), &Z_Registration_Info_UClass_UVPBookmarkBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPBookmarkBlueprintLibrary), 2864077959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_4178114918(TEXT("/Script/VPBookmark"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmarkBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
