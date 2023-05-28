// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPBookmark.h"
#include "VPBookmarkContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPBookmark() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBookmarkBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings();
	UPackage* Z_Construct_UPackage__Script_VPBookmark();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPBOOKMARK_API UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkCreationContext();
	VPBOOKMARK_API UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings();
	VPBOOKMARK_API UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkViewportData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPBookmarkViewportData;
class UScriptStruct* FVPBookmarkViewportData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPBookmarkViewportData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPBookmarkViewportData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPBookmarkViewportData, (UObject*)Z_Construct_UPackage__Script_VPBookmark(), TEXT("VPBookmarkViewportData"));
	}
	return Z_Registration_Info_UScriptStruct_VPBookmarkViewportData.OuterSingleton;
}
template<> VPBOOKMARK_API UScriptStruct* StaticStruct<FVPBookmarkViewportData>()
{
	return FVPBookmarkViewportData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpToOffsetLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_JumpToOffsetLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFlattenRotation_MetaData[];
#endif
		static void NewProp_bFlattenRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFlattenRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPBookmarkViewportData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_JumpToOffsetLocation_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_JumpToOffsetLocation = { "JumpToOffsetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPBookmarkViewportData, JumpToOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_JumpToOffsetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_JumpToOffsetLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_LookRotation_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_LookRotation = { "LookRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPBookmarkViewportData, LookRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_LookRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_LookRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_OrthoZoom_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_OrthoZoom = { "OrthoZoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVPBookmarkViewportData, OrthoZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_OrthoZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_OrthoZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation_SetBit(void* Obj)
	{
		((FVPBookmarkViewportData*)Obj)->bFlattenRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation = { "bFlattenRotation", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVPBookmarkViewportData), &Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_JumpToOffsetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_LookRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_OrthoZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewProp_bFlattenRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmark,
		nullptr,
		&NewStructOps,
		"VPBookmarkViewportData",
		sizeof(FVPBookmarkViewportData),
		alignof(FVPBookmarkViewportData),
		Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkViewportData()
	{
		if (!Z_Registration_Info_UScriptStruct_VPBookmarkViewportData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPBookmarkViewportData.InnerSingleton, Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPBookmarkViewportData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVPBookmarkJumpToSettings>() == std::is_polymorphic<FBookmarkBaseJumpToSettings>(), "USTRUCT FVPBookmarkJumpToSettings cannot be polymorphic unless super FBookmarkBaseJumpToSettings is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings;
class UScriptStruct* FVPBookmarkJumpToSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings, (UObject*)Z_Construct_UPackage__Script_VPBookmark(), TEXT("VPBookmarkJumpToSettings"));
	}
	return Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings.OuterSingleton;
}
template<> VPBOOKMARK_API UScriptStruct* StaticStruct<FVPBookmarkJumpToSettings>()
{
	return FVPBookmarkJumpToSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVPBookmarkJumpToSettings>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmark,
		Z_Construct_UScriptStruct_FBookmarkBaseJumpToSettings,
		&NewStructOps,
		"VPBookmarkJumpToSettings",
		sizeof(FVPBookmarkJumpToSettings),
		alignof(FVPBookmarkJumpToSettings),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings.InnerSingleton, Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings.InnerSingleton;
	}
	DEFINE_FUNCTION(UVPBookmark::execGetDisplayName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmark::execGetAssociatedBookmarkActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetAssociatedBookmarkActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmark::execGetBookmarkIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBookmarkIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPBookmark::execIsActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActive();
		P_NATIVE_END;
	}
	void UVPBookmark::StaticRegisterNativesUVPBookmark()
	{
		UClass* Class = UVPBookmark::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAssociatedBookmarkActor", &UVPBookmark::execGetAssociatedBookmarkActor },
			{ "GetBookmarkIndex", &UVPBookmark::execGetBookmarkIndex },
			{ "GetDisplayName", &UVPBookmark::execGetDisplayName },
			{ "IsActive", &UVPBookmark::execIsActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics
	{
		struct VPBookmark_eventGetAssociatedBookmarkActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmark_eventGetAssociatedBookmarkActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmark, nullptr, "GetAssociatedBookmarkActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::VPBookmark_eventGetAssociatedBookmarkActor_Parms), Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics
	{
		struct VPBookmark_eventGetBookmarkIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmark_eventGetBookmarkIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmark, nullptr, "GetBookmarkIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::VPBookmark_eventGetBookmarkIndex_Parms), Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics
	{
		struct VPBookmark_eventGetDisplayName_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPBookmark_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmark, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::VPBookmark_eventGetDisplayName_Parms), Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmark_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmark_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPBookmark_IsActive_Statics
	{
		struct VPBookmark_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVPBookmark_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VPBookmark_eventIsActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPBookmark_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPBookmark_eventIsActive_Parms), &Z_Construct_UFunction_UVPBookmark_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPBookmark_IsActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPBookmark_IsActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPBookmark_IsActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPBookmark_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPBookmark, nullptr, "IsActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPBookmark_IsActive_Statics::VPBookmark_eventIsActive_Parms), Z_Construct_UFunction_UVPBookmark_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_IsActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPBookmark_IsActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPBookmark_IsActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPBookmark_IsActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPBookmark_IsActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPBookmark);
	UClass* Z_Construct_UClass_UVPBookmark_NoRegister()
	{
		return UVPBookmark::StaticClass();
	}
	struct Z_Construct_UClass_UVPBookmark_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[];
#endif
		static void NewProp_bIsActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_OwnedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreationContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedViewportData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedViewportData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPBookmark_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBookmarkBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VPBookmark,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPBookmark_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPBookmark_GetAssociatedBookmarkActor, "GetAssociatedBookmarkActor" }, // 2741185321
		{ &Z_Construct_UFunction_UVPBookmark_GetBookmarkIndex, "GetBookmarkIndex" }, // 3352722649
		{ &Z_Construct_UFunction_UVPBookmark_GetDisplayName, "GetDisplayName" }, // 2589651006
		{ &Z_Construct_UFunction_UVPBookmark_IsActive, "IsActive" }, // 3772794588
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmark_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Bookmark" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VPBookmark.h" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	void Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive_SetBit(void* Obj)
	{
		((UVPBookmark*)Obj)->bIsActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVPBookmark), &Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmark_Statics::NewProp_OwnedActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UVPBookmark_Statics::NewProp_OwnedActor = { "OwnedActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmark, OwnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPBookmark_Statics::NewProp_OwnedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmark_Statics::NewProp_OwnedActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmark_Statics::NewProp_CreationContext_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmark_Statics::NewProp_CreationContext = { "CreationContext", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmark, CreationContext), Z_Construct_UScriptStruct_FVPBookmarkCreationContext, METADATA_PARAMS(Z_Construct_UClass_UVPBookmark_Statics::NewProp_CreationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmark_Statics::NewProp_CreationContext_MetaData)) }; // 821625362
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPBookmark_Statics::NewProp_CachedViewportData_MetaData[] = {
		{ "Category", "Bookmarks" },
		{ "ModuleRelativePath", "Public/VPBookmark.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVPBookmark_Statics::NewProp_CachedViewportData = { "CachedViewportData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPBookmark, CachedViewportData), Z_Construct_UScriptStruct_FVPBookmarkViewportData, METADATA_PARAMS(Z_Construct_UClass_UVPBookmark_Statics::NewProp_CachedViewportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmark_Statics::NewProp_CachedViewportData_MetaData)) }; // 3135297015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPBookmark_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmark_Statics::NewProp_bIsActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmark_Statics::NewProp_OwnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmark_Statics::NewProp_CreationContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPBookmark_Statics::NewProp_CachedViewportData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPBookmark_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPBookmark>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPBookmark_Statics::ClassParams = {
		&UVPBookmark::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPBookmark_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmark_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPBookmark_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPBookmark_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPBookmark()
	{
		if (!Z_Registration_Info_UClass_UVPBookmark.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPBookmark.OuterSingleton, Z_Construct_UClass_UVPBookmark_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPBookmark.OuterSingleton;
	}
	template<> VPBOOKMARK_API UClass* StaticClass<UVPBookmark>()
	{
		return UVPBookmark::StaticClass();
	}
	UVPBookmark::UVPBookmark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPBookmark);
	UVPBookmark::~UVPBookmark() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics::ScriptStructInfo[] = {
		{ FVPBookmarkViewportData::StaticStruct, Z_Construct_UScriptStruct_FVPBookmarkViewportData_Statics::NewStructOps, TEXT("VPBookmarkViewportData"), &Z_Registration_Info_UScriptStruct_VPBookmarkViewportData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPBookmarkViewportData), 3135297015U) },
		{ FVPBookmarkJumpToSettings::StaticStruct, Z_Construct_UScriptStruct_FVPBookmarkJumpToSettings_Statics::NewStructOps, TEXT("VPBookmarkJumpToSettings"), &Z_Registration_Info_UScriptStruct_VPBookmarkJumpToSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVPBookmarkJumpToSettings), 2739505250U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPBookmark, UVPBookmark::StaticClass, TEXT("UVPBookmark"), &Z_Registration_Info_UClass_UVPBookmark, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPBookmark), 2078582961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_1546830177(TEXT("/Script/VPBookmark"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPBookmark_Public_VPBookmark_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
