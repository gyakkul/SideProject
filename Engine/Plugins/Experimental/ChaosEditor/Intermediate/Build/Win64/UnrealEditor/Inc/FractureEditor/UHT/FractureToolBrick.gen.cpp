// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolBrick.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolBrick() {}
// Cross Module References
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureBrickSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureBrickSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolBrick();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolBrick_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolCutterBase();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EFractureBrickBond();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFractureBrickBond;
	static UEnum* EFractureBrickBond_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFractureBrickBond.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFractureBrickBond.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EFractureBrickBond, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EFractureBrickBond"));
		}
		return Z_Registration_Info_UEnum_EFractureBrickBond.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EFractureBrickBond>()
	{
		return EFractureBrickBond_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::Enumerators[] = {
		{ "EFractureBrickBond::Stretcher", (int64)EFractureBrickBond::Stretcher },
		{ "EFractureBrickBond::Stack", (int64)EFractureBrickBond::Stack },
		{ "EFractureBrickBond::English", (int64)EFractureBrickBond::English },
		{ "EFractureBrickBond::Header", (int64)EFractureBrickBond::Header },
		{ "EFractureBrickBond::Flemish", (int64)EFractureBrickBond::Flemish },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Brick Stacking Pattern */" },
		{ "English.DisplayName", "English" },
		{ "English.Name", "EFractureBrickBond::English" },
		{ "Flemish.DisplayName", "Flemish" },
		{ "Flemish.Name", "EFractureBrickBond::Flemish" },
		{ "Header.DisplayName", "Header" },
		{ "Header.Name", "EFractureBrickBond::Header" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "Stack.DisplayName", "Stack" },
		{ "Stack.Name", "EFractureBrickBond::Stack" },
		{ "Stretcher.DisplayName", "Stretcher" },
		{ "Stretcher.Name", "EFractureBrickBond::Stretcher" },
		{ "ToolTip", "Brick Stacking Pattern" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EFractureBrickBond",
		"EFractureBrickBond",
		Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EFractureBrickBond()
	{
		if (!Z_Registration_Info_UEnum_EFractureBrickBond.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFractureBrickBond.InnerSingleton, Z_Construct_UEnum_FractureEditor_EFractureBrickBond_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFractureBrickBond.InnerSingleton;
	}
	void UFractureBrickSettings::StaticRegisterNativesUFractureBrickSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureBrickSettings);
	UClass* Z_Construct_UClass_UFractureBrickSettings_NoRegister()
	{
		return UFractureBrickSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureBrickSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bond_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bond_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Bond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrickLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrickHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrickDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BrickDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureBrickSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureBrickSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureToolBrick.h" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond_MetaData[] = {
		{ "Category", "Brick" },
		{ "Comment", "/** The brick bond pattern defines how the bricks are arranged */" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "ToolTip", "The brick bond pattern defines how the bricks are arranged" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond = { "Bond", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureBrickSettings, Bond), Z_Construct_UEnum_FractureEditor_EFractureBrickBond, METADATA_PARAMS(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond_MetaData)) }; // 2871329193
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickLength_MetaData[] = {
		{ "Category", "Brick" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Brick length (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "ToolTip", "Brick length (in cm)" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickLength = { "BrickLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureBrickSettings, BrickLength), METADATA_PARAMS(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickHeight_MetaData[] = {
		{ "Category", "Brick" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Brick height (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "ToolTip", "Brick height (in cm)" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickHeight = { "BrickHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureBrickSettings, BrickHeight), METADATA_PARAMS(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickDepth_MetaData[] = {
		{ "Category", "Brick" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Brick depth (in cm) */" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "ToolTip", "Brick depth (in cm)" },
		{ "UIMax", "500.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickDepth = { "BrickDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureBrickSettings, BrickDepth), METADATA_PARAMS(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureBrickSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_Bond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureBrickSettings_Statics::NewProp_BrickDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureBrickSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureBrickSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureBrickSettings_Statics::ClassParams = {
		&UFractureBrickSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureBrickSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureBrickSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureBrickSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureBrickSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureBrickSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureBrickSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureBrickSettings.OuterSingleton, Z_Construct_UClass_UFractureBrickSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureBrickSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureBrickSettings>()
	{
		return UFractureBrickSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureBrickSettings);
	UFractureBrickSettings::~UFractureBrickSettings() {}
	void UFractureToolBrick::StaticRegisterNativesUFractureToolBrick()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolBrick);
	UClass* Z_Construct_UClass_UFractureToolBrick_NoRegister()
	{
		return UFractureToolBrick::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolBrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrickSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BrickSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolBrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolCutterBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolBrick_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "Brick" },
		{ "IncludePath", "FractureToolBrick.h" },
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolBrick_Statics::NewProp_BrickSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolBrick.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolBrick_Statics::NewProp_BrickSettings = { "BrickSettings", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolBrick, BrickSettings), Z_Construct_UClass_UFractureBrickSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolBrick_Statics::NewProp_BrickSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolBrick_Statics::NewProp_BrickSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolBrick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolBrick_Statics::NewProp_BrickSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolBrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolBrick>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolBrick_Statics::ClassParams = {
		&UFractureToolBrick::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolBrick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolBrick_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolBrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolBrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolBrick()
	{
		if (!Z_Registration_Info_UClass_UFractureToolBrick.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolBrick.OuterSingleton, Z_Construct_UClass_UFractureToolBrick_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolBrick.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolBrick>()
	{
		return UFractureToolBrick::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolBrick);
	UFractureToolBrick::~UFractureToolBrick() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics::EnumInfo[] = {
		{ EFractureBrickBond_StaticEnum, TEXT("EFractureBrickBond"), &Z_Registration_Info_UEnum_EFractureBrickBond, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2871329193U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureBrickSettings, UFractureBrickSettings::StaticClass, TEXT("UFractureBrickSettings"), &Z_Registration_Info_UClass_UFractureBrickSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureBrickSettings), 4256207979U) },
		{ Z_Construct_UClass_UFractureToolBrick, UFractureToolBrick::StaticClass, TEXT("UFractureToolBrick"), &Z_Registration_Info_UClass_UFractureToolBrick, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolBrick), 3985075712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_1252320075(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolBrick_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
