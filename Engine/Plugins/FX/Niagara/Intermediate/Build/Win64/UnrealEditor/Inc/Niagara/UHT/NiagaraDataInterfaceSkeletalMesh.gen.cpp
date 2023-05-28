// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceSkeletalMesh.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceSkeletalMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode;
	static UEnum* ENDISkeletalMesh_SourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkeletalMesh_SourceMode"));
		}
		return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SourceMode>()
	{
		return ENDISkeletalMesh_SourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enumerators[] = {
		{ "ENDISkeletalMesh_SourceMode::Default", (int64)ENDISkeletalMesh_SourceMode::Default },
		{ "ENDISkeletalMesh_SourceMode::Source", (int64)ENDISkeletalMesh_SourceMode::Source },
		{ "ENDISkeletalMesh_SourceMode::AttachParent", (int64)ENDISkeletalMesh_SourceMode::AttachParent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
		{ "AttachParent.Name", "ENDISkeletalMesh_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n\x09- When no source is specified, fall back on attached actor or component.\n\x09*/" },
		{ "Default.Name", "ENDISkeletalMesh_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when specified (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n- When no source is specified, fall back on attached actor or component." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "Source.Comment", "/**\n\x09Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component).\n\x09*/" },
		{ "Source.Name", "ENDISkeletalMesh_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\" (either set explicitly or via blueprint with Set Niagara Skeletal Mesh Component)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISkeletalMesh_SourceMode",
		"ENDISkeletalMesh_SourceMode",
		Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode()
	{
		if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode;
	static UEnum* ENDISkeletalMesh_SkinningMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDISkeletalMesh_SkinningMode"));
		}
		return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDISkeletalMesh_SkinningMode>()
	{
		return ENDISkeletalMesh_SkinningMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enumerators[] = {
		{ "ENDISkeletalMesh_SkinningMode::Invalid", (int64)ENDISkeletalMesh_SkinningMode::Invalid },
		{ "ENDISkeletalMesh_SkinningMode::None", (int64)ENDISkeletalMesh_SkinningMode::None },
		{ "ENDISkeletalMesh_SkinningMode::SkinOnTheFly", (int64)ENDISkeletalMesh_SkinningMode::SkinOnTheFly },
		{ "ENDISkeletalMesh_SkinningMode::PreSkin", (int64)ENDISkeletalMesh_SkinningMode::PreSkin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ENDISkeletalMesh_SkinningMode::Invalid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "None.Comment", "/**\n\x09No skinning, use for reference pose only.\n\x09- Bone and socket sampling will be calculated on demand.\n\x09- Triangle and vertex sampling will be calculated on demand.\n\x09*/" },
		{ "None.Name", "ENDISkeletalMesh_SkinningMode::None" },
		{ "None.ToolTip", "No skinning, use for reference pose only.\n- Bone and socket sampling will be calculated on demand.\n- Triangle and vertex sampling will be calculated on demand." },
		{ "PreSkin.Comment", "/**\n\x09Pre-skin the whole mesh, can be more optimal when reading a lot of triangle or vertex data.\n\x09- Bone and socket sampling will be calculated up front.\n\x09- Triangle and vertex sampling will be calculated up front (Note: CPU Access required).\n\x09*/" },
		{ "PreSkin.Name", "ENDISkeletalMesh_SkinningMode::PreSkin" },
		{ "PreSkin.ToolTip", "Pre-skin the whole mesh, can be more optimal when reading a lot of triangle or vertex data.\n- Bone and socket sampling will be calculated up front.\n- Triangle and vertex sampling will be calculated up front (Note: CPU Access required)." },
		{ "SkinOnTheFly.Comment", "/**\n\x09Skin as required, use for bone or socket sampling or when reading a subset of triangles or vertices.\n\x09- Bone and socket sampling will be calculated up front.\n\x09- Triangle and vertex sampling will be calculated on demand (Note: CPU Access required).\n\x09*/" },
		{ "SkinOnTheFly.Name", "ENDISkeletalMesh_SkinningMode::SkinOnTheFly" },
		{ "SkinOnTheFly.ToolTip", "Skin as required, use for bone or socket sampling or when reading a subset of triangles or vertices.\n- Bone and socket sampling will be calculated up front.\n- Triangle and vertex sampling will be calculated on demand (Note: CPU Access required)." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDISkeletalMesh_SkinningMode",
		"ENDISkeletalMesh_SkinningMode",
		Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode()
	{
		if (!Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceSkeletalMesh::execOnSourceEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_InSource);
		P_GET_PROPERTY(FByteProperty,Z_Param_Reason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSourceEndPlay(Z_Param_InSource,EEndPlayReason::Type(Z_Param_Reason));
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceSkeletalMesh::StaticRegisterNativesUNiagaraDataInterfaceSkeletalMesh()
	{
		UClass* Class = UNiagaraDataInterfaceSkeletalMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSourceEndPlay", &UNiagaraDataInterfaceSkeletalMesh::execOnSourceEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics
	{
		struct NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_InSource = { "InSource", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms, InSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms, Reason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_InSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh, nullptr, "OnSourceEndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::NiagaraDataInterfaceSkeletalMesh_eventOnSourceEndPlay_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceSkeletalMesh);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_NoRegister()
	{
		return UNiagaraDataInterfaceSkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoftSourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SoftSourceActor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentTags;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshUserParameter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkinningMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinningMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkinningMode;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SamplingRegions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplingRegions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SamplingRegions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WholeMeshLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WholeMeshLOD;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredBones;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilteredSockets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilteredSockets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FilteredSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludeBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeBone_MetaData[];
#endif
		static void NewProp_bExcludeBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UvSetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UvSetIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[];
#endif
		static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceSkeletalMesh_OnSourceEndPlay, "OnSourceEndPlay" }, // 653840443
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of skeletal meshes. */" },
		{ "DisplayName", "Skeletal Mesh" },
		{ "IncludePath", "NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of skeletal meshes." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Controls how to retrieve the Skeletal Mesh Component to attach to. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Controls how to retrieve the Skeletal Mesh Component to attach to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SourceMode), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_MetaData)) }; // 2421745022
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "DisallowedClasses", "/Script/ApexDestruction.DestructibleMesh" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world.*/" },
		{ "DisplayName", "Source Actor" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor = { "SoftSourceActor", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SoftSourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_Inner = { "ComponentTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If defined, the supplied tags will be used to identify a valid component */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "If defined, the supplied tags will be used to identify a valid component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags = { "ComponentTags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, ComponentTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0024080820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, Source_DEPRECATED), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SourceComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter = { "MeshUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Selects which skinning mode to use, for most cases Skin On The Fly will cover your requirements, see individual tooltips for more information." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode = { "SkinningMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SkinningMode), Z_Construct_UEnum_Niagara_ENDISkeletalMesh_SkinningMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_MetaData)) }; // 3409373526
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_Inner = { "SamplingRegions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Sampling regions on the mesh from which to sample. Leave this empty to sample from the whole mesh." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions = { "SamplingRegions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** If no regions are specified, we'll sample the whole mesh at this LODIndex. -1 indicates to use the last LOD.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "If no regions are specified, we'll sample the whole mesh at this LODIndex. -1 indicates to use the last LOD." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD = { "WholeMeshLOD", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, WholeMeshLOD), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_Inner = { "FilteredBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Set of filtered bones that can be used for sampling. Select from these with GetFilteredBoneAt and RandomFilteredBone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones = { "FilteredBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, FilteredBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_Inner = { "FilteredSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/** Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Set of filtered sockets that can be used for sampling. Select from these with GetFilteredSocketAt and RandomFilteredSocket." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets = { "FilteredSockets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/**\n\x09Optionally remove a single bone from Random / Random Unfiltered access.\n\x09You can still include this bone in filtered list and access using the direct index functionality.\n\x09*/" },
		{ "EditCondition", "bExcludeBone" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "Optionally remove a single bone from Random / Random Unfiltered access.\nYou can still include this bone in filtered list and access using the direct index functionality." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bExcludeBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone = { "bExcludeBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex_MetaData[] = {
		{ "Category", "Experimental - UV Mapping" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex = { "UvSetIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceSkeletalMesh, UvSetIndex), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceSkeletalMesh.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the skeletal mesh and can often issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceSkeletalMesh*)Obj)->bRequireCurrentFrameData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceSkeletalMesh), &Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SoftSourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ComponentTags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_Source,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_MeshUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SkinningMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_SamplingRegions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_WholeMeshLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_FilteredSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_ExcludeBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bExcludeBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_UvSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::NewProp_bRequireCurrentFrameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceSkeletalMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams = {
		&UNiagaraDataInterfaceSkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceSkeletalMesh>()
	{
		return UNiagaraDataInterfaceSkeletalMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceSkeletalMesh);
	UNiagaraDataInterfaceSkeletalMesh::~UNiagaraDataInterfaceSkeletalMesh() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::EnumInfo[] = {
		{ ENDISkeletalMesh_SourceMode_StaticEnum, TEXT("ENDISkeletalMesh_SourceMode"), &Z_Registration_Info_UEnum_ENDISkeletalMesh_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2421745022U) },
		{ ENDISkeletalMesh_SkinningMode_StaticEnum, TEXT("ENDISkeletalMesh_SkinningMode"), &Z_Registration_Info_UEnum_ENDISkeletalMesh_SkinningMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3409373526U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceSkeletalMesh, UNiagaraDataInterfaceSkeletalMesh::StaticClass, TEXT("UNiagaraDataInterfaceSkeletalMesh"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceSkeletalMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceSkeletalMesh), 3290333267U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_2377682748(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceSkeletalMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
