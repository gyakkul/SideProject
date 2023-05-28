// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceArrayFloat.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayFloat() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArray();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayColor();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraPosition();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceArrayFloat::StaticRegisterNativesUNiagaraDataInterfaceArrayFloat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayFloat);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_NoRegister()
	{
		return UNiagaraDataInterfaceArrayFloat::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Float Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::NewProp_FloatData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayFloat>()
	{
		return UNiagaraDataInterfaceArrayFloat::StaticClass();
	}
	UNiagaraDataInterfaceArrayFloat::UNiagaraDataInterfaceArrayFloat() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayFloat);
	UNiagaraDataInterfaceArrayFloat::~UNiagaraDataInterfaceArrayFloat() {}
	void UNiagaraDataInterfaceArrayFloat2::StaticRegisterNativesUNiagaraDataInterfaceArrayFloat2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayFloat2);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_NoRegister()
	{
		return UNiagaraDataInterfaceArrayFloat2::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalFloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalFloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalFloatData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Vector 2D Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat2, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData_Inner = { "InternalFloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData = { "InternalFloatData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat2, InternalFloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_FloatData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::NewProp_InternalFloatData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayFloat2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayFloat2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat2.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat2.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayFloat2>()
	{
		return UNiagaraDataInterfaceArrayFloat2::StaticClass();
	}
	UNiagaraDataInterfaceArrayFloat2::UNiagaraDataInterfaceArrayFloat2() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayFloat2);
	UNiagaraDataInterfaceArrayFloat2::~UNiagaraDataInterfaceArrayFloat2() {}
	void UNiagaraDataInterfaceArrayFloat3::StaticRegisterNativesUNiagaraDataInterfaceArrayFloat3()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayFloat3);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_NoRegister()
	{
		return UNiagaraDataInterfaceArrayFloat3::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalFloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalFloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalFloatData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Vector Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat3, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData_Inner = { "InternalFloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData = { "InternalFloatData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat3, InternalFloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_FloatData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::NewProp_InternalFloatData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayFloat3>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayFloat3::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat3.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat3.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat3.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayFloat3>()
	{
		return UNiagaraDataInterfaceArrayFloat3::StaticClass();
	}
	UNiagaraDataInterfaceArrayFloat3::UNiagaraDataInterfaceArrayFloat3() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayFloat3);
	UNiagaraDataInterfaceArrayFloat3::~UNiagaraDataInterfaceArrayFloat3() {}
	void UNiagaraDataInterfaceArrayPosition::StaticRegisterNativesUNiagaraDataInterfaceArrayPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayPosition);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_NoRegister()
	{
		return UNiagaraDataInterfaceArrayPosition::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Position Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData_Inner = { "PositionData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraPosition, METADATA_PARAMS(nullptr, 0) }; // 3370079657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData = { "PositionData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayPosition, PositionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData_MetaData)) }; // 3370079657
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::NewProp_PositionData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayPosition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayPosition>()
	{
		return UNiagaraDataInterfaceArrayPosition::StaticClass();
	}
	UNiagaraDataInterfaceArrayPosition::UNiagaraDataInterfaceArrayPosition() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayPosition);
	UNiagaraDataInterfaceArrayPosition::~UNiagaraDataInterfaceArrayPosition() {}
	void UNiagaraDataInterfaceArrayFloat4::StaticRegisterNativesUNiagaraDataInterfaceArrayFloat4()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayFloat4);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_NoRegister()
	{
		return UNiagaraDataInterfaceArrayFloat4::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalFloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalFloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalFloatData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Vector 4 Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat4, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData_Inner = { "InternalFloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData = { "InternalFloatData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayFloat4, InternalFloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_FloatData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::NewProp_InternalFloatData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayFloat4>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayFloat4::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayFloat4>()
	{
		return UNiagaraDataInterfaceArrayFloat4::StaticClass();
	}
	UNiagaraDataInterfaceArrayFloat4::UNiagaraDataInterfaceArrayFloat4() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayFloat4);
	UNiagaraDataInterfaceArrayFloat4::~UNiagaraDataInterfaceArrayFloat4() {}
	void UNiagaraDataInterfaceArrayColor::StaticRegisterNativesUNiagaraDataInterfaceArrayColor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayColor);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_NoRegister()
	{
		return UNiagaraDataInterfaceArrayColor::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Color Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData_Inner = { "ColorData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData = { "ColorData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayColor, ColorData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::NewProp_ColorData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayColor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayColor()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayColor.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayColor.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayColor>()
	{
		return UNiagaraDataInterfaceArrayColor::StaticClass();
	}
	UNiagaraDataInterfaceArrayColor::UNiagaraDataInterfaceArrayColor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayColor);
	UNiagaraDataInterfaceArrayColor::~UNiagaraDataInterfaceArrayColor() {}
	void UNiagaraDataInterfaceArrayQuat::StaticRegisterNativesUNiagaraDataInterfaceArrayQuat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayQuat);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_NoRegister()
	{
		return UNiagaraDataInterfaceArrayQuat::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuatData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalQuatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalQuatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalQuatData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceArray,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Array" },
		{ "DisplayName", "Quaternion Array" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFloat.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData_Inner = { "QuatData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData_MetaData[] = {
		{ "Category", "Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData = { "QuatData", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayQuat, QuatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData_Inner = { "InternalQuatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFloat.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData = { "InternalQuatData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceArrayQuat, InternalQuatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_QuatData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::NewProp_InternalQuatData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayQuat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayQuat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayQuat>()
	{
		return UNiagaraDataInterfaceArrayQuat::StaticClass();
	}
	UNiagaraDataInterfaceArrayQuat::UNiagaraDataInterfaceArrayQuat() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayQuat);
	UNiagaraDataInterfaceArrayQuat::~UNiagaraDataInterfaceArrayQuat() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFloat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFloat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat, UNiagaraDataInterfaceArrayFloat::StaticClass, TEXT("UNiagaraDataInterfaceArrayFloat"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayFloat), 1442536506U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat2, UNiagaraDataInterfaceArrayFloat2::StaticClass, TEXT("UNiagaraDataInterfaceArrayFloat2"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayFloat2), 3306791391U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat3, UNiagaraDataInterfaceArrayFloat3::StaticClass, TEXT("UNiagaraDataInterfaceArrayFloat3"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat3, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayFloat3), 1776139996U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayPosition, UNiagaraDataInterfaceArrayPosition::StaticClass, TEXT("UNiagaraDataInterfaceArrayPosition"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayPosition), 844878211U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayFloat4, UNiagaraDataInterfaceArrayFloat4::StaticClass, TEXT("UNiagaraDataInterfaceArrayFloat4"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFloat4, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayFloat4), 1985281646U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayColor, UNiagaraDataInterfaceArrayColor::StaticClass, TEXT("UNiagaraDataInterfaceArrayColor"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayColor), 2387175782U) },
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayQuat, UNiagaraDataInterfaceArrayQuat::StaticClass, TEXT("UNiagaraDataInterfaceArrayQuat"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayQuat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayQuat), 3371845484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFloat_h_3283105964(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFloat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
