// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstraintsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintsManager() {}
// Cross Module References
	CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
	CONSTRAINTS_API UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature();
	CONSTRAINTS_API UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature();
	CONSTRAINTS_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintTickFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References

static_assert(std::is_polymorphic<FConstraintTickFunction>() == std::is_polymorphic<FTickFunction>(), "USTRUCT FConstraintTickFunction cannot be polymorphic unless super FTickFunction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintTickFunction;
class UScriptStruct* FConstraintTickFunction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintTickFunction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintTickFunction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintTickFunction, (UObject*)Z_Construct_UPackage__Script_Constraints(), TEXT("ConstraintTickFunction"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintTickFunction.OuterSingleton;
}
template<> CONSTRAINTS_API UScriptStruct* StaticStruct<FConstraintTickFunction>()
{
	return FConstraintTickFunction::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintTickFunction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * FConstraintTickFunction\n * Represents the interface of constraint as a tick function. This allows both to evaluate a constraint in the\n * UE ticking system but also to handle dependencies between parents/children and constraints between themselves\n * using the tick prerequisites system.\n **/" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "FConstraintTickFunction\nRepresents the interface of constraint as a tick function. This allows both to evaluate a constraint in the\nUE ticking system but also to handle dependencies between parents/children and constraints between themselves\nusing the tick prerequisites system." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintTickFunction>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"ConstraintTickFunction",
		sizeof(FConstraintTickFunction),
		alignof(FConstraintTickFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintTickFunction()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintTickFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintTickFunction.InnerSingleton, Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintTickFunction.InnerSingleton;
	}
	void UTickableConstraint::StaticRegisterNativesUTickableConstraint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableConstraint);
	UClass* Z_Construct_UClass_UTickableConstraint_NoRegister()
	{
		return UTickableConstraint::StaticClass();
	}
	struct Z_Construct_UClass_UTickableConstraint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintTick_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Active_MetaData[];
#endif
		static void NewProp_Active_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Active;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableConstraint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableConstraint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UTickableConstraint\n * Represents the basic interface of constraint within the constraints manager.\n **/" },
		{ "IncludePath", "ConstraintsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "UTickableConstraint\nRepresents the basic interface of constraint within the constraints manager." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableConstraint_Statics::NewProp_ConstraintTick_MetaData[] = {
		{ "Comment", "/** Tick function that will be registered and evaluated. */" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "Tick function that will be registered and evaluated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTickableConstraint_Statics::NewProp_ConstraintTick = { "ConstraintTick", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTickableConstraint, ConstraintTick), Z_Construct_UScriptStruct_FConstraintTickFunction, METADATA_PARAMS(Z_Construct_UClass_UTickableConstraint_Statics::NewProp_ConstraintTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::NewProp_ConstraintTick_MetaData)) }; // 2851245281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** @todo documentation. */" },
		{ "DisplayName", "Active State" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "@todo documentation." },
	};
#endif
	void Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_SetBit(void* Obj)
	{
		((UTickableConstraint*)Obj)->Active = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active = { "Active", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTickableConstraint), &Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTickableConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableConstraint_Statics::NewProp_ConstraintTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTickableConstraint_Statics::NewProp_Active,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableConstraint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableConstraint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableConstraint_Statics::ClassParams = {
		&UTickableConstraint::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTickableConstraint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableConstraint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableConstraint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableConstraint()
	{
		if (!Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton, Z_Construct_UClass_UTickableConstraint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableConstraint.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UTickableConstraint>()
	{
		return UTickableConstraint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableConstraint);
	struct Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics
	{
		struct ConstraintsManager_eventOnConstraintAdded_Parms
		{
			UConstraintsManager* Mananger;
			UTickableConstraint* Constraint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mananger;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Mananger = { "Mananger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintAdded_Parms, Mananger), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintAdded_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Mananger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::NewProp_Constraint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Dynamic blueprintable delegates for knowing when a constraints are added or deleted*/" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "Dynamic blueprintable delegates for knowing when a constraints are added or deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsManager, nullptr, "OnConstraintAdded__DelegateSignature", "ConstraintsManager", "OnConstraintAdded_BP", sizeof(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::ConstraintsManager_eventOnConstraintAdded_Parms), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UConstraintsManager::FOnConstraintAdded_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintAdded, UConstraintsManager* Mananger, UTickableConstraint* Constraint)
{
	struct ConstraintsManager_eventOnConstraintAdded_Parms
	{
		UConstraintsManager* Mananger;
		UTickableConstraint* Constraint;
	};
	ConstraintsManager_eventOnConstraintAdded_Parms Parms;
	Parms.Mananger=Mananger;
	Parms.Constraint=Constraint;
	OnConstraintAdded.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics
	{
		struct ConstraintsManager_eventOnConstraintRemoved_Parms
		{
			UConstraintsManager* Mananger;
			UTickableConstraint* Constraint;
			bool bDoNotCompensate;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mananger;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Constraint;
		static void NewProp_bDoNotCompensate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoNotCompensate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Mananger = { "Mananger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintRemoved_Parms, Mananger), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Constraint = { "Constraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsManager_eventOnConstraintRemoved_Parms, Constraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate_SetBit(void* Obj)
	{
		((ConstraintsManager_eventOnConstraintRemoved_Parms*)Obj)->bDoNotCompensate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate = { "bDoNotCompensate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintsManager_eventOnConstraintRemoved_Parms), &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Mananger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_Constraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::NewProp_bDoNotCompensate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsManager, nullptr, "OnConstraintRemoved__DelegateSignature", "ConstraintsManager", "OnConstraintRemoved_BP", sizeof(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::ConstraintsManager_eventOnConstraintRemoved_Parms), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UConstraintsManager::FOnConstraintRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnConstraintRemoved, UConstraintsManager* Mananger, UTickableConstraint* Constraint, bool bDoNotCompensate)
{
	struct ConstraintsManager_eventOnConstraintRemoved_Parms
	{
		UConstraintsManager* Mananger;
		UTickableConstraint* Constraint;
		bool bDoNotCompensate;
	};
	ConstraintsManager_eventOnConstraintRemoved_Parms Parms;
	Parms.Mananger=Mananger;
	Parms.Constraint=Constraint;
	Parms.bDoNotCompensate=bDoNotCompensate ? true : false;
	OnConstraintRemoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UConstraintsManager::StaticRegisterNativesUConstraintsManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstraintsManager);
	UClass* Z_Construct_UClass_UConstraintsManager_NoRegister()
	{
		return UConstraintsManager::StaticClass();
	}
	struct Z_Construct_UClass_UConstraintsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintAdded_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintAdded_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConstraintRemoved_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConstraintRemoved_BP;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Constraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstraintsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstraintsManager_Statics::FuncInfo[] = {
		{ &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature, "OnConstraintAdded__DelegateSignature" }, // 2074935386
		{ &Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature, "OnConstraintRemoved__DelegateSignature" }, // 744046532
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstraintsManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * UConstraintsManager\n * This object gathers the different constraints of the level and is held by the ConstraintsActor (unique in the level)\n **/" },
		{ "IncludePath", "ConstraintsManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "UConstraintsManager\nThis object gathers the different constraints of the level and is held by the ConstraintsActor (unique in the level)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** BP Delegate fired when constraints are added*/" },
		{ "DisplayName", "OnConstraintAdded" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "BP Delegate fired when constraints are added" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP = { "OnConstraintAdded_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstraintsManager, OnConstraintAdded_BP), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP_MetaData)) }; // 2074935386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** BP Delegate fired when constraints are removed*/" },
		{ "DisplayName", "OnConstraintRemoved" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "BP Delegate fired when constraints are removed" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP = { "OnConstraintRemoved_BP", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstraintsManager, OnConstraintRemoved_BP), Z_Construct_USparseDelegateFunction_UConstraintsManager_OnConstraintRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP_MetaData)) }; // 744046532
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_MetaData[] = {
		{ "Comment", "/** All of the constraints*/" },
		{ "ModuleRelativePath", "Public/ConstraintsManager.h" },
		{ "ToolTip", "All of the constraints" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConstraintsManager, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConstraintsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintAdded_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_OnConstraintRemoved_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConstraintsManager_Statics::NewProp_Constraints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstraintsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintsManager_Statics::ClassParams = {
		&UConstraintsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UConstraintsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConstraintsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstraintsManager()
	{
		if (!Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton, Z_Construct_UClass_UConstraintsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstraintsManager.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UConstraintsManager>()
	{
		return UConstraintsManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstraintsManager);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ScriptStructInfo[] = {
		{ FConstraintTickFunction::StaticStruct, Z_Construct_UScriptStruct_FConstraintTickFunction_Statics::NewStructOps, TEXT("ConstraintTickFunction"), &Z_Registration_Info_UScriptStruct_ConstraintTickFunction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintTickFunction), 2851245281U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTickableConstraint, UTickableConstraint::StaticClass, TEXT("UTickableConstraint"), &Z_Registration_Info_UClass_UTickableConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableConstraint), 31279123U) },
		{ Z_Construct_UClass_UConstraintsManager, UConstraintsManager::StaticClass, TEXT("UConstraintsManager"), &Z_Registration_Info_UClass_UConstraintsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintsManager), 3093540696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_2514835353(TEXT("/Script/Constraints"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
