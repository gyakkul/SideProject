// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GoogleARCoreAugmentedImageDatabase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreAugmentedImageDatabase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_NoRegister();
	GOOGLEARCOREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry;
class UScriptStruct* FGoogleARCoreAugmentedImageDatabaseEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("GoogleARCoreAugmentedImageDatabaseEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry.OuterSingleton;
}
template<> GOOGLEARCOREBASE_API UScriptStruct* StaticStruct<FGoogleARCoreAugmentedImageDatabaseEntry>()
{
	return FGoogleARCoreAugmentedImageDatabaseEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImageAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A single entry in a UGoogleARCoreAugmentedImageDatabase.\n *\n * Deprecated. Please use the cross-platform UARCandidateImage instead.\n */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "A single entry in a UGoogleARCoreAugmentedImageDatabase.\n\nDeprecated. Please use the cross-platform UARCandidateImage instead." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoogleARCoreAugmentedImageDatabaseEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "GoogleARCore|AugmentedImages" },
		{ "Comment", "/**\n\x09 * Name of the image. This can be retrieved from an active\n\x09 * UGoogleARCoreAugmentedImage with the GetImageName function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "Name of the image. This can be retrieved from an active\nUGoogleARCoreAugmentedImage with the GetImageName function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreAugmentedImageDatabaseEntry, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_ImageAsset_MetaData[] = {
		{ "Category", "GoogleARCore|AugmentedImages" },
		{ "Comment", "/**\n\x09 * Texture to use for this image. Valid formats are RGBA8 and\n\x09 * BGRA8.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "Texture to use for this image. Valid formats are RGBA8 and\nBGRA8." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_ImageAsset = { "ImageAsset", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreAugmentedImageDatabaseEntry, ImageAsset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_ImageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_ImageAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "GoogleARCore|AugmentedImages" },
		{ "Comment", "/**\n\x09 * Width of the image in meters.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "Width of the image in meters." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGoogleARCoreAugmentedImageDatabaseEntry, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Width_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_ImageAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewProp_Width,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		&NewStructOps,
		"GoogleARCoreAugmentedImageDatabaseEntry",
		sizeof(FGoogleARCoreAugmentedImageDatabaseEntry),
		alignof(FGoogleARCoreAugmentedImageDatabaseEntry),
		Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry.InnerSingleton, Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UGoogleARCoreAugmentedImageDatabase::execAddRuntimeAugmentedImageFromTexture)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_ImageTexture);
		P_GET_PROPERTY(FNameProperty,Z_Param_ImageName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ImageWidthInMeter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddRuntimeAugmentedImageFromTexture(Z_Param_ImageTexture,Z_Param_ImageName,Z_Param_ImageWidthInMeter);
		P_NATIVE_END;
	}
	void UGoogleARCoreAugmentedImageDatabase::StaticRegisterNativesUGoogleARCoreAugmentedImageDatabase()
	{
		UClass* Class = UGoogleARCoreAugmentedImageDatabase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRuntimeAugmentedImageFromTexture", &UGoogleARCoreAugmentedImageDatabase::execAddRuntimeAugmentedImageFromTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics
	{
		struct GoogleARCoreAugmentedImageDatabase_eventAddRuntimeAugmentedImageFromTexture_Parms
		{
			UTexture2D* ImageTexture;
			FName ImageName;
			float ImageWidthInMeter;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ImageTexture;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ImageName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImageWidthInMeter;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ImageTexture = { "ImageTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImageDatabase_eventAddRuntimeAugmentedImageFromTexture_Parms, ImageTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ImageName = { "ImageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImageDatabase_eventAddRuntimeAugmentedImageFromTexture_Parms, ImageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ImageWidthInMeter = { "ImageWidthInMeter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImageDatabase_eventAddRuntimeAugmentedImageFromTexture_Parms, ImageWidthInMeter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GoogleARCoreAugmentedImageDatabase_eventAddRuntimeAugmentedImageFromTexture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ImageTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ImageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ImageWidthInMeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "google arcore augmentedimages" },
		{ "CPP_Default_ImageWidthInMeter", "0.000000" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase, nullptr, "AddRuntimeAugmentedImageFromTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::GoogleARCoreAugmentedImageDatabase_eventAddRuntimeAugmentedImageFromTexture_Parms), Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreAugmentedImageDatabase);
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_NoRegister()
	{
		return UGoogleARCoreAugmentedImageDatabase::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedDatabase_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedDatabase_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedDatabase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoogleARCoreAugmentedImageDatabase_AddRuntimeAugmentedImageFromTexture, "AddRuntimeAugmentedImageFromTexture" }, // 2623482450
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A collection of processed images for ARCore to track.\n *\n * Deprecated. Please use the ARCandidateImage list in UARSessionConfig instead.\n */" },
		{ "IncludePath", "GoogleARCoreAugmentedImageDatabase.h" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "A collection of processed images for ARCore to track.\n\nDeprecated. Please use the ARCandidateImage list in UARSessionConfig instead." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry, METADATA_PARAMS(nullptr, 0) }; // 3346345688
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "GoogleARCore|AugmentedImages" },
		{ "Comment", "/**\n\x09 * The individual instances of\n\x09 * FGoogleARCoreAugmentedImageDatabaseEntry objects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "The individual instances of\nFGoogleARCoreAugmentedImageDatabaseEntry objects." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreAugmentedImageDatabase, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries_MetaData)) }; // 3346345688
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase_Inner = { "SerializedDatabase", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase_MetaData[] = {
		{ "Comment", "/**\n\x09 * The serialized database, in the ARCore augmented image database\n\x09 * serialization format.\n\x09 */" },
		{ "ModuleRelativePath", "Public/GoogleARCoreAugmentedImageDatabase.h" },
		{ "ToolTip", "The serialized database, in the ARCore augmented image database\nserialization format." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase = { "SerializedDatabase", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreAugmentedImageDatabase, SerializedDatabase), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_Entries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::NewProp_SerializedDatabase,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreAugmentedImageDatabase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::ClassParams = {
		&UGoogleARCoreAugmentedImageDatabase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreAugmentedImageDatabase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreAugmentedImageDatabase.OuterSingleton, Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreAugmentedImageDatabase.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreAugmentedImageDatabase>()
	{
		return UGoogleARCoreAugmentedImageDatabase::StaticClass();
	}
	UGoogleARCoreAugmentedImageDatabase::UGoogleARCoreAugmentedImageDatabase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreAugmentedImageDatabase);
	UGoogleARCoreAugmentedImageDatabase::~UGoogleARCoreAugmentedImageDatabase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGoogleARCoreAugmentedImageDatabase)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics::ScriptStructInfo[] = {
		{ FGoogleARCoreAugmentedImageDatabaseEntry::StaticStruct, Z_Construct_UScriptStruct_FGoogleARCoreAugmentedImageDatabaseEntry_Statics::NewStructOps, TEXT("GoogleARCoreAugmentedImageDatabaseEntry"), &Z_Registration_Info_UScriptStruct_GoogleARCoreAugmentedImageDatabaseEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGoogleARCoreAugmentedImageDatabaseEntry), 3346345688U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreAugmentedImageDatabase, UGoogleARCoreAugmentedImageDatabase::StaticClass, TEXT("UGoogleARCoreAugmentedImageDatabase"), &Z_Registration_Info_UClass_UGoogleARCoreAugmentedImageDatabase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreAugmentedImageDatabase), 4105041170U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_1969708383(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Public_GoogleARCoreAugmentedImageDatabase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
