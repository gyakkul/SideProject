// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneToolsUserSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneToolsUserSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings_NoRegister();
	MOVIESCENETOOLS_API UEnum* Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality();
	MOVIESCENETOOLS_API UEnum* Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum();
	MOVIESCENETOOLS_API UEnum* Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum();
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FControlFindReplaceString();
	MOVIESCENETOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FControlToTransformMappings();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThumbnailQuality;
	static UEnum* EThumbnailQuality_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailQuality.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThumbnailQuality.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("EThumbnailQuality"));
		}
		return Z_Registration_Info_UEnum_EThumbnailQuality.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UEnum* StaticEnum<EThumbnailQuality>()
	{
		return EThumbnailQuality_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::Enumerators[] = {
		{ "EThumbnailQuality::Draft", (int64)EThumbnailQuality::Draft },
		{ "EThumbnailQuality::Normal", (int64)EThumbnailQuality::Normal },
		{ "EThumbnailQuality::Best", (int64)EThumbnailQuality::Best },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::Enum_MetaDataParams[] = {
		{ "Best.Name", "EThumbnailQuality::Best" },
		{ "Draft.Name", "EThumbnailQuality::Draft" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "Normal.Name", "EThumbnailQuality::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		"EThumbnailQuality",
		"EThumbnailQuality",
		Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailQuality.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThumbnailQuality.InnerSingleton, Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThumbnailQuality.InnerSingleton;
	}
	void UMovieSceneUserThumbnailSettings::StaticRegisterNativesUMovieSceneUserThumbnailSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneUserThumbnailSettings);
	UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings_NoRegister()
	{
		return UMovieSceneUserThumbnailSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawThumbnails_MetaData[];
#endif
		static void NewProp_bDrawThumbnails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawThumbnails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSingleThumbnails_MetaData[];
#endif
		static void NewProp_bDrawSingleThumbnails_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSingleThumbnails;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbnailSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Quality_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Quality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovieSceneToolsUserSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to draw thumbnails or not */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to draw thumbnails or not" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_SetBit(void* Obj)
	{
		((UMovieSceneUserThumbnailSettings*)Obj)->bDrawThumbnails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails = { "bDrawThumbnails", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserThumbnailSettings), &Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Whether to draw a single thumbnail for this section or as many as can fit */" },
		{ "EditCondition", "bDrawThumbnails" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to draw a single thumbnail for this section or as many as can fit" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_SetBit(void* Obj)
	{
		((UMovieSceneUserThumbnailSettings*)Obj)->bDrawSingleThumbnails = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails = { "bDrawSingleThumbnails", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserThumbnailSettings), &Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize_MetaData[] = {
		{ "Category", "General" },
		{ "ClampMax", "1024" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size at which to draw thumbnails on thumbnail sections */" },
		{ "EditCondition", "bDrawThumbnails" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Size at which to draw thumbnails on thumbnail sections" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize = { "ThumbnailSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserThumbnailSettings, ThumbnailSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Quality to render the thumbnails with */" },
		{ "EditCondition", "bDrawThumbnails" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Quality to render the thumbnails with" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserThumbnailSettings, Quality), Z_Construct_UEnum_MovieSceneTools_EThumbnailQuality, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_MetaData)) }; // 3400787087
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawThumbnails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_bDrawSingleThumbnails,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_ThumbnailSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::NewProp_Quality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneUserThumbnailSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::ClassParams = {
		&UMovieSceneUserThumbnailSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneUserThumbnailSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneUserThumbnailSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneUserThumbnailSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneUserThumbnailSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneUserThumbnailSettings.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneUserThumbnailSettings>()
	{
		return UMovieSceneUserThumbnailSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneUserThumbnailSettings);
	UMovieSceneUserThumbnailSettings::~UMovieSceneUserThumbnailSettings() {}
	void UMovieSceneUserImportFBXSettings::StaticRegisterNativesUMovieSceneUserImportFBXSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneUserImportFBXSettings);
	UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings_NoRegister()
	{
		return UMovieSceneUserImportFBXSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchByNameOnly_MetaData[];
#endif
		static void NewProp_bMatchByNameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchByNameOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSceneUnit_MetaData[];
#endif
		static void NewProp_bConvertSceneUnit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSceneUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateCameras_MetaData[];
#endif
		static void NewProp_bCreateCameras_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateCameras;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceTransformTrack_MetaData[];
#endif
		static void NewProp_bReplaceTransformTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceTransformTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReduceKeys_MetaData[];
#endif
		static void NewProp_bReduceKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReduceKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReduceKeysTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReduceKeysTolerance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneToolsUserSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Match fbx node names to sequencer node names" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bMatchByNameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly = { "bMatchByNameOnly", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bForceFrontXAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Convert the scene from FBX unit to UE unit(centimeter)" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bConvertSceneUnit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit = { "bConvertSceneUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Import Uniform Scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXSettings, ImportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ImportUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ImportUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** Whether to create cameras if they don't already exist in the level. */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to create cameras if they don't already exist in the level." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bCreateCameras = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras = { "bCreateCameras", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** Whether to replace the existing transform track or create a new track/section */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to replace the existing transform track or create a new track/section" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bReplaceTransformTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack = { "bReplaceTransformTrack", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** Whether to remove keyframes within a tolerance from the imported tracks */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to remove keyframes within a tolerance from the imported tracks" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXSettings*)Obj)->bReduceKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys = { "bReduceKeys", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance_MetaData[] = {
		{ "Category", "Import" },
		{ "Comment", "/** The tolerance for reduce keys */" },
		{ "EditCondition", "bReduceKeys" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "The tolerance for reduce keys" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance = { "ReduceKeysTolerance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXSettings, ReduceKeysTolerance), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bMatchByNameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bForceFrontXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bConvertSceneUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ImportUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bCreateCameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReplaceTransformTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_bReduceKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::NewProp_ReduceKeysTolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneUserImportFBXSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::ClassParams = {
		&UMovieSceneUserImportFBXSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneUserImportFBXSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneUserImportFBXSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneUserImportFBXSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneUserImportFBXSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneUserImportFBXSettings.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneUserImportFBXSettings>()
	{
		return UMovieSceneUserImportFBXSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneUserImportFBXSettings);
	UMovieSceneUserImportFBXSettings::~UMovieSceneUserImportFBXSettings() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FControlRigChannelEnum;
	static UEnum* FControlRigChannelEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FControlRigChannelEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FControlRigChannelEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("FControlRigChannelEnum"));
		}
		return Z_Registration_Info_UEnum_FControlRigChannelEnum.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UEnum* StaticEnum<FControlRigChannelEnum>()
	{
		return FControlRigChannelEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::Enumerators[] = {
		{ "FControlRigChannelEnum::Bool", (int64)FControlRigChannelEnum::Bool },
		{ "FControlRigChannelEnum::Enum", (int64)FControlRigChannelEnum::Enum },
		{ "FControlRigChannelEnum::Integer", (int64)FControlRigChannelEnum::Integer },
		{ "FControlRigChannelEnum::Float", (int64)FControlRigChannelEnum::Float },
		{ "FControlRigChannelEnum::Vector2DX", (int64)FControlRigChannelEnum::Vector2DX },
		{ "FControlRigChannelEnum::Vector2DY", (int64)FControlRigChannelEnum::Vector2DY },
		{ "FControlRigChannelEnum::PositionX", (int64)FControlRigChannelEnum::PositionX },
		{ "FControlRigChannelEnum::PositionY", (int64)FControlRigChannelEnum::PositionY },
		{ "FControlRigChannelEnum::PositionZ", (int64)FControlRigChannelEnum::PositionZ },
		{ "FControlRigChannelEnum::RotatorX", (int64)FControlRigChannelEnum::RotatorX },
		{ "FControlRigChannelEnum::RotatorY", (int64)FControlRigChannelEnum::RotatorY },
		{ "FControlRigChannelEnum::RotatorZ", (int64)FControlRigChannelEnum::RotatorZ },
		{ "FControlRigChannelEnum::ScaleX", (int64)FControlRigChannelEnum::ScaleX },
		{ "FControlRigChannelEnum::ScaleY", (int64)FControlRigChannelEnum::ScaleY },
		{ "FControlRigChannelEnum::ScaleZ", (int64)FControlRigChannelEnum::ScaleZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Bool.Comment", "/**Bool*/" },
		{ "Bool.Name", "FControlRigChannelEnum::Bool" },
		{ "Bool.ToolTip", "Bool" },
		{ "Comment", "/** Enumeration specifying the control type and channel*/" },
		{ "Enum.Comment", "/**Enum*/" },
		{ "Enum.Name", "FControlRigChannelEnum::Enum" },
		{ "Enum.ToolTip", "Enum" },
		{ "Float.Comment", "/**Float*/" },
		{ "Float.Name", "FControlRigChannelEnum::Float" },
		{ "Float.ToolTip", "Float" },
		{ "Integer.Comment", "/**Integer*/" },
		{ "Integer.Name", "FControlRigChannelEnum::Integer" },
		{ "Integer.ToolTip", "Integer" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "PositionX.Comment", "/**Position.X*/" },
		{ "PositionX.Name", "FControlRigChannelEnum::PositionX" },
		{ "PositionX.ToolTip", "Position.X" },
		{ "PositionY.Comment", "/**Position.Y*/" },
		{ "PositionY.Name", "FControlRigChannelEnum::PositionY" },
		{ "PositionY.ToolTip", "Position.Y" },
		{ "PositionZ.Comment", "/**Position.Z*/" },
		{ "PositionZ.Name", "FControlRigChannelEnum::PositionZ" },
		{ "PositionZ.ToolTip", "Position.Z" },
		{ "RotatorX.Comment", "/**Rotator.X*/" },
		{ "RotatorX.Name", "FControlRigChannelEnum::RotatorX" },
		{ "RotatorX.ToolTip", "Rotator.X" },
		{ "RotatorY.Comment", "/**Rotator.Y*/" },
		{ "RotatorY.Name", "FControlRigChannelEnum::RotatorY" },
		{ "RotatorY.ToolTip", "Rotator.Y" },
		{ "RotatorZ.Comment", "/**Rotator.Z*/" },
		{ "RotatorZ.Name", "FControlRigChannelEnum::RotatorZ" },
		{ "RotatorZ.ToolTip", "Rotator.Z" },
		{ "ScaleX.Comment", "/**Scale.X*/" },
		{ "ScaleX.Name", "FControlRigChannelEnum::ScaleX" },
		{ "ScaleX.ToolTip", "Scale.X" },
		{ "ScaleY.Comment", "/**Scale.Y*/" },
		{ "ScaleY.Name", "FControlRigChannelEnum::ScaleY" },
		{ "ScaleY.ToolTip", "Scale.Y" },
		{ "ScaleZ.Comment", "/**Scale.Z*/" },
		{ "ScaleZ.Name", "FControlRigChannelEnum::ScaleZ" },
		{ "ScaleZ.ToolTip", "Scale.Z" },
		{ "ToolTip", "Enumeration specifying the control type and channel" },
		{ "Vector2DX.Comment", "/**Vector2D.X*/" },
		{ "Vector2DX.Name", "FControlRigChannelEnum::Vector2DX" },
		{ "Vector2DX.ToolTip", "Vector2D.X" },
		{ "Vector2DY.Comment", "/**Vector2D.Y*/" },
		{ "Vector2DY.Name", "FControlRigChannelEnum::Vector2DY" },
		{ "Vector2DY.ToolTip", "Vector2D.Y" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		"FControlRigChannelEnum",
		"FControlRigChannelEnum",
		Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum()
	{
		if (!Z_Registration_Info_UEnum_FControlRigChannelEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FControlRigChannelEnum.InnerSingleton, Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FControlRigChannelEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_FTransformChannelEnum;
	static UEnum* FTransformChannelEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_FTransformChannelEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_FTransformChannelEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("FTransformChannelEnum"));
		}
		return Z_Registration_Info_UEnum_FTransformChannelEnum.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UEnum* StaticEnum<FTransformChannelEnum>()
	{
		return FTransformChannelEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::Enumerators[] = {
		{ "FTransformChannelEnum::TranslateX", (int64)FTransformChannelEnum::TranslateX },
		{ "FTransformChannelEnum::TranslateY", (int64)FTransformChannelEnum::TranslateY },
		{ "FTransformChannelEnum::TranslateZ", (int64)FTransformChannelEnum::TranslateZ },
		{ "FTransformChannelEnum::RotateX", (int64)FTransformChannelEnum::RotateX },
		{ "FTransformChannelEnum::RotateY", (int64)FTransformChannelEnum::RotateY },
		{ "FTransformChannelEnum::RotateZ", (int64)FTransformChannelEnum::RotateZ },
		{ "FTransformChannelEnum::ScaleX", (int64)FTransformChannelEnum::ScaleX },
		{ "FTransformChannelEnum::ScaleY", (int64)FTransformChannelEnum::ScaleY },
		{ "FTransformChannelEnum::ScaleZ", (int64)FTransformChannelEnum::ScaleZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enumeration specifying the transfrom channel  */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "RotateX.Name", "FTransformChannelEnum::RotateX" },
		{ "RotateY.Name", "FTransformChannelEnum::RotateY" },
		{ "RotateZ.Name", "FTransformChannelEnum::RotateZ" },
		{ "ScaleX.Name", "FTransformChannelEnum::ScaleX" },
		{ "ScaleY.Name", "FTransformChannelEnum::ScaleY" },
		{ "ScaleZ.Name", "FTransformChannelEnum::ScaleZ" },
		{ "ToolTip", "Enumeration specifying the transfrom channel" },
		{ "TranslateX.Name", "FTransformChannelEnum::TranslateX" },
		{ "TranslateY.Name", "FTransformChannelEnum::TranslateY" },
		{ "TranslateZ.Name", "FTransformChannelEnum::TranslateZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		"FTransformChannelEnum",
		"FTransformChannelEnum",
		Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum()
	{
		if (!Z_Registration_Info_UEnum_FTransformChannelEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FTransformChannelEnum.InnerSingleton, Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_FTransformChannelEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlToTransformMappings;
class UScriptStruct* FControlToTransformMappings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlToTransformMappings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlToTransformMappings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlToTransformMappings, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("ControlToTransformMappings"));
	}
	return Z_Registration_Info_UScriptStruct_ControlToTransformMappings.OuterSingleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FControlToTransformMappings>()
{
	return FControlToTransformMappings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlToTransformMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_ControlChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ControlChannel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FBXChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FBXChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FBXChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNegate_MetaData[];
#endif
		static void NewProp_bNegate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlToTransformMappings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel_MetaData[] = {
		{ "Category", "Control To Transform Mappings" },
		{ "Comment", "/** The channel of the control to map */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "The channel of the control to map" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel = { "ControlChannel", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlToTransformMappings, ControlChannel), Z_Construct_UEnum_MovieSceneTools_FControlRigChannelEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel_MetaData)) }; // 409441958
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel_MetaData[] = {
		{ "Category", "Controle To Transform Mappings" },
		{ "Comment", "/** The channel of the fbx transofrm node to map  */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "The channel of the fbx transofrm node to map" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel = { "FBXChannel", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlToTransformMappings, FBXChannel), Z_Construct_UEnum_MovieSceneTools_FTransformChannelEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel_MetaData)) }; // 480628168
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate_MetaData[] = {
		{ "Category", "Control To Transform Mappings" },
		{ "Comment", "/** Whether to negate the value */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to negate the value" },
	};
#endif
	void Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate_SetBit(void* Obj)
	{
		((FControlToTransformMappings*)Obj)->bNegate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate = { "bNegate", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FControlToTransformMappings), &Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_ControlChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_FBXChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewProp_bNegate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"ControlToTransformMappings",
		sizeof(FControlToTransformMappings),
		alignof(FControlToTransformMappings),
		Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlToTransformMappings()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlToTransformMappings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlToTransformMappings.InnerSingleton, Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlToTransformMappings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlFindReplaceString;
class UScriptStruct* FControlFindReplaceString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlFindReplaceString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlFindReplaceString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlFindReplaceString, (UObject*)Z_Construct_UPackage__Script_MovieSceneTools(), TEXT("ControlFindReplaceString"));
	}
	return Z_Registration_Info_UScriptStruct_ControlFindReplaceString.OuterSingleton;
}
template<> MOVIESCENETOOLS_API UScriptStruct* StaticStruct<FControlFindReplaceString>()
{
	return FControlFindReplaceString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlFindReplaceString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Find_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Find;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Replace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Replace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlFindReplaceString>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Find_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** The string to find in the imported data*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "The string to find in the imported data" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Find = { "Find", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlFindReplaceString, Find), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Find_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Find_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Replace_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** The string to replace in the imported data*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "The string to replace in the imported data" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Replace = { "Replace", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FControlFindReplaceString, Replace), METADATA_PARAMS(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Replace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Replace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Find,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewProp_Replace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
		nullptr,
		&NewStructOps,
		"ControlFindReplaceString",
		sizeof(FControlFindReplaceString),
		alignof(FControlFindReplaceString),
		Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlFindReplaceString()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlFindReplaceString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlFindReplaceString.InnerSingleton, Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlFindReplaceString.InnerSingleton;
	}
	void UMovieSceneUserImportFBXControlRigSettings::StaticRegisterNativesUMovieSceneUserImportFBXControlRigSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovieSceneUserImportFBXControlRigSettings);
	UClass* Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_NoRegister()
	{
		return UMovieSceneUserImportFBXControlRigSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedStartTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedStartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImportedEndTime;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedNodeNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedNodeNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ImportedNodeNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedFrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportedFrameRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FindAndReplaceStrings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindAndReplaceStrings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FindAndReplaceStrings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceFrontXAxis_MetaData[];
#endif
		static void NewProp_bForceFrontXAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFrontXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertSceneUnit_MetaData[];
#endif
		static void NewProp_bConvertSceneUnit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertSceneUnit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportUniformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ImportUniformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportOntoSelectedControls_MetaData[];
#endif
		static void NewProp_bImportOntoSelectedControls_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportOntoSelectedControls;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToInsertOrReplaceAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TimeToInsertOrReplaceAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInsertAnimation_MetaData[];
#endif
		static void NewProp_bInsertAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInsertAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpecifyTimeRange_MetaData[];
#endif
		static void NewProp_bSpecifyTimeRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpecifyTimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTimeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTimeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTimeRange;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlChannelMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlChannelMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlChannelMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MovieSceneToolsUserSettings.h" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFileName_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** Imported File Name */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Imported File Name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFileName = { "ImportedFileName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ImportedFileName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedStartTime_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** Imported File Duration in Seconds */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Imported File Duration in Seconds" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedStartTime = { "ImportedStartTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ImportedStartTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedStartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedStartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedEndTime_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** Imported File  */" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Imported File" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedEndTime = { "ImportedEndTime", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ImportedEndTime), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedEndTime_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames_Inner = { "ImportedNodeNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** List Of Imported Names in FBX File*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "List Of Imported Names in FBX File" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames = { "ImportedNodeNames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ImportedNodeNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFrameRate_MetaData[] = {
		{ "Category", "Imported File Information" },
		{ "Comment", "/** Incoming File Frame Rate*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Incoming File Frame Rate" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFrameRate = { "ImportedFrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ImportedFrameRate), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFrameRate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings_Inner = { "FindAndReplaceStrings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlFindReplaceString, METADATA_PARAMS(nullptr, 0) }; // 2108230028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings_MetaData[] = {
		{ "Category", "String Matching Options" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Strings In Imported Node To Find And Replace" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings = { "FindAndReplaceStrings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, FindAndReplaceStrings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings_MetaData)) }; // 2108230028
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis_MetaData[] = {
		{ "Category", "Import Options" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXControlRigSettings*)Obj)->bForceFrontXAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis = { "bForceFrontXAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXControlRigSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Convert the scene from FBX unit to UE unit(centimeter)" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXControlRigSettings*)Obj)->bConvertSceneUnit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit = { "bConvertSceneUnit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXControlRigSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportUniformScale_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Import Uniform Scale" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportUniformScale = { "ImportUniformScale", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ImportUniformScale), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportUniformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportUniformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls_MetaData[] = {
		{ "Category", "Import Options" },
		{ "Comment", "/** Whether or not import onto selected controls or all controls*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether or not import onto selected controls or all controls" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXControlRigSettings*)Obj)->bImportOntoSelectedControls = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls = { "bImportOntoSelectedControls", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXControlRigSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_TimeToInsertOrReplaceAnimation_MetaData[] = {
		{ "Category", "Import Options" },
		{ "Comment", "/** Time that we insert or replace the imported animation*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Time that we insert or replace the imported animation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_TimeToInsertOrReplaceAnimation = { "TimeToInsertOrReplaceAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, TimeToInsertOrReplaceAnimation), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_TimeToInsertOrReplaceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_TimeToInsertOrReplaceAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation_MetaData[] = {
		{ "Category", "Import Options" },
		{ "Comment", "/** Whether or not we insert or replace, by default we insert*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether or not we insert or replace, by default we insert" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXControlRigSettings*)Obj)->bInsertAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation = { "bInsertAnimation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXControlRigSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange_MetaData[] = {
		{ "Category", "Import Options" },
		{ "Comment", "/** Whether to import over specific Time Range*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Whether to import over specific Time Range" },
	};
#endif
	void Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange_SetBit(void* Obj)
	{
		((UMovieSceneUserImportFBXControlRigSettings*)Obj)->bSpecifyTimeRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange = { "bSpecifyTimeRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMovieSceneUserImportFBXControlRigSettings), &Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_StartTimeRange_MetaData[] = {
		{ "Category", "Import Options" },
		{ "Comment", "/**Start Time Range To Import*/" },
		{ "EditCondition", "bSpecifyTimeRange" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Start Time Range To Import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_StartTimeRange = { "StartTimeRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, StartTimeRange), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_StartTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_StartTimeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_EndTimeRange_MetaData[] = {
		{ "Category", "Import Options" },
		{ "Comment", "/**End Time Range To Import */" },
		{ "EditCondition", "bSpecifyTimeRange" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "End Time Range To Import" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_EndTimeRange = { "EndTimeRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, EndTimeRange), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_EndTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_EndTimeRange_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings_Inner = { "ControlChannelMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FControlToTransformMappings, METADATA_PARAMS(nullptr, 0) }; // 4109798116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings_MetaData[] = {
		{ "Category", "Control Attribute Mappings" },
		{ "Comment", "/** Mappings for how Control Rig Control Attributes Map to the incoming Transforms*/" },
		{ "ModuleRelativePath", "Public/MovieSceneToolsUserSettings.h" },
		{ "ToolTip", "Mappings for how Control Rig Control Attributes Map to the incoming Transforms" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings = { "ControlChannelMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMovieSceneUserImportFBXControlRigSettings, ControlChannelMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings_MetaData)) }; // 4109798116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedStartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedNodeNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportedFrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_FindAndReplaceStrings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bForceFrontXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bConvertSceneUnit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ImportUniformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bImportOntoSelectedControls,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_TimeToInsertOrReplaceAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bInsertAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_bSpecifyTimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_StartTimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_EndTimeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::NewProp_ControlChannelMappings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneUserImportFBXControlRigSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::ClassParams = {
		&UMovieSceneUserImportFBXControlRigSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings()
	{
		if (!Z_Registration_Info_UClass_UMovieSceneUserImportFBXControlRigSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovieSceneUserImportFBXControlRigSettings.OuterSingleton, Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovieSceneUserImportFBXControlRigSettings.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UMovieSceneUserImportFBXControlRigSettings>()
	{
		return UMovieSceneUserImportFBXControlRigSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneUserImportFBXControlRigSettings);
	UMovieSceneUserImportFBXControlRigSettings::~UMovieSceneUserImportFBXControlRigSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::EnumInfo[] = {
		{ EThumbnailQuality_StaticEnum, TEXT("EThumbnailQuality"), &Z_Registration_Info_UEnum_EThumbnailQuality, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3400787087U) },
		{ FControlRigChannelEnum_StaticEnum, TEXT("FControlRigChannelEnum"), &Z_Registration_Info_UEnum_FControlRigChannelEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 409441958U) },
		{ FTransformChannelEnum_StaticEnum, TEXT("FTransformChannelEnum"), &Z_Registration_Info_UEnum_FTransformChannelEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 480628168U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::ScriptStructInfo[] = {
		{ FControlToTransformMappings::StaticStruct, Z_Construct_UScriptStruct_FControlToTransformMappings_Statics::NewStructOps, TEXT("ControlToTransformMappings"), &Z_Registration_Info_UScriptStruct_ControlToTransformMappings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlToTransformMappings), 4109798116U) },
		{ FControlFindReplaceString::StaticStruct, Z_Construct_UScriptStruct_FControlFindReplaceString_Statics::NewStructOps, TEXT("ControlFindReplaceString"), &Z_Registration_Info_UScriptStruct_ControlFindReplaceString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlFindReplaceString), 2108230028U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovieSceneUserThumbnailSettings, UMovieSceneUserThumbnailSettings::StaticClass, TEXT("UMovieSceneUserThumbnailSettings"), &Z_Registration_Info_UClass_UMovieSceneUserThumbnailSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneUserThumbnailSettings), 2165060921U) },
		{ Z_Construct_UClass_UMovieSceneUserImportFBXSettings, UMovieSceneUserImportFBXSettings::StaticClass, TEXT("UMovieSceneUserImportFBXSettings"), &Z_Registration_Info_UClass_UMovieSceneUserImportFBXSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneUserImportFBXSettings), 702968965U) },
		{ Z_Construct_UClass_UMovieSceneUserImportFBXControlRigSettings, UMovieSceneUserImportFBXControlRigSettings::StaticClass, TEXT("UMovieSceneUserImportFBXControlRigSettings"), &Z_Registration_Info_UClass_UMovieSceneUserImportFBXControlRigSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovieSceneUserImportFBXControlRigSettings), 499734567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_3103110991(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Public_MovieSceneToolsUserSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
