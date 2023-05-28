// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavModifierComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	DEFINE_FUNCTION(UNavModifierComponent::execSetAreaClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewAreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaClass(Z_Param_NewAreaClass);
		P_NATIVE_END;
	}
	void UNavModifierComponent::StaticRegisterNativesUNavModifierComponent()
	{
		UClass* Class = UNavModifierComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", &UNavModifierComponent::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics
	{
		struct NavModifierComponent_eventSetAreaClass_Parms
		{
			TSubclassOf<UNavArea>  NewAreaClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavModifierComponent_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NewProp_NewAreaClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavModifierComponent, nullptr, "SetAreaClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::NavModifierComponent_eventSetAreaClass_Parms), Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavModifierComponent_SetAreaClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavModifierComponent_SetAreaClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavModifierComponent);
	UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister()
	{
		return UNavModifierComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNavModifierComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailsafeExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailsafeExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeAgentHeight_MetaData[];
#endif
		static void NewProp_bIncludeAgentHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeAgentHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavModifierComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavModifierComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavModifierComponent_SetAreaClass, "SetAreaClass" }, // 2055816025
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Navigation" },
		{ "HideCategories", "Activation" },
		{ "IncludePath", "NavModifierComponent.h" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavModifierComponent, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** box extent used ONLY when owning actor doesn't have collision component */" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "box extent used ONLY when owning actor doesn't have collision component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent = { "FailsafeExtent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNavModifierComponent, FailsafeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** Setting to 'true' will result in expanding lower bounding box of the nav \n\x09 *\x09modifier by agent's height, before applying to navmesh */" },
		{ "ModuleRelativePath", "Public/NavModifierComponent.h" },
		{ "ToolTip", "Setting to 'true' will result in expanding lower bounding box of the nav\n    modifier by agent's height, before applying to navmesh" },
	};
#endif
	void Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_SetBit(void* Obj)
	{
		((UNavModifierComponent*)Obj)->bIncludeAgentHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight = { "bIncludeAgentHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNavModifierComponent), &Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_AreaClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_FailsafeExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavModifierComponent_Statics::NewProp_bIncludeAgentHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavModifierComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavModifierComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavModifierComponent_Statics::ClassParams = {
		&UNavModifierComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::PropPointers),
		0,
		0x00B000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavModifierComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavModifierComponent()
	{
		if (!Z_Registration_Info_UClass_UNavModifierComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavModifierComponent.OuterSingleton, Z_Construct_UClass_UNavModifierComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavModifierComponent.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavModifierComponent>()
	{
		return UNavModifierComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavModifierComponent);
	UNavModifierComponent::~UNavModifierComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavModifierComponent, UNavModifierComponent::StaticClass, TEXT("UNavModifierComponent"), &Z_Registration_Info_UClass_UNavModifierComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavModifierComponent), 3512352605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_718565239(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
