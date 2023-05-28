// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineCustomTimeStep() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep();
	ENGINE_API UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState;
	static UEnum* ECustomTimeStepSynchronizationState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomTimeStepSynchronizationState"));
		}
		return Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECustomTimeStepSynchronizationState>()
	{
		return ECustomTimeStepSynchronizationState_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enumerators[] = {
		{ "ECustomTimeStepSynchronizationState::Closed", (int64)ECustomTimeStepSynchronizationState::Closed },
		{ "ECustomTimeStepSynchronizationState::Error", (int64)ECustomTimeStepSynchronizationState::Error },
		{ "ECustomTimeStepSynchronizationState::Synchronized", (int64)ECustomTimeStepSynchronizationState::Synchronized },
		{ "ECustomTimeStepSynchronizationState::Synchronizing", (int64)ECustomTimeStepSynchronizationState::Synchronizing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enum_MetaDataParams[] = {
		{ "Closed.Comment", "/** CustomTimeStep has not been initialized or has been shutdown. */" },
		{ "Closed.Name", "ECustomTimeStepSynchronizationState::Closed" },
		{ "Closed.ToolTip", "CustomTimeStep has not been initialized or has been shutdown." },
		{ "Comment", "/**\n * Possible states of CustomTimeStep.\n */" },
		{ "Error.Comment", "/** CustomTimeStep error occurred during Synchronization. */" },
		{ "Error.Name", "ECustomTimeStepSynchronizationState::Error" },
		{ "Error.ToolTip", "CustomTimeStep error occurred during Synchronization." },
		{ "ModuleRelativePath", "Classes/Engine/EngineCustomTimeStep.h" },
		{ "Synchronized.Comment", "/** CustomTimeStep is currently synchronized with the source. */" },
		{ "Synchronized.Name", "ECustomTimeStepSynchronizationState::Synchronized" },
		{ "Synchronized.ToolTip", "CustomTimeStep is currently synchronized with the source." },
		{ "Synchronizing.Comment", "/** CustomTimeStep is initialized and being prepared for synchronization. */" },
		{ "Synchronizing.Name", "ECustomTimeStepSynchronizationState::Synchronizing" },
		{ "Synchronizing.ToolTip", "CustomTimeStep is initialized and being prepared for synchronization." },
		{ "ToolTip", "Possible states of CustomTimeStep." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECustomTimeStepSynchronizationState",
		"ECustomTimeStepSynchronizationState",
		Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState()
	{
		if (!Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.InnerSingleton, Z_Construct_UEnum_Engine_ECustomTimeStepSynchronizationState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState.InnerSingleton;
	}
	void UEngineCustomTimeStep::StaticRegisterNativesUEngineCustomTimeStep()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineCustomTimeStep);
	UClass* Z_Construct_UClass_UEngineCustomTimeStep_NoRegister()
	{
		return UEngineCustomTimeStep::StaticClass();
	}
	struct Z_Construct_UClass_UEngineCustomTimeStep_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineCustomTimeStep_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A CustomTimeStep control the Engine Framerate/Timestep.\n * This will update the FApp::CurrentTime/FApp::DeltaTime.\n * This is useful when you want the engine to be synchronized with an external clock (genlock).\n */" },
		{ "IncludePath", "Engine/EngineCustomTimeStep.h" },
		{ "ModuleRelativePath", "Classes/Engine/EngineCustomTimeStep.h" },
		{ "ToolTip", "A CustomTimeStep control the Engine Framerate/Timestep.\nThis will update the FApp::CurrentTime/FApp::DeltaTime.\nThis is useful when you want the engine to be synchronized with an external clock (genlock)." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineCustomTimeStep_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineCustomTimeStep>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineCustomTimeStep_Statics::ClassParams = {
		&UEngineCustomTimeStep::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineCustomTimeStep_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineCustomTimeStep()
	{
		if (!Z_Registration_Info_UClass_UEngineCustomTimeStep.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineCustomTimeStep.OuterSingleton, Z_Construct_UClass_UEngineCustomTimeStep_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineCustomTimeStep.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEngineCustomTimeStep>()
	{
		return UEngineCustomTimeStep::StaticClass();
	}
	UEngineCustomTimeStep::UEngineCustomTimeStep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineCustomTimeStep);
	UEngineCustomTimeStep::~UEngineCustomTimeStep() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::EnumInfo[] = {
		{ ECustomTimeStepSynchronizationState_StaticEnum, TEXT("ECustomTimeStepSynchronizationState"), &Z_Registration_Info_UEnum_ECustomTimeStepSynchronizationState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 8005760U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEngineCustomTimeStep, UEngineCustomTimeStep::StaticClass, TEXT("UEngineCustomTimeStep"), &Z_Registration_Info_UClass_UEngineCustomTimeStep, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineCustomTimeStep), 3084151459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_2975325772(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_EngineCustomTimeStep_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
