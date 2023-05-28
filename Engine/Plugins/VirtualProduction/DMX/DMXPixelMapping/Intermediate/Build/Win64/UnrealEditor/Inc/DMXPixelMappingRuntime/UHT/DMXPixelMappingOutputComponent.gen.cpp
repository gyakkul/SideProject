// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingOutputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingOutputComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingBaseComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDMXPixelBlendingQuality;
	static UEnum* EDMXPixelBlendingQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality, (UObject*)Z_Construct_UPackage__Script_DMXPixelMappingRuntime(), TEXT("EDMXPixelBlendingQuality"));
		}
		return Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UEnum* StaticEnum<EDMXPixelBlendingQuality>()
	{
		return EDMXPixelBlendingQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::Enumerators[] = {
		{ "EDMXPixelBlendingQuality::Low", (int64)EDMXPixelBlendingQuality::Low },
		{ "EDMXPixelBlendingQuality::Medium", (int64)EDMXPixelBlendingQuality::Medium },
		{ "EDMXPixelBlendingQuality::High", (int64)EDMXPixelBlendingQuality::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Enum that defines the quality of how pixels are rendered */" },
		{ "High.Comment", "/** 9 samples ( 3 x 3 ) */" },
		{ "High.Name", "EDMXPixelBlendingQuality::High" },
		{ "High.ToolTip", "9 samples ( 3 x 3 )" },
		{ "Low.Comment", "/** 1 sample */" },
		{ "Low.Name", "EDMXPixelBlendingQuality::Low" },
		{ "Low.ToolTip", "1 sample" },
		{ "Medium.Comment", "/** 5 samples ( 2 x 2 with center) */" },
		{ "Medium.Name", "EDMXPixelBlendingQuality::Medium" },
		{ "Medium.ToolTip", "5 samples ( 2 x 2 with center)" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "ToolTip", "Enum that defines the quality of how pixels are rendered" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
		nullptr,
		"EDMXPixelBlendingQuality",
		"EDMXPixelBlendingQuality",
		Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality()
	{
		if (!Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.InnerSingleton, Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDMXPixelBlendingQuality.InnerSingleton;
	}
	void UDMXPixelMappingOutputComponent::StaticRegisterNativesUDMXPixelMappingOutputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingOutputComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent_NoRegister()
	{
		return UDMXPixelMappingOutputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorColor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_CellBlendingQuality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellBlendingQuality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CellBlendingQuality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SizeY;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockInDesigner_MetaData[];
#endif
		static void NewProp_bLockInDesigner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockInDesigner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInDesigner_MetaData[];
#endif
		static void NewProp_bVisibleInDesigner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInDesigner;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingBaseComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all Designer and configurable components\n */" },
		{ "IncludePath", "Components/DMXPixelMappingOutputComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "ToolTip", "Base class for all Designer and configurable components" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Comment", "/** ZOrder in the UI */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "ToolTip", "ZOrder in the UI" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, ZOrder), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_ZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_EditorColor_MetaData[] = {
		{ "Category", "Editor Settings" },
		{ "Comment", "/** The color displayed in editor */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "ToolTip", "The color displayed in editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_EditorColor = { "EditorColor", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, EditorColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_EditorColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_EditorColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality_MetaData[] = {
		{ "Category", "Pixel Settings" },
		{ "Comment", "/** The quality level to use when averaging colors during downsampling. */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "ToolTip", "The quality level to use when averaging colors during downsampling." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality = { "CellBlendingQuality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, CellBlendingQuality), Z_Construct_UEnum_DMXPixelMappingRuntime_EDMXPixelBlendingQuality, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality_MetaData)) }; // 1090401149
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Common Settings" },
		{ "EditCondition", "!bLockInDesigner" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionX = { "PositionX", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, PositionX), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Common Settings" },
		{ "EditCondition", "!bLockInDesigner" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionY = { "PositionY", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, PositionY), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeX_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Common Settings" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bLockInDesigner" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, SizeX), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeY_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Common Settings" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bLockInDesigner" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingOutputComponent, SizeY), METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeY_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner_MetaData[] = {
		{ "Category", "Editor Settings" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner_SetBit(void* Obj)
	{
		((UDMXPixelMappingOutputComponent*)Obj)->bLockInDesigner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner = { "bLockInDesigner", nullptr, (EPropertyFlags)0x0020080800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingOutputComponent), &Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner_MetaData[] = {
		{ "Category", "Editor Settings" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner_SetBit(void* Obj)
	{
		((UDMXPixelMappingOutputComponent*)Obj)->bVisibleInDesigner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner = { "bVisibleInDesigner", nullptr, (EPropertyFlags)0x0020080800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingOutputComponent), &Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_EditorColor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_CellBlendingQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_PositionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_SizeY,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bLockInDesigner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::NewProp_bVisibleInDesigner,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingOutputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::ClassParams = {
		&UDMXPixelMappingOutputComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingOutputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingOutputComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingOutputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingOutputComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingOutputComponent>()
	{
		return UDMXPixelMappingOutputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingOutputComponent);
	UDMXPixelMappingOutputComponent::~UDMXPixelMappingOutputComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics::EnumInfo[] = {
		{ EDMXPixelBlendingQuality_StaticEnum, TEXT("EDMXPixelBlendingQuality"), &Z_Registration_Info_UEnum_EDMXPixelBlendingQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1090401149U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingOutputComponent, UDMXPixelMappingOutputComponent::StaticClass, TEXT("UDMXPixelMappingOutputComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingOutputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingOutputComponent), 3315948200U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_2911629204(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
