// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/FKControlRig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFKControlRig() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig();
	CONTROLRIG_API UClass* Z_Construct_UClass_UFKControlRig();
	CONTROLRIG_API UClass* Z_Construct_UClass_UFKControlRig_NoRegister();
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode;
	static UEnum* EControlRigFKRigExecuteMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigFKRigExecuteMode"));
		}
		return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigFKRigExecuteMode>()
	{
		return EControlRigFKRigExecuteMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enumerators[] = {
		{ "EControlRigFKRigExecuteMode::Replace", (int64)EControlRigFKRigExecuteMode::Replace },
		{ "EControlRigFKRigExecuteMode::Additive", (int64)EControlRigFKRigExecuteMode::Additive },
		{ "EControlRigFKRigExecuteMode::Direct", (int64)EControlRigFKRigExecuteMode::Direct },
		{ "EControlRigFKRigExecuteMode::Max", (int64)EControlRigFKRigExecuteMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enum_MetaDataParams[] = {
		{ "Additive.Comment", "/** Applies the authored pose as an additive layer */" },
		{ "Additive.Name", "EControlRigFKRigExecuteMode::Additive" },
		{ "Additive.ToolTip", "Applies the authored pose as an additive layer" },
		{ "BlueprintType", "true" },
		{ "Direct.Comment", "/** Sets the current pose without the use of offset transforms */" },
		{ "Direct.Name", "EControlRigFKRigExecuteMode::Direct" },
		{ "Direct.ToolTip", "Sets the current pose without the use of offset transforms" },
		{ "IsBlueprintBase", "true" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigFKRigExecuteMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
		{ "Replace.Comment", "/** Replaces the current pose */" },
		{ "Replace.Name", "EControlRigFKRigExecuteMode::Replace" },
		{ "Replace.ToolTip", "Replaces the current pose" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigFKRigExecuteMode",
		"EControlRigFKRigExecuteMode",
		Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode()
	{
		if (!Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode.InnerSingleton;
	}
	void UFKControlRig::StaticRegisterNativesUFKControlRig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFKControlRig);
	UClass* Z_Construct_UClass_UFKControlRig_NoRegister()
	{
		return UFKControlRig::StaticClass();
	}
	struct Z_Construct_UClass_UFKControlRig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsControlActive_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsControlActive_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IsControlActive;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ApplyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplyMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFKControlRig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UControlRig,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFKControlRig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Rig that allows override editing per joint */" },
		{ "DisplayName", "FK Control Rig" },
		{ "IncludePath", "Rigs/FKControlRig.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
		{ "ToolTip", "Rig that allows override editing per joint" },
	};
#endif
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_Inner = { "IsControlActive", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive = { "IsControlActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFKControlRig, IsControlActive), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Rigs/FKControlRig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode = { "ApplyMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFKControlRig, ApplyMode), Z_Construct_UEnum_ControlRig_EControlRigFKRigExecuteMode, METADATA_PARAMS(Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_MetaData)) }; // 3135666767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFKControlRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_IsControlActive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFKControlRig_Statics::NewProp_ApplyMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFKControlRig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFKControlRig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFKControlRig_Statics::ClassParams = {
		&UFKControlRig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFKControlRig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFKControlRig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFKControlRig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFKControlRig()
	{
		if (!Z_Registration_Info_UClass_UFKControlRig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFKControlRig.OuterSingleton, Z_Construct_UClass_UFKControlRig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFKControlRig.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<UFKControlRig>()
	{
		return UFKControlRig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFKControlRig);
	UFKControlRig::~UFKControlRig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::EnumInfo[] = {
		{ EControlRigFKRigExecuteMode_StaticEnum, TEXT("EControlRigFKRigExecuteMode"), &Z_Registration_Info_UEnum_EControlRigFKRigExecuteMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3135666767U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFKControlRig, UFKControlRig::StaticClass, TEXT("UFKControlRig"), &Z_Registration_Info_UClass_UFKControlRig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFKControlRig), 529870021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_1111680154(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_FKControlRig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
