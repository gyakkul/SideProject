// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BakeTransformTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeTransformTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeTransformToolProperties_NoRegister();
	MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UBakeTransformToolBuilder::StaticRegisterNativesUBakeTransformToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTransformToolBuilder);
	UClass* Z_Construct_UClass_UBakeTransformToolBuilder_NoRegister()
	{
		return UBakeTransformToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBakeTransformToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeTransformToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "BakeTransformTool.h" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeTransformToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTransformToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTransformToolBuilder_Statics::ClassParams = {
		&UBakeTransformToolBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeTransformToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeTransformToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBakeTransformToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTransformToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeTransformToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeTransformToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTransformToolBuilder>()
	{
		return UBakeTransformToolBuilder::StaticClass();
	}
	UBakeTransformToolBuilder::UBakeTransformToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTransformToolBuilder);
	UBakeTransformToolBuilder::~UBakeTransformToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBakeScaleMethod;
	static UEnum* EBakeScaleMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBakeScaleMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBakeScaleMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EBakeScaleMethod"));
		}
		return Z_Registration_Info_UEnum_EBakeScaleMethod.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EBakeScaleMethod>()
	{
		return EBakeScaleMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enumerators[] = {
		{ "EBakeScaleMethod::BakeFullScale", (int64)EBakeScaleMethod::BakeFullScale },
		{ "EBakeScaleMethod::BakeNonuniformScale", (int64)EBakeScaleMethod::BakeNonuniformScale },
		{ "EBakeScaleMethod::DoNotBakeScale", (int64)EBakeScaleMethod::DoNotBakeScale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enum_MetaDataParams[] = {
		{ "BakeFullScale.Comment", "// bake all scale information, so the component has scale of 1 on all axes\n" },
		{ "BakeFullScale.Name", "EBakeScaleMethod::BakeFullScale" },
		{ "BakeFullScale.ToolTip", "bake all scale information, so the component has scale of 1 on all axes" },
		{ "BakeNonuniformScale.Comment", "// bake the non-uniform scale, so the component has a uniform scale\n" },
		{ "BakeNonuniformScale.Name", "EBakeScaleMethod::BakeNonuniformScale" },
		{ "BakeNonuniformScale.ToolTip", "bake the non-uniform scale, so the component has a uniform scale" },
		{ "DoNotBakeScale.Comment", "// do not bake any scaling\n" },
		{ "DoNotBakeScale.Name", "EBakeScaleMethod::DoNotBakeScale" },
		{ "DoNotBakeScale.ToolTip", "do not bake any scaling" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
		nullptr,
		"EBakeScaleMethod",
		"EBakeScaleMethod",
		Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod()
	{
		if (!Z_Registration_Info_UEnum_EBakeScaleMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBakeScaleMethod.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBakeScaleMethod.InnerSingleton;
	}
	void UBakeTransformToolProperties::StaticRegisterNativesUBakeTransformToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTransformToolProperties);
	UClass* Z_Construct_UClass_UBakeTransformToolProperties_NoRegister()
	{
		return UBakeTransformToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBakeTransformToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBakeRotation_MetaData[];
#endif
		static void NewProp_bBakeRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBakeRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakeScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecenterPivot_MetaData[];
#endif
		static void NewProp_bRecenterPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecenterPivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNoScale_MetaData[];
#endif
		static void NewProp_bAllowNoScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNoScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeTransformToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties\n */" },
		{ "IncludePath", "BakeTransformTool.h" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Standard properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Bake rotation */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Bake rotation" },
	};
#endif
	void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_SetBit(void* Obj)
	{
		((UBakeTransformToolProperties*)Obj)->bBakeRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation = { "bBakeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Bake scale */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Bake scale" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale = { "BakeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeTransformToolProperties, BakeScale), Z_Construct_UEnum_MeshModelingToolsExp_EBakeScaleMethod, METADATA_PARAMS(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_MetaData)) }; // 3157929877
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Recenter pivot after baking transform */" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Recenter pivot after baking transform" },
	};
#endif
	void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_SetBit(void* Obj)
	{
		((UBakeTransformToolProperties*)Obj)->bRecenterPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot = { "bRecenterPivot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "// This variable is used to enable/disable the \"DoNotBakeScale\" option in the BakeScale enum\n// It is marked as visible only so that the FBakeTransformToolDetails can read it; it will be hidden by that DetailCustomization\n" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "This variable is used to enable/disable the \"DoNotBakeScale\" option in the BakeScale enum\nIt is marked as visible only so that the FBakeTransformToolDetails can read it; it will be hidden by that DetailCustomization" },
	};
#endif
	void Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_SetBit(void* Obj)
	{
		((UBakeTransformToolProperties*)Obj)->bAllowNoScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale = { "bAllowNoScale", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBakeTransformToolProperties), &Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bBakeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_BakeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bRecenterPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformToolProperties_Statics::NewProp_bAllowNoScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeTransformToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTransformToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTransformToolProperties_Statics::ClassParams = {
		&UBakeTransformToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeTransformToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeTransformToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBakeTransformToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTransformToolProperties.OuterSingleton, Z_Construct_UClass_UBakeTransformToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeTransformToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTransformToolProperties>()
	{
		return UBakeTransformToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTransformToolProperties);
	UBakeTransformToolProperties::~UBakeTransformToolProperties() {}
	void UBakeTransformTool::StaticRegisterNativesUBakeTransformTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeTransformTool);
	UClass* Z_Construct_UClass_UBakeTransformTool_NoRegister()
	{
		return UBakeTransformTool::StaticClass();
	}
	struct Z_Construct_UClass_UBakeTransformTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBakeTransformTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple tool to bake scene transform on meshes into the mesh assets\n */" },
		{ "IncludePath", "BakeTransformTool.h" },
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
		{ "ToolTip", "Simple tool to bake scene transform on meshes into the mesh assets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBakeTransformTool, BasicProperties), Z_Construct_UClass_UBakeTransformToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeTransformTool_Statics::NewProp_BasicProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBakeTransformTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeTransformTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeTransformTool_Statics::ClassParams = {
		&UBakeTransformTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBakeTransformTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBakeTransformTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBakeTransformTool()
	{
		if (!Z_Registration_Info_UClass_UBakeTransformTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeTransformTool.OuterSingleton, Z_Construct_UClass_UBakeTransformTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBakeTransformTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeTransformTool>()
	{
		return UBakeTransformTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeTransformTool);
	UBakeTransformTool::~UBakeTransformTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::EnumInfo[] = {
		{ EBakeScaleMethod_StaticEnum, TEXT("EBakeScaleMethod"), &Z_Registration_Info_UEnum_EBakeScaleMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3157929877U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBakeTransformToolBuilder, UBakeTransformToolBuilder::StaticClass, TEXT("UBakeTransformToolBuilder"), &Z_Registration_Info_UClass_UBakeTransformToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTransformToolBuilder), 443105702U) },
		{ Z_Construct_UClass_UBakeTransformToolProperties, UBakeTransformToolProperties::StaticClass, TEXT("UBakeTransformToolProperties"), &Z_Registration_Info_UClass_UBakeTransformToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTransformToolProperties), 4182664350U) },
		{ Z_Construct_UClass_UBakeTransformTool, UBakeTransformTool::StaticClass, TEXT("UBakeTransformTool"), &Z_Registration_Info_UClass_UBakeTransformTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeTransformTool), 3379093834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_1004618629(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeTransformTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
