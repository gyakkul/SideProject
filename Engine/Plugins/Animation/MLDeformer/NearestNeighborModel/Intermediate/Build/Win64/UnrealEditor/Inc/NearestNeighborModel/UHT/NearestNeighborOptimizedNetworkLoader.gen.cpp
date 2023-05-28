// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NearestNeighborOptimizedNetworkLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNearestNeighborOptimizedNetworkLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader();
	NEARESTNEIGHBORMODEL_API UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NearestNeighborModel();
// End Cross Module References
	DEFINE_FUNCTION(UNearestNeighborOptimizedNetworkLoader::execGetOptimizedNetwork)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNearestNeighborOptimizedNetwork**)Z_Param__Result=P_THIS->GetOptimizedNetwork();
		P_NATIVE_END;
	}
	struct NearestNeighborOptimizedNetworkLoader_eventDoesMeetPrerequisites_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		NearestNeighborOptimizedNetworkLoader_eventDoesMeetPrerequisites_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms
	{
		FString OnnxPath;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites = FName(TEXT("DoesMeetPrerequisites"));
	bool UNearestNeighborOptimizedNetworkLoader::DoesMeetPrerequisites() const
	{
		NearestNeighborOptimizedNetworkLoader_eventDoesMeetPrerequisites_Parms Parms;
		const_cast<UNearestNeighborOptimizedNetworkLoader*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork = FName(TEXT("LoadOptimizedNetwork"));
	bool UNearestNeighborOptimizedNetworkLoader::LoadOptimizedNetwork(const FString& OnnxPath)
	{
		NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms Parms;
		Parms.OnnxPath=OnnxPath;
		ProcessEvent(FindFunctionChecked(NAME_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork),&Parms);
		return !!Parms.ReturnValue;
	}
	void UNearestNeighborOptimizedNetworkLoader::StaticRegisterNativesUNearestNeighborOptimizedNetworkLoader()
	{
		UClass* Class = UNearestNeighborOptimizedNetworkLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOptimizedNetwork", &UNearestNeighborOptimizedNetworkLoader::execGetOptimizedNetwork },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NearestNeighborOptimizedNetworkLoader_eventDoesMeetPrerequisites_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NearestNeighborOptimizedNetworkLoader_eventDoesMeetPrerequisites_Parms), &Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborOptimizedNetworkLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader, nullptr, "DoesMeetPrerequisites", nullptr, nullptr, sizeof(NearestNeighborOptimizedNetworkLoader_eventDoesMeetPrerequisites_Parms), Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics
	{
		struct NearestNeighborOptimizedNetworkLoader_eventGetOptimizedNetwork_Parms
		{
			UNearestNeighborOptimizedNetwork* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborOptimizedNetworkLoader_eventGetOptimizedNetwork_Parms, ReturnValue), Z_Construct_UClass_UNearestNeighborOptimizedNetwork_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborOptimizedNetworkLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader, nullptr, "GetOptimizedNetwork", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::NearestNeighborOptimizedNetworkLoader_eventGetOptimizedNetwork_Parms), Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnnxPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OnnxPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_OnnxPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_OnnxPath = { "OnnxPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms, OnnxPath), METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_OnnxPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_OnnxPath_MetaData)) };
	void Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms), &Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_OnnxPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::Function_MetaDataParams[] = {
		{ "Category", "Nearest Neighbor Model" },
		{ "ModuleRelativePath", "Public/NearestNeighborOptimizedNetworkLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader, nullptr, "LoadOptimizedNetwork", nullptr, nullptr, sizeof(NearestNeighborOptimizedNetworkLoader_eventLoadOptimizedNetwork_Parms), Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNearestNeighborOptimizedNetworkLoader);
	UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_NoRegister()
	{
		return UNearestNeighborOptimizedNetworkLoader::StaticClass();
	}
	struct Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NearestNeighborModel,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_DoesMeetPrerequisites, "DoesMeetPrerequisites" }, // 2351227273
		{ &Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork, "GetOptimizedNetwork" }, // 877400995
		{ &Z_Construct_UFunction_UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork, "LoadOptimizedNetwork" }, // 1348326291
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Helper class to load the optimized network from disk.\n *  LoadOptimizedNetwork is implemented in python.\n */" },
		{ "IncludePath", "NearestNeighborOptimizedNetworkLoader.h" },
		{ "ModuleRelativePath", "Public/NearestNeighborOptimizedNetworkLoader.h" },
		{ "ToolTip", "Helper class to load the optimized network from disk.\nLoadOptimizedNetwork is implemented in python." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNearestNeighborOptimizedNetworkLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::ClassParams = {
		&UNearestNeighborOptimizedNetworkLoader::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader()
	{
		if (!Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkLoader.OuterSingleton, Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkLoader.OuterSingleton;
	}
	template<> NEARESTNEIGHBORMODEL_API UClass* StaticClass<UNearestNeighborOptimizedNetworkLoader>()
	{
		return UNearestNeighborOptimizedNetworkLoader::StaticClass();
	}
	UNearestNeighborOptimizedNetworkLoader::UNearestNeighborOptimizedNetworkLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNearestNeighborOptimizedNetworkLoader);
	UNearestNeighborOptimizedNetworkLoader::~UNearestNeighborOptimizedNetworkLoader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborOptimizedNetworkLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborOptimizedNetworkLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNearestNeighborOptimizedNetworkLoader, UNearestNeighborOptimizedNetworkLoader::StaticClass, TEXT("UNearestNeighborOptimizedNetworkLoader"), &Z_Registration_Info_UClass_UNearestNeighborOptimizedNetworkLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNearestNeighborOptimizedNetworkLoader), 334196526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborOptimizedNetworkLoader_h_460547971(TEXT("/Script/NearestNeighborModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborOptimizedNetworkLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MLDeformer_NearestNeighborModel_Source_NearestNeighborModel_Public_NearestNeighborOptimizedNetworkLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
