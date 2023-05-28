// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshComponentBudgeted.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshComponentBudgeted() {}
// Cross Module References
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted();
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_AnimationBudgetAllocator();
// End Cross Module References
	DEFINE_FUNCTION(USkeletalMeshComponentBudgeted::execSetAutoRegisterWithBudgetAllocator)
	{
		P_GET_UBOOL(Z_Param_bInAutoRegisterWithBudgetAllocator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoRegisterWithBudgetAllocator(Z_Param_bInAutoRegisterWithBudgetAllocator);
		P_NATIVE_END;
	}
	void USkeletalMeshComponentBudgeted::StaticRegisterNativesUSkeletalMeshComponentBudgeted()
	{
		UClass* Class = USkeletalMeshComponentBudgeted::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAutoRegisterWithBudgetAllocator", &USkeletalMeshComponentBudgeted::execSetAutoRegisterWithBudgetAllocator },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics
	{
		struct SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms
		{
			bool bInAutoRegisterWithBudgetAllocator;
		};
		static void NewProp_bInAutoRegisterWithBudgetAllocator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInAutoRegisterWithBudgetAllocator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::NewProp_bInAutoRegisterWithBudgetAllocator_SetBit(void* Obj)
	{
		((SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms*)Obj)->bInAutoRegisterWithBudgetAllocator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::NewProp_bInAutoRegisterWithBudgetAllocator = { "bInAutoRegisterWithBudgetAllocator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms), &Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::NewProp_bInAutoRegisterWithBudgetAllocator_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::NewProp_bInAutoRegisterWithBudgetAllocator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** Set this component to automatically register with the budget allocator */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
		{ "ToolTip", "Set this component to automatically register with the budget allocator" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshComponentBudgeted, nullptr, "SetAutoRegisterWithBudgetAllocator", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::SkeletalMeshComponentBudgeted_eventSetAutoRegisterWithBudgetAllocator_Parms), Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshComponentBudgeted);
	UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted_NoRegister()
	{
		return USkeletalMeshComponentBudgeted::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRegisterWithBudgetAllocator_MetaData[];
#endif
		static void NewProp_bAutoRegisterWithBudgetAllocator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRegisterWithBudgetAllocator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateSignificance_MetaData[];
#endif
		static void NewProp_bAutoCalculateSignificance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateSignificance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUseActorRenderedFlag_MetaData[];
#endif
		static void NewProp_bShouldUseActorRenderedFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUseActorRenderedFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBudgetAllocator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator, "SetAutoRegisterWithBudgetAllocator" }, // 4043949271
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/** A skeletal mesh component that has its tick rate governed by a global animation budget */" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "SkeletalMeshComponentBudgeted.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A skeletal mesh component that has its tick rate governed by a global animation budget" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator_MetaData[] = {
		{ "BlueprintSetter", "SetAutoRegisterWithBudgetAllocator" },
		{ "Category", "Budgeting" },
		{ "Comment", "/** Whether this component should automatically register with the budget allocator in OnRegister/OnUnregister */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
		{ "ToolTip", "Whether this component should automatically register with the budget allocator in OnRegister/OnUnregister" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator_SetBit(void* Obj)
	{
		((USkeletalMeshComponentBudgeted*)Obj)->bAutoRegisterWithBudgetAllocator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator = { "bAutoRegisterWithBudgetAllocator", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponentBudgeted), &Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance_MetaData[] = {
		{ "Category", "Budgeting" },
		{ "Comment", "/** Whether this component should automatically calculate its significance (rather than some external system pushing the significance to it) */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
		{ "ToolTip", "Whether this component should automatically calculate its significance (rather than some external system pushing the significance to it)" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance_SetBit(void* Obj)
	{
		((USkeletalMeshComponentBudgeted*)Obj)->bAutoCalculateSignificance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance = { "bAutoCalculateSignificance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponentBudgeted), &Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag_MetaData[] = {
		{ "Category", "Budgeting" },
		{ "Comment", "/** Whether this component should use its owning actor's rendered state to determine visibility. If this is not set then the component's visibility will be used */" },
		{ "ModuleRelativePath", "Public/SkeletalMeshComponentBudgeted.h" },
		{ "ToolTip", "Whether this component should use its owning actor's rendered state to determine visibility. If this is not set then the component's visibility will be used" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag_SetBit(void* Obj)
	{
		((USkeletalMeshComponentBudgeted*)Obj)->bShouldUseActorRenderedFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag = { "bShouldUseActorRenderedFlag", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USkeletalMeshComponentBudgeted), &Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoRegisterWithBudgetAllocator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bAutoCalculateSignificance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::NewProp_bShouldUseActorRenderedFlag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshComponentBudgeted>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::ClassParams = {
		&USkeletalMeshComponentBudgeted::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshComponentBudgeted()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.OuterSingleton, Z_Construct_UClass_USkeletalMeshComponentBudgeted_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted.OuterSingleton;
	}
	template<> ANIMATIONBUDGETALLOCATOR_API UClass* StaticClass<USkeletalMeshComponentBudgeted>()
	{
		return USkeletalMeshComponentBudgeted::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshComponentBudgeted);
	USkeletalMeshComponentBudgeted::~USkeletalMeshComponentBudgeted() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshComponentBudgeted, USkeletalMeshComponentBudgeted::StaticClass, TEXT("USkeletalMeshComponentBudgeted"), &Z_Registration_Info_UClass_USkeletalMeshComponentBudgeted, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshComponentBudgeted), 757438935U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h_957745703(TEXT("/Script/AnimationBudgetAllocator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Public_SkeletalMeshComponentBudgeted_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
