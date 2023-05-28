// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNodeCustomizationInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNodeCustomizationInterface() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNodeCustomizationInterface();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	DEFINE_FUNCTION(IAnimGraphNodeCustomizationInterface::execGetTitleColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTitleColor_Implementation();
		P_NATIVE_END;
	}
	struct AnimGraphNodeCustomizationInterface_eventGetTitleColor_Parms
	{
		FLinearColor ReturnValue;

		/** Constructor, initializes return property only **/
		AnimGraphNodeCustomizationInterface_eventGetTitleColor_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	FLinearColor IAnimGraphNodeCustomizationInterface::GetTitleColor() const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTitleColor instead.");
		AnimGraphNodeCustomizationInterface_eventGetTitleColor_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAnimGraphNodeCustomizationInterface::StaticRegisterNativesUAnimGraphNodeCustomizationInterface()
	{
		UClass* Class = UAnimGraphNodeCustomizationInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTitleColor", &IAnimGraphNodeCustomizationInterface::execGetTitleColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimGraphNodeCustomizationInterface_eventGetTitleColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Customization" },
		{ "Comment", "/**\n\x09 * Get the custom color for this node\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimGraphNodeCustomizationInterface.h" },
		{ "ToolTip", "Get the custom color for this node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimGraphNodeCustomizationInterface, nullptr, "GetTitleColor", nullptr, nullptr, sizeof(AnimGraphNodeCustomizationInterface_eventGetTitleColor_Parms), Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNodeCustomizationInterface);
	UClass* Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_NoRegister()
	{
		return UAnimGraphNodeCustomizationInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimGraphNodeCustomizationInterface_GetTitleColor, "GetTitleColor" }, // 1969161547
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimGraphNodeCustomizationInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimGraphNodeCustomizationInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::ClassParams = {
		&UAnimGraphNodeCustomizationInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNodeCustomizationInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNodeCustomizationInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNodeCustomizationInterface.OuterSingleton, Z_Construct_UClass_UAnimGraphNodeCustomizationInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNodeCustomizationInterface.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNodeCustomizationInterface>()
	{
		return UAnimGraphNodeCustomizationInterface::StaticClass();
	}
	UAnimGraphNodeCustomizationInterface::UAnimGraphNodeCustomizationInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNodeCustomizationInterface);
	UAnimGraphNodeCustomizationInterface::~UAnimGraphNodeCustomizationInterface() {}
	static FName NAME_UAnimGraphNodeCustomizationInterface_GetTitleColor = FName(TEXT("GetTitleColor"));
	FLinearColor IAnimGraphNodeCustomizationInterface::Execute_GetTitleColor(const UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAnimGraphNodeCustomizationInterface::StaticClass()));
		AnimGraphNodeCustomizationInterface_eventGetTitleColor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAnimGraphNodeCustomizationInterface_GetTitleColor);
		if (Func)
		{
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (const IAnimGraphNodeCustomizationInterface*)(O->GetNativeInterfaceAddress(UAnimGraphNodeCustomizationInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetTitleColor_Implementation();
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNodeCustomizationInterface, UAnimGraphNodeCustomizationInterface::StaticClass, TEXT("UAnimGraphNodeCustomizationInterface"), &Z_Registration_Info_UClass_UAnimGraphNodeCustomizationInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNodeCustomizationInterface), 4031776678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_2145748774(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNodeCustomizationInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
