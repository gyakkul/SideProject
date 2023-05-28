// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeColorArithmeticOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeColorArithmeticOp() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorArithmeticOperation;
	static UEnum* EColorArithmeticOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorArithmeticOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorArithmeticOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("EColorArithmeticOperation"));
		}
		return Z_Registration_Info_UEnum_EColorArithmeticOperation.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EColorArithmeticOperation>()
	{
		return EColorArithmeticOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::Enumerators[] = {
		{ "EColorArithmeticOperation::E_Add", (int64)EColorArithmeticOperation::E_Add },
		{ "EColorArithmeticOperation::E_Sub", (int64)EColorArithmeticOperation::E_Sub },
		{ "EColorArithmeticOperation::E_Mul", (int64)EColorArithmeticOperation::E_Mul },
		{ "EColorArithmeticOperation::E_Div", (int64)EColorArithmeticOperation::E_Div },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "E_Add.DisplayName", "+" },
		{ "E_Add.Name", "EColorArithmeticOperation::E_Add" },
		{ "E_Div.DisplayName", "/" },
		{ "E_Div.Name", "EColorArithmeticOperation::E_Div" },
		{ "E_Mul.DisplayName", "x" },
		{ "E_Mul.Name", "EColorArithmeticOperation::E_Mul" },
		{ "E_Sub.DisplayName", "-" },
		{ "E_Sub.Name", "EColorArithmeticOperation::E_Sub" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeColorArithmeticOp.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"EColorArithmeticOperation",
		"EColorArithmeticOperation",
		Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation()
	{
		if (!Z_Registration_Info_UEnum_EColorArithmeticOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorArithmeticOperation.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorArithmeticOperation.InnerSingleton;
	}
	void UCustomizableObjectNodeColorArithmeticOp::StaticRegisterNativesUCustomizableObjectNodeColorArithmeticOp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeColorArithmeticOp);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_NoRegister()
	{
		return UCustomizableObjectNodeColorArithmeticOp::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeColorArithmeticOp.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeColorArithmeticOp.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation_MetaData[] = {
		{ "Category", "ColorArithmeticOperation" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeColorArithmeticOp.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeColorArithmeticOp, Operation), Z_Construct_UEnum_CustomizableObjectEditor_EColorArithmeticOperation, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation_MetaData)) }; // 1932217999
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::NewProp_Operation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeColorArithmeticOp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::ClassParams = {
		&UCustomizableObjectNodeColorArithmeticOp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeColorArithmeticOp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeColorArithmeticOp.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeColorArithmeticOp.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeColorArithmeticOp>()
	{
		return UCustomizableObjectNodeColorArithmeticOp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeColorArithmeticOp);
	UCustomizableObjectNodeColorArithmeticOp::~UCustomizableObjectNodeColorArithmeticOp() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics::EnumInfo[] = {
		{ EColorArithmeticOperation_StaticEnum, TEXT("EColorArithmeticOperation"), &Z_Registration_Info_UEnum_EColorArithmeticOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1932217999U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeColorArithmeticOp, UCustomizableObjectNodeColorArithmeticOp::StaticClass, TEXT("UCustomizableObjectNodeColorArithmeticOp"), &Z_Registration_Info_UClass_UCustomizableObjectNodeColorArithmeticOp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeColorArithmeticOp), 2182547973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_427306675(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeColorArithmeticOp_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
