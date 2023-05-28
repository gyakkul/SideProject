// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Actions/PawnAction_BlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_BlueprintBase() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	struct PawnAction_BlueprintBase_eventActionFinished_Parms
	{
		APawn* ControlledPawn;
		TEnumAsByte<EPawnActionResult::Type> WithResult;
	};
	struct PawnAction_BlueprintBase_eventActionPause_Parms
	{
		APawn* ControlledPawn;
	};
	struct PawnAction_BlueprintBase_eventActionResume_Parms
	{
		APawn* ControlledPawn;
	};
	struct PawnAction_BlueprintBase_eventActionStart_Parms
	{
		APawn* ControlledPawn;
	};
	struct PawnAction_BlueprintBase_eventActionTick_Parms
	{
		APawn* ControlledPawn;
		float DeltaSeconds;
	};
	static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished = FName(TEXT("ActionFinished"));
	void UDEPRECATED_PawnAction_BlueprintBase::ActionFinished(APawn* ControlledPawn, EPawnActionResult::Type WithResult)
	{
		PawnAction_BlueprintBase_eventActionFinished_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		Parms.WithResult=WithResult;
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished),&Parms);
	}
	static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionPause = FName(TEXT("ActionPause"));
	void UDEPRECATED_PawnAction_BlueprintBase::ActionPause(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionPause_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionPause),&Parms);
	}
	static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionResume = FName(TEXT("ActionResume"));
	void UDEPRECATED_PawnAction_BlueprintBase::ActionResume(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionResume_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionResume),&Parms);
	}
	static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionStart = FName(TEXT("ActionStart"));
	void UDEPRECATED_PawnAction_BlueprintBase::ActionStart(APawn* ControlledPawn)
	{
		PawnAction_BlueprintBase_eventActionStart_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionStart),&Parms);
	}
	static FName NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionTick = FName(TEXT("ActionTick"));
	void UDEPRECATED_PawnAction_BlueprintBase::ActionTick(APawn* ControlledPawn, float DeltaSeconds)
	{
		PawnAction_BlueprintBase_eventActionTick_Parms Parms;
		Parms.ControlledPawn=ControlledPawn;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_PawnAction_BlueprintBase_ActionTick),&Parms);
	}
	void UDEPRECATED_PawnAction_BlueprintBase::StaticRegisterNativesUDEPRECATED_PawnAction_BlueprintBase()
	{
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WithResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_WithResult = { "WithResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionFinished_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(nullptr, 0) }; // 960547352
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::NewProp_WithResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionFinished", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionFinished_Parms), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionPause_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionPause", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionPause_Parms), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionResume_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionResume", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionResume_Parms), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionStart_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::NewProp_ControlledPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "Comment", "//----------------------------------------------------------------------//\n// Blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
		{ "ToolTip", "Blueprint interface" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionStart", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionStart_Parms), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnAction_BlueprintBase_eventActionTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, nullptr, "ActionTick", nullptr, nullptr, sizeof(PawnAction_BlueprintBase_eventActionTick_Parms), Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction_BlueprintBase);
	UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_NoRegister()
	{
		return UDEPRECATED_PawnAction_BlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEPRECATED_PawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionFinished, "ActionFinished" }, // 2021276591
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionPause, "ActionPause" }, // 250068746
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionResume, "ActionResume" }, // 576245482
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionStart, "ActionStart" }, // 4193906758
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_BlueprintBase_ActionTick, "ActionTick" }, // 3652555993
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Actions/PawnAction_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_BlueprintBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction_BlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::ClassParams = {
		&UDEPRECATED_PawnAction_BlueprintBase::StaticClass,
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
		0x029012A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction_BlueprintBase>()
	{
		return UDEPRECATED_PawnAction_BlueprintBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction_BlueprintBase);
	UDEPRECATED_PawnAction_BlueprintBase::~UDEPRECATED_PawnAction_BlueprintBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction_BlueprintBase, UDEPRECATED_PawnAction_BlueprintBase::StaticClass, TEXT("UDEPRECATED_PawnAction_BlueprintBase"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction_BlueprintBase), 1645226343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_552433880(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_BlueprintBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
