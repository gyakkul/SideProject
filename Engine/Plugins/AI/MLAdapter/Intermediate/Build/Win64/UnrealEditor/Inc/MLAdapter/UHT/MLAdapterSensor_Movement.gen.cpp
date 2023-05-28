// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor_Movement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor_Movement() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Movement();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Movement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSensor_Movement::StaticRegisterNativesUMLAdapterSensor_Movement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor_Movement);
	UClass* Z_Construct_UClass_UMLAdapterSensor_Movement_NoRegister()
	{
		return UMLAdapterSensor_Movement::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_Movement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteLocation_MetaData[];
#endif
		static void NewProp_bAbsoluteLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteVelocity_MetaData[];
#endif
		static void NewProp_bAbsoluteVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Allows an agent to sense its avatar's location and velocity. */" },
		{ "IncludePath", "Sensors/MLAdapterSensor_Movement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Allows an agent to sense its avatar's location and velocity." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation_SetBit(void* Obj)
	{
		((UMLAdapterSensor_Movement*)Obj)->bAbsoluteLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation = { "bAbsoluteLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterSensor_Movement), &Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity_SetBit(void* Obj)
	{
		((UMLAdapterSensor_Movement*)Obj)->bAbsoluteVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity = { "bAbsoluteVelocity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterSensor_Movement), &Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefLocation = { "RefLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Movement, RefLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefVelocity = { "RefVelocity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Movement, RefVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentLocation = { "CurrentLocation", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Movement, CurrentLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Movement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentVelocity = { "CurrentVelocity", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Movement, CurrentVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_bAbsoluteVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_RefVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::NewProp_CurrentVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor_Movement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::ClassParams = {
		&UMLAdapterSensor_Movement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor_Movement()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor_Movement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor_Movement.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_Movement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor_Movement.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor_Movement>()
	{
		return UMLAdapterSensor_Movement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor_Movement);
	UMLAdapterSensor_Movement::~UMLAdapterSensor_Movement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Movement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Movement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor_Movement, UMLAdapterSensor_Movement::StaticClass, TEXT("UMLAdapterSensor_Movement"), &Z_Registration_Info_UClass_UMLAdapterSensor_Movement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor_Movement), 2323085692U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Movement_h_231102157(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Movement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Movement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
