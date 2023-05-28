// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Properties/UVLayoutProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVLayoutProperties() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties();
	MODELINGOPERATORS_API UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister();
	MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EUVLayoutType();
	UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVLayoutType;
	static UEnum* EUVLayoutType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVLayoutType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVLayoutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EUVLayoutType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EUVLayoutType"));
		}
		return Z_Registration_Info_UEnum_EUVLayoutType.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UEnum* StaticEnum<EUVLayoutType>()
	{
		return EUVLayoutType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enumerators[] = {
		{ "EUVLayoutType::Transform", (int64)EUVLayoutType::Transform },
		{ "EUVLayoutType::Stack", (int64)EUVLayoutType::Stack },
		{ "EUVLayoutType::Repack", (int64)EUVLayoutType::Repack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Layout Strategies for the UV Layout Tool\n */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "Repack.Comment", "/** Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap */" },
		{ "Repack.Name", "EUVLayoutType::Repack" },
		{ "Repack.ToolTip", "Uniformly scale and translate UV islands collectively to pack them into the unit square, i.e. fit between 0 and 1 with no overlap" },
		{ "Stack.Comment", "/** Uniformly scale and translate each UV island individually to pack it into the unit square, i.e. fit between 0 and 1 with overlap */" },
		{ "Stack.Name", "EUVLayoutType::Stack" },
		{ "Stack.ToolTip", "Uniformly scale and translate each UV island individually to pack it into the unit square, i.e. fit between 0 and 1 with overlap" },
		{ "ToolTip", "UV Layout Strategies for the UV Layout Tool" },
		{ "Transform.Comment", "/** Apply Scale and Translation properties to all UV values */" },
		{ "Transform.Name", "EUVLayoutType::Transform" },
		{ "Transform.ToolTip", "Apply Scale and Translation properties to all UV values" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
		nullptr,
		"EUVLayoutType",
		"EUVLayoutType",
		Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingOperators_EUVLayoutType()
	{
		if (!Z_Registration_Info_UEnum_EUVLayoutType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVLayoutType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EUVLayoutType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVLayoutType.InnerSingleton;
	}
	void UUVLayoutProperties::StaticRegisterNativesUUVLayoutProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVLayoutProperties);
	UClass* Z_Construct_UClass_UUVLayoutProperties_NoRegister()
	{
		return UUVLayoutProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVLayoutProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LayoutType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFlips_MetaData[];
#endif
		static void NewProp_bAllowFlips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFlips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUDIMLayout_MetaData[];
#endif
		static void NewProp_bEnableUDIMLayout_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUDIMLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUDIMCVAREnabled_MetaData[];
#endif
		static void NewProp_bUDIMCVAREnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUDIMCVAREnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVLayoutProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingOperators,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UV Layout Settings\n */" },
		{ "IncludePath", "Properties/UVLayoutProperties.h" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "UV Layout Settings" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Type of layout applied to input UVs */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Type of layout applied to input UVs" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutProperties, LayoutType), Z_Construct_UEnum_ModelingOperators_EUVLayoutType, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_MetaData)) }; // 2534337757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Expected resolution of the output textures; this controls spacing left between UV islands to avoid interpolation artifacts" },
		{ "UIMax", "2048" },
		{ "UIMin", "64" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution = { "TextureResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutProperties, TextureResolution), METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Uniform scale applied to UVs after packing */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Uniform scale applied to UVs after packing" },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutProperties, Scale), METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Translation applied to UVs after packing, and after scaling */" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Translation applied to UVs after packing, and after scaling" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVLayoutProperties, Translation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Allow the Repack layout type to flip the orientation of UV islands to save space. Note that this may cause problems for downstream operations, and therefore is disabled by default. */" },
		{ "EditCondition", "LayoutType == EUVLayoutType::Repack" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Allow the Repack layout type to flip the orientation of UV islands to save space. Note that this may cause problems for downstream operations, and therefore is disabled by default." },
	};
#endif
	void Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_SetBit(void* Obj)
	{
		((UUVLayoutProperties*)Obj)->bAllowFlips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips = { "bAllowFlips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVLayoutProperties), &Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_MetaData[] = {
		{ "Category", "UV Layout" },
		{ "Comment", "/** Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out.*/" },
		{ "DisplayName", "Preserve UDIMs" },
		{ "EditCondition", "bUDIMCVAREnabled" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "TRUE" },
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
		{ "ToolTip", "Enable UDIM aware layout and keep islands within their originating UDIM tiles when laying out." },
	};
#endif
	void Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_SetBit(void* Obj)
	{
		((UUVLayoutProperties*)Obj)->bEnableUDIMLayout = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout = { "bEnableUDIMLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVLayoutProperties), &Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Properties/UVLayoutProperties.h" },
	};
#endif
	void Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_SetBit(void* Obj)
	{
		((UUVLayoutProperties*)Obj)->bUDIMCVAREnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled = { "bUDIMCVAREnabled", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVLayoutProperties), &Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_LayoutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_TextureResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bAllowFlips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bEnableUDIMLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVLayoutProperties_Statics::NewProp_bUDIMCVAREnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVLayoutProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVLayoutProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVLayoutProperties_Statics::ClassParams = {
		&UUVLayoutProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVLayoutProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVLayoutProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVLayoutProperties()
	{
		if (!Z_Registration_Info_UClass_UUVLayoutProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVLayoutProperties.OuterSingleton, Z_Construct_UClass_UUVLayoutProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVLayoutProperties.OuterSingleton;
	}
	template<> MODELINGOPERATORS_API UClass* StaticClass<UUVLayoutProperties>()
	{
		return UUVLayoutProperties::StaticClass();
	}
	UUVLayoutProperties::UUVLayoutProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVLayoutProperties);
	UUVLayoutProperties::~UUVLayoutProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::EnumInfo[] = {
		{ EUVLayoutType_StaticEnum, TEXT("EUVLayoutType"), &Z_Registration_Info_UEnum_EUVLayoutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2534337757U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVLayoutProperties, UUVLayoutProperties::StaticClass, TEXT("UUVLayoutProperties"), &Z_Registration_Info_UClass_UUVLayoutProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVLayoutProperties), 2828900797U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_769772225(TEXT("/Script/ModelingOperators"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_Properties_UVLayoutProperties_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
