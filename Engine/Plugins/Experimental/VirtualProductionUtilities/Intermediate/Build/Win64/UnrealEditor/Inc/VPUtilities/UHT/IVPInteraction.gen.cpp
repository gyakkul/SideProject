// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVPInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVPInteraction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPInteraction();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPInteraction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IVPInteraction::execOnActorDroppedFromTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDroppedFromTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVPInteraction::execOnActorSelectedForTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorSelectedForTransform_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVPInteraction::execOnActorDroppedFromCarry)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDroppedFromCarry_Implementation();
		P_NATIVE_END;
	}
	void IVPInteraction::OnActorDroppedFromCarry()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActorDroppedFromCarry instead.");
	}
	void IVPInteraction::OnActorDroppedFromTransform()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActorDroppedFromTransform instead.");
	}
	void IVPInteraction::OnActorSelectedForTransform()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActorSelectedForTransform instead.");
	}
	void UVPInteraction::StaticRegisterNativesUVPInteraction()
	{
		UClass* Class = UVPInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnActorDroppedFromCarry", &IVPInteraction::execOnActorDroppedFromCarry },
			{ "OnActorDroppedFromTransform", &IVPInteraction::execOnActorDroppedFromTransform },
			{ "OnActorSelectedForTransform", &IVPInteraction::execOnActorSelectedForTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "VirtualScouting|Interaction" },
		{ "Comment", "/** Called when actor is dropped from Carry state by the VREd interactor */" },
		{ "ModuleRelativePath", "Public/IVPInteraction.h" },
		{ "ToolTip", "Called when actor is dropped from Carry state by the VREd interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPInteraction, nullptr, "OnActorDroppedFromCarry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "VirtualScouting|Interaction" },
		{ "Comment", "/** Called when dropped by VRTool */" },
		{ "ModuleRelativePath", "Public/IVPInteraction.h" },
		{ "ToolTip", "Called when dropped by VRTool" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPInteraction, nullptr, "OnActorDroppedFromTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "VirtualScouting|Interaction" },
		{ "Comment", "/** Called when an actor is selected by the VREd interactor */" },
		{ "ModuleRelativePath", "Public/IVPInteraction.h" },
		{ "ToolTip", "Called when an actor is selected by the VREd interactor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPInteraction, nullptr, "OnActorSelectedForTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPInteraction);
	UClass* Z_Construct_UClass_UVPInteraction_NoRegister()
	{
		return UVPInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UVPInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromCarry, "OnActorDroppedFromCarry" }, // 3839631465
		{ &Z_Construct_UFunction_UVPInteraction_OnActorDroppedFromTransform, "OnActorDroppedFromTransform" }, // 1207682658
		{ &Z_Construct_UFunction_UVPInteraction_OnActorSelectedForTransform, "OnActorSelectedForTransform" }, // 3636697129
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/IVPInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVPInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPInteraction_Statics::ClassParams = {
		&UVPInteraction::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVPInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPInteraction()
	{
		if (!Z_Registration_Info_UClass_UVPInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPInteraction.OuterSingleton, Z_Construct_UClass_UVPInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPInteraction.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPInteraction>()
	{
		return UVPInteraction::StaticClass();
	}
	UVPInteraction::UVPInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPInteraction);
	UVPInteraction::~UVPInteraction() {}
	static FName NAME_UVPInteraction_OnActorDroppedFromCarry = FName(TEXT("OnActorDroppedFromCarry"));
	void IVPInteraction::Execute_OnActorDroppedFromCarry(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPInteraction_OnActorDroppedFromCarry);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPInteraction*)(O->GetNativeInterfaceAddress(UVPInteraction::StaticClass())))
		{
			I->OnActorDroppedFromCarry_Implementation();
		}
	}
	static FName NAME_UVPInteraction_OnActorDroppedFromTransform = FName(TEXT("OnActorDroppedFromTransform"));
	void IVPInteraction::Execute_OnActorDroppedFromTransform(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPInteraction_OnActorDroppedFromTransform);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPInteraction*)(O->GetNativeInterfaceAddress(UVPInteraction::StaticClass())))
		{
			I->OnActorDroppedFromTransform_Implementation();
		}
	}
	static FName NAME_UVPInteraction_OnActorSelectedForTransform = FName(TEXT("OnActorSelectedForTransform"));
	void IVPInteraction::Execute_OnActorSelectedForTransform(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVPInteraction::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVPInteraction_OnActorSelectedForTransform);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVPInteraction*)(O->GetNativeInterfaceAddress(UVPInteraction::StaticClass())))
		{
			I->OnActorSelectedForTransform_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPInteraction, UVPInteraction::StaticClass, TEXT("UVPInteraction"), &Z_Registration_Info_UClass_UVPInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPInteraction), 1912602432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_913683497(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_IVPInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
