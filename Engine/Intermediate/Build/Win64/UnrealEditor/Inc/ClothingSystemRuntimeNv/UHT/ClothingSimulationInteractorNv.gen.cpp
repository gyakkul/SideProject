// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSimulationInteractorNv.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationInteractorNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References
	DEFINE_FUNCTION(UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDriveDamperStiffness(Z_Param_InStiffness);
		P_NATIVE_END;
	}
	void UClothingSimulationInteractorNv::StaticRegisterNativesUClothingSimulationInteractorNv()
	{
		UClass* Class = UClothingSimulationInteractorNv::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAnimDriveDamperStiffness", &UClothingSimulationInteractorNv::execSetAnimDriveDamperStiffness },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics
	{
		struct ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms
		{
			float InStiffness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::NewProp_InStiffness = { "InStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms, InStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::NewProp_InStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Set the stiffness of the resistive damping force for anim drive\n" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
		{ "ToolTip", "Set the stiffness of the resistive damping force for anim drive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UClothingSimulationInteractorNv, nullptr, "SetAnimDriveDamperStiffness", nullptr, nullptr, sizeof(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::ClothingSimulationInteractorNv_eventSetAnimDriveDamperStiffness_Parms), Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationInteractorNv);
	UClass* Z_Construct_UClass_UClothingSimulationInteractorNv_NoRegister()
	{
		return UClothingSimulationInteractorNv::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationInteractorNv_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UClothingSimulationInteractorNv_SetAnimDriveDamperStiffness, "SetAnimDriveDamperStiffness" }, // 3996846115
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ClothingSimulationInteractorNv.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationInteractorNv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationInteractorNv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams = {
		&UClothingSimulationInteractorNv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationInteractorNv()
	{
		if (!Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton, Z_Construct_UClass_UClothingSimulationInteractorNv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingSimulationInteractorNv.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothingSimulationInteractorNv>()
	{
		return UClothingSimulationInteractorNv::StaticClass();
	}
	UClothingSimulationInteractorNv::UClothingSimulationInteractorNv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationInteractorNv);
	UClothingSimulationInteractorNv::~UClothingSimulationInteractorNv() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingSimulationInteractorNv, UClothingSimulationInteractorNv::StaticClass, TEXT("UClothingSimulationInteractorNv"), &Z_Registration_Info_UClass_UClothingSimulationInteractorNv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationInteractorNv), 2304498224U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_673343155(TEXT("/Script/ClothingSystemRuntimeNv"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationInteractorNv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
