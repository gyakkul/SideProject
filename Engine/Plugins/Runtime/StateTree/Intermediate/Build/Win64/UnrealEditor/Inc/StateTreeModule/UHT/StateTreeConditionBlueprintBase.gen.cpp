// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/StateTreeConditionBlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeConditionBlueprintBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeConditionBlueprintBase();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeConditionBlueprintBase_NoRegister();
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTreeNodeBlueprintBase();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	struct StateTreeConditionBlueprintBase_eventReceiveTestCondition_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		StateTreeConditionBlueprintBase_eventReceiveTestCondition_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UStateTreeConditionBlueprintBase_ReceiveTestCondition = FName(TEXT("ReceiveTestCondition"));
	bool UStateTreeConditionBlueprintBase::ReceiveTestCondition() const
	{
		StateTreeConditionBlueprintBase_eventReceiveTestCondition_Parms Parms;
		const_cast<UStateTreeConditionBlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UStateTreeConditionBlueprintBase_ReceiveTestCondition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UStateTreeConditionBlueprintBase::StaticRegisterNativesUStateTreeConditionBlueprintBase()
	{
	}
	struct Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StateTreeConditionBlueprintBase_eventReceiveTestCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StateTreeConditionBlueprintBase_eventReceiveTestCondition_Parms), &Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConditionBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateTreeConditionBlueprintBase, nullptr, "ReceiveTestCondition", nullptr, nullptr, sizeof(StateTreeConditionBlueprintBase_eventReceiveTestCondition_Parms), Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeConditionBlueprintBase);
	UClass* Z_Construct_UClass_UStateTreeConditionBlueprintBase_NoRegister()
	{
		return UStateTreeConditionBlueprintBase::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStateTreeNodeBlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateTreeConditionBlueprintBase_ReceiveTestCondition, "ReceiveTestCondition" }, // 2735927105
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * Base class for Blueprint based Conditions. \n */" },
		{ "IncludePath", "Blueprint/StateTreeConditionBlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConditionBlueprintBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "* Base class for Blueprint based Conditions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeConditionBlueprintBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::ClassParams = {
		&UStateTreeConditionBlueprintBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeConditionBlueprintBase()
	{
		if (!Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.OuterSingleton, Z_Construct_UClass_UStateTreeConditionBlueprintBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.OuterSingleton;
	}
	template<> STATETREEMODULE_API UClass* StaticClass<UStateTreeConditionBlueprintBase>()
	{
		return UStateTreeConditionBlueprintBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeConditionBlueprintBase);
	UStateTreeConditionBlueprintBase::~UStateTreeConditionBlueprintBase() {}

static_assert(std::is_polymorphic<FStateTreeBlueprintConditionWrapper>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FStateTreeBlueprintConditionWrapper cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper;
class UScriptStruct* FStateTreeBlueprintConditionWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeBlueprintConditionWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeBlueprintConditionWrapper>()
{
	return FStateTreeBlueprintConditionWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConditionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Wrapper for Blueprint based Conditions.\n */" },
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConditionBlueprintBase.h" },
		{ "ToolTip", "Wrapper for Blueprint based Conditions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeBlueprintConditionWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewProp_ConditionClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/StateTreeConditionBlueprintBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewProp_ConditionClass = { "ConditionClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeBlueprintConditionWrapper, ConditionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStateTreeConditionBlueprintBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewProp_ConditionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewProp_ConditionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewProp_ConditionClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		Z_Construct_UScriptStruct_FStateTreeConditionBase,
		&NewStructOps,
		"StateTreeBlueprintConditionWrapper",
		sizeof(FStateTreeBlueprintConditionWrapper),
		alignof(FStateTreeBlueprintConditionWrapper),
		Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeBlueprintConditionWrapper::StaticStruct, Z_Construct_UScriptStruct_FStateTreeBlueprintConditionWrapper_Statics::NewStructOps, TEXT("StateTreeBlueprintConditionWrapper"), &Z_Registration_Info_UScriptStruct_StateTreeBlueprintConditionWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeBlueprintConditionWrapper), 2013472272U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeConditionBlueprintBase, UStateTreeConditionBlueprintBase::StaticClass, TEXT("UStateTreeConditionBlueprintBase"), &Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeConditionBlueprintBase), 4254107633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_3706123835(TEXT("/Script/StateTreeModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_Blueprint_StateTreeConditionBlueprintBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
