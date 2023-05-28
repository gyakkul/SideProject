// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataBeam2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBeam2Method();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBeamTaperMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamTargetData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBeam2Method;
	static UEnum* EBeam2Method_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBeam2Method.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBeam2Method.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBeam2Method, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBeam2Method"));
		}
		return Z_Registration_Info_UEnum_EBeam2Method.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBeam2Method>()
	{
		return EBeam2Method_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBeam2Method_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBeam2Method_Statics::Enumerators[] = {
		{ "PEB2M_Distance", (int64)PEB2M_Distance },
		{ "PEB2M_Target", (int64)PEB2M_Target },
		{ "PEB2M_Branch", (int64)PEB2M_Branch },
		{ "PEB2M_MAX", (int64)PEB2M_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBeam2Method_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "PEB2M_Branch.DisplayName", "Branch" },
		{ "PEB2M_Branch.Name", "PEB2M_Branch" },
		{ "PEB2M_Distance.DisplayName", "Distance" },
		{ "PEB2M_Distance.Name", "PEB2M_Distance" },
		{ "PEB2M_MAX.Name", "PEB2M_MAX" },
		{ "PEB2M_Target.DisplayName", "Target" },
		{ "PEB2M_Target.Name", "PEB2M_Target" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBeam2Method_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBeam2Method",
		"EBeam2Method",
		Z_Construct_UEnum_Engine_EBeam2Method_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBeam2Method_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBeam2Method_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBeam2Method_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBeam2Method()
	{
		if (!Z_Registration_Info_UEnum_EBeam2Method.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBeam2Method.InnerSingleton, Z_Construct_UEnum_Engine_EBeam2Method_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBeam2Method.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBeamTaperMethod;
	static UEnum* EBeamTaperMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBeamTaperMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBeamTaperMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBeamTaperMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBeamTaperMethod"));
		}
		return Z_Registration_Info_UEnum_EBeamTaperMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBeamTaperMethod>()
	{
		return EBeamTaperMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::Enumerators[] = {
		{ "PEBTM_None", (int64)PEBTM_None },
		{ "PEBTM_Full", (int64)PEBTM_Full },
		{ "PEBTM_Partial", (int64)PEBTM_Partial },
		{ "PEBTM_MAX", (int64)PEBTM_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "//\n// Beam Tapering Variables.\n//\n" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "PEBTM_Full.DisplayName", "Full" },
		{ "PEBTM_Full.Name", "PEBTM_Full" },
		{ "PEBTM_MAX.Name", "PEBTM_MAX" },
		{ "PEBTM_None.DisplayName", "None" },
		{ "PEBTM_None.Name", "PEBTM_None" },
		{ "PEBTM_Partial.DisplayName", "Partial" },
		{ "PEBTM_Partial.Name", "PEBTM_Partial" },
		{ "ToolTip", "Beam Tapering Variables." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBeamTaperMethod",
		"EBeamTaperMethod",
		Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBeamTaperMethod()
	{
		if (!Z_Registration_Info_UEnum_EBeamTaperMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBeamTaperMethod.InnerSingleton, Z_Construct_UEnum_Engine_EBeamTaperMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBeamTaperMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BeamTargetData;
class UScriptStruct* FBeamTargetData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BeamTargetData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BeamTargetData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamTargetData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BeamTargetData"));
	}
	return Z_Registration_Info_UScriptStruct_BeamTargetData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBeamTargetData>()
{
	return FBeamTargetData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBeamTargetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPercentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamTargetData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//\n// Beam Multi-target Variables.\n//\n" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Beam Multi-target Variables." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamTargetData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName_MetaData[] = {
		{ "Category", "BeamTargetData" },
		{ "Comment", "/** Name of the target.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Name of the target." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName = { "TargetName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBeamTargetData, TargetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage_MetaData[] = {
		{ "Category", "BeamTargetData" },
		{ "Comment", "/** Percentage chance the target will be selected (100 = always).\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Percentage chance the target will be selected (100 = always)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage = { "TargetPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBeamTargetData, TargetPercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBeamTargetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewProp_TargetPercentage,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBeamTargetData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BeamTargetData",
		sizeof(FBeamTargetData),
		alignof(FBeamTargetData),
		Z_Construct_UScriptStruct_FBeamTargetData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBeamTargetData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBeamTargetData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBeamTargetData()
	{
		if (!Z_Registration_Info_UScriptStruct_BeamTargetData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BeamTargetData.InnerSingleton, Z_Construct_UScriptStruct_FBeamTargetData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BeamTargetData.InnerSingleton;
	}
	void UParticleModuleTypeDataBeam2::StaticRegisterNativesUParticleModuleTypeDataBeam2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataBeam2);
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister()
	{
		return UParticleModuleTypeDataBeam2::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeamMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BeamMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTile_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TextureTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTileDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureTileDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sheets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Sheets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBeamCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBeamCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InterpolationPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysOn_MetaData[];
#endif
		static void NewProp_bAlwaysOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysOn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVectorStepSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UpVectorStepSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BranchParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BranchParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaperMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TaperMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaperFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaperFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TaperScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TaperScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGeometry_MetaData[];
#endif
		static void NewProp_RenderGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderDirectLine_MetaData[];
#endif
		static void NewProp_RenderDirectLine_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderDirectLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLines_MetaData[];
#endif
		static void NewProp_RenderLines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderLines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTessellation_MetaData[];
#endif
		static void NewProp_RenderTessellation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderTessellation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Beam Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** \n\x09 *\x09The method with which to form the beam(s). Must be one of the following:\n\x09 *\x09\x09PEB2M_Distance\x09- Use the distance property to emit a beam along the X-axis of the emitter.\n\x09 *\x09\x09PEB2M_Target\x09- Emit a beam from the source to the supplied target.\n\x09 *\x09\x09PEB2M_Branch\x09- Currently unimplemented.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The method with which to form the beam(s). Must be one of the following:\n        PEB2M_Distance  - Use the distance property to emit a beam along the X-axis of the emitter.\n        PEB2M_Target    - Emit a beam from the source to the supplied target.\n        PEB2M_Branch    - Currently unimplemented." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod = { "BeamMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, BeamMethod), Z_Construct_UEnum_Engine_EBeam2Method, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod_MetaData)) }; // 1809189383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** The number of times to tile the texture along each beam. \n\x09 *  Overridden by TextureTilingDistance if it is > 0.0.\n\x09 *\x09""1st UV set only. 2nd UV set does not Tile.\x09\x09\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The number of times to tile the texture along each beam.\nOverridden by TextureTilingDistance if it is > 0.0.\n    1st UV set only. 2nd UV set does not Tile." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile = { "TextureTile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TextureTile), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** The distance per texture tile. \n\x09 *\x09""1st UV set only. 2nd UV set does not Tile.\x09\x09\x09\x09\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The distance per texture tile.\n    1st UV set only. 2nd UV set does not Tile." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance = { "TextureTileDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TextureTileDistance), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** The number of sheets to render\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The number of sheets to render" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets = { "Sheets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Sheets), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** The number of live beams\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The number of live beams" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount = { "MaxBeamCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, MaxBeamCount), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** The speed at which the beam should move from source to target when firing up.\n\x09 *\x09'0' indicates instantaneous\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The speed at which the beam should move from source to target when firing up.\n    '0' indicates instantaneous" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Speed), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** \n\x09 * Indicates whether the beam should be interpolated.\n\x09 *     <= 0 --> no\n\x09 *     >  0 --> yes (and is equal to the number of interpolation steps that should be taken.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Indicates whether the beam should be interpolated.\n    <= 0 --> no\n    >  0 --> yes (and is equal to the number of interpolation steps that should be taken." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints = { "InterpolationPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, InterpolationPoints), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** If true, there will ALWAYS be a beam...\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "If true, there will ALWAYS be a beam..." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->bAlwaysOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn = { "bAlwaysOn", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize_MetaData[] = {
		{ "Category", "Beam" },
		{ "Comment", "/** \n\x09 *\x09The approach to use for determining the Up vector(s) for the beam.\n\x09 *\n\x09 *\x09""0 indicates that the Up FVector should be calculated at EVERY point in the beam.\n\x09 *\x09""1 indicates a single Up FVector should be determined at the start of the beam and used at every point.\n\x09 *\x09N indicates an Up FVector should be calculated every N points of the beam and interpolated between them.\n\x09 *\x09    [NOTE: This mode is currently unsupported.]\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The approach to use for determining the Up vector(s) for the beam.\n\n0 indicates that the Up FVector should be calculated at EVERY point in the beam.\n1 indicates a single Up FVector should be determined at the start of the beam and used at every point.\nN indicates an Up FVector should be calculated every N points of the beam and interpolated between them.\n    [NOTE: This mode is currently unsupported.]" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize = { "UpVectorStepSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, UpVectorStepSize), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName_MetaData[] = {
		{ "Category", "Branching" },
		{ "Comment", "/** The name of the emitter to branch from (if mode is PEB2M_Branch)\n\x09 * MUST BE IN THE SAME PARTICLE SYSTEM!\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The name of the emitter to branch from (if mode is PEB2M_Branch)\nMUST BE IN THE SAME PARTICLE SYSTEM!" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName = { "BranchParentName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, BranchParentName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance_MetaData[] = {
		{ "Category", "Distance" },
		{ "Comment", "/** \n\x09 *\x09The distance along the X-axis to stretch the beam\n\x09 *\x09""Distance is only used if BeamMethod is PEB2M_Distance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "The distance along the X-axis to stretch the beam\nDistance is only used if BeamMethod is PEB2M_Distance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Distance), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod_MetaData[] = {
		{ "Category", "Taper" },
		{ "Comment", "/**\n\x09 *\x09Tapering mode - one of the following:\n\x09 *\x09PEBTM_None\x09\x09- No tapering is applied\n\x09 *\x09PEBTM_Full\x09\x09- Taper the beam relative to source-->target, regardless of current beam length\n\x09 *\x09PEBTM_Partial\x09- Taper the beam relative to source-->location, 0=source,1=endpoint\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Tapering mode - one of the following:\nPEBTM_None              - No tapering is applied\nPEBTM_Full              - Taper the beam relative to source-->target, regardless of current beam length\nPEBTM_Partial   - Taper the beam relative to source-->location, 0=source,1=endpoint" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod = { "TaperMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperMethod), Z_Construct_UEnum_Engine_EBeamTaperMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod_MetaData)) }; // 3836456215
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor_MetaData[] = {
		{ "Category", "Taper" },
		{ "Comment", "/** Tapering factor, 0 = source of beam, 1 = target\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Tapering factor, 0 = source of beam, 1 = target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor = { "TaperFactor", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperFactor), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale_MetaData[] = {
		{ "Category", "Taper" },
		{ "Comment", "/**\n\x09 *  Tapering scaling\n\x09 *\x09This is intended to be either a constant, uniform or a ParticleParam.\n\x09 *\x09If a curve is used, 0/1 mapping of source/target... which could be integrated into\n\x09 *\x09the taper factor itself, and therefore makes no sense.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Tapering scaling\n    This is intended to be either a constant, uniform or a ParticleParam.\n    If a curve is used, 0/1 mapping of source/target... which could be integrated into\n    the taper factor itself, and therefore makes no sense." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale = { "TaperScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//\n// Beam Rendering Variables.\n//\n" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
		{ "ToolTip", "Beam Rendering Variables." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry = { "RenderGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderDirectLine = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine = { "RenderDirectLine", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderLines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines = { "RenderLines", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataBeam2*)Obj)->RenderTessellation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation = { "RenderTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataBeam2), &Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BeamMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TextureTileDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Sheets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_MaxBeamCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_InterpolationPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_bAlwaysOn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_UpVectorStepSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_BranchParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_Distance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_TaperScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderDirectLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderLines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::NewProp_RenderTessellation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataBeam2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::ClassParams = {
		&UParticleModuleTypeDataBeam2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataBeam2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataBeam2>()
	{
		return UParticleModuleTypeDataBeam2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataBeam2);
	UParticleModuleTypeDataBeam2::~UParticleModuleTypeDataBeam2() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::EnumInfo[] = {
		{ EBeam2Method_StaticEnum, TEXT("EBeam2Method"), &Z_Registration_Info_UEnum_EBeam2Method, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1809189383U) },
		{ EBeamTaperMethod_StaticEnum, TEXT("EBeamTaperMethod"), &Z_Registration_Info_UEnum_EBeamTaperMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3836456215U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::ScriptStructInfo[] = {
		{ FBeamTargetData::StaticStruct, Z_Construct_UScriptStruct_FBeamTargetData_Statics::NewStructOps, TEXT("BeamTargetData"), &Z_Registration_Info_UScriptStruct_BeamTargetData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBeamTargetData), 3161661716U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataBeam2, UParticleModuleTypeDataBeam2::StaticClass, TEXT("UParticleModuleTypeDataBeam2"), &Z_Registration_Info_UClass_UParticleModuleTypeDataBeam2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataBeam2), 778170250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_2955412822(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataBeam2_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
