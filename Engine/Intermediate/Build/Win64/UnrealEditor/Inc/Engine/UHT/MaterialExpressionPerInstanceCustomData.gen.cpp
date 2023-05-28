// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPerInstanceCustomData.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPerInstanceCustomData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionPerInstanceCustomData::StaticRegisterNativesUMaterialExpressionPerInstanceCustomData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPerInstanceCustomData);
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_NoRegister()
	{
		return UMaterialExpressionPerInstanceCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, ConstDefaultValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData, DataIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_ConstDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::NewProp_DataIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPerInstanceCustomData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::ClassParams = {
		&UMaterialExpressionPerInstanceCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPerInstanceCustomData>()
	{
		return UMaterialExpressionPerInstanceCustomData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceCustomData);
	UMaterialExpressionPerInstanceCustomData::~UMaterialExpressionPerInstanceCustomData() {}
	void UMaterialExpressionPerInstanceCustomData3Vector::StaticRegisterNativesUMaterialExpressionPerInstanceCustomData3Vector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPerInstanceCustomData3Vector);
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_NoRegister()
	{
		return UMaterialExpressionPerInstanceCustomData3Vector::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstDefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_DataIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstDefaultValue' if not specified; Default value is used when no instances provided." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData3Vector, DefaultValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "OverridingInputProperty", "DefaultValue" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue = { "ConstDefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData3Vector, ConstDefaultValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex_MetaData[] = {
		{ "Category", "MaterialExpressionPerInstanceCustomData" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPerInstanceCustomData.h" },
		{ "ShowAsInputPin", "Advanced" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex = { "DataIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPerInstanceCustomData3Vector, DataIndex), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_ConstDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::NewProp_DataIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPerInstanceCustomData3Vector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::ClassParams = {
		&UMaterialExpressionPerInstanceCustomData3Vector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::PropPointers),
		0,
		0x000020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPerInstanceCustomData3Vector>()
	{
		return UMaterialExpressionPerInstanceCustomData3Vector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPerInstanceCustomData3Vector);
	UMaterialExpressionPerInstanceCustomData3Vector::~UMaterialExpressionPerInstanceCustomData3Vector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData, UMaterialExpressionPerInstanceCustomData::StaticClass, TEXT("UMaterialExpressionPerInstanceCustomData"), &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPerInstanceCustomData), 3806877966U) },
		{ Z_Construct_UClass_UMaterialExpressionPerInstanceCustomData3Vector, UMaterialExpressionPerInstanceCustomData3Vector::StaticClass, TEXT("UMaterialExpressionPerInstanceCustomData3Vector"), &Z_Registration_Info_UClass_UMaterialExpressionPerInstanceCustomData3Vector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPerInstanceCustomData3Vector), 302801538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_316362799(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPerInstanceCustomData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
