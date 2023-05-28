// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraLensEffectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraLensEffectInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterfaceValidResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ICameraLensEffectInterface::execGetPrimaryParticleComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemComponent**)Z_Param__Result=P_THIS->GetPrimaryParticleComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICameraLensEffectInterface::execGetParticleComponents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UFXSystemComponent*>*)Z_Param__Result=P_THIS->GetParticleComponents();
		P_NATIVE_END;
	}
	void UCameraLensEffectInterface::StaticRegisterNativesUCameraLensEffectInterface()
	{
		UClass* Class = UCameraLensEffectInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParticleComponents", &ICameraLensEffectInterface::execGetParticleComponents },
			{ "GetPrimaryParticleComponent", &ICameraLensEffectInterface::execGetPrimaryParticleComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics
	{
		struct CameraLensEffectInterface_eventGetParticleComponents_Parms
		{
			TArray<UFXSystemComponent*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterface_eventGetParticleComponents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraLensEffect" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterface, nullptr, "GetParticleComponents", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::CameraLensEffectInterface_eventGetParticleComponents_Parms), Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics
	{
		struct CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms
		{
			UFXSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "CameraLensEffect" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterface, nullptr, "GetPrimaryParticleComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::CameraLensEffectInterface_eventGetPrimaryParticleComponent_Parms), Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensEffectInterface);
	UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister()
	{
		return UCameraLensEffectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCameraLensEffectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraLensEffectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraLensEffectInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraLensEffectInterface_GetParticleComponents, "GetParticleComponents" }, // 3644491163
		{ &Z_Construct_UFunction_UCameraLensEffectInterface_GetPrimaryParticleComponent, "GetPrimaryParticleComponent" }, // 394880041
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraLensEffectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraLensEffectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICameraLensEffectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensEffectInterface_Statics::ClassParams = {
		&UCameraLensEffectInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraLensEffectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensEffectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraLensEffectInterface()
	{
		if (!Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton, Z_Construct_UClass_UCameraLensEffectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraLensEffectInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraLensEffectInterface>()
	{
		return UCameraLensEffectInterface::StaticClass();
	}
	UCameraLensEffectInterface::UCameraLensEffectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensEffectInterface);
	UCameraLensEffectInterface::~UCameraLensEffectInterface() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport;
class UScriptStruct* FCameraLensInterfaceClassSupport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CameraLensInterfaceClassSupport"));
	}
	return Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCameraLensInterfaceClassSupport>()
{
	return FCameraLensInterfaceClassSupport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Wrapper type for validation that the specfied subclass in fact does implement the desired interface! */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Wrapper type for validation that the specfied subclass in fact does implement the desired interface!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraLensInterfaceClassSupport>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class_MetaData[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** The class to spawn/reference. Must implement CameraLensEffectInterface! */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
		{ "ToolTip", "The class to spawn/reference. Must implement CameraLensEffectInterface!" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCameraLensInterfaceClassSupport, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CameraLensInterfaceClassSupport",
		sizeof(FCameraLensInterfaceClassSupport),
		alignof(FCameraLensInterfaceClassSupport),
		Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport()
	{
		if (!Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.InnerSingleton, Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterfaceValidResult;
	static UEnum* EInterfaceValidResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterfaceValidResult, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInterfaceValidResult"));
		}
		return Z_Registration_Info_UEnum_EInterfaceValidResult.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EInterfaceValidResult>()
	{
		return EInterfaceValidResult_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enumerators[] = {
		{ "EInterfaceValidResult::Valid", (int64)EInterfaceValidResult::Valid },
		{ "EInterfaceValidResult::Invalid", (int64)EInterfaceValidResult::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EInterfaceValidResult::Invalid" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "Valid.Name", "EInterfaceValidResult::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EInterfaceValidResult",
		"EInterfaceValidResult",
		Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EInterfaceValidResult()
	{
		if (!Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton, Z_Construct_UEnum_Engine_EInterfaceValidResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterfaceValidResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execSetInterfaceClass)
	{
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_STRUCT_REF(FCameraLensInterfaceClassSupport,Z_Param_Out_Var);
		P_GET_ENUM_REF(EInterfaceValidResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCameraLensEffectInterfaceClassSupportLibrary::SetInterfaceClass(Z_Param_Class,Z_Param_Out_Var,(EInterfaceValidResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceValid)
	{
		P_GET_TINTERFACE_REF(ICameraLensEffectInterface,Z_Param_Out_CameraLens);
		P_GET_ENUM_REF(EInterfaceValidResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceValid(Z_Param_Out_CameraLens,(EInterfaceValidResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceClassValid)
	{
		P_GET_STRUCT_REF(FCameraLensInterfaceClassSupport,Z_Param_Out_CameraLens);
		P_GET_ENUM_REF(EInterfaceValidResult,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		UCameraLensEffectInterfaceClassSupportLibrary::IsInterfaceClassValid(Z_Param_Out_CameraLens,(EInterfaceValidResult&)(Z_Param_Out_Result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraLensEffectInterfaceClassSupportLibrary::execGetInterfaceClass)
	{
		P_GET_STRUCT_REF(FCameraLensInterfaceClassSupport,Z_Param_Out_CameraLens);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=UCameraLensEffectInterfaceClassSupportLibrary::GetInterfaceClass(Z_Param_Out_CameraLens);
		P_NATIVE_END;
	}
	void UCameraLensEffectInterfaceClassSupportLibrary::StaticRegisterNativesUCameraLensEffectInterfaceClassSupportLibrary()
	{
		UClass* Class = UCameraLensEffectInterfaceClassSupportLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInterfaceClass", &UCameraLensEffectInterfaceClassSupportLibrary::execGetInterfaceClass },
			{ "IsInterfaceClassValid", &UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceClassValid },
			{ "IsInterfaceValid", &UCameraLensEffectInterfaceClassSupportLibrary::execIsInterfaceValid },
			{ "SetInterfaceClass", &UCameraLensEffectInterfaceClassSupportLibrary::execSetInterfaceClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics
	{
		struct CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms
		{
			FCameraLensInterfaceClassSupport CameraLens;
			TSubclassOf<AActor>  ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLens_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLens;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens = { "CameraLens", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms, CameraLens), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens_MetaData)) }; // 404731580
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_CameraLens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Lens Effect" },
		{ "Comment", "/** Returns the class represented by this lens effect wrapper... */" },
		{ "CompactNodeTitle", "." },
		{ "Keywords", "class, get, toclass, getclass, spawn, object" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Returns the class represented by this lens effect wrapper..." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "GetInterfaceClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventGetInterfaceClass_Parms), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics
	{
		struct CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms
		{
			FCameraLensInterfaceClassSupport CameraLens;
			EInterfaceValidResult Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLens_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraLens;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens = { "CameraLens", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms, CameraLens), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens_MetaData)) }; // 404731580
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms, Result), Z_Construct_UEnum_Engine_EInterfaceValidResult, METADATA_PARAMS(nullptr, 0) }; // 1430594767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_CameraLens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** Check whether or not the interface class is valid */" },
		{ "DisplayName", "Is Valid Camera Lens Class" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "valid, camera, real, lens" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Check whether or not the interface class is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "IsInterfaceClassValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceClassValid_Parms), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics
	{
		struct CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms
		{
			TScriptInterface<ICameraLensEffectInterface> CameraLens;
			EInterfaceValidResult Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraLens_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CameraLens;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens = { "CameraLens", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms, CameraLens), Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms, Result), Z_Construct_UEnum_Engine_EInterfaceValidResult, METADATA_PARAMS(nullptr, 0) }; // 1430594767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_CameraLens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** Evaluate the live interface to see if it is a valid reference. */" },
		{ "DisplayName", "Is Valid Camera Lens" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "Keywords", "valid, camera, real, lens" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Evaluate the live interface to see if it is a valid reference." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "IsInterfaceValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventIsInterfaceValid_Parms), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics
	{
		struct CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms
		{
			TSubclassOf<AActor>  Class;
			FCameraLensInterfaceClassSupport Var;
			EInterfaceValidResult Result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Var;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class_MetaData[] = {
		{ "MustImplement", "CameraLensEffectInterface" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Var = { "Var", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms, Var), Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport, METADATA_PARAMS(nullptr, 0) }; // 404731580
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms, Result), Z_Construct_UEnum_Engine_EInterfaceValidResult, METADATA_PARAMS(nullptr, 0) }; // 1430594767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Var,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Effect" },
		{ "Comment", "/** \n\x09 * Set the represented class of the passed in variable. Note: Check the tooltips on the individual pins.\n\x09 * You cannot bypass the validation by connecting a wires to this node!!\n\x09 * \n\x09 * @param Class MUST implement CameraLensEffectInterface - when connecting variables to the input, take care that the input class does in fact implement the interface.\n\x09 * @param Var The wrapper (for validation purposes) of the lens effect class.\n\x09 */" },
		{ "ExpandEnumAsExecs", "Result" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
		{ "ToolTip", "Set the represented class of the passed in variable. Note: Check the tooltips on the individual pins.\nYou cannot bypass the validation by connecting a wires to this node!!\n\n@param Class MUST implement CameraLensEffectInterface - when connecting variables to the input, take care that the input class does in fact implement the interface.\n@param Var The wrapper (for validation purposes) of the lens effect class." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, nullptr, "SetInterfaceClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::CameraLensEffectInterfaceClassSupportLibrary_eventSetInterfaceClass_Parms), Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraLensEffectInterfaceClassSupportLibrary);
	UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_NoRegister()
	{
		return UCameraLensEffectInterfaceClassSupportLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_GetInterfaceClass, "GetInterfaceClass" }, // 1487426194
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceClassValid, "IsInterfaceClassValid" }, // 859487742
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_IsInterfaceValid, "IsInterfaceValid" }, // 3545301619
		{ &Z_Construct_UFunction_UCameraLensEffectInterfaceClassSupportLibrary_SetInterfaceClass, "SetInterfaceClass" }, // 585864498
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/CameraLensEffectInterface.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraLensEffectInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraLensEffectInterfaceClassSupportLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::ClassParams = {
		&UCameraLensEffectInterfaceClassSupportLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary()
	{
		if (!Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton, Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraLensEffectInterfaceClassSupportLibrary>()
	{
		return UCameraLensEffectInterfaceClassSupportLibrary::StaticClass();
	}
	UCameraLensEffectInterfaceClassSupportLibrary::UCameraLensEffectInterfaceClassSupportLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraLensEffectInterfaceClassSupportLibrary);
	UCameraLensEffectInterfaceClassSupportLibrary::~UCameraLensEffectInterfaceClassSupportLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::EnumInfo[] = {
		{ EInterfaceValidResult_StaticEnum, TEXT("EInterfaceValidResult"), &Z_Registration_Info_UEnum_EInterfaceValidResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1430594767U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ScriptStructInfo[] = {
		{ FCameraLensInterfaceClassSupport::StaticStruct, Z_Construct_UScriptStruct_FCameraLensInterfaceClassSupport_Statics::NewStructOps, TEXT("CameraLensInterfaceClassSupport"), &Z_Registration_Info_UScriptStruct_CameraLensInterfaceClassSupport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraLensInterfaceClassSupport), 404731580U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraLensEffectInterface, UCameraLensEffectInterface::StaticClass, TEXT("UCameraLensEffectInterface"), &Z_Registration_Info_UClass_UCameraLensEffectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensEffectInterface), 190080710U) },
		{ Z_Construct_UClass_UCameraLensEffectInterfaceClassSupportLibrary, UCameraLensEffectInterfaceClassSupportLibrary::StaticClass, TEXT("UCameraLensEffectInterfaceClassSupportLibrary"), &Z_Registration_Info_UClass_UCameraLensEffectInterfaceClassSupportLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraLensEffectInterfaceClassSupportLibrary), 1123213314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_3761007983(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraLensEffectInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
