// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/StateTreeNodeBlueprintBase.h"
#include "StateTreeEvents.h"
#include "StateTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeNodeBlueprintBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory();
	STATETREEMODULE_API UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeEvent();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeStateLink();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory;
	static UEnum* EStateTreeBlueprintPropertyCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("EStateTreeBlueprintPropertyCategory"));
		}
		return Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.OuterSingleton;
	}
	template<> STATETREEMODULE_API UEnum* StaticEnum<EStateTreeBlueprintPropertyCategory>()
	{
		return EStateTreeBlueprintPropertyCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enumerators[] = {
		{ "EStateTreeBlueprintPropertyCategory::NotSet", (int64)EStateTreeBlueprintPropertyCategory::NotSet },
		{ "EStateTreeBlueprintPropertyCategory::Input", (int64)EStateTreeBlueprintPropertyCategory::Input },
		{ "EStateTreeBlueprintPropertyCategory::Parameter", (int64)EStateTreeBlueprintPropertyCategory::Parameter },
		{ "EStateTreeBlueprintPropertyCategory::Output", (int64)EStateTreeBlueprintPropertyCategory::Output },
		{ "EStateTreeBlueprintPropertyCategory::ContextObject", (int64)EStateTreeBlueprintPropertyCategory::ContextObject },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enum_MetaDataParams[] = {
		{ "ContextObject.Name", "EStateTreeBlueprintPropertyCategory::ContextObject" },
		{ "Input.Name", "EStateTreeBlueprintPropertyCategory::Input" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "NotSet.Name", "EStateTreeBlueprintPropertyCategory::NotSet" },
		{ "Output.Name", "EStateTreeBlueprintPropertyCategory::Output" },
		{ "Parameter.Name", "EStateTreeBlueprintPropertyCategory::Parameter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		"EStateTreeBlueprintPropertyCategory",
		"EStateTreeBlueprintPropertyCategory",
		Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory()
	{
		if (!Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.InnerSingleton, Z_Construct_UEnum_StateTreeModule_EStateTreeBlueprintPropertyCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory.InnerSingleton;
	}
	DEFINE_FUNCTION(UStateTreeNodeBlueprintBase::execRequestTransition)
	{
		P_GET_STRUCT_REF(FStateTreeStateLink,Z_Param_Out_TargetState);
		P_GET_ENUM(EStateTreeTransitionPriority,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestTransition(Z_Param_Out_TargetState,EStateTreeTransitionPriority(Z_Param_Priority));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateTreeNodeBlueprintBase::execSendEvent)
	{
		P_GET_STRUCT_REF(FStateTreeEvent,Z_Param_Out_Event);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendEvent(Z_Param_Out_Event);
		P_NATIVE_END;
	}
	void UStateTreeNodeBlueprintBase::StaticRegisterNativesUStateTreeNodeBlueprintBase()
	{
		UClass* Class = UStateTreeNodeBlueprintBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestTransition", &UStateTreeNodeBlueprintBase::execRequestTransition },
			{ "SendEvent", &UStateTreeNodeBlueprintBase::execSendEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics
	{
		struct StateTreeNodeBlueprintBase_eventRequestTransition_Parms
		{
			FStateTreeStateLink TargetState;
			EStateTreeTransitionPriority Priority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState = { "TargetState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventRequestTransition_Parms, TargetState), Z_Construct_UScriptStruct_FStateTreeStateLink, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState_MetaData)) }; // 1170121165
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventRequestTransition_Parms, Priority), Z_Construct_UEnum_StateTreeModule_EStateTreeTransitionPriority, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_MetaData)) }; // 1197241257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_TargetState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/** Request state transition. */" },
		{ "CPP_Default_Priority", "Normal" },
		{ "DisplayName", "StateTree Request Transition" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Request state transition." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "RequestTransition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::StateTreeNodeBlueprintBase_eventRequestTransition_Parms), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics
	{
		struct StateTreeNodeBlueprintBase_eventSendEvent_Parms
		{
			FStateTreeEvent Event;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StateTreeNodeBlueprintBase_eventSendEvent_Parms, Event), Z_Construct_UScriptStruct_FStateTreeEvent, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event_MetaData)) }; // 2095952963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "StateTree" },
		{ "Comment", "/** Sends event to the StateTree. */" },
		{ "DisplayName", "StateTree Send Event" },
		{ "HideSelfPin", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Sends event to the StateTree." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase, nullptr, "SendEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::StateTreeNodeBlueprintBase_eventSendEvent_Parms), Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeNodeBlueprintBase);
	UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase_NoRegister()
	{
		return UStateTreeNodeBlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_RequestTransition, "RequestTransition" }, // 3313300023
		{ &Z_Construct_UFunction_UStateTreeNodeBlueprintBase_SendEvent, "SendEvent" }, // 474977514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner_MetaData[] = {
		{ "Comment", "/** Cached owner while the node is active. */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeNodeBlueprintBase.h" },
		{ "ToolTip", "Cached owner while the node is active." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner = { "CachedOwner", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeNodeBlueprintBase, CachedOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::NewProp_CachedOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeNodeBlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::ClassParams = {
		&UStateTreeNodeBlueprintBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.OuterSingleton, Z_Construct_UClass_UStateTreeNodeBlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase.OuterSingleton;
	}
	template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeNodeBlueprintBase>()
	{
		return UStateTreeNodeBlueprintBase::StaticClass();
	}
	UStateTreeNodeBlueprintBase::UStateTreeNodeBlueprintBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeNodeBlueprintBase);
	UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::EnumInfo[] = {
		{ EStateTreeBlueprintPropertyCategory_StaticEnum, TEXT("EStateTreeBlueprintPropertyCategory"), &Z_Registration_Info_UEnum_EStateTreeBlueprintPropertyCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3470304565U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeNodeBlueprintBase, UStateTreeNodeBlueprintBase::StaticClass, TEXT("UStateTreeNodeBlueprintBase"), &Z_Registration_Info_UClass_UStateTreeNodeBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeNodeBlueprintBase), 131421765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_1537339154(TEXT("/Script/StateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeNodeBlueprintBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
