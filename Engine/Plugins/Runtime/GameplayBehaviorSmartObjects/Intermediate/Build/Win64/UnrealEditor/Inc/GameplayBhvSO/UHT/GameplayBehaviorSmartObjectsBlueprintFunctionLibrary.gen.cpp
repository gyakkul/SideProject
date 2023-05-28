// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayBehaviorSmartObjectsBlueprintFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary();
	GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameplayBehaviorSmartObjectsModule();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::execUseGameplayBehaviorSmartObject)
	{
		P_GET_OBJECT(AActor,Z_Param_Avatar);
		P_GET_OBJECT(AActor,Z_Param_SmartObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::UseGameplayBehaviorSmartObject(Z_Param_Avatar,Z_Param_SmartObject);
		P_NATIVE_END;
	}
	void UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticRegisterNativesUGameplayBehaviorSmartObjectsBlueprintFunctionLibrary()
	{
		UClass* Class = UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseGameplayBehaviorSmartObject", &UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::execUseGameplayBehaviorSmartObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics
	{
		struct GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_eventUseGameplayBehaviorSmartObject_Parms
		{
			AActor* Avatar;
			AActor* SmartObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Avatar;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_Avatar = { "Avatar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_eventUseGameplayBehaviorSmartObject_Parms, Avatar), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObject = { "SmartObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_eventUseGameplayBehaviorSmartObject_Parms, SmartObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_eventUseGameplayBehaviorSmartObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_eventUseGameplayBehaviorSmartObject_Parms), &Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_Avatar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_SmartObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "DisplayName", "UseGameplayBehaviorSmartObject" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary, nullptr, "UseGameplayBehaviorSmartObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_eventUseGameplayBehaviorSmartObject_Parms), Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_NoRegister()
	{
		return UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayBehaviorSmartObjectsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_UseGameplayBehaviorSmartObject, "UseGameplayBehaviorSmartObject" }, // 583883360
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/GameplayBehaviorSmartObjectsBlueprintFunctionLibrary.h" },
		{ "ScriptName", "GameplayBehaviorsLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::ClassParams = {
		&UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> GAMEPLAYBEHAVIORSMARTOBJECTSMODULE_API UClass* StaticClass<UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary>()
	{
		return UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass();
	}
	UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary);
	UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::~UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary, UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary::StaticClass, TEXT("UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary), 453087452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_h_1061730468(TEXT("/Script/GameplayBehaviorSmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayBehaviorSmartObjects_Source_GameplayBehaviorSmartObjectsModule_Public_GameplayBehaviorSmartObjectsBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
