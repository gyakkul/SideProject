// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraBakerSettings.h"
#include "../Classes/NiagaraBakerOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraBakerSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerOutput_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSource();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraBakerViewMode;
	static UEnum* ENiagaraBakerViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBakerViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraBakerViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraBakerViewMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraBakerViewMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraBakerViewMode>()
	{
		return ENiagaraBakerViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enumerators[] = {
		{ "ENiagaraBakerViewMode::Perspective", (int64)ENiagaraBakerViewMode::Perspective },
		{ "ENiagaraBakerViewMode::OrthoFront", (int64)ENiagaraBakerViewMode::OrthoFront },
		{ "ENiagaraBakerViewMode::OrthoBack", (int64)ENiagaraBakerViewMode::OrthoBack },
		{ "ENiagaraBakerViewMode::OrthoLeft", (int64)ENiagaraBakerViewMode::OrthoLeft },
		{ "ENiagaraBakerViewMode::OrthoRight", (int64)ENiagaraBakerViewMode::OrthoRight },
		{ "ENiagaraBakerViewMode::OrthoTop", (int64)ENiagaraBakerViewMode::OrthoTop },
		{ "ENiagaraBakerViewMode::OrthoBottom", (int64)ENiagaraBakerViewMode::OrthoBottom },
		{ "ENiagaraBakerViewMode::Num", (int64)ENiagaraBakerViewMode::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "ENiagaraBakerViewMode::Num" },
		{ "OrthoBack.Name", "ENiagaraBakerViewMode::OrthoBack" },
		{ "OrthoBottom.Name", "ENiagaraBakerViewMode::OrthoBottom" },
		{ "OrthoFront.Name", "ENiagaraBakerViewMode::OrthoFront" },
		{ "OrthoLeft.Name", "ENiagaraBakerViewMode::OrthoLeft" },
		{ "OrthoRight.Name", "ENiagaraBakerViewMode::OrthoRight" },
		{ "OrthoTop.Name", "ENiagaraBakerViewMode::OrthoTop" },
		{ "Perspective.Name", "ENiagaraBakerViewMode::Perspective" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraBakerViewMode",
		"ENiagaraBakerViewMode",
		Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraBakerViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraBakerViewMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraBakerViewMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings;
class UScriptStruct* FNiagaraBakerCameraSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerCameraSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerCameraSettings>()
{
	return FNiagaraBakerCameraSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ViewMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ViewMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrbitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrbitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAspectRatio_MetaData[];
#endif
		static void NewProp_bUseAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerCameraSettings>();
	}
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, ViewMode), Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode_MetaData)) }; // 1692309913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportLocation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportLocation = { "ViewportLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, ViewportLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportRotation = { "ViewportRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, ViewportRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrbitDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrbitDistance = { "OrbitDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, OrbitDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrbitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrbitDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_FOV_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, FOV), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_FOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, OrthoWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio_SetBit(void* Obj)
	{
		((FNiagaraBakerCameraSettings*)Obj)->bUseAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio = { "bUseAspectRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraBakerCameraSettings), &Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerCameraSettings, AspectRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_AspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_ViewportRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrbitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_FOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_OrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_bUseAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewProp_AspectRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerCameraSettings",
		sizeof(FNiagaraBakerCameraSettings),
		alignof(FNiagaraBakerCameraSettings),
		Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings;
class UScriptStruct* FNiagaraBakerTextureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraBakerTextureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraBakerTextureSettings>()
{
	return FNiagaraBakerTextureSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFrameSize_MetaData[];
#endif
		static void NewProp_bUseFrameSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraBakerTextureSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Optional output name, if left empty a name will be auto generated using the index of the texture/ */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Optional output name, if left empty a name will be auto generated using the index of the texture/" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSettings, OutputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Source visualization we should capture, i.e. Scene Color, World Normal, etc */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Source visualization we should capture, i.e. Scene Color, World Normal, etc" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding = { "SourceBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSettings, SourceBinding), Z_Construct_UScriptStruct_FNiagaraBakerTextureSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding_MetaData)) }; // 3396379681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_SetBit(void* Obj)
	{
		((FNiagaraBakerTextureSettings*)Obj)->bUseFrameSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize = { "bUseFrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraBakerTextureSettings), &Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Size of each frame generated. */" },
		{ "EditCondition", "bUseFrameSize" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Size of each frame generated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize = { "FrameSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSettings, FrameSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Overall texture size that will be generated. */" },
		{ "EditCondition", "!bUseFrameSize" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Overall texture size that will be generated." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSettings, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData[] = {
		{ "Category", "Texture" },
		{ "Comment", "/** Final texture generated, an existing entry will be updated with new capture data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Final texture generated, an existing entry will be updated with new capture data." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture = { "GeneratedTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraBakerTextureSettings, GeneratedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_OutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_SourceBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_bUseFrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_FrameSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_TextureSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewProp_GeneratedTexture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraBakerTextureSettings",
		sizeof(FNiagaraBakerTextureSettings),
		alignof(FNiagaraBakerTextureSettings),
		Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings.InnerSingleton;
	}
	void UNiagaraBakerSettings::StaticRegisterNativesUNiagaraBakerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraBakerSettings);
	UClass* Z_Construct_UClass_UNiagaraBakerSettings_NoRegister()
	{
		return UNiagaraBakerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraBakerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FramesPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLooping_MetaData[];
#endif
		static void NewProp_bPreviewLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerDimension_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FramesPerDimension;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCameraIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeQualityLevel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BakeQualityLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderComponentOnly_MetaData[];
#endif
		static void NewProp_bRenderComponentOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderComponentOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputTextures;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraViewportMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewportMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraViewportMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewportLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewportLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraViewportRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraViewportRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOrbitDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraOrbitDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraOrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraOrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraAspectRatio_MetaData[];
#endif
		static void NewProp_bUseCameraAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraBakerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraBakerSettings.h" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/**\n\x09This is the start time of the simulation where we begin the capture.\n\x09I.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "This is the start time of the simulation where we begin the capture.\nI.e. 2.0 would mean the simulation warms up by 2 seconds before we begin capturing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds = { "StartSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, StartSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Duration in seconds to take the capture over. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Duration in seconds to take the capture over." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "480" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09The frame rate to run the simulation at during capturing.\n\x09This is only used for the preview view and calculating the number of ticks to execute\n\x09""as we capture the generated texture.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "The frame rate to run the simulation at during capturing.\nThis is only used for the preview view and calculating the number of ticks to execute\nas we capture the generated texture." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, FramesPerSecond), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should the preview playback as looping or not. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Should the preview playback as looping or not." },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bPreviewLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping = { "bPreviewLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Number of frames in each dimension. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Number of frames in each dimension." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension = { "FramesPerDimension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, FramesPerDimension), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraBakerOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Array of outputs for the baker to generate. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Array of outputs for the baker to generate." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings_Inner = { "CameraSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings, METADATA_PARAMS(nullptr, 0) }; // 3845211800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Camera Settings, will always be at least ENiagaraBakerViewMode::Num elements and those are fixed cameras. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Camera Settings, will always be at least ENiagaraBakerViewMode::Num elements and those are fixed cameras." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings_MetaData)) }; // 3845211800
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CurrentCameraIndex_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Active camera that we were saved with */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Active camera that we were saved with" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CurrentCameraIndex = { "CurrentCameraIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CurrentCameraIndex), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CurrentCameraIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CurrentCameraIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_BakeQualityLevel_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** What quality level to use when baking the simulation, where None means use the current quality level. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "What quality level to use when baking the simulation, where None means use the current quality level." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_BakeQualityLevel = { "BakeQualityLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, BakeQualityLevel), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_BakeQualityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_BakeQualityLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Should we render just the component or the whole scene. */" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Should we render just the component or the whole scene." },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bRenderComponentOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly = { "bRenderComponentOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_Inner = { "OutputTextures", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings, METADATA_PARAMS(nullptr, 0) }; // 2889972467
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData[] = {
		{ "Comment", "// Deprecated properties\n" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
		{ "ToolTip", "Deprecated properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures = { "OutputTextures", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, OutputTextures_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_MetaData)) }; // 2889972467
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode = { "CameraViewportMode", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportMode_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraBakerViewMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_MetaData)) }; // 1692309913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Niagara.ENiagaraBakerViewMode" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation = { "CameraViewportLocation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CameraViewportLocation_DEPRECATED, UNiagaraBakerSettings), nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportLocation_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Niagara.ENiagaraBakerViewMode" },
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation = { "CameraViewportRotation", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(CameraViewportRotation_DEPRECATED, UNiagaraBakerSettings), nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraViewportRotation_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance = { "CameraOrbitDistance", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraOrbitDistance_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV = { "CameraFOV", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraFOV_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth = { "CameraOrthoWidth", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraOrthoWidth_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_SetBit(void* Obj)
	{
		((UNiagaraBakerSettings*)Obj)->bUseCameraAspectRatio_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio = { "bUseCameraAspectRatio", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraBakerSettings), &Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraBakerSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio = { "CameraAspectRatio", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraBakerSettings, CameraAspectRatio_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_StartSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_DurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bPreviewLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_FramesPerDimension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CurrentCameraIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_BakeQualityLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bRenderComponentOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_OutputTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraViewportRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrbitDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraOrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_bUseCameraAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraBakerSettings_Statics::NewProp_CameraAspectRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraBakerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraBakerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraBakerSettings_Statics::ClassParams = {
		&UNiagaraBakerSettings::StaticClass,
		"Niagara",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraBakerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraBakerSettings()
	{
		if (!Z_Registration_Info_UClass_UNiagaraBakerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraBakerSettings.OuterSingleton, Z_Construct_UClass_UNiagaraBakerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraBakerSettings.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraBakerSettings>()
	{
		return UNiagaraBakerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraBakerSettings);
	UNiagaraBakerSettings::~UNiagaraBakerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::EnumInfo[] = {
		{ ENiagaraBakerViewMode_StaticEnum, TEXT("ENiagaraBakerViewMode"), &Z_Registration_Info_UEnum_ENiagaraBakerViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1692309913U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraBakerCameraSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerCameraSettings_Statics::NewStructOps, TEXT("NiagaraBakerCameraSettings"), &Z_Registration_Info_UScriptStruct_NiagaraBakerCameraSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerCameraSettings), 3845211800U) },
		{ FNiagaraBakerTextureSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraBakerTextureSettings_Statics::NewStructOps, TEXT("NiagaraBakerTextureSettings"), &Z_Registration_Info_UScriptStruct_NiagaraBakerTextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraBakerTextureSettings), 2889972467U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraBakerSettings, UNiagaraBakerSettings::StaticClass, TEXT("UNiagaraBakerSettings"), &Z_Registration_Info_UClass_UNiagaraBakerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraBakerSettings), 2264004875U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_1225733798(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraBakerSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
