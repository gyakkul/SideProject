// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Roles/LiveLinkLightTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkLightTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkLightStaticData>() == std::is_polymorphic<FLiveLinkTransformStaticData>(), "USTRUCT FLiveLinkLightStaticData cannot be polymorphic unless super FLiveLinkTransformStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData;
class UScriptStruct* FLiveLinkLightStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightStaticData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkLightStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkLightStaticData>()
{
	return FLiveLinkLightStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTemperatureSupported_MetaData[];
#endif
		static void NewProp_bIsTemperatureSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTemperatureSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsIntensitySupported_MetaData[];
#endif
		static void NewProp_bIsIntensitySupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIntensitySupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLightColorSupported_MetaData[];
#endif
		static void NewProp_bIsLightColorSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLightColorSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInnerConeAngleSupported_MetaData[];
#endif
		static void NewProp_bIsInnerConeAngleSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInnerConeAngleSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOuterConeAngleSupported_MetaData[];
#endif
		static void NewProp_bIsOuterConeAngleSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOuterConeAngleSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttenuationRadiusSupported_MetaData[];
#endif
		static void NewProp_bIsAttenuationRadiusSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttenuationRadiusSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSourceLenghtSupported_MetaData[];
#endif
		static void NewProp_bIsSourceLenghtSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSourceLenghtSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSourceRadiusSupported_MetaData[];
#endif
		static void NewProp_bIsSourceRadiusSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSourceRadiusSupported;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSoftSourceRadiusSupported_MetaData[];
#endif
		static void NewProp_bIsSoftSourceRadiusSupported_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSoftSourceRadiusSupported;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Light data. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Static data for Light data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLightStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Temperature can be used in the frame data\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether Temperature can be used in the frame data" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsTemperatureSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported = { "bIsTemperatureSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether Intensity can be used in the frame data\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether Intensity can be used in the frame data" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsIntensitySupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported = { "bIsIntensitySupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether LightColor can be used in the frame data\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether LightColor can be used in the frame data" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsLightColorSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported = { "bIsLightColorSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether InnerConeAngle can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether InnerConeAngle can be used in the frame data. Only used for spot lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsInnerConeAngleSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported = { "bIsInnerConeAngleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether OuterConeAngle can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether OuterConeAngle can be used in the frame data. Only used for spot lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsOuterConeAngleSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported = { "bIsOuterConeAngleSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether AttenuationRadius can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether AttenuationRadius can be used in the frame data. Only used for spot lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsAttenuationRadiusSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported = { "bIsAttenuationRadiusSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether SourceLength can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether SourceLength can be used in the frame data. Only used for spot lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsSourceLenghtSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported = { "bIsSourceLenghtSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether SourceRadius can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether SourceRadius can be used in the frame data. Only used for spot lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsSourceRadiusSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported = { "bIsSourceRadiusSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "//Whether SoftSourceRadius can be used in the frame data. Only used for spot lights\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Whether SoftSourceRadius can be used in the frame data. Only used for spot lights" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_SetBit(void* Obj)
	{
		((FLiveLinkLightStaticData*)Obj)->bIsSoftSourceRadiusSupported = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported = { "bIsSoftSourceRadiusSupported", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkLightStaticData), &Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsTemperatureSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsIntensitySupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsLightColorSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsInnerConeAngleSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsOuterConeAngleSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsAttenuationRadiusSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceLenghtSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSourceRadiusSupported,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewProp_bIsSoftSourceRadiusSupported,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTransformStaticData,
		&NewStructOps,
		"LiveLinkLightStaticData",
		sizeof(FLiveLinkLightStaticData),
		alignof(FLiveLinkLightStaticData),
		Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkLightFrameData>() == std::is_polymorphic<FLiveLinkTransformFrameData>(), "USTRUCT FLiveLinkLightFrameData cannot be polymorphic unless super FLiveLinkTransformFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData;
class UScriptStruct* FLiveLinkLightFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightFrameData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkLightFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkLightFrameData>()
{
	return FLiveLinkLightFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttenuationRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttenuationRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SoftSourceRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for light. \n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Dynamic data for light." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLightFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Color temperature in Kelvin of the blackbody illuminant\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, Temperature), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Total energy that the light emits in lux.  \n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Total energy that the light emits in lux." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, Intensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Filter color of the light.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Filter color of the light." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Inner cone angle in degrees for a Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Inner cone angle in degrees for a Spotlight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle = { "InnerConeAngle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, InnerConeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Outer cone angle in degrees for a Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Outer cone angle in degrees for a Spotlight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle = { "OuterConeAngle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, OuterConeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Light visible influence. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Light visible influence. Works for Pointlight and Spotlight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius = { "AttenuationRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, AttenuationRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Radius of light source shape. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Radius of light source shape. Works for Pointlight and Spotlight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, SourceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Soft radius of light source shape. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Soft radius of light source shape. Works for Pointlight and Spotlight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius = { "SoftSourceRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, SoftSourceRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Length of light source shape. Works for Pointlight and Spotlight.\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Length of light source shape. Works for Pointlight and Spotlight." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightFrameData, SourceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Temperature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_LightColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_InnerConeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_OuterConeAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_AttenuationRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SoftSourceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewProp_SourceLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkTransformFrameData,
		&NewStructOps,
		"LiveLinkLightFrameData",
		sizeof(FLiveLinkLightFrameData),
		alignof(FLiveLinkLightFrameData),
		Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkLightBlueprintData>() == std::is_polymorphic<FLiveLinkBaseBlueprintData>(), "USTRUCT FLiveLinkLightBlueprintData cannot be polymorphic unless super FLiveLinkBaseBlueprintData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData;
class UScriptStruct* FLiveLinkLightBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData, (UObject*)Z_Construct_UPackage__Script_LiveLinkInterface(), TEXT("LiveLinkLightBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.OuterSingleton;
}
template<> LIVELINKINTERFACE_API UScriptStruct* StaticStruct<FLiveLinkLightBlueprintData>()
{
	return FLiveLinkLightBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle light data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Facility structure to handle light data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkLightBlueprintData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Static data that should not change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Static data that should not change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData = { "StaticData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightBlueprintData, StaticData), Z_Construct_UScriptStruct_FLiveLinkLightStaticData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData_MetaData)) }; // 4265746557
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// Dynamic data that can change every frame\n" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkLightTypes.h" },
		{ "ToolTip", "Dynamic data that can change every frame" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData = { "FrameData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkLightBlueprintData, FrameData), Z_Construct_UScriptStruct_FLiveLinkLightFrameData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData_MetaData)) }; // 1223098409
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_StaticData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewProp_FrameData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
		Z_Construct_UScriptStruct_FLiveLinkBaseBlueprintData,
		&NewStructOps,
		"LiveLinkLightBlueprintData",
		sizeof(FLiveLinkLightBlueprintData),
		alignof(FLiveLinkLightBlueprintData),
		Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkLightStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLightStaticData_Statics::NewStructOps, TEXT("LiveLinkLightStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkLightStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLightStaticData), 4265746557U) },
		{ FLiveLinkLightFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLightFrameData_Statics::NewStructOps, TEXT("LiveLinkLightFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkLightFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLightFrameData), 1223098409U) },
		{ FLiveLinkLightBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkLightBlueprintData_Statics::NewStructOps, TEXT("LiveLinkLightBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkLightBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkLightBlueprintData), 2315197361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_2141361188(TEXT("/Script/LiveLinkInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_Roles_LiveLinkLightTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
