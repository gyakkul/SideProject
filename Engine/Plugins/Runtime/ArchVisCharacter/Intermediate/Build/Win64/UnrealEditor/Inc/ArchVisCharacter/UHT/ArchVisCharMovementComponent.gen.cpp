// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArchVisCharMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArchVisCharMovementComponent() {}
// Cross Module References
	ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent();
	ARCHVISCHARACTER_API UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_ArchVisCharacter();
// End Cross Module References
	void UArchVisCharMovementComponent::StaticRegisterNativesUArchVisCharMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArchVisCharMovementComponent);
	UClass* Z_Construct_UClass_UArchVisCharMovementComponent_NoRegister()
	{
		return UArchVisCharMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArchVisCharMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationalAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationalAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationalDeceleration_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationalDeceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotationalVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRotationalVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WalkingAcceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkingAcceleration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArchVisCharMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ArchVisCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ArchVisCharMovementComponent.h" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how fast the character's turn rate accelerates when rotating and looking up/down */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how fast the character's turn rate accelerates when rotating and looking up/down" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration = { "RotationalAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, RotationalAcceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how fast the character's turn rate decelerates to 0 when user stops turning */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how fast the character's turn rate decelerates to 0 when user stops turning" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration = { "RotationalDeceleration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, RotationalDeceleration), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Fastest possible turn rate */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Fastest possible turn rate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity = { "MaxRotationalVelocity", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, MaxRotationalVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how far down you can look */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how far down you can look" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, MinPitch), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls how far up you can look */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls how far up you can look" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, MaxPitch), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** Controls walking deceleration. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "Controls walking deceleration." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction = { "WalkingFriction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingFriction), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** How fast the character can walk. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "How fast the character can walk." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed = { "WalkingSpeed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingSpeed), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration_MetaData[] = {
		{ "Category", "ArchVis Controls" },
		{ "Comment", "/** How fast the character accelerates. */" },
		{ "ModuleRelativePath", "Public/ArchVisCharMovementComponent.h" },
		{ "ToolTip", "How fast the character accelerates." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration = { "WalkingAcceleration", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArchVisCharMovementComponent, WalkingAcceleration), METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_RotationalDeceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxRotationalVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MinPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_MaxPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingFriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArchVisCharMovementComponent_Statics::NewProp_WalkingAcceleration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArchVisCharMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArchVisCharMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams = {
		&UArchVisCharMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArchVisCharMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArchVisCharMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton, Z_Construct_UClass_UArchVisCharMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArchVisCharMovementComponent.OuterSingleton;
	}
	template<> ARCHVISCHARACTER_API UClass* StaticClass<UArchVisCharMovementComponent>()
	{
		return UArchVisCharMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArchVisCharMovementComponent);
	UArchVisCharMovementComponent::~UArchVisCharMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArchVisCharMovementComponent, UArchVisCharMovementComponent::StaticClass, TEXT("UArchVisCharMovementComponent"), &Z_Registration_Info_UClass_UArchVisCharMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArchVisCharMovementComponent), 3782762479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_3181287328(TEXT("/Script/ArchVisCharacter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ArchVisCharacter_Source_ArchVisCharacter_Public_ArchVisCharMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
