// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/WidgetComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ETickMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetGeometryMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetSpace();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetTimingPolicy();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWindowVisibility();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetComponentInstanceData();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetSpace;
	static UEnum* EWidgetSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetSpace, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetSpace"));
		}
		return Z_Registration_Info_UEnum_EWidgetSpace.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetSpace>()
	{
		return EWidgetSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWidgetSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWidgetSpace_Statics::Enumerators[] = {
		{ "EWidgetSpace::World", (int64)EWidgetSpace::World },
		{ "EWidgetSpace::Screen", (int64)EWidgetSpace::Screen },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWidgetSpace_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "Screen.Comment", "/** The widget is rendered in the screen, completely outside of the world, never occluded. */" },
		{ "Screen.Name", "EWidgetSpace::Screen" },
		{ "Screen.ToolTip", "The widget is rendered in the screen, completely outside of the world, never occluded." },
		{ "World.Comment", "/** The widget is rendered in the world as mesh, it can be occluded like any other mesh in the world. */" },
		{ "World.Name", "EWidgetSpace::World" },
		{ "World.ToolTip", "The widget is rendered in the world as mesh, it can be occluded like any other mesh in the world." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWidgetSpace",
		"EWidgetSpace",
		Z_Construct_UEnum_UMG_EWidgetSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWidgetSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWidgetSpace()
	{
		if (!Z_Registration_Info_UEnum_EWidgetSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetSpace.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetTimingPolicy;
	static UEnum* EWidgetTimingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTimingPolicy, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetTimingPolicy"));
		}
		return Z_Registration_Info_UEnum_EWidgetTimingPolicy.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetTimingPolicy>()
	{
		return EWidgetTimingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::Enumerators[] = {
		{ "EWidgetTimingPolicy::RealTime", (int64)EWidgetTimingPolicy::RealTime },
		{ "EWidgetTimingPolicy::GameTime", (int64)EWidgetTimingPolicy::GameTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "GameTime.Comment", "/** The widget will tick using game time, respecting pausing and time dilation. */" },
		{ "GameTime.Name", "EWidgetTimingPolicy::GameTime" },
		{ "GameTime.ToolTip", "The widget will tick using game time, respecting pausing and time dilation." },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "RealTime.Comment", "/** The widget will tick using real time. When not ticking, real time will accumulate and be simulated on the next tick. */" },
		{ "RealTime.Name", "EWidgetTimingPolicy::RealTime" },
		{ "RealTime.ToolTip", "The widget will tick using real time. When not ticking, real time will accumulate and be simulated on the next tick." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWidgetTimingPolicy",
		"EWidgetTimingPolicy",
		Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWidgetTimingPolicy()
	{
		if (!Z_Registration_Info_UEnum_EWidgetTimingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetTimingPolicy.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetTimingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetTimingPolicy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetBlendMode;
	static UEnum* EWidgetBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetBlendMode, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetBlendMode"));
		}
		return Z_Registration_Info_UEnum_EWidgetBlendMode.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetBlendMode>()
	{
		return EWidgetBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::Enumerators[] = {
		{ "EWidgetBlendMode::Opaque", (int64)EWidgetBlendMode::Opaque },
		{ "EWidgetBlendMode::Masked", (int64)EWidgetBlendMode::Masked },
		{ "EWidgetBlendMode::Transparent", (int64)EWidgetBlendMode::Transparent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Masked.Name", "EWidgetBlendMode::Masked" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "Opaque.Name", "EWidgetBlendMode::Opaque" },
		{ "Transparent.Name", "EWidgetBlendMode::Transparent" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWidgetBlendMode",
		"EWidgetBlendMode",
		Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode()
	{
		if (!Z_Registration_Info_UEnum_EWidgetBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetBlendMode.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetBlendMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetGeometryMode;
	static UEnum* EWidgetGeometryMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetGeometryMode, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetGeometryMode"));
		}
		return Z_Registration_Info_UEnum_EWidgetGeometryMode.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWidgetGeometryMode>()
	{
		return EWidgetGeometryMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::Enumerators[] = {
		{ "EWidgetGeometryMode::Plane", (int64)EWidgetGeometryMode::Plane },
		{ "EWidgetGeometryMode::Cylinder", (int64)EWidgetGeometryMode::Cylinder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cylinder.Comment", "/** The widget is mapped onto a cylinder */" },
		{ "Cylinder.Name", "EWidgetGeometryMode::Cylinder" },
		{ "Cylinder.ToolTip", "The widget is mapped onto a cylinder" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "Plane.Comment", "/** The widget is mapped onto a plane */" },
		{ "Plane.Name", "EWidgetGeometryMode::Plane" },
		{ "Plane.ToolTip", "The widget is mapped onto a plane" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWidgetGeometryMode",
		"EWidgetGeometryMode",
		Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWidgetGeometryMode()
	{
		if (!Z_Registration_Info_UEnum_EWidgetGeometryMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetGeometryMode.InnerSingleton, Z_Construct_UEnum_UMG_EWidgetGeometryMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetGeometryMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWindowVisibility;
	static UEnum* EWindowVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWindowVisibility, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EWindowVisibility"));
		}
		return Z_Registration_Info_UEnum_EWindowVisibility.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EWindowVisibility>()
	{
		return EWindowVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EWindowVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EWindowVisibility_Statics::Enumerators[] = {
		{ "EWindowVisibility::Visible", (int64)EWindowVisibility::Visible },
		{ "EWindowVisibility::SelfHitTestInvisible", (int64)EWindowVisibility::SelfHitTestInvisible },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EWindowVisibility_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "SelfHitTestInvisible.Comment", "/** The window visibility is SelfHitTestInvisible */" },
		{ "SelfHitTestInvisible.Name", "EWindowVisibility::SelfHitTestInvisible" },
		{ "SelfHitTestInvisible.ToolTip", "The window visibility is SelfHitTestInvisible" },
		{ "Visible.Comment", "/** The window visibility is Visible */" },
		{ "Visible.Name", "EWindowVisibility::Visible" },
		{ "Visible.ToolTip", "The window visibility is Visible" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EWindowVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EWindowVisibility",
		"EWindowVisibility",
		Z_Construct_UEnum_UMG_EWindowVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWindowVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EWindowVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EWindowVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EWindowVisibility()
	{
		if (!Z_Registration_Info_UEnum_EWindowVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWindowVisibility.InnerSingleton, Z_Construct_UEnum_UMG_EWindowVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWindowVisibility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETickMode;
	static UEnum* ETickMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETickMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETickMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_ETickMode, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("ETickMode"));
		}
		return Z_Registration_Info_UEnum_ETickMode.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<ETickMode>()
	{
		return ETickMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_ETickMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_ETickMode_Statics::Enumerators[] = {
		{ "ETickMode::Disabled", (int64)ETickMode::Disabled },
		{ "ETickMode::Enabled", (int64)ETickMode::Enabled },
		{ "ETickMode::Automatic", (int64)ETickMode::Automatic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_ETickMode_Statics::Enum_MetaDataParams[] = {
		{ "Automatic.Comment", "/** The component is ticked only when needed. i.e. when visible.*/" },
		{ "Automatic.Name", "ETickMode::Automatic" },
		{ "Automatic.ToolTip", "The component is ticked only when needed. i.e. when visible." },
		{ "BlueprintType", "true" },
		{ "Disabled.Comment", "/** The component tick is disabled until re-enabled. */" },
		{ "Disabled.Name", "ETickMode::Disabled" },
		{ "Disabled.ToolTip", "The component tick is disabled until re-enabled." },
		{ "Enabled.Comment", "/** The component is always ticked */" },
		{ "Enabled.Name", "ETickMode::Enabled" },
		{ "Enabled.ToolTip", "The component is always ticked" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_ETickMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"ETickMode",
		"ETickMode",
		Z_Construct_UEnum_UMG_ETickMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ETickMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_ETickMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_ETickMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_ETickMode()
	{
		if (!Z_Registration_Info_UEnum_ETickMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETickMode.InnerSingleton, Z_Construct_UEnum_UMG_ETickMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETickMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UWidgetComponent::execIsWidgetVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetTickMode)
	{
		P_GET_ENUM(ETickMode,Z_Param_InTickMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickMode(ETickMode(Z_Param_InTickMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetWindowVisibility)
	{
		P_GET_ENUM(EWindowVisibility,Z_Param_InVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWindowVisibility(EWindowVisibility(Z_Param_InVisibility));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetWindowVisiblility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWindowVisibility*)Z_Param__Result=P_THIS->GetWindowVisiblility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetWindowFocusable)
	{
		P_GET_UBOOL(Z_Param_bInWindowFocusable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWindowFocusable(Z_Param_bInWindowFocusable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetWindowFocusable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetWindowFocusable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetCylinderArcAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InCylinderArcAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCylinderArcAngle(Z_Param_InCylinderArcAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetCylinderArcAngle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCylinderArcAngle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetGeometryMode)
	{
		P_GET_ENUM(EWidgetGeometryMode,Z_Param_InGeometryMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGeometryMode(EWidgetGeometryMode(Z_Param_InGeometryMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetGeometryMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWidgetGeometryMode*)Z_Param__Result=P_THIS->GetGeometryMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetWidgetSpace)
	{
		P_GET_ENUM(EWidgetSpace,Z_Param_NewSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetSpace(EWidgetSpace(Z_Param_NewSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetWidgetSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWidgetSpace*)Z_Param__Result=P_THIS->GetWidgetSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetRedrawTime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRedrawTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRedrawTime(Z_Param_InRedrawTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetRedrawTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRedrawTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetDrawAtDesiredSize)
	{
		P_GET_UBOOL(Z_Param_bInDrawAtDesiredSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawAtDesiredSize(Z_Param_bInDrawAtDesiredSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetDrawAtDesiredSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetDrawAtDesiredSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetPivot)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_InPivot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPivot(Z_Param_Out_InPivot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetPivot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetPivot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetTintColorAndOpacity)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewTintColorAndOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTintColorAndOpacity(Z_Param_NewTintColorAndOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetBackgroundColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewBackgroundColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackgroundColor(Z_Param_NewBackgroundColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetTickWhenOffscreen)
	{
		P_GET_UBOOL(Z_Param_bWantTickWhenOffscreen);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTickWhenOffscreen(Z_Param_bWantTickWhenOffscreen);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetTickWhenOffscreen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTickWhenOffscreen();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetTwoSided)
	{
		P_GET_UBOOL(Z_Param_bWantTwoSided);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTwoSided(Z_Param_bWantTwoSided);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetTwoSided)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetTwoSided();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execRequestRenderUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRenderUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execRequestRedraw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRedraw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetDrawSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Size);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDrawSize(Z_Param_Size);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetCurrentDrawSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetCurrentDrawSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetDrawSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetDrawSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetOwnerPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULocalPlayer**)Z_Param__Result=P_THIS->GetOwnerPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetManuallyRedraw)
	{
		P_GET_UBOOL(Z_Param_bUseManualRedraw);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetManuallyRedraw(Z_Param_bUseManualRedraw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetManuallyRedraw)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetManuallyRedraw();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetOwnerPlayer)
	{
		P_GET_OBJECT(ULocalPlayer,Z_Param_LocalPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwnerPlayer(Z_Param_LocalPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execSetWidget)
	{
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidget(Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetMaterialInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetMaterialInstance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetRenderTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetComponent::execGetUserWidgetObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidgetObject();
		P_NATIVE_END;
	}
	void UWidgetComponent::StaticRegisterNativesUWidgetComponent()
	{
		UClass* Class = UWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentDrawSize", &UWidgetComponent::execGetCurrentDrawSize },
			{ "GetCylinderArcAngle", &UWidgetComponent::execGetCylinderArcAngle },
			{ "GetDrawAtDesiredSize", &UWidgetComponent::execGetDrawAtDesiredSize },
			{ "GetDrawSize", &UWidgetComponent::execGetDrawSize },
			{ "GetGeometryMode", &UWidgetComponent::execGetGeometryMode },
			{ "GetManuallyRedraw", &UWidgetComponent::execGetManuallyRedraw },
			{ "GetMaterialInstance", &UWidgetComponent::execGetMaterialInstance },
			{ "GetOwnerPlayer", &UWidgetComponent::execGetOwnerPlayer },
			{ "GetPivot", &UWidgetComponent::execGetPivot },
			{ "GetRedrawTime", &UWidgetComponent::execGetRedrawTime },
			{ "GetRenderTarget", &UWidgetComponent::execGetRenderTarget },
			{ "GetTickWhenOffscreen", &UWidgetComponent::execGetTickWhenOffscreen },
			{ "GetTwoSided", &UWidgetComponent::execGetTwoSided },
			{ "GetUserWidgetObject", &UWidgetComponent::execGetUserWidgetObject },
			{ "GetWidget", &UWidgetComponent::execGetWidget },
			{ "GetWidgetSpace", &UWidgetComponent::execGetWidgetSpace },
			{ "GetWindowFocusable", &UWidgetComponent::execGetWindowFocusable },
			{ "GetWindowVisiblility", &UWidgetComponent::execGetWindowVisiblility },
			{ "IsWidgetVisible", &UWidgetComponent::execIsWidgetVisible },
			{ "RequestRedraw", &UWidgetComponent::execRequestRedraw },
			{ "RequestRenderUpdate", &UWidgetComponent::execRequestRenderUpdate },
			{ "SetBackgroundColor", &UWidgetComponent::execSetBackgroundColor },
			{ "SetCylinderArcAngle", &UWidgetComponent::execSetCylinderArcAngle },
			{ "SetDrawAtDesiredSize", &UWidgetComponent::execSetDrawAtDesiredSize },
			{ "SetDrawSize", &UWidgetComponent::execSetDrawSize },
			{ "SetGeometryMode", &UWidgetComponent::execSetGeometryMode },
			{ "SetManuallyRedraw", &UWidgetComponent::execSetManuallyRedraw },
			{ "SetOwnerPlayer", &UWidgetComponent::execSetOwnerPlayer },
			{ "SetPivot", &UWidgetComponent::execSetPivot },
			{ "SetRedrawTime", &UWidgetComponent::execSetRedrawTime },
			{ "SetTickMode", &UWidgetComponent::execSetTickMode },
			{ "SetTickWhenOffscreen", &UWidgetComponent::execSetTickWhenOffscreen },
			{ "SetTintColorAndOpacity", &UWidgetComponent::execSetTintColorAndOpacity },
			{ "SetTwoSided", &UWidgetComponent::execSetTwoSided },
			{ "SetWidget", &UWidgetComponent::execSetWidget },
			{ "SetWidgetSpace", &UWidgetComponent::execSetWidgetSpace },
			{ "SetWindowFocusable", &UWidgetComponent::execSetWindowFocusable },
			{ "SetWindowVisibility", &UWidgetComponent::execSetWindowVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics
	{
		struct WidgetComponent_eventGetCurrentDrawSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetCurrentDrawSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns the \"actual\" draw size of the quad in the world */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the \"actual\" draw size of the quad in the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetCurrentDrawSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::WidgetComponent_eventGetCurrentDrawSize_Parms), Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics
	{
		struct WidgetComponent_eventGetCylinderArcAngle_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetCylinderArcAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise.  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetCylinderArcAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::WidgetComponent_eventGetCylinderArcAngle_Parms), Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics
	{
		struct WidgetComponent_eventGetDrawAtDesiredSize_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetDrawAtDesiredSize_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventGetDrawAtDesiredSize_Parms), &Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetDrawAtDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::WidgetComponent_eventGetDrawAtDesiredSize_Parms), Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics
	{
		struct WidgetComponent_eventGetDrawSize_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetDrawSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns the \"specified\" draw size of the quad in the world */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the \"specified\" draw size of the quad in the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetDrawSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::WidgetComponent_eventGetDrawSize_Parms), Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics
	{
		struct WidgetComponent_eventGetGeometryMode_Parms
		{
			EWidgetGeometryMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetGeometryMode_Parms, ReturnValue), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(nullptr, 0) }; // 2061863141
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** @see EWidgetGeometryMode, @see GetCylinderArcAngle() */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see EWidgetGeometryMode, @see GetCylinderArcAngle()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetGeometryMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::WidgetComponent_eventGetGeometryMode_Parms), Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetGeometryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetGeometryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics
	{
		struct WidgetComponent_eventGetManuallyRedraw_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetManuallyRedraw_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventGetManuallyRedraw_Parms), &Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** @see bManuallyRedraw */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bManuallyRedraw" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetManuallyRedraw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::WidgetComponent_eventGetManuallyRedraw_Parms), Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics
	{
		struct WidgetComponent_eventGetMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns the dynamic material instance used to render the user widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the dynamic material instance used to render the user widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::WidgetComponent_eventGetMaterialInstance_Parms), Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics
	{
		struct WidgetComponent_eventGetOwnerPlayer_Parms
		{
			ULocalPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetOwnerPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Gets the local player that owns this widget component. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets the local player that owns this widget component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetOwnerPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::WidgetComponent_eventGetOwnerPlayer_Parms), Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics
	{
		struct WidgetComponent_eventGetPivot_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetPivot_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns the pivot point where the UI is rendered about the origin. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the pivot point where the UI is rendered about the origin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::WidgetComponent_eventGetPivot_Parms), Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics
	{
		struct WidgetComponent_eventGetRedrawTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetRedrawTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetRedrawTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::WidgetComponent_eventGetRedrawTime_Parms), Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetRedrawTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetRedrawTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics
	{
		struct WidgetComponent_eventGetRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns the render target to which the user widget is rendered */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the render target to which the user widget is rendered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::WidgetComponent_eventGetRenderTarget_Parms), Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics
	{
		struct WidgetComponent_eventGetTickWhenOffscreen_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetTickWhenOffscreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventGetTickWhenOffscreen_Parms), &Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Gets whether the widget ticks when offscreen or not */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets whether the widget ticks when offscreen or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetTickWhenOffscreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::WidgetComponent_eventGetTickWhenOffscreen_Parms), Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics
	{
		struct WidgetComponent_eventGetTwoSided_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetTwoSided_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventGetTwoSided_Parms), &Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Gets whether the widget is two-sided or not */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets whether the widget is two-sided or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::WidgetComponent_eventGetTwoSided_Parms), Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics
	{
		struct WidgetComponent_eventGetUserWidgetObject_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetUserWidgetObject_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns the user widget object displayed by this component */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns the user widget object displayed by this component" },
		{ "UnsafeDuringActorConstruction", "TRUE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetUserWidgetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::WidgetComponent_eventGetUserWidgetObject_Parms), Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics
	{
		struct WidgetComponent_eventGetWidget_Parms
		{
			UUserWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  \n\x09 *  Gets the widget that is used by this Widget Component. It will be null if a Slate Widget was set using SetSlateWidget function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets the widget that is used by this Widget Component. It will be null if a Slate Widget was set using SetSlateWidget function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::WidgetComponent_eventGetWidget_Parms), Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics
	{
		struct WidgetComponent_eventGetWidgetSpace_Parms
		{
			EWidgetSpace ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetWidgetSpace_Parms, ReturnValue), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(nullptr, 0) }; // 253691217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetWidgetSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::WidgetComponent_eventGetWidgetSpace_Parms), Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics
	{
		struct WidgetComponent_eventGetWindowFocusable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventGetWindowFocusable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventGetWindowFocusable_Parms), &Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** @see bWindowFocusable */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bWindowFocusable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetWindowFocusable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::WidgetComponent_eventGetWindowFocusable_Parms), Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics
	{
		struct WidgetComponent_eventGetWindowVisiblility_Parms
		{
			EWindowVisibility ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetWindowVisiblility_Parms, ReturnValue), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(nullptr, 0) }; // 2301094419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Gets the visibility of the virtual window created to host the widget focusable. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Gets the visibility of the virtual window created to host the widget focusable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "GetWindowVisiblility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::WidgetComponent_eventGetWindowVisiblility_Parms), Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics
	{
		struct WidgetComponent_eventIsWidgetVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WidgetComponent_eventIsWidgetVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventIsWidgetVisible_Parms), &Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Returns true if the the Slate window is visible and that the widget is also visible, false otherwise. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Returns true if the the Slate window is visible and that the widget is also visible, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "IsWidgetVisible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::WidgetComponent_eventIsWidgetVisible_Parms), Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Requests that the widget be redrawn.  */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use RequestRenderUpdate instead" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Requests that the widget be redrawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "RequestRedraw", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_RequestRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_RequestRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Requests that the widget have it's render target updated, if TickMode is disabled, this will force a tick to happen to update the render target. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Requests that the widget have it's render target updated, if TickMode is disabled, this will force a tick to happen to update the render target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "RequestRenderUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics
	{
		struct WidgetComponent_eventSetBackgroundColor_Parms
		{
			FLinearColor NewBackgroundColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewBackgroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor = { "NewBackgroundColor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetBackgroundColor_Parms, NewBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::NewProp_NewBackgroundColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Sets the background color and opacityscale for this widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the background color and opacityscale for this widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetBackgroundColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::WidgetComponent_eventSetBackgroundColor_Parms), Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics
	{
		struct WidgetComponent_eventSetCylinderArcAngle_Parms
		{
			float InCylinderArcAngle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InCylinderArcAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InCylinderArcAngle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle = { "InCylinderArcAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetCylinderArcAngle_Parms, InCylinderArcAngle), METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::NewProp_InCylinderArcAngle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise.  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetCylinderArcAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::WidgetComponent_eventSetCylinderArcAngle_Parms), Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics
	{
		struct WidgetComponent_eventSetDrawAtDesiredSize_Parms
		{
			bool bInDrawAtDesiredSize;
		};
		static void NewProp_bInDrawAtDesiredSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInDrawAtDesiredSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_bInDrawAtDesiredSize_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetDrawAtDesiredSize_Parms*)Obj)->bInDrawAtDesiredSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_bInDrawAtDesiredSize = { "bInDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventSetDrawAtDesiredSize_Parms), &Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_bInDrawAtDesiredSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::NewProp_bInDrawAtDesiredSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetDrawAtDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::WidgetComponent_eventSetDrawAtDesiredSize_Parms), Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics
	{
		struct WidgetComponent_eventSetDrawSize_Parms
		{
			FVector2D Size;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetDrawSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::NewProp_Size,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Sets the draw size of the quad in the world */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the draw size of the quad in the world" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetDrawSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::WidgetComponent_eventSetDrawSize_Parms), Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetDrawSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics
	{
		struct WidgetComponent_eventSetGeometryMode_Parms
		{
			EWidgetGeometryMode InGeometryMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGeometryMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InGeometryMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode = { "InGeometryMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetGeometryMode_Parms, InGeometryMode), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(nullptr, 0) }; // 2061863141
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::NewProp_InGeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetGeometryMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::WidgetComponent_eventSetGeometryMode_Parms), Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetGeometryMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetGeometryMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics
	{
		struct WidgetComponent_eventSetManuallyRedraw_Parms
		{
			bool bUseManualRedraw;
		};
		static void NewProp_bUseManualRedraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManualRedraw;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetManuallyRedraw_Parms*)Obj)->bUseManualRedraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw = { "bUseManualRedraw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventSetManuallyRedraw_Parms), &Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::NewProp_bUseManualRedraw,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** @see bManuallyRedraw */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bManuallyRedraw" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetManuallyRedraw", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::WidgetComponent_eventSetManuallyRedraw_Parms), Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics
	{
		struct WidgetComponent_eventSetOwnerPlayer_Parms
		{
			ULocalPlayer* LocalPlayer;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::NewProp_LocalPlayer = { "LocalPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetOwnerPlayer_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::NewProp_LocalPlayer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * Sets the local player that owns this widget component.  Setting the owning player controls\n\x09 * which player's viewport the widget appears on in a split screen scenario.  Additionally it\n\x09 * forwards the owning player to the actual UserWidget that is spawned.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the local player that owns this widget component.  Setting the owning player controls\nwhich player's viewport the widget appears on in a split screen scenario.  Additionally it\nforwards the owning player to the actual UserWidget that is spawned." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetOwnerPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::WidgetComponent_eventSetOwnerPlayer_Parms), Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics
	{
		struct WidgetComponent_eventSetPivot_Parms
		{
			FVector2D InPivot;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InPivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InPivot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot = { "InPivot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetPivot_Parms, InPivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::NewProp_InPivot,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::WidgetComponent_eventSetPivot_Parms), Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics
	{
		struct WidgetComponent_eventSetRedrawTime_Parms
		{
			float InRedrawTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InRedrawTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::NewProp_InRedrawTime = { "InRedrawTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetRedrawTime_Parms, InRedrawTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::NewProp_InRedrawTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetRedrawTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::WidgetComponent_eventSetRedrawTime_Parms), Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetRedrawTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetRedrawTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics
	{
		struct WidgetComponent_eventSetTickMode_Parms
		{
			ETickMode InTickMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InTickMode_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InTickMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::NewProp_InTickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::NewProp_InTickMode = { "InTickMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetTickMode_Parms, InTickMode), Z_Construct_UEnum_UMG_ETickMode, METADATA_PARAMS(nullptr, 0) }; // 424906096
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::NewProp_InTickMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::NewProp_InTickMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Sets the Tick mode of the Widget Component.*/" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the Tick mode of the Widget Component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTickMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::WidgetComponent_eventSetTickMode_Parms), Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTickMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTickMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics
	{
		struct WidgetComponent_eventSetTickWhenOffscreen_Parms
		{
			bool bWantTickWhenOffscreen;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantTickWhenOffscreen_MetaData[];
#endif
		static void NewProp_bWantTickWhenOffscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTickWhenOffscreen;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetTickWhenOffscreen_Parms*)Obj)->bWantTickWhenOffscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen = { "bWantTickWhenOffscreen", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventSetTickWhenOffscreen_Parms), &Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::NewProp_bWantTickWhenOffscreen,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Sets whether the widget ticks when offscreen or not */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets whether the widget ticks when offscreen or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTickWhenOffscreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::WidgetComponent_eventSetTickWhenOffscreen_Parms), Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics
	{
		struct WidgetComponent_eventSetTintColorAndOpacity_Parms
		{
			FLinearColor NewTintColorAndOpacity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewTintColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTintColorAndOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity = { "NewTintColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetTintColorAndOpacity_Parms, NewTintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::NewProp_NewTintColorAndOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Sets the tint color and opacity scale for this widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the tint color and opacity scale for this widget" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTintColorAndOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::WidgetComponent_eventSetTintColorAndOpacity_Parms), Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics
	{
		struct WidgetComponent_eventSetTwoSided_Parms
		{
			bool bWantTwoSided;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantTwoSided_MetaData[];
#endif
		static void NewProp_bWantTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantTwoSided;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetTwoSided_Parms*)Obj)->bWantTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided = { "bWantTwoSided", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventSetTwoSided_Parms), &Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::NewProp_bWantTwoSided,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Sets whether the widget is two-sided or not */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets whether the widget is two-sided or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetTwoSided", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::WidgetComponent_eventSetTwoSided_Parms), Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTwoSided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetTwoSided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics
	{
		struct WidgetComponent_eventSetWidget_Parms
		{
			UUserWidget* Widget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**  \n\x09 *  Sets the widget to use directly. This function will keep track of the widget till the next time it's called\n\x09 *\x09with either a newer widget or a nullptr\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the widget to use directly. This function will keep track of the widget till the next time it's called\n    with either a newer widget or a nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::WidgetComponent_eventSetWidget_Parms), Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics
	{
		struct WidgetComponent_eventSetWidgetSpace_Parms
		{
			EWidgetSpace NewSpace;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewSpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace = { "NewSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetWidgetSpace_Parms, NewSpace), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(nullptr, 0) }; // 253691217
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::NewProp_NewSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWidgetSpace", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::WidgetComponent_eventSetWidgetSpace_Parms), Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics
	{
		struct WidgetComponent_eventSetWindowFocusable_Parms
		{
			bool bInWindowFocusable;
		};
		static void NewProp_bInWindowFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWindowFocusable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable_SetBit(void* Obj)
	{
		((WidgetComponent_eventSetWindowFocusable_Parms*)Obj)->bInWindowFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable = { "bInWindowFocusable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WidgetComponent_eventSetWindowFocusable_Parms), &Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::NewProp_bInWindowFocusable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** @see bWindowFocusable */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "@see bWindowFocusable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWindowFocusable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::WidgetComponent_eventSetWindowFocusable_Parms), Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics
	{
		struct WidgetComponent_eventSetWindowVisibility_Parms
		{
			EWindowVisibility InVisibility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InVisibility_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::NewProp_InVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::NewProp_InVisibility = { "InVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetWindowVisibility_Parms, InVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(nullptr, 0) }; // 2301094419
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::NewProp_InVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::NewProp_InVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Sets the visibility of the virtual window created to host the widget focusable. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the visibility of the virtual window created to host the widget focusable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, nullptr, "SetWindowVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::WidgetComponent_eventSetWindowVisibility_Parms), Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetComponent);
	UClass* Z_Construct_UClass_UWidgetComponent_NoRegister()
	{
		return UWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TimingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TimingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bManuallyRedraw_MetaData[];
#endif
		static void NewProp_bManuallyRedraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bManuallyRedraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRedrawRequested_MetaData[];
#endif
		static void NewProp_bRedrawRequested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRedrawRequested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedrawTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RedrawTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentDrawSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[];
#endif
		static void NewProp_bDrawAtDesiredSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[];
#endif
		static void NewProp_bReceiveHardwareInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[];
#endif
		static void NewProp_bWindowFocusable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WindowVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindowVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WindowVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGammaCorrection_MetaData[];
#endif
		static void NewProp_bApplyGammaCorrection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGammaCorrection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnerPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TintColorAndOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TintColorAndOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpacityFromTexture_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityFromTexture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTwoSided_MetaData[];
#endif
		static void NewProp_bIsTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickWhenOffscreen_MetaData[];
#endif
		static void NewProp_TickWhenOffscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TickWhenOffscreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BodySetup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_OneSided_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentMaterial_OneSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpaqueMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_OneSided_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OpaqueMaterial_OneSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskedMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_OneSided_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskedMaterial_OneSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddedToScreen_MetaData[];
#endif
		static void NewProp_bAddedToScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddedToScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditTimeUsable_MetaData[];
#endif
		static void NewProp_bEditTimeUsable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditTimeUsable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SharedLayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LayerZOrder;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GeometryMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GeometryMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CylinderArcAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CylinderArcAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Widget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetComponent_GetCurrentDrawSize, "GetCurrentDrawSize" }, // 1945956306
		{ &Z_Construct_UFunction_UWidgetComponent_GetCylinderArcAngle, "GetCylinderArcAngle" }, // 543993549
		{ &Z_Construct_UFunction_UWidgetComponent_GetDrawAtDesiredSize, "GetDrawAtDesiredSize" }, // 1599197664
		{ &Z_Construct_UFunction_UWidgetComponent_GetDrawSize, "GetDrawSize" }, // 2343943870
		{ &Z_Construct_UFunction_UWidgetComponent_GetGeometryMode, "GetGeometryMode" }, // 2631013037
		{ &Z_Construct_UFunction_UWidgetComponent_GetManuallyRedraw, "GetManuallyRedraw" }, // 609153099
		{ &Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance, "GetMaterialInstance" }, // 2622869833
		{ &Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer, "GetOwnerPlayer" }, // 3864095571
		{ &Z_Construct_UFunction_UWidgetComponent_GetPivot, "GetPivot" }, // 2810653309
		{ &Z_Construct_UFunction_UWidgetComponent_GetRedrawTime, "GetRedrawTime" }, // 1225139548
		{ &Z_Construct_UFunction_UWidgetComponent_GetRenderTarget, "GetRenderTarget" }, // 4030081636
		{ &Z_Construct_UFunction_UWidgetComponent_GetTickWhenOffscreen, "GetTickWhenOffscreen" }, // 514918222
		{ &Z_Construct_UFunction_UWidgetComponent_GetTwoSided, "GetTwoSided" }, // 1294811221
		{ &Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject, "GetUserWidgetObject" }, // 3064298831
		{ &Z_Construct_UFunction_UWidgetComponent_GetWidget, "GetWidget" }, // 4228852000
		{ &Z_Construct_UFunction_UWidgetComponent_GetWidgetSpace, "GetWidgetSpace" }, // 1451240417
		{ &Z_Construct_UFunction_UWidgetComponent_GetWindowFocusable, "GetWindowFocusable" }, // 2237423971
		{ &Z_Construct_UFunction_UWidgetComponent_GetWindowVisiblility, "GetWindowVisiblility" }, // 2353081877
		{ &Z_Construct_UFunction_UWidgetComponent_IsWidgetVisible, "IsWidgetVisible" }, // 851174151
		{ &Z_Construct_UFunction_UWidgetComponent_RequestRedraw, "RequestRedraw" }, // 4271455967
		{ &Z_Construct_UFunction_UWidgetComponent_RequestRenderUpdate, "RequestRenderUpdate" }, // 3408451265
		{ &Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor, "SetBackgroundColor" }, // 1469988143
		{ &Z_Construct_UFunction_UWidgetComponent_SetCylinderArcAngle, "SetCylinderArcAngle" }, // 2800682058
		{ &Z_Construct_UFunction_UWidgetComponent_SetDrawAtDesiredSize, "SetDrawAtDesiredSize" }, // 2539177256
		{ &Z_Construct_UFunction_UWidgetComponent_SetDrawSize, "SetDrawSize" }, // 1871499489
		{ &Z_Construct_UFunction_UWidgetComponent_SetGeometryMode, "SetGeometryMode" }, // 2002300069
		{ &Z_Construct_UFunction_UWidgetComponent_SetManuallyRedraw, "SetManuallyRedraw" }, // 138989103
		{ &Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer, "SetOwnerPlayer" }, // 1387014630
		{ &Z_Construct_UFunction_UWidgetComponent_SetPivot, "SetPivot" }, // 2903421343
		{ &Z_Construct_UFunction_UWidgetComponent_SetRedrawTime, "SetRedrawTime" }, // 539536349
		{ &Z_Construct_UFunction_UWidgetComponent_SetTickMode, "SetTickMode" }, // 3628215761
		{ &Z_Construct_UFunction_UWidgetComponent_SetTickWhenOffscreen, "SetTickWhenOffscreen" }, // 3840161138
		{ &Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity, "SetTintColorAndOpacity" }, // 1261857732
		{ &Z_Construct_UFunction_UWidgetComponent_SetTwoSided, "SetTwoSided" }, // 139519233
		{ &Z_Construct_UFunction_UWidgetComponent_SetWidget, "SetWidget" }, // 1398952389
		{ &Z_Construct_UFunction_UWidgetComponent_SetWidgetSpace, "SetWidgetSpace" }, // 3015291022
		{ &Z_Construct_UFunction_UWidgetComponent_SetWindowFocusable, "SetWindowFocusable" }, // 2894722295
		{ &Z_Construct_UFunction_UWidgetComponent_SetWindowVisibility, "SetWindowVisibility" }, // 3188965567
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "UserInterface" },
		{ "Comment", "/**\n * The widget component provides a surface in the 3D environment on which to render widgets normally rendered to the screen.\n * Widgets are first rendered to a render target, then that render target is displayed in the world.\n * \n * Material Properties set by this component on whatever material overrides the default.\n * SlateUI [Texture]\n * BackColor [Vector]\n * TintColorAndOpacity [Vector]\n * OpacityFromTexture [Scalar]\n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "Components/WidgetComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The widget component provides a surface in the 3D environment on which to render widgets normally rendered to the screen.\nWidgets are first rendered to a render target, then that render target is displayed in the world.\n\nMaterial Properties set by this component on whatever material overrides the default.\nSlateUI [Texture]\nBackColor [Vector]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** The coordinate space in which to render the widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The coordinate space in which to render the widget" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, Space), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_MetaData)) }; // 253691217
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** How this widget should deal with timing, pausing, etc. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "How this widget should deal with timing, pausing, etc." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy = { "TimingPolicy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, TimingPolicy), Z_Construct_UEnum_UMG_EWidgetTimingPolicy, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_MetaData)) }; // 1534395114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** The class of User Widget to create and display an instance of */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The class of User Widget to create and display an instance of" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** The size of the displayed quad. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The size of the displayed quad." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize = { "DrawSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, DrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Should we wait to be told to redraw to actually draw? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Should we wait to be told to redraw to actually draw?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bManuallyRedraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw = { "bManuallyRedraw", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData[] = {
		{ "Comment", "/** Has anyone requested we redraw? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Has anyone requested we redraw?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bRedrawRequested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested = { "bRedrawRequested", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * The time in between draws, if 0 - we would redraw every frame.  If 1, we would redraw every second.\n\x09 * This will work with bManuallyRedraw as well.  So you can say, manually redraw, but only redraw at this\n\x09 * maximum rate.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The time in between draws, if 0 - we would redraw every frame.  If 1, we would redraw every second.\nThis will work with bManuallyRedraw as well.  So you can say, manually redraw, but only redraw at this\nmaximum rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime = { "RedrawTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, RedrawTime), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData[] = {
		{ "Comment", "/**\n\x09 * The actual draw size, this changes based on DrawSize - or the desired size of the widget if\n\x09 * bDrawAtDesiredSize is true.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The actual draw size, this changes based on DrawSize - or the desired size of the widget if\nbDrawAtDesiredSize is true." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize = { "CurrentDrawSize", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, CurrentDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * Causes the render target to automatically match the desired size.\n\x09 * \n\x09 * WARNING: If you change this every frame, it will be very expensive.  If you need \n\x09 *    that effect, you should keep the outer widget's sized locked and dynamically\n\x09 *    scale or resize some inner widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Causes the render target to automatically match the desired size.\n\nWARNING: If you change this every frame, it will be very expensive.  If you need\n   that effect, you should keep the outer widget's sized locked and dynamically\n   scale or resize some inner widget." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bDrawAtDesiredSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize = { "bDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** The Alignment/Pivot point that the widget is placed at relative to the position. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The Alignment/Pivot point that the widget is placed at relative to the position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/**\n\x09 * Register with the viewport for hardware input from the true mouse and keyboard.  These widgets\n\x09 * will more or less react like regular 2D widgets in the viewport, e.g. they can and will steal focus\n\x09 * from the viewport.\n\x09 * \n\x09 * WARNING: If you are making a VR game, definitely do not change this to true.  This option should ONLY be used\n\x09 * if you're making what would otherwise be a normal menu for a game, just in 3D.  If you also need the game to \n\x09 * remain responsive and for the player to be able to interact with UI and move around the world (such as a keypad on a door), \n\x09 * use the WidgetInteractionComponent instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Register with the viewport for hardware input from the true mouse and keyboard.  These widgets\nwill more or less react like regular 2D widgets in the viewport, e.g. they can and will steal focus\nfrom the viewport.\n\nWARNING: If you are making a VR game, definitely do not change this to true.  This option should ONLY be used\nif you're making what would otherwise be a normal menu for a game, just in 3D.  If you also need the game to\nremain responsive and for the player to be able to interact with UI and move around the world (such as a keypad on a door),\nuse the WidgetInteractionComponent instead." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bReceiveHardwareInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput = { "bReceiveHardwareInput", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Is the virtual window created to host the widget focusable? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bWindowFocusable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable = { "bWindowFocusable", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** The visibility of the virtual window created to host the widget */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The visibility of the virtual window created to host the widget" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility = { "WindowVisibility", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, WindowVisibility), Z_Construct_UEnum_UMG_EWindowVisibility, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility_MetaData)) }; // 2301094419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/**\n\x09 * Widget components that appear in the world will be gamma corrected by the 3D renderer.\n\x09 * In some cases, widget components are blitted directly into the backbuffer, in which case gamma correction should be enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Widget components that appear in the world will be gamma corrected by the 3D renderer.\nIn some cases, widget components are blitted directly into the backbuffer, in which case gamma correction should be enabled." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bApplyGammaCorrection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection = { "bApplyGammaCorrection", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData[] = {
		{ "Comment", "/**\n\x09 * The owner player for a widget component, if this widget is drawn on the screen, this controls\n\x09 * what player's screen it appears on for split screen, if not set, users player 0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The owner player for a widget component, if this widget is drawn on the screen, this controls\nwhat player's screen it appears on for split screen, if not set, users player 0." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer = { "OwnerPlayer", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, OwnerPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The background color of the component */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The background color of the component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Tint color and opacity for this component */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Tint color and opacity for this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity = { "TintColorAndOpacity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, TintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0) */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture = { "OpacityFromTexture", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, OpacityFromTexture), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The blend mode for the widget. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The blend mode for the widget." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, BlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_MetaData)) }; // 279818417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Is the component visible from behind? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Is the component visible from behind?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bIsTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided = { "bIsTwoSided", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Should the component tick the widget when it's off screen? */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Should the component tick the widget when it's off screen?" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->TickWhenOffscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen = { "TickWhenOffscreen", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Comment", "/** The body setup of the displayed quad */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The body setup of the displayed quad" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData[] = {
		{ "Comment", "/** The material instance for translucent widget components */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for translucent widget components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial = { "TranslucentMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData[] = {
		{ "Comment", "/** The material instance for translucent, one-sided widget components */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for translucent, one-sided widget components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided = { "TranslucentMaterial_OneSided", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData[] = {
		{ "Comment", "/** The material instance for opaque widget components */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for opaque widget components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial = { "OpaqueMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData[] = {
		{ "Comment", "/** The material instance for opaque, one-sided widget components */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for opaque, one-sided widget components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided = { "OpaqueMaterial_OneSided", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData[] = {
		{ "Comment", "/** The material instance for masked widget components. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for masked widget components." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial = { "MaskedMaterial", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, MaskedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData[] = {
		{ "Comment", "/** The material instance for masked, one-sided widget components. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The material instance for masked, one-sided widget components." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided = { "MaskedMaterial_OneSided", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, MaskedMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Comment", "/** The target to which the user widget is rendered */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The target to which the user widget is rendered" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "Comment", "/** The dynamic instance of the material that the render target is attached to */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The dynamic instance of the material that the render target is attached to" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bAddedToScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen = { "bAddedToScreen", nullptr, (EPropertyFlags)0x0020080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData[] = {
		{ "Comment", "/**\n\x09 * Allows the widget component to be used at editor time.  For use in the VR-Editor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Allows the widget component to be used at editor time.  For use in the VR-Editor." },
	};
#endif
	void Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit(void* Obj)
	{
		((UWidgetComponent*)Obj)->bEditTimeUsable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable = { "bEditTimeUsable", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWidgetComponent), &Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName_MetaData[] = {
		{ "Category", "Layers" },
		{ "Comment", "/** Layer Name the widget will live on */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Layer Name the widget will live on" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName = { "SharedLayerName", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, SharedLayerName), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder_MetaData[] = {
		{ "Category", "Layers" },
		{ "Comment", "/** ZOrder the layer will be created on, note this only matters on the first time a new layer is created, subsequent additions to the same layer will use the initially defined ZOrder */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "ZOrder the layer will be created on, note this only matters on the first time a new layer is created, subsequent additions to the same layer will use the initially defined ZOrder" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder = { "LayerZOrder", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, LayerZOrder), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "Comment", "/** Controls the geometry of the widget component. See EWidgetGeometryMode. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Controls the geometry of the widget component. See EWidgetGeometryMode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode = { "GeometryMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, GeometryMode), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_MetaData)) }; // 2061863141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "/** Curvature of a cylindrical widget in degrees. */" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "Curvature of a cylindrical widget in degrees." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle = { "CylinderArcAngle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, CylinderArcAngle), METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode = { "TickMode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, TickMode), Z_Construct_UEnum_UMG_ETickMode, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode_MetaData)) }; // 424906096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget_MetaData[] = {
		{ "Comment", "/** The User Widget object displayed and managed by this component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
		{ "ToolTip", "The User Widget object displayed and managed by this component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetComponent, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TimingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_DrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bManuallyRedraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bRedrawRequested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RedrawTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CurrentDrawSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bDrawAtDesiredSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bReceiveHardwareInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bWindowFocusable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_WindowVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bApplyGammaCorrection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OwnerPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TintColorAndOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpacityFromTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bIsTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickWhenOffscreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_BodySetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TranslucentMaterial_OneSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_OpaqueMaterial_OneSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaskedMaterial_OneSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bAddedToScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_bEditTimeUsable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_SharedLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_LayerZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_GeometryMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_CylinderArcAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_TickMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetComponent_Statics::NewProp_Widget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetComponent_Statics::ClassParams = {
		&UWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetComponent.OuterSingleton, Z_Construct_UClass_UWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetComponent.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetComponent>()
	{
		return UWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetComponent);
	UWidgetComponent::~UWidgetComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetComponent)

static_assert(std::is_polymorphic<FWidgetComponentInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FWidgetComponentInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData;
class UScriptStruct* FWidgetComponentInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetComponentInstanceData, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetComponentInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetComponentInstanceData>()
{
	return FWidgetComponentInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetComponentInstanceData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"WidgetComponentInstanceData",
		sizeof(FWidgetComponentInstanceData),
		alignof(FWidgetComponentInstanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetComponentInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::EnumInfo[] = {
		{ EWidgetSpace_StaticEnum, TEXT("EWidgetSpace"), &Z_Registration_Info_UEnum_EWidgetSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 253691217U) },
		{ EWidgetTimingPolicy_StaticEnum, TEXT("EWidgetTimingPolicy"), &Z_Registration_Info_UEnum_EWidgetTimingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1534395114U) },
		{ EWidgetBlendMode_StaticEnum, TEXT("EWidgetBlendMode"), &Z_Registration_Info_UEnum_EWidgetBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 279818417U) },
		{ EWidgetGeometryMode_StaticEnum, TEXT("EWidgetGeometryMode"), &Z_Registration_Info_UEnum_EWidgetGeometryMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2061863141U) },
		{ EWindowVisibility_StaticEnum, TEXT("EWindowVisibility"), &Z_Registration_Info_UEnum_EWindowVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2301094419U) },
		{ ETickMode_StaticEnum, TEXT("ETickMode"), &Z_Registration_Info_UEnum_ETickMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 424906096U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::ScriptStructInfo[] = {
		{ FWidgetComponentInstanceData::StaticStruct, Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics::NewStructOps, TEXT("WidgetComponentInstanceData"), &Z_Registration_Info_UScriptStruct_WidgetComponentInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetComponentInstanceData), 3141956357U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetComponent, UWidgetComponent::StaticClass, TEXT("UWidgetComponent"), &Z_Registration_Info_UClass_UWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetComponent), 3961772472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_1951152673(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
