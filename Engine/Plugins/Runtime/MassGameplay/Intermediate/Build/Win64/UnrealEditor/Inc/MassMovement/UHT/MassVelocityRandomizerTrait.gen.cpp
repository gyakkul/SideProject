// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassMovement/Public/Example/MassVelocityRandomizerTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassVelocityRandomizerTrait() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassObserverProcessor();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassRandomVelocityInitializer();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassRandomVelocityInitializer_NoRegister();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassVelocityRandomizerTrait();
	MASSMOVEMENT_API UClass* Z_Construct_UClass_UMassVelocityRandomizerTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassMovement();
// End Cross Module References
	void UMassVelocityRandomizerTrait::StaticRegisterNativesUMassVelocityRandomizerTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassVelocityRandomizerTrait);
	UClass* Z_Construct_UClass_UMassVelocityRandomizerTrait_NoRegister()
	{
		return UMassVelocityRandomizerTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetZComponent_MetaData[];
#endif
		static void NewProp_bSetZComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetZComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Velocity Randomizer" },
		{ "IncludePath", "Example/MassVelocityRandomizerTrait.h" },
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The speed is expressed in UnrealUnits per second, which usually translates to 0.01m/s */" },
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
		{ "ToolTip", "The speed is expressed in UnrealUnits per second, which usually translates to 0.01m/s" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassVelocityRandomizerTrait, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "/** The speed is expressed in UnrealUnits per second, which usually translates to 0.01m/s */" },
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
		{ "ToolTip", "The speed is expressed in UnrealUnits per second, which usually translates to 0.01m/s" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassVelocityRandomizerTrait, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent_MetaData[] = {
		{ "Category", "Velocity" },
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
	};
#endif
	void Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent_SetBit(void* Obj)
	{
		((UMassVelocityRandomizerTrait*)Obj)->bSetZComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent = { "bSetZComponent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassVelocityRandomizerTrait), &Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::NewProp_bSetZComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassVelocityRandomizerTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::ClassParams = {
		&UMassVelocityRandomizerTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassVelocityRandomizerTrait()
	{
		if (!Z_Registration_Info_UClass_UMassVelocityRandomizerTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassVelocityRandomizerTrait.OuterSingleton, Z_Construct_UClass_UMassVelocityRandomizerTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassVelocityRandomizerTrait.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassVelocityRandomizerTrait>()
	{
		return UMassVelocityRandomizerTrait::StaticClass();
	}
	UMassVelocityRandomizerTrait::UMassVelocityRandomizerTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassVelocityRandomizerTrait);
	UMassVelocityRandomizerTrait::~UMassVelocityRandomizerTrait() {}
	void UMassRandomVelocityInitializer::StaticRegisterNativesUMassRandomVelocityInitializer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassRandomVelocityInitializer);
	UClass* Z_Construct_UClass_UMassRandomVelocityInitializer_NoRegister()
	{
		return UMassRandomVelocityInitializer::StaticClass();
	}
	struct Z_Construct_UClass_UMassRandomVelocityInitializer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetZComponent_MetaData[];
#endif
		static void NewProp_bSetZComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetZComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassObserverProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Example/MassVelocityRandomizerTrait.h" },
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRandomVelocityInitializer, MinSpeed), METADATA_PARAMS(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Comment", "/** The default max is set to 0 to enforce explicit configuration via SetParameters call. */" },
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
		{ "ToolTip", "The default max is set to 0 to enforce explicit configuration via SetParameters call." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassRandomVelocityInitializer, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Example/MassVelocityRandomizerTrait.h" },
	};
#endif
	void Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent_SetBit(void* Obj)
	{
		((UMassRandomVelocityInitializer*)Obj)->bSetZComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent = { "bSetZComponent", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassRandomVelocityInitializer), &Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MinSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::NewProp_bSetZComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassRandomVelocityInitializer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::ClassParams = {
		&UMassRandomVelocityInitializer::StaticClass,
		"Mass",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::PropPointers),
		0,
		0x401030A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassRandomVelocityInitializer()
	{
		if (!Z_Registration_Info_UClass_UMassRandomVelocityInitializer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassRandomVelocityInitializer.OuterSingleton, Z_Construct_UClass_UMassRandomVelocityInitializer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassRandomVelocityInitializer.OuterSingleton;
	}
	template<> MASSMOVEMENT_API UClass* StaticClass<UMassRandomVelocityInitializer>()
	{
		return UMassRandomVelocityInitializer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassRandomVelocityInitializer);
	UMassRandomVelocityInitializer::~UMassRandomVelocityInitializer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassVelocityRandomizerTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassVelocityRandomizerTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassVelocityRandomizerTrait, UMassVelocityRandomizerTrait::StaticClass, TEXT("UMassVelocityRandomizerTrait"), &Z_Registration_Info_UClass_UMassVelocityRandomizerTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassVelocityRandomizerTrait), 1077438210U) },
		{ Z_Construct_UClass_UMassRandomVelocityInitializer, UMassRandomVelocityInitializer::StaticClass, TEXT("UMassRandomVelocityInitializer"), &Z_Registration_Info_UClass_UMassRandomVelocityInitializer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassRandomVelocityInitializer), 2624860416U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassVelocityRandomizerTrait_h_471012710(TEXT("/Script/MassMovement"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassVelocityRandomizerTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassMovement_Public_Example_MassVelocityRandomizerTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
