// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DisplayClusterLightCardActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLightCardActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterLightCardActor();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLabelComponent_NoRegister();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterStageActorComponent_NoRegister();
	DISPLAYCLUSTER_API UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings();
	DISPLAYCLUSTERLIGHTCARDEXTENDER_API UClass* Z_Construct_UClass_UDisplayClusterStageActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplayClusterLightCardMask;
	static UEnum* EDisplayClusterLightCardMask_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterLightCardMask.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDisplayClusterLightCardMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("EDisplayClusterLightCardMask"));
		}
		return Z_Registration_Info_UEnum_EDisplayClusterLightCardMask.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UEnum* StaticEnum<EDisplayClusterLightCardMask>()
	{
		return EDisplayClusterLightCardMask_StaticEnum();
	}
	struct Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::Enumerators[] = {
		{ "EDisplayClusterLightCardMask::Circle", (int64)EDisplayClusterLightCardMask::Circle },
		{ "EDisplayClusterLightCardMask::Square", (int64)EDisplayClusterLightCardMask::Square },
		{ "EDisplayClusterLightCardMask::UseTextureAlpha", (int64)EDisplayClusterLightCardMask::UseTextureAlpha },
		{ "EDisplayClusterLightCardMask::Polygon", (int64)EDisplayClusterLightCardMask::Polygon },
		{ "EDisplayClusterLightCardMask::MAX", (int64)EDisplayClusterLightCardMask::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.Name", "EDisplayClusterLightCardMask::Circle" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EDisplayClusterLightCardMask::MAX" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "Polygon.Name", "EDisplayClusterLightCardMask::Polygon" },
		{ "Square.Name", "EDisplayClusterLightCardMask::Square" },
		{ "UseTextureAlpha.Name", "EDisplayClusterLightCardMask::UseTextureAlpha" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		"EDisplayClusterLightCardMask",
		"EDisplayClusterLightCardMask",
		Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask()
	{
		if (!Z_Registration_Info_UEnum_EDisplayClusterLightCardMask.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplayClusterLightCardMask.InnerSingleton, Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDisplayClusterLightCardMask.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings;
class UScriptStruct* FLightCardAlphaGradientSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings, (UObject*)Z_Construct_UPackage__Script_DisplayCluster(), TEXT("LightCardAlphaGradientSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings.OuterSingleton;
}
template<> DISPLAYCLUSTER_API UScriptStruct* StaticStruct<FLightCardAlphaGradientSettings>()
{
	return FLightCardAlphaGradientSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAlphaGradient_MetaData[];
#endif
		static void NewProp_bEnableAlphaGradient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAlphaGradient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndingAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Angle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightCardAlphaGradientSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Enables/disables alpha gradient effect */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Enables/disables alpha gradient effect" },
	};
#endif
	void Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient_SetBit(void* Obj)
	{
		((FLightCardAlphaGradientSettings*)Obj)->bEnableAlphaGradient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient = { "bEnableAlphaGradient", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLightCardAlphaGradientSettings), &Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_StartingAlpha_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Starting alpha value in the gradient */" },
		{ "EditCondition", "bEnableAlphaGradient" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Starting alpha value in the gradient" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_StartingAlpha = { "StartingAlpha", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightCardAlphaGradientSettings, StartingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_StartingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_StartingAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_EndingAlpha_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Ending alpha value in the gradient */" },
		{ "EditCondition", "bEnableAlphaGradient" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Ending alpha value in the gradient" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_EndingAlpha = { "EndingAlpha", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightCardAlphaGradientSettings, EndingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_EndingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_EndingAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_Angle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The angle (degrees) determines the gradient direction. */" },
		{ "EditCondition", "bEnableAlphaGradient" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "The angle (degrees) determines the gradient direction." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLightCardAlphaGradientSettings, Angle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_Angle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_Angle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_bEnableAlphaGradient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_StartingAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_EndingAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewProp_Angle,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
		nullptr,
		&NewStructOps,
		"LightCardAlphaGradientSettings",
		sizeof(FLightCardAlphaGradientSettings),
		alignof(FLightCardAlphaGradientSettings),
		Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings.InnerSingleton, Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings.InnerSingleton;
	}
	void ADisplayClusterLightCardActor::GetbIsUVLightCard_WrapperImpl(const void* Object, void* OutValue)
	{
		const ADisplayClusterLightCardActor* Obj = (const ADisplayClusterLightCardActor*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsUVActor();
	}
	void ADisplayClusterLightCardActor::SetbIsUVLightCard_WrapperImpl(void* Object, const void* InValue)
	{
		ADisplayClusterLightCardActor* Obj = (ADisplayClusterLightCardActor*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetIsUVActor(Value);
	}
	void ADisplayClusterLightCardActor::GetbIsLightCardFlag_WrapperImpl(const void* Object, void* OutValue)
	{
		const ADisplayClusterLightCardActor* Obj = (const ADisplayClusterLightCardActor*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsLightCardFlag();
	}
	void ADisplayClusterLightCardActor::SetbIsLightCardFlag_WrapperImpl(void* Object, const void* InValue)
	{
		ADisplayClusterLightCardActor* Obj = (ADisplayClusterLightCardActor*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetIsLightCardFlag(Value);
	}
	void ADisplayClusterLightCardActor::StaticRegisterNativesADisplayClusterLightCardActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADisplayClusterLightCardActor);
	UClass* Z_Construct_UClass_ADisplayClusterLightCardActor_NoRegister()
	{
		return ADisplayClusterLightCardActor::StaticClass();
	}
	struct Z_Construct_UClass_ADisplayClusterLightCardActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCenter_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_DistanceFromCenter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Longitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Longitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Latitude_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Latitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVCoordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVCoordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Spin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RadialOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysFlushToWall_MetaData[];
#endif
		static void NewProp_bAlwaysFlushToWall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysFlushToWall;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mask_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Exposure_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Exposure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Opacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Feathering_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Feathering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaGradient_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaGradient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockToOwningRootActor_MetaData[];
#endif
		static void NewProp_bLockToOwningRootActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockToOwningRootActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUVLightCard_MetaData[];
#endif
		static void NewProp_bIsUVLightCard_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUVLightCard;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Polygon_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Polygon_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Polygon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PolygonMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PolygonMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultSceneRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainSpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MainSpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardTransformerComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightCardTransformerComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightCardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LightCardComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExtenderNameToComponentMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExtenderNameToComponentMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtenderNameToComponentMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExtenderNameToComponentMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LabelComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StageActorComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVIndicatorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVIndicatorComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightCardFlag_MetaData[];
#endif
		static void NewProp_bIsLightCardFlag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightCardFlag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Light Card" },
		{ "HideCategories", "Tick Physics Collision Networking Replication Cooking Input Actor HLOD" },
		{ "IncludePath", "DisplayClusterLightCardActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DistanceFromCenter_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/** Radius of light card polar coordinates. Does not include the effect of RadialOffset */" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Radius of light card polar coordinates. Does not include the effect of RadialOffset" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DistanceFromCenter = { "DistanceFromCenter", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, DistanceFromCenter), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DistanceFromCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DistanceFromCenter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Longitude_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Related to the Azimuth of light card polar coordinates */" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Related to the Azimuth of light card polar coordinates" },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Longitude = { "Longitude", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Longitude), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Longitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Longitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Latitude_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "90" },
		{ "ClampMin", "-90" },
		{ "Comment", "/** Related to the Elevation of light card polar coordinates */" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Related to the Elevation of light card polar coordinates" },
		{ "UIMax", "90" },
		{ "UIMin", "-90" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Latitude = { "Latitude", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Latitude), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Latitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Latitude_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVCoordinates_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/** The UV coordinates of the light card, if it is in UV space */" },
		{ "DisplayName", "UV Coodinates" },
		{ "EditCondition", "bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "The UV coordinates of the light card, if it is in UV space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVCoordinates = { "UVCoordinates", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, UVCoordinates), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVCoordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVCoordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Spin_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Roll rotation of light card around its plane axis */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Roll rotation of light card around its plane axis" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Spin = { "Spin", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Spin), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Spin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Spin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Pitch), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "UIMax", "360" },
		{ "UIMin", "-360" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Yaw), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Orientation" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_RadialOffset_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/** Used by the flush constraint to offset the location of the light card form the wall */" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Used by the flush constraint to offset the location of the light card form the wall" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_RadialOffset = { "RadialOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, RadialOffset), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_RadialOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_RadialOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/** Indicates whether the light card is always made to be flush to a stage wall or not */" },
		{ "EditCondition", "!bIsUVLightCard" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Indicates whether the light card is always made to be flush to a stage wall or not" },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall_SetBit(void* Obj)
	{
		((ADisplayClusterLightCardActor*)Obj)->bAlwaysFlushToWall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall = { "bAlwaysFlushToWall", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterLightCardActor), &Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Mask), Z_Construct_UEnum_DisplayCluster_EDisplayClusterLightCardMask, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask_MetaData)) }; // 2043093003
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Light card color, before any modifier is applied */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Light card color, before any modifier is applied" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Temperature), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Tint_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Tint), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Exposure_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "100" },
		{ "ClampMin", "-100" },
		{ "Comment", "/** 2^Exposure color value multiplier */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "2^Exposure color value multiplier" },
		{ "UIMax", "100" },
		{ "UIMin", "-100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Exposure = { "Exposure", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Exposure), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Exposure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Exposure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Gain_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Linear color value multiplier */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Linear color value multiplier" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Gain = { "Gain", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Gain), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Opacity_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Linear alpha multiplier */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Linear alpha multiplier" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Opacity), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Opacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Opacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Feathering_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Feathers in the alpha from the edges */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Feathers in the alpha from the edges" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Feathering = { "Feathering", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Feathering), METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Feathering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Feathering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_AlphaGradient_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Settings related to an alpha gradient effect */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Settings related to an alpha gradient effect" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_AlphaGradient = { "AlphaGradient", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, AlphaGradient), Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_AlphaGradient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_AlphaGradient_MetaData)) }; // 136033843
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor_MetaData[] = {
		{ "Comment", "/** A flag that controls whether the light card's location and rotation are locked to its \"owning\" root actor */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "A flag that controls whether the light card's location and rotation are locked to its \"owning\" root actor" },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor_SetBit(void* Obj)
	{
		((ADisplayClusterLightCardActor*)Obj)->bLockToOwningRootActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor = { "bLockToOwningRootActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADisplayClusterLightCardActor), &Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard_MetaData[] = {
		{ "Comment", "/** Indicates if the light card exists in 3D space or in UV space */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Indicates if the light card exists in 3D space or in UV space" },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard_SetBit(void* Obj)
	{
		((ADisplayClusterLightCardActor*)Obj)->bIsUVLightCard = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard = { "bIsUVLightCard", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &ADisplayClusterLightCardActor::SetbIsUVLightCard_WrapperImpl, &ADisplayClusterLightCardActor::GetbIsUVLightCard_WrapperImpl, sizeof(bool), sizeof(ADisplayClusterLightCardActor), &Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon_Inner = { "Polygon", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** Polygon points when using this type of mask */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Polygon points when using this type of mask" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon = { "Polygon", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, Polygon), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_PolygonMask_MetaData[] = {
		{ "Comment", "/** Used to flag this light card as a proxy of a \"real\" light card. Used by the LightCard Editor */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Used to flag this light card as a proxy of a \"real\" light card. Used by the LightCard Editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_PolygonMask = { "PolygonMask", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, PolygonMask), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_PolygonMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_PolygonMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DefaultSceneRootComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DefaultSceneRootComponent = { "DefaultSceneRootComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, DefaultSceneRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DefaultSceneRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DefaultSceneRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_MainSpringArmComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_MainSpringArmComponent = { "MainSpringArmComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, MainSpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_MainSpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_MainSpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardTransformerComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardTransformerComponent = { "LightCardTransformerComponent", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, LightCardTransformerComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardTransformerComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardTransformerComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardComponent = { "LightCardComponent", nullptr, (EPropertyFlags)0x002408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, LightCardComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_ValueProp = { "ExtenderNameToComponentMap", nullptr, (EPropertyFlags)0x00040000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_Key_KeyProp = { "ExtenderNameToComponentMap_Key", nullptr, (EPropertyFlags)0x00000000000a0009, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Components added by the IDisplayLightCardActorExtender */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Components added by the IDisplayLightCardActorExtender" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap = { "ExtenderNameToComponentMap", nullptr, (EPropertyFlags)0x0024088000020009, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, ExtenderNameToComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LabelComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LabelComponent = { "LabelComponent", nullptr, (EPropertyFlags)0x002408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, LabelComponent), Z_Construct_UClass_UDisplayClusterLabelComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LabelComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LabelComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_StageActorComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Manages stage actor properties */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Manages stage actor properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_StageActorComponent = { "StageActorComponent", nullptr, (EPropertyFlags)0x00240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, StageActorComponent), Z_Construct_UClass_UDisplayClusterStageActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_StageActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_StageActorComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVIndicatorComponent_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVIndicatorComponent = { "UVIndicatorComponent", nullptr, (EPropertyFlags)0x002408080008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADisplayClusterLightCardActor, UVIndicatorComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVIndicatorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVIndicatorComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Comment", "/** Indicates this light card should be considered a flag */" },
		{ "ModuleRelativePath", "Public/DisplayClusterLightCardActor.h" },
		{ "ToolTip", "Indicates this light card should be considered a flag" },
	};
#endif
	void Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag_SetBit(void* Obj)
	{
		((ADisplayClusterLightCardActor*)Obj)->bIsLightCardFlag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag = { "bIsLightCardFlag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &ADisplayClusterLightCardActor::SetbIsLightCardFlag_WrapperImpl, &ADisplayClusterLightCardActor::GetbIsLightCardFlag_WrapperImpl, sizeof(bool), sizeof(ADisplayClusterLightCardActor), &Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DistanceFromCenter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Longitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Latitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVCoordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Spin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_RadialOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bAlwaysFlushToWall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Exposure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Opacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Feathering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_AlphaGradient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bLockToOwningRootActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsUVLightCard,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_Polygon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_PolygonMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_DefaultSceneRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_MainSpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardTransformerComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LightCardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_ExtenderNameToComponentMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_LabelComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_StageActorComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_UVIndicatorComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::NewProp_bIsLightCardFlag,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisplayClusterStageActor_NoRegister, (int32)VTABLE_OFFSET(ADisplayClusterLightCardActor, IDisplayClusterStageActor), false },  // 1221229347
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisplayClusterLightCardActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::ClassParams = {
		&ADisplayClusterLightCardActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisplayClusterLightCardActor()
	{
		if (!Z_Registration_Info_UClass_ADisplayClusterLightCardActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADisplayClusterLightCardActor.OuterSingleton, Z_Construct_UClass_ADisplayClusterLightCardActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADisplayClusterLightCardActor.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<ADisplayClusterLightCardActor>()
	{
		return ADisplayClusterLightCardActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisplayClusterLightCardActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::EnumInfo[] = {
		{ EDisplayClusterLightCardMask_StaticEnum, TEXT("EDisplayClusterLightCardMask"), &Z_Registration_Info_UEnum_EDisplayClusterLightCardMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2043093003U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::ScriptStructInfo[] = {
		{ FLightCardAlphaGradientSettings::StaticStruct, Z_Construct_UScriptStruct_FLightCardAlphaGradientSettings_Statics::NewStructOps, TEXT("LightCardAlphaGradientSettings"), &Z_Registration_Info_UScriptStruct_LightCardAlphaGradientSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLightCardAlphaGradientSettings), 136033843U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADisplayClusterLightCardActor, ADisplayClusterLightCardActor::StaticClass, TEXT("ADisplayClusterLightCardActor"), &Z_Registration_Info_UClass_ADisplayClusterLightCardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADisplayClusterLightCardActor), 1263681919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_595887251(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_DisplayClusterLightCardActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
