// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraGeometryCacheRendererProperties.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraGeometryCacheRendererProperties() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCache_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_NoRegister();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference;
class UScriptStruct* FNiagaraGeometryCacheReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference, (UObject*)Z_Construct_UPackage__Script_GeometryCache(), TEXT("NiagaraGeometryCacheReference"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.OuterSingleton;
}
template<> GEOMETRYCACHE_API UScriptStruct* StaticStruct<FNiagaraGeometryCacheReference>()
{
	return FNiagaraGeometryCacheReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheUserParamBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCacheUserParamBinding;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGeometryCacheReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Reference to the geometry cache asset to use (if the user parameter binding is not set) */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Reference to the geometry cache asset to use (if the user parameter binding is not set)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache = { "GeometryCache", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGeometryCacheReference, GeometryCache), Z_Construct_UClass_UGeometryCache_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Use the UGeometryCache bound to this user variable if it is set to a valid value. If this is bound to a valid value and GeometryCache is also set, GeometryCacheUserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Use the UGeometryCache bound to this user variable if it is set to a valid value. If this is bound to a valid value and GeometryCache is also set, GeometryCacheUserParamBinding wins." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding = { "GeometryCacheUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGeometryCacheReference, GeometryCacheUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding_MetaData)) }; // 1724214256
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** The materials to be used instead of the GeometryCache's materials. If the GeometryCache requires more materials than exist in this array or any entry in this array is set to None, we will use the GeometryCache's existing material instead.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "The materials to be used instead of the GeometryCache's materials. If the GeometryCache requires more materials than exist in this array or any entry in this array is set to None, we will use the GeometryCache's existing material instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGeometryCacheReference, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_GeometryCacheUserParamBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewProp_OverrideMaterials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
		nullptr,
		&NewStructOps,
		"NiagaraGeometryCacheReference",
		sizeof(FNiagaraGeometryCacheReference),
		alignof(FNiagaraGeometryCacheReference),
		Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference.InnerSingleton;
	}
	void UNiagaraGeometryCacheRendererProperties::StaticRegisterNativesUNiagaraGeometryCacheRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraGeometryCacheRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_NoRegister()
	{
		return UNiagaraGeometryCacheRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryCaches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCaches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeometryCaches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLooping_MetaData[];
#endif
		static void NewProp_bIsLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLooping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentCountLimit_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ComponentCountLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTimeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElapsedTimeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayIndexBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayIndexBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignComponentsOnParticleID_MetaData[];
#endif
		static void NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignComponentsOnParticleID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Geometry Cache Renderer" },
		{ "IncludePath", "NiagaraGeometryCacheRendererProperties.h" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_Inner = { "GeometryCaches", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference, METADATA_PARAMS(nullptr, 0) }; // 2738498035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Reference to the geometry cache assets to use. If ArrayIndexBinding is not set, a random element is used for each particle. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Reference to the geometry cache assets to use. If ArrayIndexBinding is not set, a random element is used for each particle." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches = { "GeometryCaches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, GeometryCaches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_MetaData)) }; // 2738498035
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** If true, then the geometry cache keeps playing in a loop */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If true, then the geometry cache keeps playing in a loop" },
	};
#endif
	void Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_SetBit(void* Obj)
	{
		((UNiagaraGeometryCacheRendererProperties*)Obj)->bIsLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping = { "bIsLooping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraGeometryCacheRendererProperties), &Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The max number of components that this emitter will spawn or update each frame. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "The max number of components that this emitter will spawn or update each frame." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit = { "ComponentCountLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ComponentCountLimit), METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache position? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache position?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache rotation? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache rotation?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding = { "RotationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, RotationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache component scale? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache component scale?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding = { "ScaleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ScaleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the geometry cache's current animation time? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the geometry cache's current animation time?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding = { "ElapsedTimeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ElapsedTimeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use to check if rendering should be enabled? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if rendering should be enabled?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, EnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use to pick the element in the geometry cache array for this renderer? If not set, a random element will be used. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to pick the element in the geometry cache array for this renderer? If not set, a random element will be used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding = { "ArrayIndexBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, ArrayIndexBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Which attribute should we use for the renderer visibility tag? */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for the renderer visibility tag?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraGeometryCacheRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\n\x09* Disabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur. */" },
		{ "ModuleRelativePath", "Classes/NiagaraGeometryCacheRendererProperties.h" },
		{ "ToolTip", "If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\nDisabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur." },
	};
#endif
	void Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj)
	{
		((UNiagaraGeometryCacheRendererProperties*)Obj)->bAssignComponentsOnParticleID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID = { "bAssignComponentsOnParticleID", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraGeometryCacheRendererProperties), &Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_GeometryCaches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bIsLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ComponentCountLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_PositionBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RotationBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ScaleBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ElapsedTimeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_EnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_ArrayIndexBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraGeometryCacheRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::ClassParams = {
		&UNiagaraGeometryCacheRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.OuterSingleton;
	}
	template<> GEOMETRYCACHE_API UClass* StaticClass<UNiagaraGeometryCacheRendererProperties>()
	{
		return UNiagaraGeometryCacheRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraGeometryCacheRendererProperties);
	UNiagaraGeometryCacheRendererProperties::~UNiagaraGeometryCacheRendererProperties() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraGeometryCacheReference::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGeometryCacheReference_Statics::NewStructOps, TEXT("NiagaraGeometryCacheReference"), &Z_Registration_Info_UScriptStruct_NiagaraGeometryCacheReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGeometryCacheReference), 2738498035U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraGeometryCacheRendererProperties, UNiagaraGeometryCacheRendererProperties::StaticClass, TEXT("UNiagaraGeometryCacheRendererProperties"), &Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraGeometryCacheRendererProperties), 167501050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_2646343943(TEXT("/Script/GeometryCache"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GeometryCache_Source_GeometryCache_Classes_NiagaraGeometryCacheRendererProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
