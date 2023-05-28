// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayParticleEffect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotify_PlayParticleEffect::StaticRegisterNativesUAnimNotify_PlayParticleEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayParticleEffect);
	UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect_NoRegister()
	{
		return UAnimNotify_PlayParticleEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PSTemplate;
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
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Play Particle Effect" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Particle System to Spawn\n" },
		{ "DisplayName", "Particle System" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ToolTip", "Particle System to Spawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the particle system at\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ToolTip", "Scale to spawn the particle system at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Should attach to the bone/socket\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ToolTip", "Should attach to the bone/socket" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached_SetBit(void* Obj)
	{
		((UAnimNotify_PlayParticleEffect*)Obj)->Attached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached = { "Attached", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotify_PlayParticleEffect), &Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h" },
		{ "ToolTip", "SocketName to attach to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayParticleEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_SocketName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_PSTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_Attached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::NewProp_SocketName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayParticleEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::ClassParams = {
		&UAnimNotify_PlayParticleEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayParticleEffect()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayParticleEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotify_PlayParticleEffect>()
	{
		return UAnimNotify_PlayParticleEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayParticleEffect);
	UAnimNotify_PlayParticleEffect::~UAnimNotify_PlayParticleEffect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlayParticleEffect, UAnimNotify_PlayParticleEffect::StaticClass, TEXT("UAnimNotify_PlayParticleEffect"), &Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayParticleEffect), 2928360593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h_2479473190(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotify_PlayParticleEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
