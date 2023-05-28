// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextualAnimTransition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContextualAnimTransition() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimTransition();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UContextualAnimTransition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	struct ContextualAnimTransition_eventCanEnterTransition_Parms
	{
		const UContextualAnimSceneInstance* SceneInstance;
		FName FromSection;
		FName ToSection;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ContextualAnimTransition_eventCanEnterTransition_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UContextualAnimTransition_CanEnterTransition = FName(TEXT("CanEnterTransition"));
	bool UContextualAnimTransition::CanEnterTransition(const UContextualAnimSceneInstance* SceneInstance, FName const& FromSection, FName const& ToSection) const
	{
		ContextualAnimTransition_eventCanEnterTransition_Parms Parms;
		Parms.SceneInstance=SceneInstance;
		Parms.FromSection=FromSection;
		Parms.ToSection=ToSection;
		const_cast<UContextualAnimTransition*>(this)->ProcessEvent(FindFunctionChecked(NAME_UContextualAnimTransition_CanEnterTransition),&Parms);
		return !!Parms.ReturnValue;
	}
	void UContextualAnimTransition::StaticRegisterNativesUContextualAnimTransition()
	{
	}
	struct Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromSection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToSection_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToSection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_SceneInstance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_SceneInstance = { "SceneInstance", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimTransition_eventCanEnterTransition_Parms, SceneInstance), Z_Construct_UClass_UContextualAnimSceneInstance_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_SceneInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_SceneInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_FromSection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_FromSection = { "FromSection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimTransition_eventCanEnterTransition_Parms, FromSection), METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_FromSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_FromSection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ToSection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ToSection = { "ToSection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ContextualAnimTransition_eventCanEnterTransition_Parms, ToSection), METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ToSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ToSection_MetaData)) };
	void Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ContextualAnimTransition_eventCanEnterTransition_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ContextualAnimTransition_eventCanEnterTransition_Parms), &Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_SceneInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_FromSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ToSection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Defaults" },
		{ "ModuleRelativePath", "Public/ContextualAnimTransition.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UContextualAnimTransition, nullptr, "CanEnterTransition", nullptr, nullptr, sizeof(ContextualAnimTransition_eventCanEnterTransition_Parms), Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContextualAnimTransition);
	UClass* Z_Construct_UClass_UContextualAnimTransition_NoRegister()
	{
		return UContextualAnimTransition::StaticClass();
	}
	struct Z_Construct_UClass_UContextualAnimTransition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContextualAnimTransition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UContextualAnimTransition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UContextualAnimTransition_CanEnterTransition, "CanEnterTransition" }, // 2191587436
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContextualAnimTransition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ContextualAnimTransition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ContextualAnimTransition.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContextualAnimTransition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContextualAnimTransition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContextualAnimTransition_Statics::ClassParams = {
		&UContextualAnimTransition::StaticClass,
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
		0x001110A1u,
		METADATA_PARAMS(Z_Construct_UClass_UContextualAnimTransition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContextualAnimTransition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContextualAnimTransition()
	{
		if (!Z_Registration_Info_UClass_UContextualAnimTransition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContextualAnimTransition.OuterSingleton, Z_Construct_UClass_UContextualAnimTransition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContextualAnimTransition.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UContextualAnimTransition>()
	{
		return UContextualAnimTransition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContextualAnimTransition);
	UContextualAnimTransition::~UContextualAnimTransition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTransition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTransition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContextualAnimTransition, UContextualAnimTransition::StaticClass, TEXT("UContextualAnimTransition"), &Z_Registration_Info_UClass_UContextualAnimTransition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContextualAnimTransition), 2250805126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTransition_h_2642899008(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTransition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_ContextualAnimTransition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
