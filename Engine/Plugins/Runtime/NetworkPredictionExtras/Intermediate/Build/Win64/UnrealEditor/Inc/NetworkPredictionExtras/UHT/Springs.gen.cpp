// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Springs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSprings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	NETWORKPREDICTIONEXTRAS_API UScriptStruct* Z_Construct_UScriptStruct_FSpring();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Spring;
class UScriptStruct* FSpring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Spring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Spring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpring, (UObject*)Z_Construct_UPackage__Script_NetworkPredictionExtras(), TEXT("Spring"));
	}
	return Z_Registration_Info_UScriptStruct_Spring.OuterSingleton;
}
template<> NETWORKPREDICTIONEXTRAS_API UScriptStruct* StaticStruct<FSpring>()
{
	return FSpring::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RaycastLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RaycastLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NaturalLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NaturalLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Springs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpring>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalPosition_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Position of spring relative to actor, raycast starts here and force is applied at this position.\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Position of spring relative to actor, raycast starts here and force is applied at this position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalDirection_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Direction of spring force applied to body.\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Direction of spring force applied to body." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalDirection = { "LocalDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, LocalDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Trace channel of raycast\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Trace channel of raycast" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_TraceChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Strength of spring force.\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Strength of spring force." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_Stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_DampingStrength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Strength of damping term.\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Strength of damping term." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_DampingStrength = { "DampingStrength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, DampingStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_DampingStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_DampingStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_RaycastLength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Lenght of raycast.\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Lenght of raycast." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_RaycastLength = { "RaycastLength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, RaycastLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_RaycastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_RaycastLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpring_Statics::NewProp_NaturalLength_MetaData[] = {
		{ "Category", "Spring" },
		{ "Comment", "// Natural length of spring when it is not stretched/compressed.\n" },
		{ "ModuleRelativePath", "Public/Springs.h" },
		{ "ToolTip", "Natural length of spring when it is not stretched/compressed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpring_Statics::NewProp_NaturalLength = { "NaturalLength", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpring, NaturalLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_NaturalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::NewProp_NaturalLength_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_LocalDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_Stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_DampingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_RaycastLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpring_Statics::NewProp_NaturalLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
		nullptr,
		&NewStructOps,
		"Spring",
		sizeof(FSpring),
		alignof(FSpring),
		Z_Construct_UScriptStruct_FSpring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpring()
	{
		if (!Z_Registration_Info_UScriptStruct_Spring.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Spring.InnerSingleton, Z_Construct_UScriptStruct_FSpring_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Spring.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_Springs_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_Springs_h_Statics::ScriptStructInfo[] = {
		{ FSpring::StaticStruct, Z_Construct_UScriptStruct_FSpring_Statics::NewStructOps, TEXT("Spring"), &Z_Registration_Info_UScriptStruct_Spring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpring), 2760062870U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_Springs_h_3545044791(TEXT("/Script/NetworkPredictionExtras"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_Springs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_Springs_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
