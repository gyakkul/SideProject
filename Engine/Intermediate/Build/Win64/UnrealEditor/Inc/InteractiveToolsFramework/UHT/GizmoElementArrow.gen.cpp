// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementArrow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementArrow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArrow();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementArrow_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBase();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementBox_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCone_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UGizmoElementCylinder_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoElementArrowHeadType;
	static UEnum* EGizmoElementArrowHeadType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementArrowHeadType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoElementArrowHeadType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EGizmoElementArrowHeadType"));
		}
		return Z_Registration_Info_UEnum_EGizmoElementArrowHeadType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementArrowHeadType>()
	{
		return EGizmoElementArrowHeadType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::Enumerators[] = {
		{ "EGizmoElementArrowHeadType::Cone", (int64)EGizmoElementArrowHeadType::Cone },
		{ "EGizmoElementArrowHeadType::Cube", (int64)EGizmoElementArrowHeadType::Cube },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple object intended to be used as part of 3D Gizmos.\n * Draws a 3D arrow based on parameters.\n */" },
		{ "Cone.Name", "EGizmoElementArrowHeadType::Cone" },
		{ "Cube.Name", "EGizmoElementArrowHeadType::Cube" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Simple object intended to be used as part of 3D Gizmos.\nDraws a 3D arrow based on parameters." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EGizmoElementArrowHeadType",
		"EGizmoElementArrowHeadType",
		Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementArrowHeadType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoElementArrowHeadType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoElementArrowHeadType.InnerSingleton;
	}
	void UGizmoElementArrow::StaticRegisterNativesUGizmoElementArrow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGizmoElementArrow);
	UClass* Z_Construct_UClass_UGizmoElementArrow_NoRegister()
	{
		return UGizmoElementArrow::StaticClass();
	}
	struct Z_Construct_UClass_UGizmoElementArrow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CylinderElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ConeElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxElement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoxElement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SideDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SideDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_HeadType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeadType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HeadType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGizmoElementArrow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGizmoElementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseGizmos/GizmoElementArrow.h" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_CylinderElement_MetaData[] = {
		{ "Comment", "// Arrow cylinder body\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Arrow cylinder body" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_CylinderElement = { "CylinderElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, CylinderElement), Z_Construct_UClass_UGizmoElementCylinder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_CylinderElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_CylinderElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_ConeElement_MetaData[] = {
		{ "Comment", "// Arrow cone head\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Arrow cone head" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_ConeElement = { "ConeElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, ConeElement), Z_Construct_UClass_UGizmoElementCone_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_ConeElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_ConeElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BoxElement_MetaData[] = {
		{ "Comment", "// Arrow box head\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Arrow box head" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BoxElement = { "BoxElement", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, BoxElement), Z_Construct_UClass_UGizmoElementBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BoxElement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BoxElement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Base_MetaData[] = {
		{ "Comment", "// Location of center of arrow base circle.\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Location of center of arrow base circle." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, Base), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Direction_MetaData[] = {
		{ "Comment", "// Direction of arrow axis\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Direction of arrow axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_SideDirection_MetaData[] = {
		{ "Comment", "// Side direction for box head\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Side direction for box head" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_SideDirection = { "SideDirection", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, SideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_SideDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_SideDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyLength_MetaData[] = {
		{ "Comment", "// Arrow body length\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Arrow body length" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyLength = { "BodyLength", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, BodyLength), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyRadius_MetaData[] = {
		{ "Comment", "// Radius of arrow cylinder\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Radius of arrow cylinder" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyRadius = { "BodyRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, BodyRadius), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadLength_MetaData[] = {
		{ "Comment", "// Length of head, cone or box\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Length of head, cone or box" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadLength = { "HeadLength", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, HeadLength), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadRadius_MetaData[] = {
		{ "Comment", "// Radius of head cone\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Radius of head cone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadRadius = { "HeadRadius", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, HeadRadius), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_NumSides_MetaData[] = {
		{ "Comment", "// Number of sides for tessellating cone and cylinder\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Number of sides for tessellating cone and cylinder" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, NumSides), METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_NumSides_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType_MetaData[] = {
		{ "Comment", "// Head type\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementArrow.h" },
		{ "ToolTip", "Head type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType = { "HeadType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGizmoElementArrow, HeadType), Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementArrowHeadType, METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType_MetaData)) }; // 1308621066
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGizmoElementArrow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_CylinderElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_ConeElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BoxElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_Direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_SideDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_BodyRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_NumSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGizmoElementArrow_Statics::NewProp_HeadType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGizmoElementArrow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGizmoElementArrow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGizmoElementArrow_Statics::ClassParams = {
		&UGizmoElementArrow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGizmoElementArrow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGizmoElementArrow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGizmoElementArrow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGizmoElementArrow()
	{
		if (!Z_Registration_Info_UClass_UGizmoElementArrow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGizmoElementArrow.OuterSingleton, Z_Construct_UClass_UGizmoElementArrow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGizmoElementArrow.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UGizmoElementArrow>()
	{
		return UGizmoElementArrow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGizmoElementArrow);
	UGizmoElementArrow::~UGizmoElementArrow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics::EnumInfo[] = {
		{ EGizmoElementArrowHeadType_StaticEnum, TEXT("EGizmoElementArrowHeadType"), &Z_Registration_Info_UEnum_EGizmoElementArrowHeadType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1308621066U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGizmoElementArrow, UGizmoElementArrow::StaticClass, TEXT("UGizmoElementArrow"), &Z_Registration_Info_UClass_UGizmoElementArrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGizmoElementArrow), 3519356810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_4271632(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementArrow_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
