// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/RemoteControlLogicTestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlLogicTestData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URemoteControlLogicTestData();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URemoteControlLogicTestData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	DEFINE_FUNCTION(URemoteControlLogicTestData::execTestIntFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestIntFunction();
		P_NATIVE_END;
	}
	void URemoteControlLogicTestData::StaticRegisterNativesURemoteControlLogicTestData()
	{
		UClass* Class = URemoteControlLogicTestData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TestIntFunction", &URemoteControlLogicTestData::execTestIntFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "RemoteControlTest" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlLogicTestData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteControlLogicTestData, nullptr, "TestIntFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlLogicTestData);
	UClass* Z_Construct_UClass_URemoteControlLogicTestData_NoRegister()
	{
		return URemoteControlLogicTestData::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlLogicTestData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TestInt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlLogicTestData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteControlLogicTestData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteControlLogicTestData_TestIntFunction, "TestIntFunction" }, // 2915069474
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLogicTestData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/RemoteControlLogicTestData.h" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlLogicTestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "RemoteControlTest" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlLogicTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLogicTestData, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_TestInt_MetaData[] = {
		{ "Category", "RemoteControlTest" },
		{ "ModuleRelativePath", "Private/Tests/RemoteControlLogicTestData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_TestInt = { "TestInt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLogicTestData, TestInt), METADATA_PARAMS(Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_TestInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_TestInt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlLogicTestData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLogicTestData_Statics::NewProp_TestInt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlLogicTestData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlLogicTestData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlLogicTestData_Statics::ClassParams = {
		&URemoteControlLogicTestData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteControlLogicTestData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicTestData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlLogicTestData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLogicTestData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlLogicTestData()
	{
		if (!Z_Registration_Info_UClass_URemoteControlLogicTestData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlLogicTestData.OuterSingleton, Z_Construct_UClass_URemoteControlLogicTestData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlLogicTestData.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URemoteControlLogicTestData>()
	{
		return URemoteControlLogicTestData::StaticClass();
	}
	URemoteControlLogicTestData::URemoteControlLogicTestData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlLogicTestData);
	URemoteControlLogicTestData::~URemoteControlLogicTestData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Tests_RemoteControlLogicTestData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Tests_RemoteControlLogicTestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlLogicTestData, URemoteControlLogicTestData::StaticClass, TEXT("URemoteControlLogicTestData"), &Z_Registration_Info_UClass_URemoteControlLogicTestData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlLogicTestData), 2558235155U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Tests_RemoteControlLogicTestData_h_929633744(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Tests_RemoteControlLogicTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Private_Tests_RemoteControlLogicTestData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
