// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/ImportSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImportSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UImportSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UImportSubsystem_NoRegister();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature();
	UNREALED_API UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetPreImport_Dyn_Parms
		{
			UFactory* InFactory;
			UClass* InClass;
			UObject* InParent;
			FName Name;
			FString Type;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFactory;
		static const UECodeGen_Private::FClassPropertyParams NewProp_InClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InFactory = { "InFactory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, InFactory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InClass = { "InClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, InClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InParent = { "InParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, InParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, Name), METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPreImport_Dyn_Parms, Type), METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_InParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::NewProp_Type,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** delegate type fired when new assets are being (re-)imported. Params: UFactory* InFactory, UClass* InClass, UObject* InParent, const FName& Name, const TCHAR* Type */" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new assets are being (re-)imported. Params: UFactory* InFactory, UClass* InClass, UObject* InParent, const FName& Name, const TCHAR* Type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetPreImport_Dyn__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::ImportSubsystem_eventOnAssetPreImport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UImportSubsystem::FOnAssetPreImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPreImport_Dyn, UFactory* InFactory, UClass* InClass, UObject* InParent, FName const& Name, const FString& Type)
{
	struct ImportSubsystem_eventOnAssetPreImport_Dyn_Parms
	{
		UFactory* InFactory;
		UClass* InClass;
		UObject* InParent;
		FName Name;
		FString Type;
	};
	ImportSubsystem_eventOnAssetPreImport_Dyn_Parms Parms;
	Parms.InFactory=InFactory;
	Parms.InClass=InClass;
	Parms.InParent=InParent;
	Parms.Name=Name;
	Parms.Type=Type;
	OnAssetPreImport_Dyn.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetPostImport_Dyn_Parms
		{
			UFactory* InFactory;
			UObject* InCreatedObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFactory;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCreatedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InFactory = { "InFactory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostImport_Dyn_Parms, InFactory), Z_Construct_UClass_UFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject = { "InCreatedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostImport_Dyn_Parms, InCreatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** delegate type fired when new assets have been (re-)imported. Note: InCreatedObject can be NULL if import failed. Params: UFactory* InFactory, UObject* InCreatedObject */" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new assets have been (re-)imported. Note: InCreatedObject can be NULL if import failed. Params: UFactory* InFactory, UObject* InCreatedObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetPostImport_Dyn__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::ImportSubsystem_eventOnAssetPostImport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UImportSubsystem::FOnAssetPostImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostImport_Dyn, UFactory* InFactory, UObject* InCreatedObject)
{
	struct ImportSubsystem_eventOnAssetPostImport_Dyn_Parms
	{
		UFactory* InFactory;
		UObject* InCreatedObject;
	};
	ImportSubsystem_eventOnAssetPostImport_Dyn_Parms Parms;
	Parms.InFactory=InFactory;
	Parms.InCreatedObject=InCreatedObject;
	OnAssetPostImport_Dyn.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetReimport_Dyn_Parms
		{
			UObject* InCreatedObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCreatedObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject = { "InCreatedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetReimport_Dyn_Parms, InCreatedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::NewProp_InCreatedObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** delegate type fired when new assets have been reimported. Note: InCreatedObject can be NULL if import failed. Params: UObject* InCreatedObject */" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new assets have been reimported. Note: InCreatedObject can be NULL if import failed. Params: UObject* InCreatedObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetReimport_Dyn__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::ImportSubsystem_eventOnAssetReimport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UImportSubsystem::FOnAssetReimport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetReimport_Dyn, UObject* InCreatedObject)
{
	struct ImportSubsystem_eventOnAssetReimport_Dyn_Parms
	{
		UObject* InCreatedObject;
	};
	ImportSubsystem_eventOnAssetReimport_Dyn_Parms Parms;
	Parms.InCreatedObject=InCreatedObject;
	OnAssetReimport_Dyn.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics
	{
		struct ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms
		{
			UObject* InObject;
			int32 InLODIndex;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InLODIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InLODIndex = { "InLODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms, InLODIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::NewProp_InLODIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** delegate type fired when new LOD have been imported to an asset. */" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "delegate type fired when new LOD have been imported to an asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImportSubsystem, nullptr, "OnAssetPostLODImport_Dyn__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UImportSubsystem::FOnAssetPostLODImport_Dyn_DelegateWrapper(const FMulticastScriptDelegate& OnAssetPostLODImport_Dyn, UObject* InObject, int32 InLODIndex)
{
	struct ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms
	{
		UObject* InObject;
		int32 InLODIndex;
	};
	ImportSubsystem_eventOnAssetPostLODImport_Dyn_Parms Parms;
	Parms.InObject=InObject;
	Parms.InLODIndex=InLODIndex;
	OnAssetPostLODImport_Dyn.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UImportSubsystem::StaticRegisterNativesUImportSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImportSubsystem);
	UClass* Z_Construct_UClass_UImportSubsystem_NoRegister()
	{
		return UImportSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UImportSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetPreImport_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetPreImport_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetPostImport_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetPostImport_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetReimport_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetReimport_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAssetPostLODImport_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAssetPostLODImport_BP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImportSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UImportSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature, "OnAssetPostImport_Dyn__DelegateSignature" }, // 1794660707
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature, "OnAssetPostLODImport_Dyn__DelegateSignature" }, // 2174971631
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature, "OnAssetPreImport_Dyn__DelegateSignature" }, // 1298804942
		{ &Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature, "OnAssetReimport_Dyn__DelegateSignature" }, // 3707835401
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UImportSubsystem\n * Subsystem for importing assets in the editor, \n * Contains utility functions and callbacks for hooking into importing.\n */" },
		{ "IncludePath", "Subsystems/ImportSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ToolTip", "UImportSubsystem\nSubsystem for importing assets in the editor,\nContains utility functions and callbacks for hooking into importing." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetPreImport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetPreImport" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP = { "OnAssetPreImport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImportSubsystem, OnAssetPreImport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPreImport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP_MetaData)) }; // 1298804942
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetPostImport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetPostImport" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP = { "OnAssetPostImport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImportSubsystem, OnAssetPostImport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostImport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP_MetaData)) }; // 1794660707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetReimport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetReimport" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP = { "OnAssetReimport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImportSubsystem, OnAssetReimport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetReimport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP_MetaData)) }; // 3707835401
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP_MetaData[] = {
		{ "DisplayName", "OnAssetPostLODImport" },
		{ "ModuleRelativePath", "Public/Subsystems/ImportSubsystem.h" },
		{ "ScriptName", "OnAssetPostLODImport" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP = { "OnAssetPostLODImport_BP", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImportSubsystem, OnAssetPostLODImport_BP), Z_Construct_UDelegateFunction_UImportSubsystem_OnAssetPostLODImport_Dyn__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP_MetaData)) }; // 2174971631
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImportSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPreImport_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostImport_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetReimport_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImportSubsystem_Statics::NewProp_OnAssetPostLODImport_BP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImportSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImportSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImportSubsystem_Statics::ClassParams = {
		&UImportSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UImportSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UImportSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImportSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImportSubsystem()
	{
		if (!Z_Registration_Info_UClass_UImportSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImportSubsystem.OuterSingleton, Z_Construct_UClass_UImportSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImportSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UImportSubsystem>()
	{
		return UImportSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImportSubsystem);
	UImportSubsystem::~UImportSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImportSubsystem, UImportSubsystem::StaticClass, TEXT("UImportSubsystem"), &Z_Registration_Info_UClass_UImportSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImportSubsystem), 1608713521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_1754821826(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_ImportSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
