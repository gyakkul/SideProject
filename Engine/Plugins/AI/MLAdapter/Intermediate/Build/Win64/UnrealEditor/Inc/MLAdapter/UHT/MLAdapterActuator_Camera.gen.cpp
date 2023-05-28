// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Actuators/MLAdapterActuator_Camera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterActuator_Camera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_Camera();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterActuator_Camera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterActuator_Camera::StaticRegisterNativesUMLAdapterActuator_Camera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterActuator_Camera);
	UClass* Z_Construct_UClass_UMLAdapterActuator_Camera_NoRegister()
	{
		return UMLAdapterActuator_Camera::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterActuator_Camera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingRotator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadingRotator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadingVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeadingVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsumeData_MetaData[];
#endif
		static void NewProp_bConsumeData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsumeData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVectorMode_MetaData[];
#endif
		static void NewProp_bVectorMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVectorMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterActuator,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows an agent to rotate the camera. */" },
		{ "IncludePath", "Actuators/MLAdapterActuator_Camera.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_Camera.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows an agent to rotate the camera." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingRotator_MetaData[] = {
		{ "Comment", "/** Stores the direction to point the camera as a rotator. */" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_Camera.h" },
		{ "ToolTip", "Stores the direction to point the camera as a rotator." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingRotator = { "HeadingRotator", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterActuator_Camera, HeadingRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingRotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingRotator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingVector_MetaData[] = {
		{ "Comment", "/** Stores the direction to point the camera as a vector. */" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_Camera.h" },
		{ "ToolTip", "Stores the direction to point the camera as a vector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingVector = { "HeadingVector", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterActuator_Camera, HeadingVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData_MetaData[] = {
		{ "Comment", "/** If true, acting will reinitialize the HeadingRotator/Vector after reading them. */" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_Camera.h" },
		{ "ToolTip", "If true, acting will reinitialize the HeadingRotator/Vector after reading them." },
	};
#endif
	void Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData_SetBit(void* Obj)
	{
		((UMLAdapterActuator_Camera*)Obj)->bConsumeData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData = { "bConsumeData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterActuator_Camera), &Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode_MetaData[] = {
		{ "Comment", "/** If true, use the HeadingVector. Otherwise, use the HeadingRotator. */" },
		{ "ModuleRelativePath", "Public/Actuators/MLAdapterActuator_Camera.h" },
		{ "ToolTip", "If true, use the HeadingVector. Otherwise, use the HeadingRotator." },
	};
#endif
	void Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode_SetBit(void* Obj)
	{
		((UMLAdapterActuator_Camera*)Obj)->bVectorMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode = { "bVectorMode", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterActuator_Camera), &Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_HeadingVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bConsumeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::NewProp_bVectorMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterActuator_Camera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::ClassParams = {
		&UMLAdapterActuator_Camera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterActuator_Camera()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterActuator_Camera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterActuator_Camera.OuterSingleton, Z_Construct_UClass_UMLAdapterActuator_Camera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterActuator_Camera.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterActuator_Camera>()
	{
		return UMLAdapterActuator_Camera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterActuator_Camera);
	UMLAdapterActuator_Camera::~UMLAdapterActuator_Camera() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_Camera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_Camera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterActuator_Camera, UMLAdapterActuator_Camera::StaticClass, TEXT("UMLAdapterActuator_Camera"), &Z_Registration_Info_UClass_UMLAdapterActuator_Camera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterActuator_Camera), 1870224816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_Camera_h_1593986437(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_Camera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Actuators_MLAdapterActuator_Camera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
