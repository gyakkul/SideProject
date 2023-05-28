// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialImportHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialImportHelpers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialImportHelpers();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialImportHelpers_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialSearchLocation;
	static UEnum* EMaterialSearchLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialSearchLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialSearchLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EMaterialSearchLocation"));
		}
		return Z_Registration_Info_UEnum_EMaterialSearchLocation.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EMaterialSearchLocation>()
	{
		return EMaterialSearchLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::Enumerators[] = {
		{ "EMaterialSearchLocation::Local", (int64)EMaterialSearchLocation::Local },
		{ "EMaterialSearchLocation::UnderParent", (int64)EMaterialSearchLocation::UnderParent },
		{ "EMaterialSearchLocation::UnderRoot", (int64)EMaterialSearchLocation::UnderRoot },
		{ "EMaterialSearchLocation::AllAssets", (int64)EMaterialSearchLocation::AllAssets },
		{ "EMaterialSearchLocation::DoNotSearch", (int64)EMaterialSearchLocation::DoNotSearch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::Enum_MetaDataParams[] = {
		{ "AllAssets.Comment", "/** Search for matching material in all assets folders. */" },
		{ "AllAssets.Name", "EMaterialSearchLocation::AllAssets" },
		{ "AllAssets.ToolTip", "Search for matching material in all assets folders." },
		{ "BlueprintType", "true" },
		{ "DoNotSearch.Comment", "/** Do not search for existing matching materials */" },
		{ "DoNotSearch.Name", "EMaterialSearchLocation::DoNotSearch" },
		{ "DoNotSearch.ToolTip", "Do not search for existing matching materials" },
		{ "Local.Comment", "/** Search for matching material in local import folder only. */" },
		{ "Local.Name", "EMaterialSearchLocation::Local" },
		{ "Local.ToolTip", "Search for matching material in local import folder only." },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
		{ "UnderParent.Comment", "/** Search for matching material recursively from parent folder. */" },
		{ "UnderParent.Name", "EMaterialSearchLocation::UnderParent" },
		{ "UnderParent.ToolTip", "Search for matching material recursively from parent folder." },
		{ "UnderRoot.Comment", "/** Search for matching material recursively from root folder. */" },
		{ "UnderRoot.Name", "EMaterialSearchLocation::UnderRoot" },
		{ "UnderRoot.ToolTip", "Search for matching material recursively from root folder." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EMaterialSearchLocation",
		"EMaterialSearchLocation",
		Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation()
	{
		if (!Z_Registration_Info_UEnum_EMaterialSearchLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialSearchLocation.InnerSingleton, Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialSearchLocation.InnerSingleton;
	}
	DEFINE_FUNCTION(UMaterialImportHelpers::execFindExistingMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BasePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialFullName);
		P_GET_UBOOL(Z_Param_bRecursivePaths);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=UMaterialImportHelpers::FindExistingMaterial(Z_Param_BasePath,Z_Param_MaterialFullName,Z_Param_bRecursivePaths,Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialImportHelpers::execFindExistingMaterialFromSearchLocation)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MaterialFullName);
		P_GET_PROPERTY(FStrProperty,Z_Param_BasePackagePath);
		P_GET_ENUM(EMaterialSearchLocation,Z_Param_SearchLocation);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutError);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=UMaterialImportHelpers::FindExistingMaterialFromSearchLocation(Z_Param_MaterialFullName,Z_Param_BasePackagePath,EMaterialSearchLocation(Z_Param_SearchLocation),Z_Param_Out_OutError);
		P_NATIVE_END;
	}
	void UMaterialImportHelpers::StaticRegisterNativesUMaterialImportHelpers()
	{
		UClass* Class = UMaterialImportHelpers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindExistingMaterial", &UMaterialImportHelpers::execFindExistingMaterial },
			{ "FindExistingMaterialFromSearchLocation", &UMaterialImportHelpers::execFindExistingMaterialFromSearchLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics
	{
		struct MaterialImportHelpers_eventFindExistingMaterial_Parms
		{
			FString BasePath;
			FString MaterialFullName;
			bool bRecursivePaths;
			FText OutError;
			UMaterialInterface* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFullName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialFullName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursivePaths_MetaData[];
#endif
		static void NewProp_bRecursivePaths_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursivePaths;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath = { "BasePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, BasePath), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName = { "MaterialFullName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, MaterialFullName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_SetBit(void* Obj)
	{
		((MaterialImportHelpers_eventFindExistingMaterial_Parms*)Obj)->bRecursivePaths = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths = { "bRecursivePaths", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialImportHelpers_eventFindExistingMaterial_Parms), &Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_BasePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_MaterialFullName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_bRecursivePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Materials" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportHelpers, nullptr, "FindExistingMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::MaterialImportHelpers_eventFindExistingMaterial_Parms), Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics
	{
		struct MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms
		{
			FString MaterialFullName;
			FString BasePackagePath;
			EMaterialSearchLocation SearchLocation;
			FText OutError;
			UMaterialInterface* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFullName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialFullName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BasePackagePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SearchLocation_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchLocation;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutError;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName = { "MaterialFullName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, MaterialFullName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath = { "BasePackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, BasePackagePath), METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation = { "SearchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, SearchLocation), Z_Construct_UEnum_UnrealEd_EMaterialSearchLocation, METADATA_PARAMS(nullptr, 0) }; // 3501556352
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_OutError = { "OutError", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, OutError), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_MaterialFullName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_BasePackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_SearchLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_OutError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Materials" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialImportHelpers, nullptr, "FindExistingMaterialFromSearchLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::MaterialImportHelpers_eventFindExistingMaterialFromSearchLocation_Parms), Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialImportHelpers);
	UClass* Z_Construct_UClass_UMaterialImportHelpers_NoRegister()
	{
		return UMaterialImportHelpers::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialImportHelpers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialImportHelpers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialImportHelpers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterial, "FindExistingMaterial" }, // 1725220590
		{ &Z_Construct_UFunction_UMaterialImportHelpers_FindExistingMaterialFromSearchLocation, "FindExistingMaterialFromSearchLocation" }, // 1649809848
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialImportHelpers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/MaterialImportHelpers.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialImportHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialImportHelpers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialImportHelpers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialImportHelpers_Statics::ClassParams = {
		&UMaterialImportHelpers::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialImportHelpers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialImportHelpers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialImportHelpers()
	{
		if (!Z_Registration_Info_UClass_UMaterialImportHelpers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialImportHelpers.OuterSingleton, Z_Construct_UClass_UMaterialImportHelpers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialImportHelpers.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialImportHelpers>()
	{
		return UMaterialImportHelpers::StaticClass();
	}
	UMaterialImportHelpers::UMaterialImportHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialImportHelpers);
	UMaterialImportHelpers::~UMaterialImportHelpers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics::EnumInfo[] = {
		{ EMaterialSearchLocation_StaticEnum, TEXT("EMaterialSearchLocation"), &Z_Registration_Info_UEnum_EMaterialSearchLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3501556352U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialImportHelpers, UMaterialImportHelpers::StaticClass, TEXT("UMaterialImportHelpers"), &Z_Registration_Info_UClass_UMaterialImportHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialImportHelpers), 3715465748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_1944101026(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialImportHelpers_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
