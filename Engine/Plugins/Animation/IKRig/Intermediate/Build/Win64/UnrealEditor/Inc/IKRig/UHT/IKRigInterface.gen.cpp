// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorComponents/IKRigInterface.h"
#include "IKRigDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface();
	IKRIG_API UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References
	DEFINE_FUNCTION(IIKGoalCreatorInterface::execAddIKGoals)
	{
		P_GET_TMAP_REF(FName,FIKRigGoal,Z_Param_Out_OutGoals);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddIKGoals_Implementation(Z_Param_Out_OutGoals);
		P_NATIVE_END;
	}
	struct IKGoalCreatorInterface_eventAddIKGoals_Parms
	{
		TMap<FName,FIKRigGoal> OutGoals;
	};
	void IIKGoalCreatorInterface::AddIKGoals(TMap<FName,FIKRigGoal>& OutGoals)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddIKGoals instead.");
	}
	void UIKGoalCreatorInterface::StaticRegisterNativesUIKGoalCreatorInterface()
	{
		UClass* Class = UIKGoalCreatorInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIKGoals", &IIKGoalCreatorInterface::execAddIKGoals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutGoals_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutGoals_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutGoals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_ValueProp = { "OutGoals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FIKRigGoal, METADATA_PARAMS(nullptr, 0) }; // 1237806036
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_Key_KeyProp = { "OutGoals_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals = { "OutGoals", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKGoalCreatorInterface_eventAddIKGoals_Parms, OutGoals), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1237806036
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::NewProp_OutGoals,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRigGoals" },
		{ "Comment", "/** Add your own goals to the OutGoals map (careful not to remove existing goals in the map!)*/" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigInterface.h" },
		{ "ToolTip", "Add your own goals to the OutGoals map (careful not to remove existing goals in the map!)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKGoalCreatorInterface, nullptr, "AddIKGoals", nullptr, nullptr, sizeof(IKGoalCreatorInterface_eventAddIKGoals_Parms), Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKGoalCreatorInterface);
	UClass* Z_Construct_UClass_UIKGoalCreatorInterface_NoRegister()
	{
		return UIKGoalCreatorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UIKGoalCreatorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKGoalCreatorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKGoalCreatorInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKGoalCreatorInterface_AddIKGoals, "AddIKGoals" }, // 951126542
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKGoalCreatorInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorComponents/IKRigInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKGoalCreatorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIKGoalCreatorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKGoalCreatorInterface_Statics::ClassParams = {
		&UIKGoalCreatorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIKGoalCreatorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKGoalCreatorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKGoalCreatorInterface()
	{
		if (!Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton, Z_Construct_UClass_UIKGoalCreatorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKGoalCreatorInterface.OuterSingleton;
	}
	template<> IKRIG_API UClass* StaticClass<UIKGoalCreatorInterface>()
	{
		return UIKGoalCreatorInterface::StaticClass();
	}
	UIKGoalCreatorInterface::UIKGoalCreatorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKGoalCreatorInterface);
	UIKGoalCreatorInterface::~UIKGoalCreatorInterface() {}
	static FName NAME_UIKGoalCreatorInterface_AddIKGoals = FName(TEXT("AddIKGoals"));
	void IIKGoalCreatorInterface::Execute_AddIKGoals(UObject* O, TMap<FName,FIKRigGoal>& OutGoals)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UIKGoalCreatorInterface::StaticClass()));
		IKGoalCreatorInterface_eventAddIKGoals_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UIKGoalCreatorInterface_AddIKGoals);
		if (Func)
		{
			Parms.OutGoals=OutGoals;
			O->ProcessEvent(Func, &Parms);
			OutGoals=Parms.OutGoals;
		}
		else if (auto I = (IIKGoalCreatorInterface*)(O->GetNativeInterfaceAddress(UIKGoalCreatorInterface::StaticClass())))
		{
			I->AddIKGoals_Implementation(OutGoals);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKGoalCreatorInterface, UIKGoalCreatorInterface::StaticClass, TEXT("UIKGoalCreatorInterface"), &Z_Registration_Info_UClass_UIKGoalCreatorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKGoalCreatorInterface), 4091412036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_137536874(TEXT("/Script/IKRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_ActorComponents_IKRigInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
