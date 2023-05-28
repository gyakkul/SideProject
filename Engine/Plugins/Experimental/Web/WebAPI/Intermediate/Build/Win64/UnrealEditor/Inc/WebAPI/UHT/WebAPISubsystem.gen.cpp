// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPISubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPISubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_WebAPI();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIOperationObject_NoRegister();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPISubsystem();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPISubsystem_NoRegister();
	WEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPIPooledOperation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPIPooledOperation;
class UScriptStruct* FWebAPIPooledOperation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPIPooledOperation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPIPooledOperation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPIPooledOperation, (UObject*)Z_Construct_UPackage__Script_WebAPI(), TEXT("WebAPIPooledOperation"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPIPooledOperation.OuterSingleton;
}
template<> WEBAPI_API UScriptStruct* StaticStruct<FWebAPIPooledOperation>()
{
	return FWebAPIPooledOperation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ItemClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AvailableItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableItems;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemsInUse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsInUse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsInUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container for an Operation object pool, per operation type (class). */" },
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
		{ "ToolTip", "Container for an Operation object pool, per operation type (class)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPIPooledOperation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemClass_MetaData[] = {
		{ "Comment", "/** Operation Class (also acts as a key). */" },
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
		{ "ToolTip", "Operation Class (also acts as a key)." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIPooledOperation, ItemClass), Z_Construct_UClass_UWebAPIOperationObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems_Inner = { "AvailableItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIOperationObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems_MetaData[] = {
		{ "Comment", "/** Pool of un-used operations. */" },
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
		{ "ToolTip", "Pool of un-used operations." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems = { "AvailableItems", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIPooledOperation, AvailableItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse_Inner = { "ItemsInUse", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIOperationObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse_MetaData[] = {
		{ "Comment", "/** Pool of operations currently in use. */" },
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
		{ "ToolTip", "Pool of operations currently in use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse = { "ItemsInUse", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPIPooledOperation, ItemsInUse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_AvailableItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewProp_ItemsInUse,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
		nullptr,
		&NewStructOps,
		"WebAPIPooledOperation",
		sizeof(FWebAPIPooledOperation),
		alignof(FWebAPIPooledOperation),
		Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPIPooledOperation()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPIPooledOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPIPooledOperation.InnerSingleton, Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPIPooledOperation.InnerSingleton;
	}
	void UWebAPISubsystem::StaticRegisterNativesUWebAPISubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPISubsystem);
	UClass* Z_Construct_UClass_UWebAPISubsystem_NoRegister()
	{
		return UWebAPISubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPISubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePooling_MetaData[];
#endif
		static void NewProp_bUsePooling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePooling;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OperationPool_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OperationPool_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationPool_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OperationPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPISubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Common functionality and top-level parent for shared objects. */" },
		{ "IncludePath", "WebAPISubsystem.h" },
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
		{ "ToolTip", "Common functionality and top-level parent for shared objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling_MetaData[] = {
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
	};
#endif
	void Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling_SetBit(void* Obj)
	{
		((UWebAPISubsystem*)Obj)->bUsePooling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling = { "bUsePooling", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPISubsystem), &Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_ValueProp = { "OperationPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWebAPIPooledOperation, METADATA_PARAMS(nullptr, 0) }; // 792991252
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_Key_KeyProp = { "OperationPool_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/WebAPISubsystem.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool = { "OperationPool", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISubsystem, OperationPool), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_MetaData)) }; // 792991252
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPISubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_bUsePooling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISubsystem_Statics::NewProp_OperationPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPISubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPISubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPISubsystem_Statics::ClassParams = {
		&UWebAPISubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPISubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPISubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPISubsystem()
	{
		if (!Z_Registration_Info_UClass_UWebAPISubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPISubsystem.OuterSingleton, Z_Construct_UClass_UWebAPISubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPISubsystem.OuterSingleton;
	}
	template<> WEBAPI_API UClass* StaticClass<UWebAPISubsystem>()
	{
		return UWebAPISubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPISubsystem);
	UWebAPISubsystem::~UWebAPISubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics::ScriptStructInfo[] = {
		{ FWebAPIPooledOperation::StaticStruct, Z_Construct_UScriptStruct_FWebAPIPooledOperation_Statics::NewStructOps, TEXT("WebAPIPooledOperation"), &Z_Registration_Info_UScriptStruct_WebAPIPooledOperation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPIPooledOperation), 792991252U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPISubsystem, UWebAPISubsystem::StaticClass, TEXT("UWebAPISubsystem"), &Z_Registration_Info_UClass_UWebAPISubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPISubsystem), 4144200656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_3241882729(TEXT("/Script/WebAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPISubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
