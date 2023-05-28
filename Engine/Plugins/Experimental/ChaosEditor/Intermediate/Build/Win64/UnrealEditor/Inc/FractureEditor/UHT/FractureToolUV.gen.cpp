// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/FractureToolUV.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureToolUV() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureAutoUVSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureAutoUVSettings_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModalTool();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolAutoUV();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolAutoUV_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureToolSettings();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_ETextureType();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoUVTextureResolution;
	static UEnum* EAutoUVTextureResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoUVTextureResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoUVTextureResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EAutoUVTextureResolution"));
		}
		return Z_Registration_Info_UEnum_EAutoUVTextureResolution.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EAutoUVTextureResolution>()
	{
		return EAutoUVTextureResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::Enumerators[] = {
		{ "EAutoUVTextureResolution::Resolution16", (int64)EAutoUVTextureResolution::Resolution16 },
		{ "EAutoUVTextureResolution::Resolution32", (int64)EAutoUVTextureResolution::Resolution32 },
		{ "EAutoUVTextureResolution::Resolution64", (int64)EAutoUVTextureResolution::Resolution64 },
		{ "EAutoUVTextureResolution::Resolution128", (int64)EAutoUVTextureResolution::Resolution128 },
		{ "EAutoUVTextureResolution::Resolution256", (int64)EAutoUVTextureResolution::Resolution256 },
		{ "EAutoUVTextureResolution::Resolution512", (int64)EAutoUVTextureResolution::Resolution512 },
		{ "EAutoUVTextureResolution::Resolution1024", (int64)EAutoUVTextureResolution::Resolution1024 },
		{ "EAutoUVTextureResolution::Resolution2048", (int64)EAutoUVTextureResolution::Resolution2048 },
		{ "EAutoUVTextureResolution::Resolution4096", (int64)EAutoUVTextureResolution::Resolution4096 },
		{ "EAutoUVTextureResolution::Resolution8192", (int64)EAutoUVTextureResolution::Resolution8192 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "Resolution1024.DisplayName", "1024 x 1024" },
		{ "Resolution1024.Name", "EAutoUVTextureResolution::Resolution1024" },
		{ "Resolution128.DisplayName", "128 x 128" },
		{ "Resolution128.Name", "EAutoUVTextureResolution::Resolution128" },
		{ "Resolution16.DisplayName", "16 x 16" },
		{ "Resolution16.Name", "EAutoUVTextureResolution::Resolution16" },
		{ "Resolution2048.DisplayName", "2048 x 2048" },
		{ "Resolution2048.Name", "EAutoUVTextureResolution::Resolution2048" },
		{ "Resolution256.DisplayName", "256 x 256" },
		{ "Resolution256.Name", "EAutoUVTextureResolution::Resolution256" },
		{ "Resolution32.DisplayName", "32 x 32" },
		{ "Resolution32.Name", "EAutoUVTextureResolution::Resolution32" },
		{ "Resolution4096.DisplayName", "4096 x 4096" },
		{ "Resolution4096.Name", "EAutoUVTextureResolution::Resolution4096" },
		{ "Resolution512.DisplayName", "512 x 512" },
		{ "Resolution512.Name", "EAutoUVTextureResolution::Resolution512" },
		{ "Resolution64.DisplayName", "64 x 64" },
		{ "Resolution64.Name", "EAutoUVTextureResolution::Resolution64" },
		{ "Resolution8192.DisplayName", "8192 x 8192" },
		{ "Resolution8192.Name", "EAutoUVTextureResolution::Resolution8192" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EAutoUVTextureResolution",
		"EAutoUVTextureResolution",
		Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution()
	{
		if (!Z_Registration_Info_UEnum_EAutoUVTextureResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoUVTextureResolution.InnerSingleton, Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoUVTextureResolution.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureType;
	static UEnum* ETextureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_ETextureType, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("ETextureType"));
		}
		return Z_Registration_Info_UEnum_ETextureType.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<ETextureType>()
	{
		return ETextureType_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_ETextureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_ETextureType_Statics::Enumerators[] = {
		{ "ETextureType::ThicknessAndSurfaceAttributes", (int64)ETextureType::ThicknessAndSurfaceAttributes },
		{ "ETextureType::SpatialGradients", (int64)ETextureType::SpatialGradients },
		{ "ETextureType::Normals", (int64)ETextureType::Normals },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_ETextureType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "Normals.Comment", "// Bake surface normals\n" },
		{ "Normals.Name", "ETextureType::Normals" },
		{ "Normals.ToolTip", "Bake surface normals" },
		{ "SpatialGradients.Comment", "// Bake position relative to the bounding box\n" },
		{ "SpatialGradients.Name", "ETextureType::SpatialGradients" },
		{ "SpatialGradients.ToolTip", "Bake position relative to the bounding box" },
		{ "ThicknessAndSurfaceAttributes.Comment", "// Bake thickness, ambient occlusion, and a smoothed curvature metric\n" },
		{ "ThicknessAndSurfaceAttributes.Name", "ETextureType::ThicknessAndSurfaceAttributes" },
		{ "ThicknessAndSurfaceAttributes.ToolTip", "Bake thickness, ambient occlusion, and a smoothed curvature metric" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_ETextureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"ETextureType",
		"ETextureType",
		Z_Construct_UEnum_FractureEditor_ETextureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ETextureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_ETextureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ETextureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_ETextureType()
	{
		if (!Z_Registration_Info_UEnum_ETextureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureType.InnerSingleton, Z_Construct_UEnum_FractureEditor_ETextureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextureType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetMaterialIDs;
	static UEnum* ETargetMaterialIDs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetMaterialIDs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetMaterialIDs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("ETargetMaterialIDs"));
		}
		return Z_Registration_Info_UEnum_ETargetMaterialIDs.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<ETargetMaterialIDs>()
	{
		return ETargetMaterialIDs_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::Enumerators[] = {
		{ "ETargetMaterialIDs::OddIDs", (int64)ETargetMaterialIDs::OddIDs },
		{ "ETargetMaterialIDs::OddAndSelectedIDs", (int64)ETargetMaterialIDs::OddAndSelectedIDs },
		{ "ETargetMaterialIDs::SelectedIDs", (int64)ETargetMaterialIDs::SelectedIDs },
		{ "ETargetMaterialIDs::AllIDs", (int64)ETargetMaterialIDs::AllIDs },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::Enum_MetaDataParams[] = {
		{ "AllIDs.Comment", "// Target all faces\n" },
		{ "AllIDs.Name", "ETargetMaterialIDs::AllIDs" },
		{ "AllIDs.ToolTip", "Target all faces" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "OddAndSelectedIDs.Comment", "// Target faces with material IDs matching a custom list, as well as those with odd-numbered IDs (corresponding to internal fracture faces)\n" },
		{ "OddAndSelectedIDs.Name", "ETargetMaterialIDs::OddAndSelectedIDs" },
		{ "OddAndSelectedIDs.ToolTip", "Target faces with material IDs matching a custom list, as well as those with odd-numbered IDs (corresponding to internal fracture faces)" },
		{ "OddIDs.Comment", "// Target faces with odd-numbered material IDs (corresponding to internal fracture faces)\n" },
		{ "OddIDs.Name", "ETargetMaterialIDs::OddIDs" },
		{ "OddIDs.ToolTip", "Target faces with odd-numbered material IDs (corresponding to internal fracture faces)" },
		{ "SelectedIDs.Comment", "// Target faces with material IDs matching a custom list\n" },
		{ "SelectedIDs.Name", "ETargetMaterialIDs::SelectedIDs" },
		{ "SelectedIDs.ToolTip", "Target faces with material IDs matching a custom list" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"ETargetMaterialIDs",
		"ETargetMaterialIDs",
		Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs()
	{
		if (!Z_Registration_Info_UEnum_ETargetMaterialIDs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetMaterialIDs.InnerSingleton, Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetMaterialIDs.InnerSingleton;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execBoxProjectUVs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoxProjectUVs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execDisableBoneColors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableBoneColors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execBakeTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BakeTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execLayoutUVs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LayoutUVs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execDeleteUVChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteUVChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execAddUVChannel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddUVChannel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFractureAutoUVSettings::execGetUVChannelNamesFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetUVChannelNamesFunc();
		P_NATIVE_END;
	}
	void UFractureAutoUVSettings::StaticRegisterNativesUFractureAutoUVSettings()
	{
		UClass* Class = UFractureAutoUVSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddUVChannel", &UFractureAutoUVSettings::execAddUVChannel },
			{ "BakeTexture", &UFractureAutoUVSettings::execBakeTexture },
			{ "BoxProjectUVs", &UFractureAutoUVSettings::execBoxProjectUVs },
			{ "DeleteUVChannel", &UFractureAutoUVSettings::execDeleteUVChannel },
			{ "DisableBoneColors", &UFractureAutoUVSettings::execDisableBoneColors },
			{ "GetUVChannelNamesFunc", &UFractureAutoUVSettings::execGetUVChannelNamesFunc },
			{ "LayoutUVs", &UFractureAutoUVSettings::execLayoutUVs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVChannel" },
		{ "Comment", "/** Add a UV channel to the Geometry Collection */" },
		{ "DisplayName", "Add UV Channel" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Add a UV channel to the Geometry Collection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "AddUVChannel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "Comment", "/** Bake a new texture with the chosen attributes, aligned to the current UV layout */" },
		{ "DisplayName", "Bake Texture" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Bake a new texture with the chosen attributes, aligned to the current UV layout" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "BakeTexture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Unwrap" },
		{ "Comment", "/** Immediately perform a box projection to update the internal UVs of the selected Geometry Collection */" },
		{ "DisplayName", "Box Project UVs" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Immediately perform a box projection to update the internal UVs of the selected Geometry Collection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "BoxProjectUVs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "UVChannel" },
		{ "Comment", "/** Remove the last UV channel from the Geometry Collection */" },
		{ "DisplayName", "Delete UV Channel" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Remove the last UV channel from the Geometry Collection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "DeleteUVChannel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "Comment", "/** Disable \"Show Bone Colors\" on the selected Geometry Collection Components, so textures are visible. This setting can also be toggled directly on the Component itself */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Disable \"Show Bone Colors\" on the selected Geometry Collection Components, so textures are visible. This setting can also be toggled directly on the Component itself" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "DisableBoneColors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics
	{
		struct FractureAutoUVSettings_eventGetUVChannelNamesFunc_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FractureAutoUVSettings_eventGetUVChannelNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "GetUVChannelNamesFunc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::FractureAutoUVSettings_eventGetUVChannelNamesFunc_Parms), Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Operations" },
		{ "Comment", "/** Immediately layout and update the UVs of the selected Geometry Collection, for faces with the Target Material IDs */" },
		{ "DisplayName", "Layout UVs" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Immediately layout and update the UVs of the selected Geometry Collection, for faces with the Target Material IDs" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFractureAutoUVSettings, nullptr, "LayoutUVs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureAutoUVSettings);
	UClass* Z_Construct_UClass_UFractureAutoUVSettings_NoRegister()
	{
		return UFractureAutoUVSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureAutoUVSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannel;
		static const UECodeGen_Private::FStrPropertyParams NewProp_UVChannelNamesList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVChannelNamesList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UVChannelNamesList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFitToBounds_MetaData[];
#endif
		static void NewProp_bAutoFitToBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFitToBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformProjectionScale_MetaData[];
#endif
		static void NewProp_bUniformProjectionScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformProjectionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionUVOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionUVOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCenterAtPivot_MetaData[];
#endif
		static void NewProp_bCenterAtPivot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCenterAtPivot;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetMaterialIDs_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMaterialIDs_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TargetMaterialIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIDs;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GutterSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GutterSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPromptToSave_MetaData[];
#endif
		static void NewProp_bPromptToSave_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPromptToSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceExisting_MetaData[];
#endif
		static void NewProp_bReplaceExisting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceExisting;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BakeTextureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeTextureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeTextureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDistToOuter_MetaData[];
#endif
		static void NewProp_bDistToOuter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDistToOuter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAmbientOcclusion_MetaData[];
#endif
		static void NewProp_bAmbientOcclusion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAmbientOcclusion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmoothedCurvature_MetaData[];
#endif
		static void NewProp_bSmoothedCurvature_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothedCurvature;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionRays_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OcclusionRays;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionBlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OcclusionBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvatureBlurRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CurvatureBlurRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoxelResolution_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_VoxelResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingIterations_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SmoothingIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThicknessFactor_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ThicknessFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCurvature_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxCurvature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureAutoUVSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureToolSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFractureAutoUVSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_AddUVChannel, "AddUVChannel" }, // 3240209716
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_BakeTexture, "BakeTexture" }, // 4289467549
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_BoxProjectUVs, "BoxProjectUVs" }, // 2390811417
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_DeleteUVChannel, "DeleteUVChannel" }, // 237845624
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_DisableBoneColors, "DisableBoneColors" }, // 1525066875
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_GetUVChannelNamesFunc, "GetUVChannelNamesFunc" }, // 1463306634
		{ &Z_Construct_UFunction_UFractureAutoUVSettings_LayoutUVs, "LayoutUVs" }, // 4160382755
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for UV layout and texture baking on the geometry collection **/" },
		{ "IncludePath", "FractureToolUV.h" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for UV layout and texture baking on the geometry collection *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannel_MetaData[] = {
		{ "Category", "UVChannel" },
		{ "Comment", "/** Which UV channel to use for layout and baking */" },
		{ "DisplayName", "UV Channel" },
		{ "GetOptions", "GetUVChannelNamesFunc" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Which UV channel to use for layout and baking" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannel = { "UVChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, UVChannel), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannel_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList_Inner = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList = { "UVChannelNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, UVChannelNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionScale_MetaData[] = {
		{ "Category", "Unwrap" },
		{ "Comment", "/** The scale factor to use for UV box projection */" },
		{ "EditCondition", "!bAutoFitToBounds" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "The scale factor to use for UV box projection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionScale = { "ProjectionScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, ProjectionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds_MetaData[] = {
		{ "Category", "Unwrap" },
		{ "Comment", "/** Set the scale factor for UV box projection based on the bounding box of the geometry */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Set the scale factor for UV box projection based on the bounding box of the geometry" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bAutoFitToBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds = { "bAutoFitToBounds", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale_MetaData[] = {
		{ "Category", "Unwrap" },
		{ "Comment", "/** Ensure the projection scale is the same on each axis, either by repeating the X Axis scale, or using the max box dimension if Auto Fit to Bounds is selected. */" },
		{ "DisplayName", "Uniform Scale" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Ensure the projection scale is the same on each axis, either by repeating the X Axis scale, or using the max box dimension if Auto Fit to Bounds is selected." },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bUniformProjectionScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale = { "bUniformProjectionScale", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionUVOffset_MetaData[] = {
		{ "Category", "Unwrap" },
		{ "Comment", "/** UV Offset to apply after UV box projection */" },
		{ "DisplayName", "UV Offset" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "UV Offset to apply after UV box projection" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionUVOffset = { "ProjectionUVOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, ProjectionUVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionUVOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionUVOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot_MetaData[] = {
		{ "Category", "Unwrap" },
		{ "Comment", "/** Optionally center the UV projection around the object pivot */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Optionally center the UV projection around the object pivot" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bCenterAtPivot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot = { "bCenterAtPivot", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/** Choose whether to texture only faces with odd material IDs (corresponding to internal faces) or a custom selection */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Choose whether to texture only faces with odd material IDs (corresponding to internal faces) or a custom selection" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs = { "TargetMaterialIDs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, TargetMaterialIDs), Z_Construct_UEnum_FractureEditor_ETargetMaterialIDs, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs_MetaData)) }; // 4246603785
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs_Inner = { "MaterialIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/** Custom selection of material IDs to target for texturing */" },
		{ "EditCondition", "TargetMaterialIDs != ETargetMaterialIDs::OddIDs && TargetMaterialIDs != ETargetMaterialIDs::AllIDs" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Custom selection of material IDs to target for texturing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs = { "MaterialIDs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, MaterialIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/** The pixel resolution of the generated map */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "The pixel resolution of the generated map" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, Resolution), Z_Construct_UEnum_FractureEditor_EAutoUVTextureResolution, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution_MetaData)) }; // 3966756221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_GutterSize_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "ClampMax", "10" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Approximate space to leave between UV islands, measured in texels */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Approximate space to leave between UV islands, measured in texels" },
		{ "UIMax", "6" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_GutterSize = { "GutterSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, GutterSize), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_GutterSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_GutterSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/** The resulting automatically-generated texture map */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "The resulting automatically-generated texture map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, Result), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/** Whether to prompt user for an asset name for each generated texture, or automatically place them next to the source Geometry Collections */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Whether to prompt user for an asset name for each generated texture, or automatically place them next to the source Geometry Collections" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bPromptToSave = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave = { "bPromptToSave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting_MetaData[] = {
		{ "Category", "MapSettings" },
		{ "Comment", "/** Whether to allow the new texture to overwrite an existing texture */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Whether to allow the new texture to overwrite an existing texture" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bReplaceExisting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting = { "bReplaceExisting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType_MetaData[] = {
		{ "Category", "AttributesToBake" },
		{ "Comment", "/** Which standard set of texture channels to bake */" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Which standard set of texture channels to bake" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType = { "BakeTextureType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, BakeTextureType), Z_Construct_UEnum_FractureEditor_ETextureType, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType_MetaData)) }; // 2728950705
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter_MetaData[] = {
		{ "Category", "AttributesToBake" },
		{ "Comment", "/** Bake the distance to the external surface to a texture channel (red) */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Bake the distance to the external surface to a texture channel (red)" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bDistToOuter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter = { "bDistToOuter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion_MetaData[] = {
		{ "Category", "AttributesToBake" },
		{ "Comment", "/** Bake the ambient occlusion of each bone (considered separately) to a texture channel (green) */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Bake the ambient occlusion of each bone (considered separately) to a texture channel (green)" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bAmbientOcclusion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion = { "bAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature_MetaData[] = {
		{ "Category", "AttributesToBake" },
		{ "Comment", "/**\n\x09 * Bake a smoothed curvature metric to a texture channel (blue)\n\x09 * Specifically, this is the mean curvature of a smoothed copy of each fractured piece, baked back to the respective fracture piece\n\x09 * Note that this attribute is relatively expensive to compute\n\x09 */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Bake a smoothed curvature metric to a texture channel (blue)\nSpecifically, this is the mean curvature of a smoothed copy of each fractured piece, baked back to the respective fracture piece\nNote that this attribute is relatively expensive to compute" },
	};
#endif
	void Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature_SetBit(void* Obj)
	{
		((UFractureAutoUVSettings*)Obj)->bSmoothedCurvature = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature = { "bSmoothedCurvature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UFractureAutoUVSettings), &Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "DistToOuterSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", ".01" },
		{ "Comment", "/** Max distance to search for the outer mesh surface */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bDistToOuter" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Max distance to search for the outer mesh surface" },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionRays_MetaData[] = {
		{ "Category", "AmbientOcclusionSettings" },
		{ "ClampMax", "50000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of occlusion rays */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bAmbientOcclusion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Number of occlusion rays" },
		{ "UIMax", "1024" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionRays = { "OcclusionRays", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, OcclusionRays), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionRays_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionRays_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionBlurRadius_MetaData[] = {
		{ "Category", "AmbientOcclusionSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Pixel Radius of Gaussian Blur Kernel applied to AO map (0 will apply no blur) */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bAmbientOcclusion" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Pixel Radius of Gaussian Blur Kernel applied to AO map (0 will apply no blur)" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionBlurRadius = { "OcclusionBlurRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, OcclusionBlurRadius), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_CurvatureBlurRadius_MetaData[] = {
		{ "Category", "SmoothedCurvatureSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Pixel Radius of Gaussian Blur Kernel applied to Curvature map (0 will apply no blur) */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bSmoothedCurvature" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Pixel Radius of Gaussian Blur Kernel applied to Curvature map (0 will apply no blur)" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_CurvatureBlurRadius = { "CurvatureBlurRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, CurvatureBlurRadius), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_CurvatureBlurRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_CurvatureBlurRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_VoxelResolution_MetaData[] = {
		{ "Category", "SmoothedCurvatureSettings" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "4" },
		{ "Comment", "/** Voxel resolution of smoothed shape representation */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bSmoothedCurvature" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Voxel resolution of smoothed shape representation" },
		{ "UIMax", "512" },
		{ "UIMin", "8" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_VoxelResolution = { "VoxelResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, VoxelResolution), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_VoxelResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_VoxelResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_SmoothingIterations_MetaData[] = {
		{ "Category", "SmoothedCurvatureSettings" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Amount of smoothing iterations to apply before computing curvature */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bSmoothedCurvature" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Amount of smoothing iterations to apply before computing curvature" },
		{ "UIMax", "100" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_SmoothingIterations = { "SmoothingIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, SmoothingIterations), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_SmoothingIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_SmoothingIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ThicknessFactor_MetaData[] = {
		{ "Category", "SmoothedCurvatureSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Distance to search for correspondence between fractured shape and smoothed shape, as factor of voxel size */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bSmoothedCurvature" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Distance to search for correspondence between fractured shape and smoothed shape, as factor of voxel size" },
		{ "UIMax", "10.0" },
		{ "UIMin", "2" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ThicknessFactor = { "ThicknessFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, ThicknessFactor), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ThicknessFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ThicknessFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxCurvature_MetaData[] = {
		{ "Category", "SmoothedCurvatureSettings" },
		{ "ClampMax", "10" },
		{ "ClampMin", ".0001" },
		{ "Comment", "/** Curvatures in the range [-MaxCurvature, MaxCurvature] will be mapped from [0,1]. Values outside that range will be clamped */" },
		{ "EditCondition", "BakeTextureType == ETextureType::ThicknessAndSurfaceAttributes && bSmoothedCurvature" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ToolTip", "Curvatures in the range [-MaxCurvature, MaxCurvature] will be mapped from [0,1]. Values outside that range will be clamped" },
		{ "UIMax", "1" },
		{ "UIMin", ".01" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxCurvature = { "MaxCurvature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureAutoUVSettings, MaxCurvature), METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxCurvature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxCurvature_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureAutoUVSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_UVChannelNamesList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAutoFitToBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bUniformProjectionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ProjectionUVOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bCenterAtPivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_TargetMaterialIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaterialIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Resolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_GutterSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bPromptToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bReplaceExisting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_BakeTextureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bDistToOuter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bAmbientOcclusion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_bSmoothedCurvature,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionRays,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_OcclusionBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_CurvatureBlurRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_VoxelResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_SmoothingIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_ThicknessFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureAutoUVSettings_Statics::NewProp_MaxCurvature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureAutoUVSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureAutoUVSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureAutoUVSettings_Statics::ClassParams = {
		&UFractureAutoUVSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFractureAutoUVSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureAutoUVSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureAutoUVSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureAutoUVSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureAutoUVSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureAutoUVSettings.OuterSingleton, Z_Construct_UClass_UFractureAutoUVSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureAutoUVSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureAutoUVSettings>()
	{
		return UFractureAutoUVSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureAutoUVSettings);
	UFractureAutoUVSettings::~UFractureAutoUVSettings() {}
	void UFractureToolAutoUV::StaticRegisterNativesUFractureToolAutoUV()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureToolAutoUV);
	UClass* Z_Construct_UClass_UFractureToolAutoUV_NoRegister()
	{
		return UFractureToolAutoUV::StaticClass();
	}
	struct Z_Construct_UClass_UFractureToolAutoUV_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoUVSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoUVSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureToolAutoUV_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFractureModalTool,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolAutoUV_Statics::Class_MetaDataParams[] = {
		{ "Category", "FractureTools" },
		{ "DisplayName", "AutoUV Tool" },
		{ "IncludePath", "FractureToolUV.h" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureToolAutoUV_Statics::NewProp_AutoUVSettings_MetaData[] = {
		{ "Category", "Slicing" },
		{ "ModuleRelativePath", "Private/FractureToolUV.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFractureToolAutoUV_Statics::NewProp_AutoUVSettings = { "AutoUVSettings", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureToolAutoUV, AutoUVSettings), Z_Construct_UClass_UFractureAutoUVSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFractureToolAutoUV_Statics::NewProp_AutoUVSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolAutoUV_Statics::NewProp_AutoUVSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureToolAutoUV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureToolAutoUV_Statics::NewProp_AutoUVSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureToolAutoUV_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureToolAutoUV>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureToolAutoUV_Statics::ClassParams = {
		&UFractureToolAutoUV::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureToolAutoUV_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolAutoUV_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureToolAutoUV_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureToolAutoUV_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureToolAutoUV()
	{
		if (!Z_Registration_Info_UClass_UFractureToolAutoUV.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureToolAutoUV.OuterSingleton, Z_Construct_UClass_UFractureToolAutoUV_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureToolAutoUV.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureToolAutoUV>()
	{
		return UFractureToolAutoUV::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureToolAutoUV);
	UFractureToolAutoUV::~UFractureToolAutoUV() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics::EnumInfo[] = {
		{ EAutoUVTextureResolution_StaticEnum, TEXT("EAutoUVTextureResolution"), &Z_Registration_Info_UEnum_EAutoUVTextureResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3966756221U) },
		{ ETextureType_StaticEnum, TEXT("ETextureType"), &Z_Registration_Info_UEnum_ETextureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2728950705U) },
		{ ETargetMaterialIDs_StaticEnum, TEXT("ETargetMaterialIDs"), &Z_Registration_Info_UEnum_ETargetMaterialIDs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4246603785U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureAutoUVSettings, UFractureAutoUVSettings::StaticClass, TEXT("UFractureAutoUVSettings"), &Z_Registration_Info_UClass_UFractureAutoUVSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureAutoUVSettings), 288376832U) },
		{ Z_Construct_UClass_UFractureToolAutoUV, UFractureToolAutoUV::StaticClass, TEXT("UFractureToolAutoUV"), &Z_Registration_Info_UClass_UFractureToolAutoUV, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureToolAutoUV), 2757869984U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_790775136(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_FractureToolUV_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
