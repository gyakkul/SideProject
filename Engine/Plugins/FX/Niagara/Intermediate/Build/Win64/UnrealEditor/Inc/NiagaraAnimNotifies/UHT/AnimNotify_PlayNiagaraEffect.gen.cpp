// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotify_PlayNiagaraEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayNiagaraEffect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraAnimNotifies();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotify_PlayNiagaraEffect::execGetSpawnedEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemComponent**)Z_Param__Result=P_THIS->GetSpawnedEffect();
		P_NATIVE_END;
	}
	void UAnimNotify_PlayNiagaraEffect::StaticRegisterNativesUAnimNotify_PlayNiagaraEffect()
	{
		UClass* Class = UAnimNotify_PlayNiagaraEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnedEffect", &UAnimNotify_PlayNiagaraEffect::execGetSpawnedEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics
	{
		struct AnimNotify_PlayNiagaraEffect_eventGetSpawnedEffect_Parms
		{
			UFXSystemComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotify_PlayNiagaraEffect_eventGetSpawnedEffect_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Return FXSystemComponent created from SpawnEffect\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Return FXSystemComponent created from SpawnEffect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect, nullptr, "GetSpawnedEffect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::AnimNotify_PlayNiagaraEffect_eventGetSpawnedEffect_Parms), Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayNiagaraEffect);
	UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_NoRegister()
	{
		return UAnimNotify_PlayNiagaraEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Template;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteScale_MetaData[];
#endif
		static void NewProp_bAbsoluteScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attached_MetaData[];
#endif
		static void NewProp_Attached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Attached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect, "GetSpawnedEffect" }, // 532175146
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Play Niagara Particle Effect" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotify_PlayNiagaraEffect.h" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Niagara System to Spawn\n" },
		{ "DisplayName", "Niagara System" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Niagara System to Spawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, Template), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the Niagara system at\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Scale to spawn the Niagara system at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Whether or not we are in absolute scale mode\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Whether or not we are in absolute scale mode" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale_SetBit(void* Obj)
	{
		((UAnimNotify_PlayNiagaraEffect*)Obj)->bAbsoluteScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale = { "bAbsoluteScale", nullptr, (EPropertyFlags)0x0010040000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNotify_PlayNiagaraEffect), &Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Should attach to the bone/socket\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Should attach to the bone/socket" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_SetBit(void* Obj)
	{
		((UAnimNotify_PlayNiagaraEffect*)Obj)->Attached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached = { "Attached", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_PlayNiagaraEffect), &Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "AnimNotify" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "SocketName to attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_bAbsoluteScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayNiagaraEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::ClassParams = {
		&UAnimNotify_PlayNiagaraEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.OuterSingleton;
	}
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotify_PlayNiagaraEffect>()
	{
		return UAnimNotify_PlayNiagaraEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayNiagaraEffect);
	UAnimNotify_PlayNiagaraEffect::~UAnimNotify_PlayNiagaraEffect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect, UAnimNotify_PlayNiagaraEffect::StaticClass, TEXT("UAnimNotify_PlayNiagaraEffect"), &Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayNiagaraEffect), 1712494503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h_148106179(TEXT("/Script/NiagaraAnimNotifies"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraAnimNotifies_Public_AnimNotify_PlayNiagaraEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
