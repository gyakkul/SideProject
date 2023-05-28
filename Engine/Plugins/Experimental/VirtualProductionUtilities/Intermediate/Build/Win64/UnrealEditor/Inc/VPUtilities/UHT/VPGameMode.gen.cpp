// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPGameMode();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPGameMode_NoRegister();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPRootActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVPGameMode::execGetRootActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AVPRootActor**)Z_Param__Result=P_THIS->GetRootActor();
		P_NATIVE_END;
	}
	void AVPGameMode::StaticRegisterNativesAVPGameMode()
	{
		UClass* Class = AVPGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRootActor", &AVPGameMode::execGetRootActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics
	{
		struct VPGameMode_eventGetRootActor_Parms
		{
			AVPRootActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPGameMode_eventGetRootActor_Parms, ReturnValue), Z_Construct_UClass_AVPRootActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPGameMode, nullptr, "GetRootActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::VPGameMode_eventGetRootActor_Parms), Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPGameMode_GetRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPGameMode_GetRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPGameMode);
	UClass* Z_Construct_UClass_AVPGameMode_NoRegister()
	{
		return AVPGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AVPGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVPGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVPGameMode_GetRootActor, "GetRootActor" }, // 603235165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VPGameMode.h" },
		{ "ModuleRelativePath", "Public/VPGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPGameMode_Statics::NewProp_RootActor_MetaData[] = {
		{ "BlueprintGetter", "GetRootActor" },
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPGameMode_Statics::NewProp_RootActor = { "RootActor", nullptr, (EPropertyFlags)0x0044000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPGameMode, RootActor), Z_Construct_UClass_AVPRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPGameMode_Statics::NewProp_RootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPGameMode_Statics::NewProp_RootActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVPGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPGameMode_Statics::NewProp_RootActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPGameMode_Statics::ClassParams = {
		&AVPGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVPGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVPGameMode_Statics::PropPointers),
		0,
		0x009002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AVPGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPGameMode()
	{
		if (!Z_Registration_Info_UClass_AVPGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPGameMode.OuterSingleton, Z_Construct_UClass_AVPGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPGameMode.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<AVPGameMode>()
	{
		return AVPGameMode::StaticClass();
	}
	AVPGameMode::AVPGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPGameMode);
	AVPGameMode::~AVPGameMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPGameMode, AVPGameMode::StaticClass, TEXT("AVPGameMode"), &Z_Registration_Info_UClass_AVPGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPGameMode), 2667722653U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_2092300123(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
