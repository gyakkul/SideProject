// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_TimedParticleEffect() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimNotifyState_TimedParticleEffect::StaticRegisterNativesUAnimNotifyState_TimedParticleEffect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_TimedParticleEffect);
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_NoRegister()
	{
		return UAnimNotifyState_TimedParticleEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyAtEnd_MetaData[];
#endif
		static void NewProp_bDestroyAtEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyAtEnd;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousPSTemplates_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousPSTemplates_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousPSTemplates;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousSocketNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousSocketNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousSocketNames;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Timed Particle Effect Notify\n// Allows a looping particle effect to be played in an animation that will activate\n// at the beginning of the notify and deactivate at the end.\n" },
		{ "DisplayName", "Timed Particle Effect" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "Timed Particle Effect Notify\nAllows a looping particle effect to be played in an animation that will activate\nat the beginning of the notify and deactivate at the end." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PSTemplate_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "The particle system to spawn for the notify state" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0014000000000011, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PSTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PSTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "The socket or bone to attach the system to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "Offset from the socket or bone to place the particle system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "Rotation offset from the socket or bone for the particle system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd_MetaData[] = {
		{ "Category", "ParticleSystem" },
		{ "DisplayName", "Destroy Immediately" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "Whether the particle system should be immediately destroyed at the end of the notify state or be allowed to finish" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd_SetBit(void* Obj)
	{
		((UAnimNotifyState_TimedParticleEffect*)Obj)->bDestroyAtEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd = { "bDestroyAtEnd", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNotifyState_TimedParticleEffect), &Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates_Inner = { "PreviousPSTemplates", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates_MetaData[] = {
		{ "Comment", "// The following arrays are used to handle property changes during a state. Because we can't\n// store any stateful data here we can't know which emitter is ours. The best metric we have\n// is an emitter on our Mesh Component with the same template and socket name we have defined.\n// Because these can change at any time we need to track previous versions when we are in an\n// editor build. Refactor when stateful data is possible, tracking our component instead.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
		{ "ToolTip", "The following arrays are used to handle property changes during a state. Because we can't\nstore any stateful data here we can't know which emitter is ours. The best metric we have\nis an emitter on our Mesh Component with the same template and socket name we have defined.\nBecause these can change at any time we need to track previous versions when we are in an\neditor build. Refactor when stateful data is possible, tracking our component instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates = { "PreviousPSTemplates", nullptr, (EPropertyFlags)0x0014000800002010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, PreviousPSTemplates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames_Inner = { "PreviousSocketNames", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames = { "PreviousSocketNames", nullptr, (EPropertyFlags)0x0010000800002010, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_TimedParticleEffect, PreviousSocketNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PSTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_bDestroyAtEnd,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousPSTemplates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::NewProp_PreviousSocketNames,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_TimedParticleEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::ClassParams = {
		&UAnimNotifyState_TimedParticleEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyState_TimedParticleEffect>()
	{
		return UAnimNotifyState_TimedParticleEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_TimedParticleEffect);
	UAnimNotifyState_TimedParticleEffect::~UAnimNotifyState_TimedParticleEffect() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_TimedParticleEffect, UAnimNotifyState_TimedParticleEffect::StaticClass, TEXT("UAnimNotifyState_TimedParticleEffect"), &Z_Registration_Info_UClass_UAnimNotifyState_TimedParticleEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_TimedParticleEffect), 1108966913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h_141336635(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_TimedParticleEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
