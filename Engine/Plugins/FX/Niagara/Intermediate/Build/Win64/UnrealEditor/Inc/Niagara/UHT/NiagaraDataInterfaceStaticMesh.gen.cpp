// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceStaticMesh.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceStaticMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode;
	static UEnum* ENDIStaticMesh_SourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDIStaticMesh_SourceMode"));
		}
		return Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDIStaticMesh_SourceMode>()
	{
		return ENDIStaticMesh_SourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enumerators[] = {
		{ "ENDIStaticMesh_SourceMode::Default", (int64)ENDIStaticMesh_SourceMode::Default },
		{ "ENDIStaticMesh_SourceMode::Source", (int64)ENDIStaticMesh_SourceMode::Source },
		{ "ENDIStaticMesh_SourceMode::AttachParent", (int64)ENDIStaticMesh_SourceMode::AttachParent },
		{ "ENDIStaticMesh_SourceMode::DefaultMeshOnly", (int64)ENDIStaticMesh_SourceMode::DefaultMeshOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
		{ "AttachParent.Name", "ENDIStaticMesh_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n\x09- When no source is specified, attempt to find a Static Mesh Component on an attached actor or component.\n\x09- If no source actor/component specified and no attached component found, fall back to the \"Default Mesh\" specified.\n\x09*/" },
		{ "Default.Name", "ENDIStaticMesh_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n- When no source is specified, attempt to find a Static Mesh Component on an attached actor or component.\n- If no source actor/component specified and no attached component found, fall back to the \"Default Mesh\" specified." },
		{ "DefaultMeshOnly.Comment", "/**\n\x09Only use the \"Default Mesh\" specified.\n\x09*/" },
		{ "DefaultMeshOnly.Name", "ENDIStaticMesh_SourceMode::DefaultMeshOnly" },
		{ "DefaultMeshOnly.ToolTip", "Only use the \"Default Mesh\" specified." },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "Source.Comment", "/**\n\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Static Mesh Component).\n\x09*/" },
		{ "Source.Name", "ENDIStaticMesh_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Static Mesh Component)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDIStaticMesh_SourceMode",
		"ENDIStaticMesh_SourceMode",
		Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode()
	{
		if (!Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter;
class UScriptStruct* FNDIStaticMeshSectionFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIStaticMeshSectionFilter"));
	}
	return Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIStaticMeshSectionFilter>()
{
	return FNDIStaticMeshSectionFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_AllowedMaterialSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowedMaterialSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedMaterialSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIStaticMeshSectionFilter>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData[] = {
		{ "Category", "Section Filter" },
		{ "Comment", "/** Only allow sections these material slots. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Only allow sections these material slots." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDIStaticMeshSectionFilter, AllowedMaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NDIStaticMeshSectionFilter",
		sizeof(FNDIStaticMeshSectionFilter),
		alignof(FNDIStaticMeshSectionFilter),
		Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.InnerSingleton, Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceStaticMesh::execOnSourceEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_InSource);
		P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSourceEndPlay(Z_Param_InSource,EEndPlayReason::Type(Z_Param_Reason));
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceStaticMesh::StaticRegisterNativesUNiagaraDataInterfaceStaticMesh()
	{
		UClass* Class = UNiagaraDataInterfaceStaticMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSourceEndPlay", &UNiagaraDataInterfaceStaticMesh::execOnSourceEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics
	{
		struct NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms
		{
			AActor* InSource;
			TEnumAsByte<EEndPlayReason::Type> Reason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSource;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms, InSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms, Reason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_InSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, nullptr, "OnSourceEndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::NiagaraDataInterfaceStaticMesh_eventOnSourceEndPlay_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceStaticMesh);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister()
	{
		return UNiagaraDataInterfaceStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionFilter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePhysicsBodyVelocity_MetaData[];
#endif
		static void NewProp_bUsePhysicsBodyVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePhysicsBodyVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSamplingFromStreamingLODs_MetaData[];
#endif
		static void NewProp_bAllowSamplingFromStreamingLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSamplingFromStreamingLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODIndexUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODIndexUserParameter;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceStaticMesh_OnSourceEndPlay, "OnSourceEndPlay" }, // 286495514
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of static meshes. */" },
		{ "DisplayName", "Static Mesh" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of static meshes." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Controls how to retrieve the Static Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Controls how to retrieve the Static Mesh Component to attach to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceMode), Z_Construct_UEnum_Niagara_ENDIStaticMesh_SourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_MetaData)) }; // 3382590594
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, DefaultMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world. */" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, Source_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Array of filters the can be used to limit sampling to certain sections of the mesh. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Array of filters the can be used to limit sampling to certain sections of the mesh." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter = { "SectionFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SectionFilter), Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData)) }; // 32374880
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "If true then the mesh velocity is taken from the mesh component's physics data. Otherwise it will be calculated by diffing the component transforms between ticks, which is more reliable but won't work on the first frame." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceStaticMesh*)Obj)->bUsePhysicsBodyVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity = { "bUsePhysicsBodyVelocity", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceStaticMesh), &Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** When true, we allow this DI to sample from streaming LODs. Selectively overriding the CVar fx.Niagara.NDIStaticMesh.UseInlineLODsOnly. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "When true, we allow this DI to sample from streaming LODs. Selectively overriding the CVar fx.Niagara.NDIStaticMesh.UseInlineLODsOnly." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceStaticMesh*)Obj)->bAllowSamplingFromStreamingLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs = { "bAllowSamplingFromStreamingLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceStaticMesh), &Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** \n\x09Static Mesh LOD to sample.\n\x09When the desired LOD is not available, the next available LOD is used.\n\x09When LOD Index is negative, Desired LOD = Num LODs - LOD Index.\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Static Mesh LOD to sample.\nWhen the desired LOD is not available, the next available LOD is used.\nWhen LOD Index is negative, Desired LOD = Num LODs - LOD Index." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, LODIndex), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter_MetaData[] = {
		{ "Category", "LOD" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter = { "LODIndexUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, LODIndexUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** List of filtered sockets to use. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "List of filtered sockets to use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SoftSourceActor,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bUsePhysicsBodyVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_bAllowSamplingFromStreamingLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_LODIndexUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_FilteredSockets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams = {
		&UNiagaraDataInterfaceStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceStaticMesh>()
	{
		return UNiagaraDataInterfaceStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceStaticMesh);
	UNiagaraDataInterfaceStaticMesh::~UNiagaraDataInterfaceStaticMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::EnumInfo[] = {
		{ ENDIStaticMesh_SourceMode_StaticEnum, TEXT("ENDIStaticMesh_SourceMode"), &Z_Registration_Info_UEnum_ENDIStaticMesh_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3382590594U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ScriptStructInfo[] = {
		{ FNDIStaticMeshSectionFilter::StaticStruct, Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewStructOps, TEXT("NDIStaticMeshSectionFilter"), &Z_Registration_Info_UScriptStruct_NDIStaticMeshSectionFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIStaticMeshSectionFilter), 32374880U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, UNiagaraDataInterfaceStaticMesh::StaticClass, TEXT("UNiagaraDataInterfaceStaticMesh"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceStaticMesh), 4136816238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_3376940586(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceStaticMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
