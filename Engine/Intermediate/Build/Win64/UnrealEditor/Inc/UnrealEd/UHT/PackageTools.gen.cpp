// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/PackageTools.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePackageTools() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UPackageTools();
	UNREALED_API UClass* Z_Construct_UClass_UPackageTools_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReloadPackagesInteractionMode;
	static UEnum* EReloadPackagesInteractionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReloadPackagesInteractionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReloadPackagesInteractionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EReloadPackagesInteractionMode"));
		}
		return Z_Registration_Info_UEnum_EReloadPackagesInteractionMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EReloadPackagesInteractionMode>()
	{
		return EReloadPackagesInteractionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::Enumerators[] = {
		{ "EReloadPackagesInteractionMode::Interactive", (int64)EReloadPackagesInteractionMode::Interactive },
		{ "EReloadPackagesInteractionMode::AssumePositive", (int64)EReloadPackagesInteractionMode::AssumePositive },
		{ "EReloadPackagesInteractionMode::AssumeNegative", (int64)EReloadPackagesInteractionMode::AssumeNegative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::Enum_MetaDataParams[] = {
		{ "AssumeNegative.Comment", "/** Non-interactive, assume a negative response */" },
		{ "AssumeNegative.Name", "EReloadPackagesInteractionMode::AssumeNegative" },
		{ "AssumeNegative.ToolTip", "Non-interactive, assume a negative response" },
		{ "AssumePositive.Comment", "/** Non-interactive, assume a positive response */" },
		{ "AssumePositive.Name", "EReloadPackagesInteractionMode::AssumePositive" },
		{ "AssumePositive.ToolTip", "Non-interactive, assume a positive response" },
		{ "Interactive.Comment", "/** Interactive, ask the user what to do */" },
		{ "Interactive.Name", "EReloadPackagesInteractionMode::Interactive" },
		{ "Interactive.ToolTip", "Interactive, ask the user what to do" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EReloadPackagesInteractionMode",
		"EReloadPackagesInteractionMode",
		Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode()
	{
		if (!Z_Registration_Info_UEnum_EReloadPackagesInteractionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReloadPackagesInteractionMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EReloadPackagesInteractionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReloadPackagesInteractionMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UPackageTools::execFilenameToPackageName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPackageTools::FilenameToPackageName(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPackageTools::execPackageNameToFilename)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PackageName);
		P_GET_PROPERTY(FStrProperty,Z_Param_Extension);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPackageTools::PackageNameToFilename(Z_Param_PackageName,Z_Param_Extension);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPackageTools::execSanitizePackageName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InPackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UPackageTools::SanitizePackageName(Z_Param_InPackageName);
		P_NATIVE_END;
	}
	void UPackageTools::StaticRegisterNativesUPackageTools()
	{
		UClass* Class = UPackageTools::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FilenameToPackageName", &UPackageTools::execFilenameToPackageName },
			{ "PackageNameToFilename", &UPackageTools::execPackageNameToFilename },
			{ "SanitizePackageName", &UPackageTools::execSanitizePackageName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics
	{
		struct PackageTools_eventFilenameToPackageName_Parms
		{
			FString Filename;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventFilenameToPackageName_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_Filename_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventFilenameToPackageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Package Tools" },
		{ "Comment", "/** \n\x09 * Tries to convert a given relative or absolute filename to a long package name or path starting with a root like /Game\n\x09 * This works on both package names and directories, and it does not validate that it actually exists on disk.\n\x09 * @param Filename Filename to convert.\n\x09 * @return Resulting long package name if the supplied filename properly maps to a long package root, empty string otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
		{ "ToolTip", "Tries to convert a given relative or absolute filename to a long package name or path starting with a root like /Game\nThis works on both package names and directories, and it does not validate that it actually exists on disk.\n@param Filename Filename to convert.\n@return Resulting long package name if the supplied filename properly maps to a long package root, empty string otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageTools, nullptr, "FilenameToPackageName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::PackageTools_eventFilenameToPackageName_Parms), Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageTools_FilenameToPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPackageTools_FilenameToPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics
	{
		struct PackageTools_eventPackageNameToFilename_Parms
		{
			FString PackageName;
			FString Extension;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PackageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventPackageNameToFilename_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_PackageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_Extension_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventPackageNameToFilename_Parms, Extension), METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_Extension_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventPackageNameToFilename_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Editor Scripting | Package Tools" },
		{ "Comment", "/** \n\x09 * Converts a long package name to a file name.\n\x09 * This can be called on package paths as well, provide no extension in that case.\n\x09 * Will return an empty string if it fails.\n\x09 * @param PackageName Long Package Name\n\x09 * @param Extension Package extension.\n\x09 * @return Package filename, or empty if it failed.\n\x09 */" },
		{ "CPP_Default_Extension", "" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
		{ "ToolTip", "Converts a long package name to a file name.\nThis can be called on package paths as well, provide no extension in that case.\nWill return an empty string if it fails.\n@param PackageName Long Package Name\n@param Extension Package extension.\n@return Package filename, or empty if it failed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageTools, nullptr, "PackageNameToFilename", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::PackageTools_eventPackageNameToFilename_Parms), Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageTools_PackageNameToFilename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPackageTools_PackageNameToFilename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics
	{
		struct PackageTools_eventSanitizePackageName_Parms
		{
			FString InPackageName;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InPackageName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName = { "InPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventSanitizePackageName_Parms, InPackageName), METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PackageTools_eventSanitizePackageName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_InPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Package Tools" },
		{ "Comment", "/** Replaces all invalid package name characters with _ */" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
		{ "ToolTip", "Replaces all invalid package name characters with _" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPackageTools, nullptr, "SanitizePackageName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PackageTools_eventSanitizePackageName_Parms), Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPackageTools_SanitizePackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPackageTools_SanitizePackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPackageTools);
	UClass* Z_Construct_UClass_UPackageTools_NoRegister()
	{
		return UPackageTools::StaticClass();
	}
	struct Z_Construct_UClass_UPackageTools_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPackageTools_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPackageTools_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPackageTools_FilenameToPackageName, "FilenameToPackageName" }, // 1548248106
		{ &Z_Construct_UFunction_UPackageTools_PackageNameToFilename, "PackageNameToFilename" }, // 3823802211
		{ &Z_Construct_UFunction_UPackageTools_SanitizePackageName, "SanitizePackageName" }, // 158401315
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPackageTools_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PackageTools.h" },
		{ "ModuleRelativePath", "Public/PackageTools.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPackageTools_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPackageTools>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPackageTools_Statics::ClassParams = {
		&UPackageTools::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPackageTools_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPackageTools_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPackageTools()
	{
		if (!Z_Registration_Info_UClass_UPackageTools.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPackageTools.OuterSingleton, Z_Construct_UClass_UPackageTools_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPackageTools.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPackageTools>()
	{
		return UPackageTools::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPackageTools);
	UPackageTools::~UPackageTools() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics::EnumInfo[] = {
		{ EReloadPackagesInteractionMode_StaticEnum, TEXT("EReloadPackagesInteractionMode"), &Z_Registration_Info_UEnum_EReloadPackagesInteractionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1001375270U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPackageTools, UPackageTools::StaticClass, TEXT("UPackageTools"), &Z_Registration_Info_UClass_UPackageTools, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPackageTools), 2482562050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_3351295359(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PackageTools_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
