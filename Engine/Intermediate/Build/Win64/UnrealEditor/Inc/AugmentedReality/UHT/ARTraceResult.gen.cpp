// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARTraceResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARTraceResult() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARTrackedGeometry_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARTraceResult;
class UScriptStruct* FARTraceResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARTraceResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARTraceResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARTraceResult, (UObject*)Z_Construct_UPackage__Script_AugmentedReality(), TEXT("ARTraceResult"));
	}
	return Z_Registration_Info_UScriptStruct_ARTraceResult.OuterSingleton;
}
template<> AUGMENTEDREALITY_API UScriptStruct* StaticStruct<FARTraceResult>()
{
	return FARTraceResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARTraceResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromCamera_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromCamera;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackedGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackedGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "Comment", "/**\n * A result of an intersection found during a hit-test.\n */" },
		{ "Experimental", "" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "A result of an intersection found during a hit-test." },
	};
#endif
	void* Z_Construct_UScriptStruct_FARTraceResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARTraceResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera_MetaData[] = {
		{ "Comment", "/** Distance (in Unreal Units) between the camera and the point where the line trace contacted tracked geometry. */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "Distance (in Unreal Units) between the camera and the point where the line trace contacted tracked geometry." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera = { "DistanceFromCamera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARTraceResult, DistanceFromCamera), METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Comment", "/** The trace channel that generated this trace result. (used for filtering) */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "The trace channel that generated this trace result. (used for filtering)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARTraceResult, TraceChannel), Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels, METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_MetaData)) }; // 2496654531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Comment", "/**\n\x09 * The transformation matrix that defines the intersection's rotation, translation and scale\n\x09 * in AR system's local space.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "The transformation matrix that defines the intersection's rotation, translation and scale\nin AR system's local space." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARTraceResult, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry_MetaData[] = {
		{ "Comment", "/**\n\x09 * A pointer to the geometry data that was intersected by this trace, if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
		{ "ToolTip", "A pointer to the geometry data that was intersected by this trace, if any." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry = { "TrackedGeometry", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARTraceResult, TrackedGeometry), Z_Construct_UClass_UARTrackedGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARTraceResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_DistanceFromCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARTraceResult_Statics::NewProp_TrackedGeometry,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARTraceResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
		nullptr,
		&NewStructOps,
		"ARTraceResult",
		sizeof(FARTraceResult),
		alignof(FARTraceResult),
		Z_Construct_UScriptStruct_FARTraceResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARTraceResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARTraceResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARTraceResult()
	{
		if (!Z_Registration_Info_UScriptStruct_ARTraceResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARTraceResult.InnerSingleton, Z_Construct_UScriptStruct_FARTraceResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARTraceResult.InnerSingleton;
	}
	void UARTraceResultDummy::StaticRegisterNativesUARTraceResultDummy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARTraceResultDummy);
	UClass* Z_Construct_UClass_UARTraceResultDummy_NoRegister()
	{
		return UARTraceResultDummy::StaticClass();
	}
	struct Z_Construct_UClass_UARTraceResultDummy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARTraceResultDummy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARTraceResultDummy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ARTraceResult.h" },
		{ "ModuleRelativePath", "Public/ARTraceResult.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARTraceResultDummy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARTraceResultDummy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARTraceResultDummy_Statics::ClassParams = {
		&UARTraceResultDummy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UARTraceResultDummy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARTraceResultDummy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARTraceResultDummy()
	{
		if (!Z_Registration_Info_UClass_UARTraceResultDummy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARTraceResultDummy.OuterSingleton, Z_Construct_UClass_UARTraceResultDummy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARTraceResultDummy.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<UARTraceResultDummy>()
	{
		return UARTraceResultDummy::StaticClass();
	}
	UARTraceResultDummy::UARTraceResultDummy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARTraceResultDummy);
	UARTraceResultDummy::~UARTraceResultDummy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics::ScriptStructInfo[] = {
		{ FARTraceResult::StaticStruct, Z_Construct_UScriptStruct_FARTraceResult_Statics::NewStructOps, TEXT("ARTraceResult"), &Z_Registration_Info_UScriptStruct_ARTraceResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARTraceResult), 3108337464U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARTraceResultDummy, UARTraceResultDummy::StaticClass, TEXT("UARTraceResultDummy"), &Z_Registration_Info_UClass_UARTraceResultDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARTraceResultDummy), 3163014413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_1762934855(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
