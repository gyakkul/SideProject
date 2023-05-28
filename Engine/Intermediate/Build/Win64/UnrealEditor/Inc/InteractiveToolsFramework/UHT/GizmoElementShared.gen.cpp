// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseGizmos/GizmoElementShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGizmoElementShared() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoElementState;
	static UEnum* EGizmoElementState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EGizmoElementState"));
		}
		return Z_Registration_Info_UEnum_EGizmoElementState.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementState>()
	{
		return EGizmoElementState_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::Enumerators[] = {
		{ "EGizmoElementState::None", (int64)EGizmoElementState::None },
		{ "EGizmoElementState::Visible", (int64)EGizmoElementState::Visible },
		{ "EGizmoElementState::Hittable", (int64)EGizmoElementState::Hittable },
		{ "EGizmoElementState::VisibleAndHittable", (int64)EGizmoElementState::VisibleAndHittable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Visible/hittable state of gizmo element\n//\n" },
		{ "Hittable.Name", "EGizmoElementState::Hittable" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementShared.h" },
		{ "None.Name", "EGizmoElementState::None" },
		{ "ToolTip", "Visible/hittable state of gizmo element" },
		{ "Visible.Name", "EGizmoElementState::Visible" },
		{ "VisibleAndHittable.Name", "EGizmoElementState::VisibleAndHittable" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EGizmoElementState",
		"EGizmoElementState",
		Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoElementState.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoElementState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoElementInteractionState;
	static UEnum* EGizmoElementInteractionState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EGizmoElementInteractionState"));
		}
		return Z_Registration_Info_UEnum_EGizmoElementInteractionState.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementInteractionState>()
	{
		return EGizmoElementInteractionState_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::Enumerators[] = {
		{ "EGizmoElementInteractionState::None", (int64)EGizmoElementInteractionState::None },
		{ "EGizmoElementInteractionState::Hovering", (int64)EGizmoElementInteractionState::Hovering },
		{ "EGizmoElementInteractionState::Interacting", (int64)EGizmoElementInteractionState::Interacting },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Interaction state of gizmo element\n//\n" },
		{ "Hovering.Name", "EGizmoElementInteractionState::Hovering" },
		{ "Interacting.Name", "EGizmoElementInteractionState::Interacting" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementShared.h" },
		{ "None.Name", "EGizmoElementInteractionState::None" },
		{ "ToolTip", "Interaction state of gizmo element" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EGizmoElementInteractionState",
		"EGizmoElementInteractionState",
		Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementInteractionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoElementInteractionState.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementInteractionState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoElementInteractionState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoElementViewDependentType;
	static UEnum* EGizmoElementViewDependentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EGizmoElementViewDependentType"));
		}
		return Z_Registration_Info_UEnum_EGizmoElementViewDependentType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementViewDependentType>()
	{
		return EGizmoElementViewDependentType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::Enumerators[] = {
		{ "EGizmoElementViewDependentType::None", (int64)EGizmoElementViewDependentType::None },
		{ "EGizmoElementViewDependentType::Axis", (int64)EGizmoElementViewDependentType::Axis },
		{ "EGizmoElementViewDependentType::Plane", (int64)EGizmoElementViewDependentType::Plane },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::Enum_MetaDataParams[] = {
		{ "Axis.Name", "EGizmoElementViewDependentType::Axis" },
		{ "Comment", "//\n// View dependent type: automatically cull gizmo element based on view.\n//\n//   Axis  - Cull object when angle between axis and view direction is within a given tolerance\n//   Plane - Cull object when angle between plane normal and view direction is perpendicular within a given tolerance\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementShared.h" },
		{ "None.Name", "EGizmoElementViewDependentType::None" },
		{ "Plane.Name", "EGizmoElementViewDependentType::Plane" },
		{ "ToolTip", "View dependent type: automatically cull gizmo element based on view.\n\n  Axis  - Cull object when angle between axis and view direction is within a given tolerance\n  Plane - Cull object when angle between plane normal and view direction is perpendicular within a given tolerance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EGizmoElementViewDependentType",
		"EGizmoElementViewDependentType",
		Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementViewDependentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoElementViewDependentType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewDependentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoElementViewDependentType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoElementViewAlignType;
	static UEnum* EGizmoElementViewAlignType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EGizmoElementViewAlignType"));
		}
		return Z_Registration_Info_UEnum_EGizmoElementViewAlignType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementViewAlignType>()
	{
		return EGizmoElementViewAlignType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::Enumerators[] = {
		{ "EGizmoElementViewAlignType::None", (int64)EGizmoElementViewAlignType::None },
		{ "EGizmoElementViewAlignType::PointOnly", (int64)EGizmoElementViewAlignType::PointOnly },
		{ "EGizmoElementViewAlignType::PointEye", (int64)EGizmoElementViewAlignType::PointEye },
		{ "EGizmoElementViewAlignType::PointScreen", (int64)EGizmoElementViewAlignType::PointScreen },
		{ "EGizmoElementViewAlignType::Axial", (int64)EGizmoElementViewAlignType::Axial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::Enum_MetaDataParams[] = {
		{ "Axial.Name", "EGizmoElementViewAlignType::Axial" },
		{ "Comment", "//\n// View align type: automatically align gizmo element towards a view.\n// \n//   PointOnly   - Align object forward axis to view direction only, useful for symmetrical objects such as a circle\n//   PointEye    - Align object forward axis to -camera view direction (camera pos - object center), align object up axis to scene view up\n//   PointScreen - Align object forward axis to scene view forward direction (view up ^ view right), align object up axis to scene view up\n//   Axial\x09\x09- Rotate object around up axis, minimizing angle between forward axis and view direction\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementShared.h" },
		{ "None.Name", "EGizmoElementViewAlignType::None" },
		{ "PointEye.Name", "EGizmoElementViewAlignType::PointEye" },
		{ "PointOnly.Name", "EGizmoElementViewAlignType::PointOnly" },
		{ "PointScreen.Name", "EGizmoElementViewAlignType::PointScreen" },
		{ "ToolTip", "View align type: automatically align gizmo element towards a view.\n\n  PointOnly   - Align object forward axis to view direction only, useful for symmetrical objects such as a circle\n  PointEye    - Align object forward axis to -camera view direction (camera pos - object center), align object up axis to scene view up\n  PointScreen - Align object forward axis to scene view forward direction (view up ^ view right), align object up axis to scene view up\n  Axial               - Rotate object around up axis, minimizing angle between forward axis and view direction" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EGizmoElementViewAlignType",
		"EGizmoElementViewAlignType",
		Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementViewAlignType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoElementViewAlignType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementViewAlignType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoElementViewAlignType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGizmoElementPartialType;
	static UEnum* EGizmoElementPartialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EGizmoElementPartialType"));
		}
		return Z_Registration_Info_UEnum_EGizmoElementPartialType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EGizmoElementPartialType>()
	{
		return EGizmoElementPartialType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::Enumerators[] = {
		{ "EGizmoElementPartialType::None", (int64)EGizmoElementPartialType::None },
		{ "EGizmoElementPartialType::Partial", (int64)EGizmoElementPartialType::Partial },
		{ "EGizmoElementPartialType::PartialViewDependent", (int64)EGizmoElementPartialType::PartialViewDependent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Partial type: render partial element for those elements which support it.\n// \n//   Partial\x09\x09\x09\x09- Render partial element.\n//   PartialViewDependent   - Render partial unless view direction aligns with an axis or normal specified by the element type.\n//\n" },
		{ "ModuleRelativePath", "Public/BaseGizmos/GizmoElementShared.h" },
		{ "None.Name", "EGizmoElementPartialType::None" },
		{ "Partial.Name", "EGizmoElementPartialType::Partial" },
		{ "PartialViewDependent.Name", "EGizmoElementPartialType::PartialViewDependent" },
		{ "ToolTip", "Partial type: render partial element for those elements which support it.\n\n  Partial                             - Render partial element.\n  PartialViewDependent   - Render partial unless view direction aligns with an axis or normal specified by the element type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EGizmoElementPartialType",
		"EGizmoElementPartialType",
		Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType()
	{
		if (!Z_Registration_Info_UEnum_EGizmoElementPartialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGizmoElementPartialType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EGizmoElementPartialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGizmoElementPartialType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_Statics::EnumInfo[] = {
		{ EGizmoElementState_StaticEnum, TEXT("EGizmoElementState"), &Z_Registration_Info_UEnum_EGizmoElementState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4178158715U) },
		{ EGizmoElementInteractionState_StaticEnum, TEXT("EGizmoElementInteractionState"), &Z_Registration_Info_UEnum_EGizmoElementInteractionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1160638805U) },
		{ EGizmoElementViewDependentType_StaticEnum, TEXT("EGizmoElementViewDependentType"), &Z_Registration_Info_UEnum_EGizmoElementViewDependentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 537868036U) },
		{ EGizmoElementViewAlignType_StaticEnum, TEXT("EGizmoElementViewAlignType"), &Z_Registration_Info_UEnum_EGizmoElementViewAlignType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4209599927U) },
		{ EGizmoElementPartialType_StaticEnum, TEXT("EGizmoElementPartialType"), &Z_Registration_Info_UEnum_EGizmoElementPartialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3638211013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_3208572960(TEXT("/Script/InteractiveToolsFramework"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseGizmos_GizmoElementShared_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
