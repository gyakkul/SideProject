// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionClamp.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionClamp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClampMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClampMode;
	static UEnum* EClampMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EClampMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EClampMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClampMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EClampMode"));
		}
		return Z_Registration_Info_UEnum_EClampMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EClampMode>()
	{
		return EClampMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EClampMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EClampMode_Statics::Enumerators[] = {
		{ "CMODE_Clamp", (int64)CMODE_Clamp },
		{ "CMODE_ClampMin", (int64)CMODE_ClampMin },
		{ "CMODE_ClampMax", (int64)CMODE_ClampMax },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EClampMode_Statics::Enum_MetaDataParams[] = {
		{ "CMODE_Clamp.Name", "CMODE_Clamp" },
		{ "CMODE_ClampMax.Name", "CMODE_ClampMax" },
		{ "CMODE_ClampMin.Name", "CMODE_ClampMin" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EClampMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EClampMode",
		"EClampMode",
		Z_Construct_UEnum_Engine_EClampMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClampMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EClampMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClampMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EClampMode()
	{
		if (!Z_Registration_Info_UEnum_EClampMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClampMode.InnerSingleton, Z_Construct_UEnum_Engine_EClampMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EClampMode.InnerSingleton;
	}
	void UMaterialExpressionClamp::StaticRegisterNativesUMaterialExpressionClamp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionClamp);
	UClass* Z_Construct_UClass_UMaterialExpressionClamp_NoRegister()
	{
		return UMaterialExpressionClamp::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionClamp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClampMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ClampMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDefault_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDefault;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionClamp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionClamp.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MinDefault' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, Min), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'MaxDefault' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, Max), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode = { "ClampMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, ClampMode), Z_Construct_UEnum_Engine_EClampMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode_MetaData)) }; // 1037147072
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "OverridingInputProperty", "Min" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault = { "MinDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, MinDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault_MetaData[] = {
		{ "Category", "MaterialExpressionClamp" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionClamp.h" },
		{ "OverridingInputProperty", "Max" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault = { "MaxDefault", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionClamp, MaxDefault), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_Max,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_ClampMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MinDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionClamp_Statics::NewProp_MaxDefault,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionClamp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionClamp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionClamp_Statics::ClassParams = {
		&UMaterialExpressionClamp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionClamp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionClamp()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionClamp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionClamp.OuterSingleton, Z_Construct_UClass_UMaterialExpressionClamp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionClamp.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionClamp>()
	{
		return UMaterialExpressionClamp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionClamp);
	UMaterialExpressionClamp::~UMaterialExpressionClamp() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionClamp)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::EnumInfo[] = {
		{ EClampMode_StaticEnum, TEXT("EClampMode"), &Z_Registration_Info_UEnum_EClampMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1037147072U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionClamp, UMaterialExpressionClamp::StaticClass, TEXT("UMaterialExpressionClamp"), &Z_Registration_Info_UClass_UMaterialExpressionClamp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionClamp), 3247253845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_2260382224(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionClamp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
