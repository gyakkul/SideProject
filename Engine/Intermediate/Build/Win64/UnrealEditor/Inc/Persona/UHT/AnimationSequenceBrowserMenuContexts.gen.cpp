// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSequenceBrowserMenuContexts.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSequenceBrowserMenuContexts() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext();
	PERSONA_API UClass* Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationSequenceBrowserContextMenuContext::execGetSelectedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedObjects();
		P_NATIVE_END;
	}
	void UAnimationSequenceBrowserContextMenuContext::StaticRegisterNativesUAnimationSequenceBrowserContextMenuContext()
	{
		UClass* Class = UAnimationSequenceBrowserContextMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedObjects", &UAnimationSequenceBrowserContextMenuContext::execGetSelectedObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics
	{
		struct AnimationSequenceBrowserContextMenuContext_eventGetSelectedObjects_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationSequenceBrowserContextMenuContext_eventGetSelectedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationEditorExtensions" },
		{ "ModuleRelativePath", "Public/AnimationSequenceBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext, nullptr, "GetSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::AnimationSequenceBrowserContextMenuContext_eventGetSelectedObjects_Parms), Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSequenceBrowserContextMenuContext);
	UClass* Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_NoRegister()
	{
		return UAnimationSequenceBrowserContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSequenceBrowserContextMenuContext_GetSelectedObjects, "GetSelectedObjects" }, // 3348794374
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationSequenceBrowserMenuContexts.h" },
		{ "ModuleRelativePath", "Public/AnimationSequenceBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationSequenceBrowserMenuContexts.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationSequenceBrowserContextMenuContext, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::NewProp_SelectedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSequenceBrowserContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::ClassParams = {
		&UAnimationSequenceBrowserContextMenuContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_UAnimationSequenceBrowserContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSequenceBrowserContextMenuContext.OuterSingleton, Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationSequenceBrowserContextMenuContext.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UAnimationSequenceBrowserContextMenuContext>()
	{
		return UAnimationSequenceBrowserContextMenuContext::StaticClass();
	}
	UAnimationSequenceBrowserContextMenuContext::UAnimationSequenceBrowserContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSequenceBrowserContextMenuContext);
	UAnimationSequenceBrowserContextMenuContext::~UAnimationSequenceBrowserContextMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSequenceBrowserContextMenuContext, UAnimationSequenceBrowserContextMenuContext::StaticClass, TEXT("UAnimationSequenceBrowserContextMenuContext"), &Z_Registration_Info_UClass_UAnimationSequenceBrowserContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSequenceBrowserContextMenuContext), 410381733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_648208318(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationSequenceBrowserMenuContexts_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
