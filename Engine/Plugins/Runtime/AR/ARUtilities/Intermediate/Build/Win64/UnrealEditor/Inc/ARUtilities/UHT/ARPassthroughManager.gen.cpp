// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARPassthroughManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPassthroughManager() {}
// Cross Module References
	ARUTILITIES_API UClass* Z_Construct_UClass_AARPassthroughManager();
	ARUTILITIES_API UClass* Z_Construct_UClass_AARPassthroughManager_NoRegister();
	ARUTILITIES_API UClass* Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ARUtilities();
// End Cross Module References
	DEFINE_FUNCTION(AARPassthroughManager::execGetPassthroughMaterialUpdateComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPassthroughMaterialUpdateComponent**)Z_Param__Result=P_THIS->GetPassthroughMaterialUpdateComponent();
		P_NATIVE_END;
	}
	void AARPassthroughManager::StaticRegisterNativesAARPassthroughManager()
	{
		UClass* Class = AARPassthroughManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPassthroughMaterialUpdateComponent", &AARPassthroughManager::execGetPassthroughMaterialUpdateComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics
	{
		struct ARPassthroughManager_eventGetPassthroughMaterialUpdateComponent_Parms
		{
			UPassthroughMaterialUpdateComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARPassthroughManager_eventGetPassthroughMaterialUpdateComponent_Parms, ReturnValue), Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "ModuleRelativePath", "Public/ARPassthroughManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AARPassthroughManager, nullptr, "GetPassthroughMaterialUpdateComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::ARPassthroughManager_eventGetPassthroughMaterialUpdateComponent_Parms), Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AARPassthroughManager);
	UClass* Z_Construct_UClass_AARPassthroughManager_NoRegister()
	{
		return AARPassthroughManager::StaticClass();
	}
	struct Z_Construct_UClass_AARPassthroughManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ARComponentClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARComponentClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ARComponentClasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughUpdateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PassthroughUpdateComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPassthroughManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ARUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AARPassthroughManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AARPassthroughManager_GetPassthroughMaterialUpdateComponent, "GetPassthroughMaterialUpdateComponent" }, // 675991712
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPassthroughManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AR" },
		{ "Comment", "/**\n * A helper actor that collects the ARComponent in the scene and apply the passthrough material to them.\n */" },
		{ "IncludePath", "ARPassthroughManager.h" },
		{ "ModuleRelativePath", "Public/ARPassthroughManager.h" },
		{ "ToolTip", "A helper actor that collects the ARComponent in the scene and apply the passthrough material to them." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses_Inner = { "ARComponentClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UARComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses_MetaData[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** What kinds of AR components should be gathered */" },
		{ "ModuleRelativePath", "Public/ARPassthroughManager.h" },
		{ "ToolTip", "What kinds of AR components should be gathered" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses = { "ARComponentClasses", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARPassthroughManager, ARComponentClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_PassthroughUpdateComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ARPassthroughManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_PassthroughUpdateComponent = { "PassthroughUpdateComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AARPassthroughManager, PassthroughUpdateComponent), Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_PassthroughUpdateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_PassthroughUpdateComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AARPassthroughManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_ARComponentClasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AARPassthroughManager_Statics::NewProp_PassthroughUpdateComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPassthroughManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPassthroughManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AARPassthroughManager_Statics::ClassParams = {
		&AARPassthroughManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AARPassthroughManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AARPassthroughManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPassthroughManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPassthroughManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPassthroughManager()
	{
		if (!Z_Registration_Info_UClass_AARPassthroughManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AARPassthroughManager.OuterSingleton, Z_Construct_UClass_AARPassthroughManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AARPassthroughManager.OuterSingleton;
	}
	template<> ARUTILITIES_API UClass* StaticClass<AARPassthroughManager>()
	{
		return AARPassthroughManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPassthroughManager);
	AARPassthroughManager::~AARPassthroughManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AARPassthroughManager, AARPassthroughManager::StaticClass, TEXT("AARPassthroughManager"), &Z_Registration_Info_UClass_AARPassthroughManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AARPassthroughManager), 596674701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_2412227949(TEXT("/Script/ARUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARPassthroughManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
