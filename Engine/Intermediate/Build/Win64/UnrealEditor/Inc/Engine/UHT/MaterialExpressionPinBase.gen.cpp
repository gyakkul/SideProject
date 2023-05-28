// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionPinBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPinBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPinBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionReroute_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEdGraphPinDirection();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositeReroute();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositeReroute;
class UScriptStruct* FCompositeReroute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositeReroute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositeReroute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositeReroute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CompositeReroute"));
	}
	return Z_Registration_Info_UScriptStruct_CompositeReroute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCompositeReroute>()
{
	return FCompositeReroute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCompositeReroute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeReroute_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Collection of pins used for tunneling between graphs.\n * Utilizes reroute expressions to ensure zero overhead in the compiled material.\n * \n *      _________________          _________________\n *     |   INPUT BASE    |        |   OUTPUT BASE   |\n *     +--------+--------+        +--------+--------+\n *     |        |   (>)  |   ->   |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |   (>)  |        |  (>)   |        |\n *     |        |        |        |        |        |\n *     +--------+--------+        +--------+--------+\n *     | NODE IN:  NONE  |        | NODE IN:  PINS  |\n *     | NODE OUT: PINS  |        | NODE OUT: NONE  |\n *     |_________________|        |_________________|\n *\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "ToolTip", "Collection of pins used for tunneling between graphs.\nUtilizes reroute expressions to ensure zero overhead in the compiled material.\n\n     _________________          _________________\n    |   INPUT BASE    |        |   OUTPUT BASE   |\n    +--------+--------+        +--------+--------+\n    |        |   (>)  |   ->   |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |   (>)  |        |  (>)   |        |\n    |        |        |        |        |        |\n    +--------+--------+        +--------+--------+\n    | NODE IN:  NONE  |        | NODE IN:  PINS  |\n    | NODE OUT: PINS  |        | NODE OUT: NONE  |\n    |_________________|        |_________________|" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositeReroute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeReroute, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCompositeReroute, Expression), Z_Construct_UClass_UMaterialExpressionReroute_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewProp_Expression,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositeReroute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CompositeReroute",
		sizeof(FCompositeReroute),
		alignof(FCompositeReroute),
		Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCompositeReroute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositeReroute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCompositeReroute()
	{
		if (!Z_Registration_Info_UScriptStruct_CompositeReroute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositeReroute.InnerSingleton, Z_Construct_UScriptStruct_FCompositeReroute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CompositeReroute.InnerSingleton;
	}
	void UMaterialExpressionPinBase::StaticRegisterNativesUMaterialExpressionPinBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPinBase);
	UClass* Z_Construct_UClass_UMaterialExpressionPinBase_NoRegister()
	{
		return UMaterialExpressionPinBase::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPinBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReroutePins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReroutePins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReroutePins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinDirection_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PinDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPinBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPinBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionPinBase.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_Inner = { "ReroutePins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCompositeReroute, METADATA_PARAMS(nullptr, 0) }; // 2573715543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_MetaData[] = {
		{ "Category", "MaterialExpressionPinBase" },
		{ "Comment", "/** Underlying reroute pins used to compile material. Must call Modify after editing to update output expressions. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "NoResetToDefault", "" },
		{ "TitleProperty", "Name" },
		{ "ToolTip", "Underlying reroute pins used to compile material. Must call Modify after editing to update output expressions." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins = { "ReroutePins", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPinBase, ReroutePins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_MetaData)) }; // 2573715543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection_MetaData[] = {
		{ "Comment", "/** Direction of the pins for this base. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionPinBase.h" },
		{ "ToolTip", "Direction of the pins for this base." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection = { "PinDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPinBase, PinDirection), Z_Construct_UEnum_Engine_EEdGraphPinDirection, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection_MetaData)) }; // 1668123198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_ReroutePins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPinBase_Statics::NewProp_PinDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPinBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPinBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPinBase_Statics::ClassParams = {
		&UMaterialExpressionPinBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPinBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPinBase()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPinBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPinBase.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPinBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPinBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionPinBase>()
	{
		return UMaterialExpressionPinBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPinBase);
	UMaterialExpressionPinBase::~UMaterialExpressionPinBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ScriptStructInfo[] = {
		{ FCompositeReroute::StaticStruct, Z_Construct_UScriptStruct_FCompositeReroute_Statics::NewStructOps, TEXT("CompositeReroute"), &Z_Registration_Info_UScriptStruct_CompositeReroute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositeReroute), 2573715543U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPinBase, UMaterialExpressionPinBase::StaticClass, TEXT("UMaterialExpressionPinBase"), &Z_Registration_Info_UClass_UMaterialExpressionPinBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPinBase), 2865532320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_413064237(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionPinBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
