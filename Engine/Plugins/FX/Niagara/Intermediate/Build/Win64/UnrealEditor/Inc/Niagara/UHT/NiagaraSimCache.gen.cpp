// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraSimCache.h"
#include "../Classes/NiagaraScript.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheFrame();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheLayout();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode;
	static UEnum* ENiagaraSimCacheAttributeCaptureMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSimCacheAttributeCaptureMode"));
		}
		return Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSimCacheAttributeCaptureMode>()
	{
		return ENiagaraSimCacheAttributeCaptureMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::Enumerators[] = {
		{ "ENiagaraSimCacheAttributeCaptureMode::All", (int64)ENiagaraSimCacheAttributeCaptureMode::All },
		{ "ENiagaraSimCacheAttributeCaptureMode::RenderingOnly", (int64)ENiagaraSimCacheAttributeCaptureMode::RenderingOnly },
		{ "ENiagaraSimCacheAttributeCaptureMode::ExplicitAttributes", (int64)ENiagaraSimCacheAttributeCaptureMode::ExplicitAttributes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/**\n\x09""Captures all attributes available.\n\x09This kind of cache will be useful for restarting a simulation from or debugging.\n\x09*/" },
		{ "All.DisplayName", "Capture All Attributes" },
		{ "All.Name", "ENiagaraSimCacheAttributeCaptureMode::All" },
		{ "All.ToolTip", "Captures all attributes available.\nThis kind of cache will be useful for restarting a simulation from or debugging." },
		{ "BlueprintType", "true" },
		{ "ExplicitAttributes.Comment", "/**\n\x09""Captures only attributes that match the 'ExplicitCaptureAttributes' list provided by the user.\n\x09This kind of cache is useful to keep the size down if you need to debug a very\n\x09specific attribute, or you want to do some additional process on the attributes\n\x09i.e. capture MyEmitter.Particles.Position and place static meshes in those locations.\n\x09*/" },
		{ "ExplicitAttributes.DisplayName", "Capture Explicit Attributes Only" },
		{ "ExplicitAttributes.Name", "ENiagaraSimCacheAttributeCaptureMode::ExplicitAttributes" },
		{ "ExplicitAttributes.ToolTip", "Captures only attributes that match the 'ExplicitCaptureAttributes' list provided by the user.\nThis kind of cache is useful to keep the size down if you need to debug a very\nspecific attribute, or you want to do some additional process on the attributes\ni.e. capture MyEmitter.Particles.Position and place static meshes in those locations." },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "RenderingOnly.Comment", "/**\n\x09""Captures attributes that are required to render the system only.\n\x09This kind of cache is useful for rendering only and should have a much smaller\n\x09size than capturing all attributes.\n\x09*/" },
		{ "RenderingOnly.DisplayName", "Capture Attributes Needed For Rendering" },
		{ "RenderingOnly.Name", "ENiagaraSimCacheAttributeCaptureMode::RenderingOnly" },
		{ "RenderingOnly.ToolTip", "Captures attributes that are required to render the system only.\nThis kind of cache is useful for rendering only and should have a much smaller\nsize than capturing all attributes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraSimCacheAttributeCaptureMode",
		"ENiagaraSimCacheAttributeCaptureMode",
		Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters;
class UScriptStruct* FNiagaraSimCacheCreateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheCreateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheCreateParameters>()
{
	return FNiagaraSimCacheCreateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeCaptureMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeCaptureMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeCaptureMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRebasing_MetaData[];
#endif
		static void NewProp_bAllowRebasing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRebasing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDataInterfaceCaching_MetaData[];
#endif
		static void NewProp_bAllowDataInterfaceCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDataInterfaceCaching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInterpolation_MetaData[];
#endif
		static void NewProp_bAllowInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowVelocityExtrapolation_MetaData[];
#endif
		static void NewProp_bAllowVelocityExtrapolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVelocityExtrapolation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RebaseIncludeAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RebaseIncludeAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RebaseIncludeAttributes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RebaseExcludeAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RebaseExcludeAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RebaseExcludeAttributes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InterpolationIncludeAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationIncludeAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationIncludeAttributes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InterpolationExcludeAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationExcludeAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpolationExcludeAttributes;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExplicitCaptureAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExplicitCaptureAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExplicitCaptureAttributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheCreateParameters>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09How do we want to capture attributes for the simulation cache.\n\x09The mode selected depends on what situations the cache can be used in.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "How do we want to capture attributes for the simulation cache.\nThe mode selected depends on what situations the cache can be used in." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode = { "AttributeCaptureMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCreateParameters, AttributeCaptureMode), Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode_MetaData)) }; // 4099200711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09When enabled allows the SimCache to be re-based.\n\x09i.e. World space emitters can be moved to the new component's location\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "When enabled allows the SimCache to be re-based.\ni.e. World space emitters can be moved to the new component's location" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing_SetBit(void* Obj)
	{
		((FNiagaraSimCacheCreateParameters*)Obj)->bAllowRebasing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing = { "bAllowRebasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraSimCacheCreateParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09When enabled Data Interface data will be stored in the SimCache.\n\x09This can result in a large increase to the cache size, depending on what Data Interfaces are used\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "When enabled Data Interface data will be stored in the SimCache.\nThis can result in a large increase to the cache size, depending on what Data Interfaces are used" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching_SetBit(void* Obj)
	{
		((FNiagaraSimCacheCreateParameters*)Obj)->bAllowDataInterfaceCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching = { "bAllowDataInterfaceCaching", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraSimCacheCreateParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09When enabled we allow the cache to be generated for interpolation.\n\x09This will increase the memory usage for the cache slightly but can allow you to reduce the capture rate.\n\x09""By default we will capture and interpolate all Position & Quat types, you can adjust this using the include / exclude list.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "When enabled we allow the cache to be generated for interpolation.\nThis will increase the memory usage for the cache slightly but can allow you to reduce the capture rate.\nBy default we will capture and interpolate all Position & Quat types, you can adjust this using the include / exclude list." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation_SetBit(void* Obj)
	{
		((FNiagaraSimCacheCreateParameters*)Obj)->bAllowInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation = { "bAllowInterpolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraSimCacheCreateParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09When enabled we allow the cache to be generated for extrapolation.\n\x09This will force the velocity attribute to be maintained.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "When enabled we allow the cache to be generated for extrapolation.\nThis will force the velocity attribute to be maintained." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation_SetBit(void* Obj)
	{
		((FNiagaraSimCacheCreateParameters*)Obj)->bAllowVelocityExtrapolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation = { "bAllowVelocityExtrapolation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraSimCacheCreateParameters), &Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes_Inner = { "RebaseIncludeAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09List of Attributes to force include in the SimCache rebase, they should be the full path to the attribute\n\x09""For example, MyEmitter.Particles.MyQuat would force the particle attribute MyQuat to be included for MyEmitter\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "List of Attributes to force include in the SimCache rebase, they should be the full path to the attribute\nFor example, MyEmitter.Particles.MyQuat would force the particle attribute MyQuat to be included for MyEmitter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes = { "RebaseIncludeAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCreateParameters, RebaseIncludeAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes_Inner = { "RebaseExcludeAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09List of Attributes to force exclude from the SimCache rebase, they should be the full path to the attribute\n\x09""For example, MyEmitter.Particles.MyQuat would force the particle attribute MyQuat to be included for MyEmitter\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "List of Attributes to force exclude from the SimCache rebase, they should be the full path to the attribute\nFor example, MyEmitter.Particles.MyQuat would force the particle attribute MyQuat to be included for MyEmitter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes = { "RebaseExcludeAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCreateParameters, RebaseExcludeAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes_Inner = { "InterpolationIncludeAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09List of specific Attributes to include when using interpolation.  They must be types that are supported for interpolation.\n\x09""For example, MyEmitter.Particles.MyPosition would force MyPosition to be interpolated.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "List of specific Attributes to include when using interpolation.  They must be types that are supported for interpolation.\nFor example, MyEmitter.Particles.MyPosition would force MyPosition to be interpolated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes = { "InterpolationIncludeAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCreateParameters, InterpolationIncludeAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes_Inner = { "InterpolationExcludeAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09List of specific Attributes to exclude interpolation for.  They must be types that are supported for interpolation.\n\x09""For example, MyEmitter.Particles.MyPosition would force MyPosition to be interpolated.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "List of specific Attributes to exclude interpolation for.  They must be types that are supported for interpolation.\nFor example, MyEmitter.Particles.MyPosition would force MyPosition to be interpolated." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes = { "InterpolationExcludeAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCreateParameters, InterpolationExcludeAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes_Inner = { "ExplicitCaptureAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes_MetaData[] = {
		{ "Category", "SimCache" },
		{ "Comment", "/**\n\x09List of attributes to capture when the capture attribute capture mode is set to explicit.\n\x09""For example, adding MyEmitter.Particles.Position will only gather that attribute inside the cache.\n\x09*/" },
		{ "EditCondition", "AttributeCaptureMode == ENiagaraSimCacheAttributeCaptureMode::ExplicitAttributes" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "List of attributes to capture when the capture attribute capture mode is set to explicit.\nFor example, adding MyEmitter.Particles.Position will only gather that attribute inside the cache." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes = { "ExplicitCaptureAttributes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheCreateParameters, ExplicitCaptureAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_AttributeCaptureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowRebasing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowDataInterfaceCaching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_bAllowVelocityExtrapolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseIncludeAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_RebaseExcludeAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationIncludeAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_InterpolationExcludeAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewProp_ExplicitCaptureAttributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheCreateParameters",
		sizeof(FNiagaraSimCacheCreateParameters),
		alignof(FNiagaraSimCacheCreateParameters),
		Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers;
class UScriptStruct* FNiagaraSimCacheDataBuffers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheDataBuffers"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheDataBuffers>()
{
	return FNiagaraSimCacheDataBuffers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInstances_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumInstances;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FloatData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HalfData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HalfData;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Int32Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Int32Data;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IDToIndexTable_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IDToIndexTable_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IDToIndexTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IDAcquireTag_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_IDAcquireTag;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_InterpMapping_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpMapping_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpMapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheDataBuffers>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_NumInstances_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_NumInstances = { "NumInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, NumInstances), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_NumInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_NumInstances_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData_Inner = { "FloatData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData = { "FloatData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, FloatData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData_Inner = { "HalfData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData = { "HalfData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, HalfData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data_Inner = { "Int32Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data = { "Int32Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, Int32Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable_Inner = { "IDToIndexTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable = { "IDToIndexTable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, IDToIndexTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDAcquireTag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDAcquireTag = { "IDAcquireTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, IDAcquireTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDAcquireTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDAcquireTag_MetaData)) };
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping_Inner = { "InterpMapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping = { "InterpMapping", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffers, InterpMapping), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_NumInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_FloatData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_HalfData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_Int32Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDToIndexTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_IDAcquireTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewProp_InterpMapping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheDataBuffers",
		sizeof(FNiagaraSimCacheDataBuffers),
		alignof(FNiagaraSimCacheDataBuffers),
		Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame;
class UScriptStruct* FNiagaraSimCacheEmitterFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheEmitterFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheEmitterFrame>()
{
	return FNiagaraSimCacheEmitterFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalSpawnedParticles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalSpawnedParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParticleDataBuffers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParticleDataBuffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheEmitterFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "Comment", "//-TODO: We may not require these\n" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "-TODO: We may not require these" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheEmitterFrame, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_LocalBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_TotalSpawnedParticles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_TotalSpawnedParticles = { "TotalSpawnedParticles", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheEmitterFrame, TotalSpawnedParticles), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_TotalSpawnedParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_TotalSpawnedParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_ParticleDataBuffers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_ParticleDataBuffers = { "ParticleDataBuffers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheEmitterFrame, ParticleDataBuffers), Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_ParticleDataBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_ParticleDataBuffers_MetaData)) }; // 2815228933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_TotalSpawnedParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewProp_ParticleDataBuffers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheEmitterFrame",
		sizeof(FNiagaraSimCacheEmitterFrame),
		alignof(FNiagaraSimCacheEmitterFrame),
		Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame;
class UScriptStruct* FNiagaraSimCacheSystemFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheSystemFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheSystemFrame>()
{
	return FNiagaraSimCacheSystemFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalBounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemDataBuffers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemDataBuffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheSystemFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_LocalBounds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_LocalBounds = { "LocalBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheSystemFrame, LocalBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_LocalBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_LocalBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_SystemDataBuffers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_SystemDataBuffers = { "SystemDataBuffers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheSystemFrame, SystemDataBuffers), Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_SystemDataBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_SystemDataBuffers_MetaData)) }; // 2815228933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_LocalBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewProp_SystemDataBuffers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheSystemFrame",
		sizeof(FNiagaraSimCacheSystemFrame),
		alignof(FNiagaraSimCacheSystemFrame),
		Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame;
class UScriptStruct* FNiagaraSimCacheFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheFrame>()
{
	return FNiagaraSimCacheFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalToWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalToWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LWCTile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LWCTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationAge_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationAge;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationTickCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SimulationTickCount;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmitterData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LocalToWorld_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LocalToWorld = { "LocalToWorld", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheFrame, LocalToWorld), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LocalToWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LocalToWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LWCTile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LWCTile = { "LWCTile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheFrame, LWCTile), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LWCTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LWCTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationAge_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationAge = { "SimulationAge", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheFrame, SimulationAge), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationAge_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationTickCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationTickCount = { "SimulationTickCount", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheFrame, SimulationTickCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationTickCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationTickCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SystemData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SystemData = { "SystemData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheFrame, SystemData), Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SystemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SystemData_MetaData)) }; // 3830417012
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData_Inner = { "EmitterData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame, METADATA_PARAMS(nullptr, 0) }; // 1471570281
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData = { "EmitterData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheFrame, EmitterData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData_MetaData)) }; // 1471570281
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LocalToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_LWCTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationAge,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SimulationTickCount,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_SystemData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewProp_EmitterData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheFrame",
		sizeof(FNiagaraSimCacheFrame),
		alignof(FNiagaraSimCacheFrame),
		Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable;
class UScriptStruct* FNiagaraSimCacheVariable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheVariable"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheVariable>()
{
	return FNiagaraSimCacheVariable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_FloatOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_FloatCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_HalfOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_HalfCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Offset_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Int32Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Count_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Int32Count;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheVariable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, Variable), Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Variable_MetaData)) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatOffset = { "FloatOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, FloatOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatCount = { "FloatCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, FloatCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfOffset = { "HalfOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, HalfOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfCount = { "HalfCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, HalfCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Offset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Offset = { "Int32Offset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, Int32Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Count_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Count = { "Int32Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheVariable, Int32Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Count_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_FloatCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_HalfCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewProp_Int32Count,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheVariable",
		sizeof(FNiagaraSimCacheVariable),
		alignof(FNiagaraSimCacheVariable),
		Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheVariable()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout;
class UScriptStruct* FNiagaraSimCacheDataBuffersLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheDataBuffersLayout"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheDataBuffersLayout>()
{
	return FNiagaraSimCacheDataBuffersLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayoutName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_FloatCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfCount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_HalfCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32Count_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Int32Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLocalSpace_MetaData[];
#endif
		static void NewProp_bLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInterpolation_MetaData[];
#endif
		static void NewProp_bAllowInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowVelocityExtrapolation_MetaData[];
#endif
		static void NewProp_bAllowVelocityExtrapolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVelocityExtrapolation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RebaseVariableNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RebaseVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RebaseVariableNames;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InterpVariableNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpVariableNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpVariableNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_ComponentVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheDataBuffersLayout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_LayoutName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_LayoutName = { "LayoutName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, LayoutName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_LayoutName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_LayoutName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget_MetaData)) }; // 348263643
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSimCacheVariable, METADATA_PARAMS(nullptr, 0) }; // 67117298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables_MetaData)) }; // 67117298
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_FloatCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_FloatCount = { "FloatCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, FloatCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_FloatCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_FloatCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_HalfCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_HalfCount = { "HalfCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, HalfCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_HalfCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_HalfCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Int32Count_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Int32Count = { "Int32Count", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, Int32Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Int32Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Int32Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace_SetBit(void* Obj)
	{
		((FNiagaraSimCacheDataBuffersLayout*)Obj)->bLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace = { "bLocalSpace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraSimCacheDataBuffersLayout), &Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation_SetBit(void* Obj)
	{
		((FNiagaraSimCacheDataBuffersLayout*)Obj)->bAllowInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation = { "bAllowInterpolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraSimCacheDataBuffersLayout), &Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation_SetBit(void* Obj)
	{
		((FNiagaraSimCacheDataBuffersLayout*)Obj)->bAllowVelocityExtrapolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation = { "bAllowVelocityExtrapolation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraSimCacheDataBuffersLayout), &Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames_Inner = { "RebaseVariableNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames = { "RebaseVariableNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, RebaseVariableNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames_Inner = { "InterpVariableNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames = { "InterpVariableNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, InterpVariableNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_ComponentVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_ComponentVelocity = { "ComponentVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheDataBuffersLayout, ComponentVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_ComponentVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_ComponentVelocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_LayoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_SimTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_FloatCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_HalfCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_Int32Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_bAllowVelocityExtrapolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_RebaseVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_InterpVariableNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewProp_ComponentVelocity,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheDataBuffersLayout",
		sizeof(FNiagaraSimCacheDataBuffersLayout),
		alignof(FNiagaraSimCacheDataBuffersLayout),
		Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout;
class UScriptStruct* FNiagaraSimCacheLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraSimCacheLayout"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraSimCacheLayout>()
{
	return FNiagaraSimCacheLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemLayout_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SystemLayout;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EmitterLayouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitterLayouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmitterLayouts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSimCacheLayout>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_SystemLayout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_SystemLayout = { "SystemLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheLayout, SystemLayout), Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_SystemLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_SystemLayout_MetaData)) }; // 1617875063
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts_Inner = { "EmitterLayouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout, METADATA_PARAMS(nullptr, 0) }; // 1617875063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts = { "EmitterLayouts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSimCacheLayout, EmitterLayouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts_MetaData)) }; // 1617875063
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_SystemLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewProp_EmitterLayouts,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraSimCacheLayout",
		sizeof(FNiagaraSimCacheLayout),
		alignof(FNiagaraSimCacheLayout),
		Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSimCacheLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadQuatAttributeWithRebase)
	{
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_OutValues);
		P_GET_STRUCT(FQuat,Z_Param_Quat);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadQuatAttributeWithRebase(Z_Param_Out_OutValues,Z_Param_Quat,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadQuatAttribute)
	{
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_UBOOL(Z_Param_bLocalSpaceToWorld);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadQuatAttribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_bLocalSpaceToWorld,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadPositionAttributeWithRebase)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutValues);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadPositionAttributeWithRebase(Z_Param_Out_OutValues,Z_Param_Transform,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadPositionAttribute)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_UBOOL(Z_Param_bLocalSpaceToWorld);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadPositionAttribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_bLocalSpaceToWorld,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadColorAttribute)
	{
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadColorAttribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadVector4Attribute)
	{
		P_GET_TARRAY_REF(FVector4,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadVector4Attribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadVectorAttribute)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadVectorAttribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadVector2Attribute)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadVector2Attribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadFloatAttribute)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadFloatAttribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execReadIntAttribute)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_OutValues);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttributeName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EmitterName);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadIntAttribute(Z_Param_Out_OutValues,Z_Param_AttributeName,Z_Param_EmitterName,Z_Param_FrameIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execGetEmitterNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetEmitterNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execGetEmitterName)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EmitterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetEmitterName(Z_Param_EmitterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execGetNumEmitters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumEmitters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execGetNumFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execGetStartSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStartSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execGetAttributeCaptureMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ENiagaraSimCacheAttributeCaptureMode*)Z_Param__Result=P_THIS->GetAttributeCaptureMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraSimCache::execIsCacheValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCacheValid();
		P_NATIVE_END;
	}
	void UNiagaraSimCache::StaticRegisterNativesUNiagaraSimCache()
	{
		UClass* Class = UNiagaraSimCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttributeCaptureMode", &UNiagaraSimCache::execGetAttributeCaptureMode },
			{ "GetEmitterName", &UNiagaraSimCache::execGetEmitterName },
			{ "GetEmitterNames", &UNiagaraSimCache::execGetEmitterNames },
			{ "GetNumEmitters", &UNiagaraSimCache::execGetNumEmitters },
			{ "GetNumFrames", &UNiagaraSimCache::execGetNumFrames },
			{ "GetStartSeconds", &UNiagaraSimCache::execGetStartSeconds },
			{ "IsCacheValid", &UNiagaraSimCache::execIsCacheValid },
			{ "IsEmpty", &UNiagaraSimCache::execIsEmpty },
			{ "ReadColorAttribute", &UNiagaraSimCache::execReadColorAttribute },
			{ "ReadFloatAttribute", &UNiagaraSimCache::execReadFloatAttribute },
			{ "ReadIntAttribute", &UNiagaraSimCache::execReadIntAttribute },
			{ "ReadPositionAttribute", &UNiagaraSimCache::execReadPositionAttribute },
			{ "ReadPositionAttributeWithRebase", &UNiagaraSimCache::execReadPositionAttributeWithRebase },
			{ "ReadQuatAttribute", &UNiagaraSimCache::execReadQuatAttribute },
			{ "ReadQuatAttributeWithRebase", &UNiagaraSimCache::execReadQuatAttributeWithRebase },
			{ "ReadVector2Attribute", &UNiagaraSimCache::execReadVector2Attribute },
			{ "ReadVector4Attribute", &UNiagaraSimCache::execReadVector4Attribute },
			{ "ReadVectorAttribute", &UNiagaraSimCache::execReadVectorAttribute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics
	{
		struct NiagaraSimCache_eventGetAttributeCaptureMode_Parms
		{
			ENiagaraSimCacheAttributeCaptureMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetAttributeCaptureMode_Parms, ReturnValue), Z_Construct_UEnum_Niagara_ENiagaraSimCacheAttributeCaptureMode, METADATA_PARAMS(nullptr, 0) }; // 4099200711
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\x09How were the attributes captured for this sim cache. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "How were the attributes captured for this sim cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "GetAttributeCaptureMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::NiagaraSimCache_eventGetAttributeCaptureMode_Parms), Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics
	{
		struct NiagaraSimCache_eventGetEmitterName_Parms
		{
			int32 EmitterIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_EmitterIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::NewProp_EmitterIndex = { "EmitterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetEmitterName_Parms, EmitterIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetEmitterName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::NewProp_EmitterIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** Get the emitter name at the provided index. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Get the emitter name at the provided index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "GetEmitterName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::NiagaraSimCache_eventGetEmitterName_Parms), Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics
	{
		struct NiagaraSimCache_eventGetEmitterNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetEmitterNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** Returns a list of emitters we have captured in the SimCache. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Returns a list of emitters we have captured in the SimCache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "GetEmitterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::NiagaraSimCache_eventGetEmitterNames_Parms), Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics
	{
		struct NiagaraSimCache_eventGetNumEmitters_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetNumEmitters_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** Get number of emitters stored inside the cache. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Get number of emitters stored inside the cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "GetNumEmitters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::NiagaraSimCache_eventGetNumEmitters_Parms), Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics
	{
		struct NiagaraSimCache_eventGetNumFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetNumFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** Get number of frames stored in the cache. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Get number of frames stored in the cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "GetNumFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::NiagaraSimCache_eventGetNumFrames_Parms), Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics
	{
		struct NiagaraSimCache_eventGetStartSeconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventGetStartSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** Get the time the simulation was at when recorded. */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Get the time the simulation was at when recorded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "GetStartSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::NiagaraSimCache_eventGetStartSeconds_Parms), Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics
	{
		struct NiagaraSimCache_eventIsCacheValid_Parms
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
	void Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraSimCache_eventIsCacheValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSimCache_eventIsCacheValid_Parms), &Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** A valid cache is one that contains at least 1 frames worth of data. */" },
		{ "DisplayName", "IsValid" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "A valid cache is one that contains at least 1 frames worth of data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "IsCacheValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::NiagaraSimCache_eventIsCacheValid_Parms), Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics
	{
		struct NiagaraSimCache_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraSimCache_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSimCache_eventIsEmpty_Parms), &Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/** An empty cache contains no frame data and can not be used */" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "An empty cache contains no frame data and can not be used" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "IsEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::NiagaraSimCache_eventIsEmpty_Parms), Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics
	{
		struct NiagaraSimCache_eventReadColorAttribute_Parms
		{
			TArray<FLinearColor> OutValues;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadColorAttribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadColorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadColorAttribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadColorAttribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Color attributes by name from the cache frame and appends them into the OutValues array.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_AttributeName", "Color" },
		{ "CPP_Default_EmitterName", "None" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Color attributes by name from the cache frame and appends them into the OutValues array.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadColorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::NiagaraSimCache_eventReadColorAttribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics
	{
		struct NiagaraSimCache_eventReadFloatAttribute_Parms
		{
			TArray<float> OutValues;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadFloatAttribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadFloatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadFloatAttribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadFloatAttribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara float attributes by name from the cache frame and appends them into the OutValues array.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara float attributes by name from the cache frame and appends them into the OutValues array.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadFloatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::NiagaraSimCache_eventReadFloatAttribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics
	{
		struct NiagaraSimCache_eventReadIntAttribute_Parms
		{
			TArray<int32> OutValues;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadIntAttribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadIntAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadIntAttribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadIntAttribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara int attributes by name from the cache frame and appends them into the OutValues array.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara int attributes by name from the cache frame and appends them into the OutValues array.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadIntAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::NiagaraSimCache_eventReadIntAttribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics
	{
		struct NiagaraSimCache_eventReadPositionAttribute_Parms
		{
			TArray<FVector> OutValues;
			FName AttributeName;
			FName EmitterName;
			bool bLocalSpaceToWorld;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static void NewProp_bLocalSpaceToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpaceToWorld;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_bLocalSpaceToWorld_SetBit(void* Obj)
	{
		((NiagaraSimCache_eventReadPositionAttribute_Parms*)Obj)->bLocalSpaceToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_bLocalSpaceToWorld = { "bLocalSpaceToWorld", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSimCache_eventReadPositionAttribute_Parms), &Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_bLocalSpaceToWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_bLocalSpaceToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLocalSpaceToWorld" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Position attributes by name from the cache frame and appends them into the OutValues array.\n\x09Local space emitters provide data at local locations unless bLocalSpaceToWorld is true.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09LocalSpaceToWorld - Caches are always stored in the emitters space, i.e. local or world space.  You can set this to false if you want the local position rather than the world position.\n\x09*/" },
		{ "CPP_Default_AttributeName", "Position" },
		{ "CPP_Default_bLocalSpaceToWorld", "true" },
		{ "CPP_Default_EmitterName", "None" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Position attributes by name from the cache frame and appends them into the OutValues array.\nLocal space emitters provide data at local locations unless bLocalSpaceToWorld is true.\nEmitterName - If left blank will return the system simulation attributes.\nLocalSpaceToWorld - Caches are always stored in the emitters space, i.e. local or world space.  You can set this to false if you want the local position rather than the world position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadPositionAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::NiagaraSimCache_eventReadPositionAttribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics
	{
		struct NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms
		{
			TArray<FVector> OutValues;
			FTransform Transform;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Position attributes by name from the cache frame and appends them into the OutValues array.\n\x09""All attributes read with this method will be re-based from the captured space into the provided transform space,\n\x09this will occur even if the cache was not captured with re-basing enabled.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_AttributeName", "Position" },
		{ "CPP_Default_EmitterName", "None" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Position attributes by name from the cache frame and appends them into the OutValues array.\nAll attributes read with this method will be re-based from the captured space into the provided transform space,\nthis will occur even if the cache was not captured with re-basing enabled.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadPositionAttributeWithRebase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::NiagaraSimCache_eventReadPositionAttributeWithRebase_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics
	{
		struct NiagaraSimCache_eventReadQuatAttribute_Parms
		{
			TArray<FQuat> OutValues;
			FName AttributeName;
			FName EmitterName;
			bool bLocalSpaceToWorld;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static void NewProp_bLocalSpaceToWorld_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalSpaceToWorld;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_bLocalSpaceToWorld_SetBit(void* Obj)
	{
		((NiagaraSimCache_eventReadQuatAttribute_Parms*)Obj)->bLocalSpaceToWorld = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_bLocalSpaceToWorld = { "bLocalSpaceToWorld", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraSimCache_eventReadQuatAttribute_Parms), &Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_bLocalSpaceToWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_bLocalSpaceToWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bLocalSpaceToWorld" },
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Quaternion attributes by name from the cache frame and appends them into the OutValues array.\n\x09Local space emitters provide data at local rotation unless bLocalSpaceToWorld is true.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09LocalSpaceToWorld - Caches are always stored in the emitters space, i.e. local or world space.  You can set this to false if you want the local Quat rather than the world Quat.\n\x09*/" },
		{ "CPP_Default_AttributeName", "MeshOrientation" },
		{ "CPP_Default_bLocalSpaceToWorld", "true" },
		{ "CPP_Default_EmitterName", "None" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Quaternion attributes by name from the cache frame and appends them into the OutValues array.\nLocal space emitters provide data at local rotation unless bLocalSpaceToWorld is true.\nEmitterName - If left blank will return the system simulation attributes.\nLocalSpaceToWorld - Caches are always stored in the emitters space, i.e. local or world space.  You can set this to false if you want the local Quat rather than the world Quat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadQuatAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::NiagaraSimCache_eventReadQuatAttribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics
	{
		struct NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms
		{
			TArray<FQuat> OutValues;
			FQuat Quat;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Quat;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_Quat = { "Quat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms, Quat), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_Quat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Quaternion attributes by name from the cache frame and appends them into the OutValues array.\n\x09Only attributes that in the rebase list will be transform into the provided Quat space.  Therefore the cache\n\x09must be captured with rebasing enabled to have any impact.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_AttributeName", "MeshOrientation" },
		{ "CPP_Default_EmitterName", "None" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Quaternion attributes by name from the cache frame and appends them into the OutValues array.\nOnly attributes that in the rebase list will be transform into the provided Quat space.  Therefore the cache\nmust be captured with rebasing enabled to have any impact.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadQuatAttributeWithRebase", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::NiagaraSimCache_eventReadQuatAttributeWithRebase_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics
	{
		struct NiagaraSimCache_eventReadVector2Attribute_Parms
		{
			TArray<FVector2D> OutValues;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector2Attribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector2Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector2Attribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector2Attribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Vec2 attributes by name from the cache frame and appends them into the OutValues array.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Vec2 attributes by name from the cache frame and appends them into the OutValues array.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadVector2Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::NiagaraSimCache_eventReadVector2Attribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics
	{
		struct NiagaraSimCache_eventReadVector4Attribute_Parms
		{
			TArray<FVector4> OutValues;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector4Attribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector4Attribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector4Attribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVector4Attribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Vec4 attributes by name from the cache frame and appends them into the OutValues array.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Vec4 attributes by name from the cache frame and appends them into the OutValues array.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadVector4Attribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::NiagaraSimCache_eventReadVector4Attribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics
	{
		struct NiagaraSimCache_eventReadVectorAttribute_Parms
		{
			TArray<FVector> OutValues;
			FName AttributeName;
			FName EmitterName;
			int32 FrameIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttributeName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EmitterName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVectorAttribute_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_AttributeName = { "AttributeName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVectorAttribute_Parms, AttributeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_EmitterName = { "EmitterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVectorAttribute_Parms, EmitterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraSimCache_eventReadVectorAttribute_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_OutValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_AttributeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_EmitterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NewProp_FrameIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraSimCache" },
		{ "Comment", "/**\n\x09Reads Niagara Vec3 attributes by name from the cache frame and appends them into the OutValues array.\n\x09""EmitterName - If left blank will return the system simulation attributes.\n\x09*/" },
		{ "CPP_Default_FrameIndex", "0" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
		{ "ToolTip", "Reads Niagara Vec3 attributes by name from the cache frame and appends them into the OutValues array.\nEmitterName - If left blank will return the system simulation attributes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraSimCache, nullptr, "ReadVectorAttribute", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::NiagaraSimCache_eventReadVectorAttribute_Parms), Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimCache);
	UClass* Z_Construct_UClass_UNiagaraSimCache_NoRegister()
	{
		return UNiagaraSimCache::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftNiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftNiagaraSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsReadComponentMappingRecache_MetaData[];
#endif
		static void NewProp_bNeedsReadComponentMappingRecache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsReadComponentMappingRecache;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedScriptVMIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVMIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedScriptVMIds;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheLayout_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheLayout;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CacheFrames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CacheFrames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CacheFrames;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterfaceStorage_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterfaceStorage_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceStorage_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataInterfaceStorage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraSimCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraSimCache_GetAttributeCaptureMode, "GetAttributeCaptureMode" }, // 1086237518
		{ &Z_Construct_UFunction_UNiagaraSimCache_GetEmitterName, "GetEmitterName" }, // 2037880387
		{ &Z_Construct_UFunction_UNiagaraSimCache_GetEmitterNames, "GetEmitterNames" }, // 2061631593
		{ &Z_Construct_UFunction_UNiagaraSimCache_GetNumEmitters, "GetNumEmitters" }, // 4047268
		{ &Z_Construct_UFunction_UNiagaraSimCache_GetNumFrames, "GetNumFrames" }, // 1453294660
		{ &Z_Construct_UFunction_UNiagaraSimCache_GetStartSeconds, "GetStartSeconds" }, // 4000942088
		{ &Z_Construct_UFunction_UNiagaraSimCache_IsCacheValid, "IsCacheValid" }, // 2529638524
		{ &Z_Construct_UFunction_UNiagaraSimCache_IsEmpty, "IsEmpty" }, // 828956227
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadColorAttribute, "ReadColorAttribute" }, // 1710759583
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadFloatAttribute, "ReadFloatAttribute" }, // 1555752276
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadIntAttribute, "ReadIntAttribute" }, // 4026139583
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttribute, "ReadPositionAttribute" }, // 122357849
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadPositionAttributeWithRebase, "ReadPositionAttributeWithRebase" }, // 371380295
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttribute, "ReadQuatAttribute" }, // 1716760912
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadQuatAttributeWithRebase, "ReadQuatAttributeWithRebase" }, // 1470733980
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadVector2Attribute, "ReadVector2Attribute" }, // 4146297039
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadVector4Attribute, "ReadVector4Attribute" }, // 2282322443
		{ &Z_Construct_UFunction_UNiagaraSimCache_ReadVectorAttribute, "ReadVectorAttribute" }, // 2614987396
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraSimCache.h" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheGuid_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheGuid = { "CacheGuid", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, CacheGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_SoftNiagaraSystem_MetaData[] = {
		{ "Category", "SimCache" },
		{ "DisplayName", "Niagara System" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_SoftNiagaraSystem = { "SoftNiagaraSystem", nullptr, (EPropertyFlags)0x0044000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, SoftNiagaraSystem), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_SoftNiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_SoftNiagaraSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_StartSeconds_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_StartSeconds = { "StartSeconds", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, StartSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_StartSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_StartSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "SimCache" },
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, DurationSeconds), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DurationSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DurationSeconds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CreateParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CreateParameters = { "CreateParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, CreateParameters), Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CreateParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CreateParameters_MetaData)) }; // 119681666
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache_SetBit(void* Obj)
	{
		((UNiagaraSimCache*)Obj)->bNeedsReadComponentMappingRecache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache = { "bNeedsReadComponentMappingRecache", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSimCache), &Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds_Inner = { "CachedScriptVMIds", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(nullptr, 0) }; // 2131928882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds = { "CachedScriptVMIds", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, CachedScriptVMIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds_MetaData)) }; // 2131928882
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheLayout_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheLayout = { "CacheLayout", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, CacheLayout), Z_Construct_UScriptStruct_FNiagaraSimCacheLayout, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheLayout_MetaData)) }; // 3217129870
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames_Inner = { "CacheFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraSimCacheFrame, METADATA_PARAMS(nullptr, 0) }; // 737718969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames = { "CacheFrames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, CacheFrames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames_MetaData)) }; // 737718969
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_ValueProp = { "DataInterfaceStorage", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_Key_KeyProp = { "DataInterfaceStorage_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage = { "DataInterfaceStorage", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSimCache, DataInterfaceStorage), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_MetaData)) }; // 1114376608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSimCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_SoftNiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_StartSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DurationSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CreateParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_bNeedsReadComponentMappingRecache,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CachedScriptVMIds,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_CacheFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSimCache_Statics::NewProp_DataInterfaceStorage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSimCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimCache_Statics::ClassParams = {
		&UNiagaraSimCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraSimCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimCache()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimCache.OuterSingleton, Z_Construct_UClass_UNiagaraSimCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimCache.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimCache>()
	{
		return UNiagaraSimCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimCache);
	UNiagaraSimCache::~UNiagaraSimCache() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::EnumInfo[] = {
		{ ENiagaraSimCacheAttributeCaptureMode_StaticEnum, TEXT("ENiagaraSimCacheAttributeCaptureMode"), &Z_Registration_Info_UEnum_ENiagaraSimCacheAttributeCaptureMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4099200711U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraSimCacheCreateParameters::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheCreateParameters_Statics::NewStructOps, TEXT("NiagaraSimCacheCreateParameters"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheCreateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheCreateParameters), 119681666U) },
		{ FNiagaraSimCacheDataBuffers::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffers_Statics::NewStructOps, TEXT("NiagaraSimCacheDataBuffers"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheDataBuffers), 2815228933U) },
		{ FNiagaraSimCacheEmitterFrame::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheEmitterFrame_Statics::NewStructOps, TEXT("NiagaraSimCacheEmitterFrame"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheEmitterFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheEmitterFrame), 1471570281U) },
		{ FNiagaraSimCacheSystemFrame::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheSystemFrame_Statics::NewStructOps, TEXT("NiagaraSimCacheSystemFrame"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheSystemFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheSystemFrame), 3830417012U) },
		{ FNiagaraSimCacheFrame::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheFrame_Statics::NewStructOps, TEXT("NiagaraSimCacheFrame"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheFrame), 737718969U) },
		{ FNiagaraSimCacheVariable::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheVariable_Statics::NewStructOps, TEXT("NiagaraSimCacheVariable"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheVariable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheVariable), 67117298U) },
		{ FNiagaraSimCacheDataBuffersLayout::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheDataBuffersLayout_Statics::NewStructOps, TEXT("NiagaraSimCacheDataBuffersLayout"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheDataBuffersLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheDataBuffersLayout), 1617875063U) },
		{ FNiagaraSimCacheLayout::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSimCacheLayout_Statics::NewStructOps, TEXT("NiagaraSimCacheLayout"), &Z_Registration_Info_UScriptStruct_NiagaraSimCacheLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSimCacheLayout), 3217129870U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSimCache, UNiagaraSimCache::StaticClass, TEXT("UNiagaraSimCache"), &Z_Registration_Info_UClass_UNiagaraSimCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimCache), 2081141691U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_3499190792(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCache_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
