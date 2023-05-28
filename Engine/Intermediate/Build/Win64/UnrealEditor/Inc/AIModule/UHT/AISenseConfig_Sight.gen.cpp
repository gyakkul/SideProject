// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Perception/AISenseConfig_Sight.h"
#include "../../AIModule/Classes/Perception/AIPerceptionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISenseConfig_Sight() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISenseAffiliationFilter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UAISenseConfig_Sight::StaticRegisterNativesUAISenseConfig_Sight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISenseConfig_Sight);
	UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister()
	{
		return UAISenseConfig_Sight::StaticClass();
	}
	struct Z_Construct_UClass_UAISenseConfig_Sight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Implementation_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Implementation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseSightRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoseSightRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngleDegrees_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngleDegrees;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectionByAffiliation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetectionByAffiliation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoSuccessRangeFromLastSeenLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointOfViewBackwardOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointOfViewBackwardOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NearClippingRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NearClippingRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISenseConfig_Sight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISenseConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "AI Sight config" },
		{ "IncludePath", "Perception/AISenseConfig_Sight.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation = { "Implementation", nullptr, (EPropertyFlags)0x0014000002014015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, Implementation), Z_Construct_UClass_UClass, Z_Construct_UClass_UAISense_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum sight distance to notice a target. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "Maximum sight distance to notice a target." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, SightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Maximum sight distance to see target that has been already seen. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "Maximum sight distance to see target that has been already seen." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius = { "LoseSightRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, LoseSightRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime. \n\x09 *\x09The value represents the angle measured in relation to the forward vector, not the whole range. */" },
		{ "DisplayName", "PeripheralVisionHalfAngleDegrees" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime.\n    The value represents the angle measured in relation to the forward vector, not the whole range." },
		{ "UIMax", "180.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees = { "PeripheralVisionAngleDegrees", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, PeripheralVisionAngleDegrees), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation = { "DetectionByAffiliation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, DetectionByAffiliation), Z_Construct_UScriptStruct_FAISenseAffiliationFilter, METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation_MetaData)) }; // 1809039249
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "If not an InvalidRange (which is the default), we will always be able to see the target that has already been seen if they are within this range of their last seen location." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation = { "AutoSuccessRangeFromLastSeenLocation", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, AutoSuccessRangeFromLastSeenLocation), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PointOfViewBackwardOffset_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Point of view move back distance for cone calculation. In conjunction with near clipping distance, this will act as a close by awareness and peripheral vision. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "Point of view move back distance for cone calculation. In conjunction with near clipping distance, this will act as a close by awareness and peripheral vision." },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PointOfViewBackwardOffset = { "PointOfViewBackwardOffset", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, PointOfViewBackwardOffset), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PointOfViewBackwardOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PointOfViewBackwardOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_NearClippingRadius_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Near clipping distance, to be used with point of view backward offset. Will act as a close by awareness and peripheral vision */" },
		{ "ModuleRelativePath", "Classes/Perception/AISenseConfig_Sight.h" },
		{ "ToolTip", "Near clipping distance, to be used with point of view backward offset. Will act as a close by awareness and peripheral vision" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_NearClippingRadius = { "NearClippingRadius", nullptr, (EPropertyFlags)0x0010000000014015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAISenseConfig_Sight, NearClippingRadius), METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_NearClippingRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_NearClippingRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISenseConfig_Sight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_Implementation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_SightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_LoseSightRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PeripheralVisionAngleDegrees,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_DetectionByAffiliation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_AutoSuccessRangeFromLastSeenLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_PointOfViewBackwardOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISenseConfig_Sight_Statics::NewProp_NearClippingRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISenseConfig_Sight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISenseConfig_Sight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISenseConfig_Sight_Statics::ClassParams = {
		&UAISenseConfig_Sight::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISenseConfig_Sight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::PropPointers),
		0,
		0x001010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAISenseConfig_Sight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISenseConfig_Sight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISenseConfig_Sight()
	{
		if (!Z_Registration_Info_UClass_UAISenseConfig_Sight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISenseConfig_Sight.OuterSingleton, Z_Construct_UClass_UAISenseConfig_Sight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAISenseConfig_Sight.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAISenseConfig_Sight>()
	{
		return UAISenseConfig_Sight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISenseConfig_Sight);
	UAISenseConfig_Sight::~UAISenseConfig_Sight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAISenseConfig_Sight, UAISenseConfig_Sight::StaticClass, TEXT("UAISenseConfig_Sight"), &Z_Registration_Info_UClass_UAISenseConfig_Sight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISenseConfig_Sight), 3226065507U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_162932233(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISenseConfig_Sight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
