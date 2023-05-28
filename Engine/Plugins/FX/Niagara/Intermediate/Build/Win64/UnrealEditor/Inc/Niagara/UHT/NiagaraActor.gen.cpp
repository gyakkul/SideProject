// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	DEFINE_FUNCTION(ANiagaraActor::execOnNiagaraSystemFinished)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_FinishedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNiagaraSystemFinished(Z_Param_FinishedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANiagaraActor::execSetDestroyOnSystemFinish)
	{
		P_GET_UBOOL(Z_Param_bShouldDestroyOnSystemFinish);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestroyOnSystemFinish(Z_Param_bShouldDestroyOnSystemFinish);
		P_NATIVE_END;
	}
	void ANiagaraActor::StaticRegisterNativesANiagaraActor()
	{
		UClass* Class = ANiagaraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNiagaraSystemFinished", &ANiagaraActor::execOnNiagaraSystemFinished },
			{ "SetDestroyOnSystemFinish", &ANiagaraActor::execSetDestroyOnSystemFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics
	{
		struct NiagaraActor_eventOnNiagaraSystemFinished_Parms
		{
			UNiagaraComponent* FinishedComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent = { "FinishedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraActor_eventOnNiagaraSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** Callback when Niagara system finishes. */" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Callback when Niagara system finishes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraActor, nullptr, "OnNiagaraSystemFinished", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NiagaraActor_eventOnNiagaraSystemFinished_Parms), Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics
	{
		struct NiagaraActor_eventSetDestroyOnSystemFinish_Parms
		{
			bool bShouldDestroyOnSystemFinish;
		};
		static void NewProp_bShouldDestroyOnSystemFinish_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDestroyOnSystemFinish;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((NiagaraActor_eventSetDestroyOnSystemFinish_Parms*)Obj)->bShouldDestroyOnSystemFinish = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish = { "bShouldDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraActor_eventSetDestroyOnSystemFinish_Parms), &Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraActor" },
		{ "Comment", "/** Set true for this actor to self-destruct when the Niagara system finishes, false otherwise */" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Set true for this actor to self-destruct when the Niagara system finishes, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraActor, nullptr, "SetDestroyOnSystemFinish", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NiagaraActor_eventSetDestroyOnSystemFinish_Parms), Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraActor);
	UClass* Z_Construct_UClass_ANiagaraActor_NoRegister()
	{
		return ANiagaraActor::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NiagaraComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnSystemFinish_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANiagaraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished, "OnNiagaraSystemFinished" }, // 4086574966
		{ &Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish, "SetDestroyOnSystemFinish" }, // 3446505024
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "NiagaraActor.h" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NiagaraActor" },
		{ "Comment", "/** Pointer to System component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Pointer to System component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraActor, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to sprite visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Reference to sprite visualization component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to arrow visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Reference to arrow visualization component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData[] = {
		{ "Comment", "/** True for this actor to self-destruct when the Niagara system finishes, false otherwise */" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "True for this actor to self-destruct when the Niagara system finishes, false otherwise" },
	};
#endif
	void Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((ANiagaraActor*)Obj)->bDestroyOnSystemFinish = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish = { "bDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANiagaraActor), &Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraActor_Statics::ClassParams = {
		&ANiagaraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANiagaraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraActor()
	{
		if (!Z_Registration_Info_UClass_ANiagaraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraActor.OuterSingleton, Z_Construct_UClass_ANiagaraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANiagaraActor.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<ANiagaraActor>()
	{
		return ANiagaraActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraActor);
	ANiagaraActor::~ANiagaraActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANiagaraActor, ANiagaraActor::StaticClass, TEXT("ANiagaraActor"), &Z_Registration_Info_UClass_ANiagaraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraActor), 1985765006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_4029201684(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
