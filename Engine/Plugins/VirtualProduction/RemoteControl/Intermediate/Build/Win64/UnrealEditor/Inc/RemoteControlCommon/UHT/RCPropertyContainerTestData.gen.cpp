// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/RCPropertyContainerTestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCPropertyContainerTestData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_UPropertyContainerTestObject();
	REMOTECONTROLCOMMON_API UClass* Z_Construct_UClass_UPropertyContainerTestObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlCommon();
// End Cross Module References
	void UPropertyContainerTestObject::StaticRegisterNativesUPropertyContainerTestObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyContainerTestObject);
	UClass* Z_Construct_UClass_UPropertyContainerTestObject_NoRegister()
	{
		return UPropertyContainerTestObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyContainerTestObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSomeBool_MetaData[];
#endif
		static void NewProp_bSomeBool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSomeBool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeUInt32_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_SomeUInt32;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SomeVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SomeRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeClampedInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SomeClampedInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeClampedInt2_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SomeClampedInt2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeUIClampedInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SomeUIClampedInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeClampedFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeClampedFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeUIClampedFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeUIClampedFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeClampedFloat2_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeClampedFloat2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SomeString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SomeText;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SomeFloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SomeFloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SomeFloatArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyContainerTestObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlCommon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tests/RCPropertyContainerTestData.h" },
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	void Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool_SetBit(void* Obj)
	{
		((UPropertyContainerTestObject*)Obj)->bSomeBool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool = { "bSomeBool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPropertyContainerTestObject), &Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUInt32_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUInt32 = { "SomeUInt32", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeUInt32), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUInt32_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUInt32_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloat = { "SomeFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeFloat), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeVector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeVector = { "SomeVector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeRotator_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeRotator = { "SomeRotator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt_MetaData[] = {
		{ "ClampMax", "145" },
		{ "ClampMin", "20" },
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
		{ "UIMax", "167" },
		{ "UIMin", "15" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt = { "SomeClampedInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeClampedInt), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt2_MetaData[] = {
		{ "ClampMax", "145" },
		{ "ClampMin", "20" },
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
		{ "UIMax", "122" },
		{ "UIMin", "37" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt2 = { "SomeClampedInt2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeClampedInt2), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedInt_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
		{ "UIMax", "139" },
		{ "UIMin", "31" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedInt = { "SomeUIClampedInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeUIClampedInt), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat_MetaData[] = {
		{ "ClampMax", "0.920000" },
		{ "ClampMin", "0.200000" },
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat = { "SomeClampedFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeClampedFloat), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
		{ "UIMax", "0.720000" },
		{ "UIMin", "0.260000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedFloat = { "SomeUIClampedFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeUIClampedFloat), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat2_MetaData[] = {
		{ "ClampMax", "0.920000" },
		{ "ClampMin", "0.200000" },
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
		{ "UIMax", "0.830000" },
		{ "UIMin", "0.380000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat2 = { "SomeClampedFloat2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeClampedFloat2), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeString_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeString = { "SomeString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeString), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeText_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeText = { "SomeText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeText), METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeText_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray_Inner = { "SomeFloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tests/RCPropertyContainerTestData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray = { "SomeFloatArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyContainerTestObject, SomeFloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyContainerTestObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_bSomeBool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUInt32,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedInt2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeUIClampedFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeClampedFloat2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyContainerTestObject_Statics::NewProp_SomeFloatArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyContainerTestObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyContainerTestObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyContainerTestObject_Statics::ClassParams = {
		&UPropertyContainerTestObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyContainerTestObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyContainerTestObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyContainerTestObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyContainerTestObject()
	{
		if (!Z_Registration_Info_UClass_UPropertyContainerTestObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyContainerTestObject.OuterSingleton, Z_Construct_UClass_UPropertyContainerTestObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyContainerTestObject.OuterSingleton;
	}
	template<> REMOTECONTROLCOMMON_API UClass* StaticClass<UPropertyContainerTestObject>()
	{
		return UPropertyContainerTestObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyContainerTestObject);
	UPropertyContainerTestObject::~UPropertyContainerTestObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Private_Tests_RCPropertyContainerTestData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Private_Tests_RCPropertyContainerTestData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyContainerTestObject, UPropertyContainerTestObject::StaticClass, TEXT("UPropertyContainerTestObject"), &Z_Registration_Info_UClass_UPropertyContainerTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyContainerTestObject), 381610875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Private_Tests_RCPropertyContainerTestData_h_3227315590(TEXT("/Script/RemoteControlCommon"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Private_Tests_RCPropertyContainerTestData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlCommon_Private_Tests_RCPropertyContainerTestData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
