// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_WebAPIOperation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_WebAPIOperation() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WebAPIBlueprintGraph();
	WEBAPIBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_WebAPIOperation();
	WEBAPIBLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_WebAPIOperation_NoRegister();
	WEBAPIBLUEPRINTGRAPH_API UEnum* Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebAPIOperationAsyncType;
	static UEnum* EWebAPIOperationAsyncType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIOperationAsyncType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWebAPIOperationAsyncType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType, (UObject*)Z_Construct_UPackage__Script_WebAPIBlueprintGraph(), TEXT("EWebAPIOperationAsyncType"));
		}
		return Z_Registration_Info_UEnum_EWebAPIOperationAsyncType.OuterSingleton;
	}
	template<> WEBAPIBLUEPRINTGRAPH_API UEnum* StaticEnum<EWebAPIOperationAsyncType>()
	{
		return EWebAPIOperationAsyncType_StaticEnum();
	}
	struct Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::Enumerators[] = {
		{ "EWebAPIOperationAsyncType::LatentAction", (int64)EWebAPIOperationAsyncType::LatentAction },
		{ "EWebAPIOperationAsyncType::Callback", (int64)EWebAPIOperationAsyncType::Callback },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::Enum_MetaDataParams[] = {
		{ "Callback.Name", "EWebAPIOperationAsyncType::Callback" },
		{ "LatentAction.Name", "EWebAPIOperationAsyncType::LatentAction" },
		{ "ModuleRelativePath", "Private/K2Node_WebAPIOperation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebAPIBlueprintGraph,
		nullptr,
		"EWebAPIOperationAsyncType",
		"EWebAPIOperationAsyncType",
		Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIOperationAsyncType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebAPIOperationAsyncType.InnerSingleton, Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWebAPIOperationAsyncType.InnerSingleton;
	}
	void UK2Node_WebAPIOperation::StaticRegisterNativesUK2Node_WebAPIOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_WebAPIOperation);
	UClass* Z_Construct_UClass_UK2Node_WebAPIOperation_NoRegister()
	{
		return UK2Node_WebAPIOperation::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_WebAPIOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OperationClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatentFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LatentFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelegatedFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DelegatedFunctionName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OperationAsyncType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OperationAsyncType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OperationAsyncType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIBlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "K2Node_WebAPIOperation.h" },
		{ "ModuleRelativePath", "Private/K2Node_WebAPIOperation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationClass_MetaData[] = {
		{ "Comment", "/** The class containing the operation functions, AND is the return type of the latent function. */" },
		{ "ModuleRelativePath", "Private/K2Node_WebAPIOperation.h" },
		{ "ToolTip", "The class containing the operation functions, AND is the return type of the latent function." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationClass = { "OperationClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WebAPIOperation, OperationClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_LatentFunctionName_MetaData[] = {
		{ "Comment", "/** The name of the latent function to call to create an operation object. */" },
		{ "ModuleRelativePath", "Private/K2Node_WebAPIOperation.h" },
		{ "ToolTip", "The name of the latent function to call to create an operation object." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_LatentFunctionName = { "LatentFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WebAPIOperation, LatentFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_LatentFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_LatentFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_DelegatedFunctionName_MetaData[] = {
		{ "Comment", "/** The name of the delegated function to call to create an operation object. */" },
		{ "ModuleRelativePath", "Private/K2Node_WebAPIOperation.h" },
		{ "ToolTip", "The name of the delegated function to call to create an operation object." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_DelegatedFunctionName = { "DelegatedFunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WebAPIOperation, DelegatedFunctionName), METADATA_PARAMS(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_DelegatedFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_DelegatedFunctionName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType_MetaData[] = {
		{ "Comment", "/** Latent Action is preferred, but not compatible when used in a function, so allow conversion between the two. */" },
		{ "ModuleRelativePath", "Private/K2Node_WebAPIOperation.h" },
		{ "ToolTip", "Latent Action is preferred, but not compatible when used in a function, so allow conversion between the two." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType = { "OperationAsyncType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_WebAPIOperation, OperationAsyncType), Z_Construct_UEnum_WebAPIBlueprintGraph_EWebAPIOperationAsyncType, METADATA_PARAMS(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType_MetaData)) }; // 2397147148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_LatentFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_DelegatedFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::NewProp_OperationAsyncType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_WebAPIOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::ClassParams = {
		&UK2Node_WebAPIOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_WebAPIOperation()
	{
		if (!Z_Registration_Info_UClass_UK2Node_WebAPIOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_WebAPIOperation.OuterSingleton, Z_Construct_UClass_UK2Node_WebAPIOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_WebAPIOperation.OuterSingleton;
	}
	template<> WEBAPIBLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_WebAPIOperation>()
	{
		return UK2Node_WebAPIOperation::StaticClass();
	}
	UK2Node_WebAPIOperation::UK2Node_WebAPIOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_WebAPIOperation);
	UK2Node_WebAPIOperation::~UK2Node_WebAPIOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics::EnumInfo[] = {
		{ EWebAPIOperationAsyncType_StaticEnum, TEXT("EWebAPIOperationAsyncType"), &Z_Registration_Info_UEnum_EWebAPIOperationAsyncType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2397147148U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_WebAPIOperation, UK2Node_WebAPIOperation::StaticClass, TEXT("UK2Node_WebAPIOperation"), &Z_Registration_Info_UClass_UK2Node_WebAPIOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_WebAPIOperation), 280490264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_128106305(TEXT("/Script/WebAPIBlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIBlueprintGraph_Private_K2Node_WebAPIOperation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
