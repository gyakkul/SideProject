// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Tasks/AITask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAITaskPriority();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAITaskPriority;
	static UEnum* EAITaskPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAITaskPriority, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EAITaskPriority"));
		}
		return Z_Registration_Info_UEnum_EAITaskPriority.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EAITaskPriority>()
	{
		return EAITaskPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EAITaskPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::Enumerators[] = {
		{ "EAITaskPriority::Lowest", (int64)EAITaskPriority::Lowest },
		{ "EAITaskPriority::Low", (int64)EAITaskPriority::Low },
		{ "EAITaskPriority::AutonomousAI", (int64)EAITaskPriority::AutonomousAI },
		{ "EAITaskPriority::High", (int64)EAITaskPriority::High },
		{ "EAITaskPriority::Ultimate", (int64)EAITaskPriority::Ultimate },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::Enum_MetaDataParams[] = {
		{ "AutonomousAI.Comment", "//FGameplayTasks::DefaultPriority / 2,\n" },
		{ "AutonomousAI.Name", "EAITaskPriority::AutonomousAI" },
		{ "AutonomousAI.ToolTip", "FGameplayTasks::DefaultPriority / 2," },
		{ "High.Comment", "//FGameplayTasks::DefaultPriority,\n" },
		{ "High.Name", "EAITaskPriority::High" },
		{ "High.ToolTip", "FGameplayTasks::DefaultPriority," },
		{ "Low.Name", "EAITaskPriority::Low" },
		{ "Lowest.Name", "EAITaskPriority::Lowest" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
		{ "Ultimate.Comment", "//(1.5 * FGameplayTasks::DefaultPriority),\n" },
		{ "Ultimate.Name", "EAITaskPriority::Ultimate" },
		{ "Ultimate.ToolTip", "(1.5 * FGameplayTasks::DefaultPriority)," },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EAITaskPriority",
		"EAITaskPriority",
		Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EAITaskPriority()
	{
		if (!Z_Registration_Info_UEnum_EAITaskPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAITaskPriority.InnerSingleton, Z_Construct_UEnum_AIModule_EAITaskPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAITaskPriority.InnerSingleton;
	}
	void UAITask::StaticRegisterNativesUAITask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask);
	UClass* Z_Construct_UClass_UAITask_NoRegister()
	{
		return UAITask::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tasks/AITask.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController_MetaData[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_Statics::NewProp_OwnerController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_Statics::ClassParams = {
		&UAITask::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAITask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_Statics::PropPointers),
		0,
		0x001000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask()
	{
		if (!Z_Registration_Info_UClass_UAITask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask.OuterSingleton, Z_Construct_UClass_UAITask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAITask.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAITask>()
	{
		return UAITask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask);
	UAITask::~UAITask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics::EnumInfo[] = {
		{ EAITaskPriority_StaticEnum, TEXT("EAITaskPriority"), &Z_Registration_Info_UEnum_EAITaskPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3072686120U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAITask, UAITask::StaticClass, TEXT("UAITask"), &Z_Registration_Info_UClass_UAITask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask), 1642675725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_16667939(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
