// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithInterchangeScripting.h"
#include "DatasmithImportOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithInterchangeScripting() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions();
	DATASMITHINTERCHANGESCRIPTING_API UClass* Z_Construct_UClass_UDatasmithInterchangeImportResult();
	DATASMITHINTERCHANGESCRIPTING_API UClass* Z_Construct_UClass_UDatasmithInterchangeImportResult_NoRegister();
	DATASMITHINTERCHANGESCRIPTING_API UClass* Z_Construct_UClass_UDatasmithInterchangeScripting();
	DATASMITHINTERCHANGESCRIPTING_API UClass* Z_Construct_UClass_UDatasmithInterchangeScripting_NoRegister();
	DATASMITHINTERCHANGESCRIPTING_API UFunction* Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature();
	DATASMITHINTERCHANGESCRIPTING_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithInterchangeScripting();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DatasmithInterchangeScripting, nullptr, "DatasmithInterchangeImportEnded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDatasmithInterchangeImportEnded_DelegateWrapper(const FMulticastScriptDelegate& DatasmithInterchangeImportEnded)
{
	DatasmithInterchangeImportEnded.ProcessMulticastDelegate<UObject>(NULL);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext;
class UScriptStruct* FDatasmithInterchangeImportContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext, (UObject*)Z_Construct_UPackage__Script_DatasmithInterchangeScripting(), TEXT("DatasmithInterchangeImportContext"));
	}
	return Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext.OuterSingleton;
}
template<> DATASMITHINTERCHANGESCRIPTING_API UScriptStruct* StaticStruct<FDatasmithInterchangeImportContext>()
{
	return FDatasmithInterchangeImportContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Anchor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Anchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAsync_MetaData[];
#endif
		static void NewProp_bAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticMeshOptions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportOptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportOptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithInterchangeImportContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/** Path of content folder where to store created assets */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "Path of content folder where to store created assets" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithInterchangeImportContext, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_Anchor_MetaData[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/** If not null, the resulting ADatasmithSceneActor will be parented to the Anchor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "If not null, the resulting ADatasmithSceneActor will be parented to the Anchor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_Anchor = { "Anchor", nullptr, (EPropertyFlags)0x001400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithInterchangeImportContext, Anchor), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_Anchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_Anchor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync_MetaData[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/** If true, the import will be asynchronous */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "If true, the import will be asynchronous" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync_SetBit(void* Obj)
	{
		((FDatasmithInterchangeImportContext*)Obj)->bAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync = { "bAsync", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDatasmithInterchangeImportContext), &Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_StaticMeshOptions_MetaData[] = {
		{ "Category", "StaticMesh Options" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_StaticMeshOptions = { "StaticMeshOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithInterchangeImportContext, StaticMeshOptions), Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_StaticMeshOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_StaticMeshOptions_MetaData)) }; // 4292395546
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions_Inner = { "ImportOptions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions_MetaData[] = {
		{ "Category", "Import Options" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions = { "ImportOptions", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDatasmithInterchangeImportContext, ImportOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_Anchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_bAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_StaticMeshOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewProp_ImportOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchangeScripting,
		nullptr,
		&NewStructOps,
		"DatasmithInterchangeImportContext",
		sizeof(FDatasmithInterchangeImportContext),
		alignof(FDatasmithInterchangeImportContext),
		Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext()
	{
		if (!Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext.InnerSingleton, Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext.InnerSingleton;
	}
	void UDatasmithInterchangeImportResult::StaticRegisterNativesUDatasmithInterchangeImportResult()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithInterchangeImportResult);
	UClass* Z_Construct_UClass_UDatasmithInterchangeImportResult_NoRegister()
	{
		return UDatasmithInterchangeImportResult::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImportedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnImportEnded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnImportEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchangeScripting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "DatasmithInterchangeScripting.h" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects_Inner = { "ImportedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects_MetaData[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/** Dynamic delegate used to trigger an event in the Game when the import is completed */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "Dynamic delegate used to trigger an event in the Game when the import is completed" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects = { "ImportedObjects", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithInterchangeImportResult, ImportedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_OnImportEnded_MetaData[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/** Dynamic delegate used to trigger an event in the Game when the import is completed */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "Dynamic delegate used to trigger an event in the Game when the import is completed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_OnImportEnded = { "OnImportEnded", nullptr, (EPropertyFlags)0x00100000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithInterchangeImportResult, OnImportEnded), Z_Construct_UDelegateFunction_DatasmithInterchangeScripting_DatasmithInterchangeImportEnded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_OnImportEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_OnImportEnded_MetaData)) }; // 261740436
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_ImportedObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::NewProp_OnImportEnded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithInterchangeImportResult>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::ClassParams = {
		&UDatasmithInterchangeImportResult::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithInterchangeImportResult()
	{
		if (!Z_Registration_Info_UClass_UDatasmithInterchangeImportResult.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithInterchangeImportResult.OuterSingleton, Z_Construct_UClass_UDatasmithInterchangeImportResult_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithInterchangeImportResult.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGESCRIPTING_API UClass* StaticClass<UDatasmithInterchangeImportResult>()
	{
		return UDatasmithInterchangeImportResult::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithInterchangeImportResult);
	DEFINE_FUNCTION(UDatasmithInterchangeScripting::execGetDatasmithFormats)
	{
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Extensions);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_FileTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDatasmithInterchangeScripting::GetDatasmithFormats(Z_Param_Out_Extensions,Z_Param_Out_FileTypes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithInterchangeScripting::execGetDatasmithOptionsForFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetDatasmithOptionsForFile(Z_Param_FilePath,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithInterchangeScripting::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_STRUCT_REF(FDatasmithInterchangeImportContext,Z_Param_Out_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithInterchangeImportResult**)Z_Param__Result=UDatasmithInterchangeScripting::LoadFile(Z_Param_FilePath,Z_Param_Out_Context);
		P_NATIVE_END;
	}
	void UDatasmithInterchangeScripting::StaticRegisterNativesUDatasmithInterchangeScripting()
	{
		UClass* Class = UDatasmithInterchangeScripting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDatasmithFormats", &UDatasmithInterchangeScripting::execGetDatasmithFormats },
			{ "GetDatasmithOptionsForFile", &UDatasmithInterchangeScripting::execGetDatasmithOptionsForFile },
			{ "LoadFile", &UDatasmithInterchangeScripting::execLoadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics
	{
		struct DatasmithInterchangeScripting_eventGetDatasmithFormats_Parms
		{
			FString Extensions;
			FString FileTypes;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extensions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FileTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventGetDatasmithFormats_Parms, Extensions), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::NewProp_FileTypes = { "FileTypes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventGetDatasmithFormats_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::NewProp_Extensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::NewProp_FileTypes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/**\n\x09 * Utility method to get list of supported extensions and string to pass to IDesktopPlatform::OpenFileDialog\n\x09 * @param Extensions : ';' separated list of extensions supported by Datasmith thru Interchange\n\x09 * @param FileTypes\x09 : The type filters to show in the dialog when using @see IDesktopPlatform::OpenFileDialog.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "Utility method to get list of supported extensions and string to pass to IDesktopPlatform::OpenFileDialog\n@param Extensions : ';' separated list of extensions supported by Datasmith thru Interchange\n@param FileTypes      : The type filters to show in the dialog when using @see IDesktopPlatform::OpenFileDialog." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithInterchangeScripting, nullptr, "GetDatasmithFormats", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::DatasmithInterchangeScripting_eventGetDatasmithFormats_Parms), Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics
	{
		struct DatasmithInterchangeScripting_eventGetDatasmithOptionsForFile_Parms
		{
			FString FilePath;
			TArray<UObject*> Options;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Options_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventGetDatasmithOptionsForFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_Options_Inner = { "Options", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventGetDatasmithOptionsForFile_Parms, Options), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_Options_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/**\n\x09 * Fetch the typed options associated with this file\n\x09 * @param FilePath\x09The path to the file to get the option for\n\x09 * @param OptionType\x09Type of the option structure to get\n\x09 * @return The option structure found\n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "Fetch the typed options associated with this file\n@param FilePath      The path to the file to get the option for\n@param OptionType    Type of the option structure to get\n@return The option structure found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithInterchangeScripting, nullptr, "GetDatasmithOptionsForFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::DatasmithInterchangeScripting_eventGetDatasmithOptionsForFile_Parms), Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics
	{
		struct DatasmithInterchangeScripting_eventLoadFile_Parms
		{
			FString FilePath;
			FDatasmithInterchangeImportContext Context;
			UDatasmithInterchangeImportResult* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventLoadFile_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventLoadFile_Parms, Context), Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_Context_MetaData)) }; // 2117314392
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithInterchangeScripting_eventLoadFile_Parms, ReturnValue), Z_Construct_UClass_UDatasmithInterchangeImportResult_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Interchange" },
		{ "Comment", "/**\n\x09 * Utility method to load a specific file into the current level\n\x09 * @param FilePath  : Path to the file to load.\n\x09 * @param AssetPath\x09: .\n\x09 * @param bAsync    : \n\x09 * @param Anchor    : \n\x09 */" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ToolTip", "Utility method to load a specific file into the current level\n@param FilePath  : Path to the file to load.\n@param AssetPath     : .\n@param bAsync    :\n@param Anchor    :" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithInterchangeScripting, nullptr, "LoadFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::DatasmithInterchangeScripting_eventLoadFile_Parms), Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithInterchangeScripting);
	UClass* Z_Construct_UClass_UDatasmithInterchangeScripting_NoRegister()
	{
		return UDatasmithInterchangeScripting::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithInterchangeScripting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithInterchangeScripting,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithFormats, "GetDatasmithFormats" }, // 3680687487
		{ &Z_Construct_UFunction_UDatasmithInterchangeScripting_GetDatasmithOptionsForFile, "GetDatasmithOptionsForFile" }, // 3270077333
		{ &Z_Construct_UFunction_UDatasmithInterchangeScripting_LoadFile, "LoadFile" }, // 2357089276
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "DatasmithInterchangeScripting.h" },
		{ "ModuleRelativePath", "Public/DatasmithInterchangeScripting.h" },
		{ "ScriptName", "DatasmithInterchangeScripting" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithInterchangeScripting>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::ClassParams = {
		&UDatasmithInterchangeScripting::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithInterchangeScripting()
	{
		if (!Z_Registration_Info_UClass_UDatasmithInterchangeScripting.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithInterchangeScripting.OuterSingleton, Z_Construct_UClass_UDatasmithInterchangeScripting_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithInterchangeScripting.OuterSingleton;
	}
	template<> DATASMITHINTERCHANGESCRIPTING_API UClass* StaticClass<UDatasmithInterchangeScripting>()
	{
		return UDatasmithInterchangeScripting::StaticClass();
	}
	UDatasmithInterchangeScripting::UDatasmithInterchangeScripting(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithInterchangeScripting);
	UDatasmithInterchangeScripting::~UDatasmithInterchangeScripting() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics::ScriptStructInfo[] = {
		{ FDatasmithInterchangeImportContext::StaticStruct, Z_Construct_UScriptStruct_FDatasmithInterchangeImportContext_Statics::NewStructOps, TEXT("DatasmithInterchangeImportContext"), &Z_Registration_Info_UScriptStruct_DatasmithInterchangeImportContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDatasmithInterchangeImportContext), 2117314392U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithInterchangeImportResult, UDatasmithInterchangeImportResult::StaticClass, TEXT("UDatasmithInterchangeImportResult"), &Z_Registration_Info_UClass_UDatasmithInterchangeImportResult, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithInterchangeImportResult), 3143596770U) },
		{ Z_Construct_UClass_UDatasmithInterchangeScripting, UDatasmithInterchangeScripting::StaticClass, TEXT("UDatasmithInterchangeScripting"), &Z_Registration_Info_UClass_UDatasmithInterchangeScripting, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithInterchangeScripting), 2096820217U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_815434030(TEXT("/Script/DatasmithInterchangeScripting"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Enterprise_DatasmithInterchange_Source_DatasmithInterchangeScripting_Public_DatasmithInterchangeScripting_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
