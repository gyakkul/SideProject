// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMClient() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMClientHost_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMController_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEditorSideObject();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMEditorSideObject_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMFunctionLibrary_NoRegister();
	RIGVMDEVELOPER_API UClass* Z_Construct_UClass_URigVMGraph_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	void URigVMClientHost::StaticRegisterNativesURigVMClientHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMClientHost);
	UClass* Z_Construct_UClass_URigVMClientHost_NoRegister()
	{
		return URigVMClientHost::StaticClass();
	}
	struct Z_Construct_UClass_URigVMClientHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMClientHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMClientHost_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMClientHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRigVMClientHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMClientHost_Statics::ClassParams = {
		&URigVMClientHost::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMClientHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMClientHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMClientHost()
	{
		if (!Z_Registration_Info_UClass_URigVMClientHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMClientHost.OuterSingleton, Z_Construct_UClass_URigVMClientHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMClientHost.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMClientHost>()
	{
		return URigVMClientHost::StaticClass();
	}
	URigVMClientHost::URigVMClientHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMClientHost);
	URigVMClientHost::~URigVMClientHost() {}
	void URigVMEditorSideObject::StaticRegisterNativesURigVMEditorSideObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMEditorSideObject);
	UClass* Z_Construct_UClass_URigVMEditorSideObject_NoRegister()
	{
		return URigVMEditorSideObject::StaticClass();
	}
	struct Z_Construct_UClass_URigVMEditorSideObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URigVMEditorSideObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URigVMEditorSideObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URigVMEditorSideObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRigVMEditorSideObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMEditorSideObject_Statics::ClassParams = {
		&URigVMEditorSideObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_URigVMEditorSideObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URigVMEditorSideObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URigVMEditorSideObject()
	{
		if (!Z_Registration_Info_UClass_URigVMEditorSideObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMEditorSideObject.OuterSingleton, Z_Construct_UClass_URigVMEditorSideObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URigVMEditorSideObject.OuterSingleton;
	}
	template<> RIGVMDEVELOPER_API UClass* StaticClass<URigVMEditorSideObject>()
	{
		return URigVMEditorSideObject::StaticClass();
	}
	URigVMEditorSideObject::URigVMEditorSideObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMEditorSideObject);
	URigVMEditorSideObject::~URigVMEditorSideObject() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMClient;
class UScriptStruct* FRigVMClient::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMClient.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMClient.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMClient, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMClient"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMClient.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMClient>()
{
	return FRigVMClient::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMClient_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContextStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExecuteContextStruct;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Models_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Models;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FunctionLibrary;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controllers_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Controllers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controllers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Controllers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndoRedoIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UndoRedoIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMClient_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A management struct containing graphs and controllers.\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
		{ "ToolTip", "A management struct containing graphs and controllers." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMClient_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMClient>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_ExecuteContextStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_ExecuteContextStruct = { "ExecuteContextStruct", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMClient, ExecuteContextStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_ExecuteContextStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_ExecuteContextStruct_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models_Inner = { "Models", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URigVMGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMClient, Models), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_FunctionLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_FunctionLibrary = { "FunctionLibrary", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMClient, FunctionLibrary), Z_Construct_UClass_URigVMFunctionLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_FunctionLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_FunctionLibrary_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_ValueProp = { "Controllers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_URigVMController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_Key_KeyProp = { "Controllers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers = { "Controllers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMClient, Controllers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_UndoRedoIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMClient.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_UndoRedoIndex = { "UndoRedoIndex", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMClient, UndoRedoIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_UndoRedoIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_UndoRedoIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_ExecuteContextStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Models,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_FunctionLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_Controllers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMClient_Statics::NewProp_UndoRedoIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMClient_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMClient",
		sizeof(FRigVMClient),
		alignof(FRigVMClient),
		Z_Construct_UScriptStruct_FRigVMClient_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMClient_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMClient_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMClient()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMClient.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMClient.InnerSingleton, Z_Construct_UScriptStruct_FRigVMClient_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMClient.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics::ScriptStructInfo[] = {
		{ FRigVMClient::StaticStruct, Z_Construct_UScriptStruct_FRigVMClient_Statics::NewStructOps, TEXT("RigVMClient"), &Z_Registration_Info_UScriptStruct_RigVMClient, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMClient), 1783123471U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URigVMClientHost, URigVMClientHost::StaticClass, TEXT("URigVMClientHost"), &Z_Registration_Info_UClass_URigVMClientHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMClientHost), 4096289824U) },
		{ Z_Construct_UClass_URigVMEditorSideObject, URigVMEditorSideObject::StaticClass, TEXT("URigVMEditorSideObject"), &Z_Registration_Info_UClass_URigVMEditorSideObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMEditorSideObject), 132755185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_4107788268(TEXT("/Script/RigVMDeveloper"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMClient_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
