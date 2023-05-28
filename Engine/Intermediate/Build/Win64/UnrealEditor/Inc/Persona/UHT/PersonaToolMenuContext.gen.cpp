// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PersonaToolMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaToolMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaToolMenuContext();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaToolMenuContext_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	DEFINE_FUNCTION(UPersonaToolMenuContext::execGetAnimationAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimationAsset**)Z_Param__Result=P_THIS->GetAnimationAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersonaToolMenuContext::execGetAnimBlueprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimBlueprint**)Z_Param__Result=P_THIS->GetAnimBlueprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersonaToolMenuContext::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersonaToolMenuContext::execGetPreviewMeshComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDebugSkelMeshComponent**)Z_Param__Result=P_THIS->GetPreviewMeshComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPersonaToolMenuContext::execGetSkeleton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeleton**)Z_Param__Result=P_THIS->GetSkeleton();
		P_NATIVE_END;
	}
	void UPersonaToolMenuContext::StaticRegisterNativesUPersonaToolMenuContext()
	{
		UClass* Class = UPersonaToolMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationAsset", &UPersonaToolMenuContext::execGetAnimationAsset },
			{ "GetAnimBlueprint", &UPersonaToolMenuContext::execGetAnimBlueprint },
			{ "GetMesh", &UPersonaToolMenuContext::execGetMesh },
			{ "GetPreviewMeshComponent", &UPersonaToolMenuContext::execGetPreviewMeshComponent },
			{ "GetSkeleton", &UPersonaToolMenuContext::execGetSkeleton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics
	{
		struct PersonaToolMenuContext_eventGetAnimationAsset_Parms
		{
			UAnimationAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PersonaToolMenuContext_eventGetAnimationAsset_Parms, ReturnValue), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "PersonaEditorExtensions" },
		{ "Comment", "/** Get the animation asset that we are editing */" },
		{ "ModuleRelativePath", "Public/PersonaToolMenuContext.h" },
		{ "ToolTip", "Get the animation asset that we are editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaToolMenuContext, nullptr, "GetAnimationAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::PersonaToolMenuContext_eventGetAnimationAsset_Parms), Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics
	{
		struct PersonaToolMenuContext_eventGetAnimBlueprint_Parms
		{
			UAnimBlueprint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PersonaToolMenuContext_eventGetAnimBlueprint_Parms, ReturnValue), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "PersonaEditorExtensions" },
		{ "Comment", "/** Get the anim blueprint that we are editing */" },
		{ "ModuleRelativePath", "Public/PersonaToolMenuContext.h" },
		{ "ToolTip", "Get the anim blueprint that we are editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaToolMenuContext, nullptr, "GetAnimBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::PersonaToolMenuContext_eventGetAnimBlueprint_Parms), Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics
	{
		struct PersonaToolMenuContext_eventGetMesh_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PersonaToolMenuContext_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "PersonaEditorExtensions" },
		{ "Comment", "/** Get the skeletal mesh that we are editing */" },
		{ "ModuleRelativePath", "Public/PersonaToolMenuContext.h" },
		{ "ToolTip", "Get the skeletal mesh that we are editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaToolMenuContext, nullptr, "GetMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::PersonaToolMenuContext_eventGetMesh_Parms), Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics
	{
		struct PersonaToolMenuContext_eventGetPreviewMeshComponent_Parms
		{
			UDebugSkelMeshComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PersonaToolMenuContext_eventGetPreviewMeshComponent_Parms, ReturnValue), Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "PersonaEditorExtensions" },
		{ "Comment", "/** Get the preview component that we are using */" },
		{ "ModuleRelativePath", "Public/PersonaToolMenuContext.h" },
		{ "ToolTip", "Get the preview component that we are using" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaToolMenuContext, nullptr, "GetPreviewMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::PersonaToolMenuContext_eventGetPreviewMeshComponent_Parms), Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics
	{
		struct PersonaToolMenuContext_eventGetSkeleton_Parms
		{
			USkeleton* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PersonaToolMenuContext_eventGetSkeleton_Parms, ReturnValue), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "PersonaEditorExtensions" },
		{ "Comment", "/** Get the skeleton that we are editing */" },
		{ "ModuleRelativePath", "Public/PersonaToolMenuContext.h" },
		{ "ToolTip", "Get the skeleton that we are editing" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPersonaToolMenuContext, nullptr, "GetSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::PersonaToolMenuContext_eventGetSkeleton_Parms), Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaToolMenuContext);
	UClass* Z_Construct_UClass_UPersonaToolMenuContext_NoRegister()
	{
		return UPersonaToolMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaToolMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaToolMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPersonaToolMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimationAsset, "GetAnimationAsset" }, // 2696704177
		{ &Z_Construct_UFunction_UPersonaToolMenuContext_GetAnimBlueprint, "GetAnimBlueprint" }, // 3532188580
		{ &Z_Construct_UFunction_UPersonaToolMenuContext_GetMesh, "GetMesh" }, // 3774974637
		{ &Z_Construct_UFunction_UPersonaToolMenuContext_GetPreviewMeshComponent, "GetPreviewMeshComponent" }, // 1819293974
		{ &Z_Construct_UFunction_UPersonaToolMenuContext_GetSkeleton, "GetSkeleton" }, // 1816799488
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaToolMenuContext_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PersonaToolMenuContext.h" },
		{ "ModuleRelativePath", "Public/PersonaToolMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaToolMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaToolMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaToolMenuContext_Statics::ClassParams = {
		&UPersonaToolMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPersonaToolMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaToolMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaToolMenuContext()
	{
		if (!Z_Registration_Info_UClass_UPersonaToolMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaToolMenuContext.OuterSingleton, Z_Construct_UClass_UPersonaToolMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaToolMenuContext.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaToolMenuContext>()
	{
		return UPersonaToolMenuContext::StaticClass();
	}
	UPersonaToolMenuContext::UPersonaToolMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaToolMenuContext);
	UPersonaToolMenuContext::~UPersonaToolMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaToolMenuContext, UPersonaToolMenuContext::StaticClass, TEXT("UPersonaToolMenuContext"), &Z_Registration_Info_UClass_UPersonaToolMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaToolMenuContext), 134851608U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_492548804(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_PersonaToolMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
