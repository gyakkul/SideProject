// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_BaseAsyncTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_BaseAsyncTask() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_BaseAsyncTask::StaticRegisterNativesUK2Node_BaseAsyncTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_BaseAsyncTask);
	UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask_NoRegister()
	{
		return UK2Node_BaseAsyncTask::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyFactoryFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProxyFactoryFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyFactoryClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ProxyFactoryClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_ProxyClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyActivateFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProxyActivateFunctionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** !!! The proxy object should have RF_StrongRefOnFrame flag. !!! */" },
		{ "IncludePath", "K2Node_BaseAsyncTask.h" },
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "!!! The proxy object should have RF_StrongRefOnFrame flag. !!!" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName_MetaData[] = {
		{ "Comment", "// The name of the function to call to create a proxy object\n" },
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The name of the function to call to create a proxy object" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName = { "ProxyFactoryFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyFactoryFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass_MetaData[] = {
		{ "Comment", "// The class containing the proxy object functions\n" },
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The class containing the proxy object functions" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass = { "ProxyFactoryClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyFactoryClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass_MetaData[] = {
		{ "Comment", "// The type of proxy object that will be created\n" },
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The type of proxy object that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass = { "ProxyClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName_MetaData[] = {
		{ "Comment", "// The name of the 'go' function on the proxy object that will be called after delegates are in place, can be NAME_None\n" },
		{ "ModuleRelativePath", "Classes/K2Node_BaseAsyncTask.h" },
		{ "ToolTip", "The name of the 'go' function on the proxy object that will be called after delegates are in place, can be NAME_None" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName = { "ProxyActivateFunctionName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_BaseAsyncTask, ProxyActivateFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyFactoryClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::NewProp_ProxyActivateFunctionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BaseAsyncTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::ClassParams = {
		&UK2Node_BaseAsyncTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask()
	{
		if (!Z_Registration_Info_UClass_UK2Node_BaseAsyncTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_BaseAsyncTask.OuterSingleton, Z_Construct_UClass_UK2Node_BaseAsyncTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_BaseAsyncTask.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_BaseAsyncTask>()
	{
		return UK2Node_BaseAsyncTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BaseAsyncTask);
	UK2Node_BaseAsyncTask::~UK2Node_BaseAsyncTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_BaseAsyncTask, UK2Node_BaseAsyncTask::StaticClass, TEXT("UK2Node_BaseAsyncTask"), &Z_Registration_Info_UClass_UK2Node_BaseAsyncTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_BaseAsyncTask), 1600915825U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_4159131026(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_BaseAsyncTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
