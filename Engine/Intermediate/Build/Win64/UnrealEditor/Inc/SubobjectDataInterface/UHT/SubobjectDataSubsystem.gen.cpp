// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubobjectDataSubsystem.h"
#include "SubobjectData.h"
#include "SubobjectDataHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubobjectDataSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	SUBOBJECTDATAINTERFACE_API UClass* Z_Construct_UClass_USubobjectDataSubsystem();
	SUBOBJECTDATAINTERFACE_API UClass* Z_Construct_UClass_USubobjectDataSubsystem_NoRegister();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FAddNewSubobjectParams();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FReparentSubobjectParams();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectData();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectDataHandle();
	UPackage* Z_Construct_UPackage__Script_SubobjectDataInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddNewSubobjectParams;
class UScriptStruct* FAddNewSubobjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddNewSubobjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddNewSubobjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddNewSubobjectParams, (UObject*)Z_Construct_UPackage__Script_SubobjectDataInterface(), TEXT("AddNewSubobjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_AddNewSubobjectParams.OuterSingleton;
}
template<> SUBOBJECTDATAINTERFACE_API UScriptStruct* StaticStruct<FAddNewSubobjectParams>()
{
	return FAddNewSubobjectParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_NewClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMarkBlueprintModified_MetaData[];
#endif
		static void NewProp_bSkipMarkBlueprintModified_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMarkBlueprintModified;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConformTransformToParent_MetaData[];
#endif
		static void NewProp_bConformTransformToParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConformTransformToParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** Options when adding a new subobject */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Options when adding a new subobject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddNewSubobjectParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_ParentHandle_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_ParentHandle = { "ParentHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddNewSubobjectParams, ParentHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_ParentHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_ParentHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_NewClass_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** The class of the new subobject that will be added */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "The class of the new subobject that will be added" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddNewSubobjectParams, NewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_NewClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_NewClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_BlueprintContext_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Pointer to the blueprint context that this subobject is in. If this is null, it is assumed that\n\x09 * this subobject is being added to an instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Pointer to the blueprint context that this subobject is in. If this is null, it is assumed that\nthis subobject is being added to an instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_BlueprintContext = { "BlueprintContext", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddNewSubobjectParams, BlueprintContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_BlueprintContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_BlueprintContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** Optionally skip marking this blueprint as modified (e.g. if we're handling that externally */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Optionally skip marking this blueprint as modified (e.g. if we're handling that externally" },
	};
#endif
	void Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified_SetBit(void* Obj)
	{
		((FAddNewSubobjectParams*)Obj)->bSkipMarkBlueprintModified = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified = { "bSkipMarkBlueprintModified", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAddNewSubobjectParams), &Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** Whether the newly created component should keep its transform, or conform it to its parent */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Whether the newly created component should keep its transform, or conform it to its parent" },
	};
#endif
	void Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent_SetBit(void* Obj)
	{
		((FAddNewSubobjectParams*)Obj)->bConformTransformToParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent = { "bConformTransformToParent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAddNewSubobjectParams), &Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_ParentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_NewClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_BlueprintContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bSkipMarkBlueprintModified,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewProp_bConformTransformToParent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectDataInterface,
		nullptr,
		&NewStructOps,
		"AddNewSubobjectParams",
		sizeof(FAddNewSubobjectParams),
		alignof(FAddNewSubobjectParams),
		Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddNewSubobjectParams()
	{
		if (!Z_Registration_Info_UScriptStruct_AddNewSubobjectParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddNewSubobjectParams.InnerSingleton, Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AddNewSubobjectParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReparentSubobjectParams;
class UScriptStruct* FReparentSubobjectParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReparentSubobjectParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReparentSubobjectParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReparentSubobjectParams, (UObject*)Z_Construct_UPackage__Script_SubobjectDataInterface(), TEXT("ReparentSubobjectParams"));
	}
	return Z_Registration_Info_UScriptStruct_ReparentSubobjectParams.OuterSingleton;
}
template<> SUBOBJECTDATAINTERFACE_API UScriptStruct* StaticStruct<FReparentSubobjectParams>()
{
	return FReparentSubobjectParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewParentHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewParentHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlueprintContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPreviewContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorPreviewContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** Options for reparenting subobjects */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Options for reparenting subobjects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReparentSubobjectParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_NewParentHandle_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** The handle of the subobject to reparent to. */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "The handle of the subobject to reparent to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_NewParentHandle = { "NewParentHandle", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReparentSubobjectParams, NewParentHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_NewParentHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_NewParentHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_BlueprintContext_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Pointer to the blueprint context that this subobject is in. If this is null, it is assumed that\n\x09* this subobject is being added to an instance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Pointer to the blueprint context that this subobject is in. If this is null, it is assumed that\nthis subobject is being added to an instance." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_BlueprintContext = { "BlueprintContext", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReparentSubobjectParams, BlueprintContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_BlueprintContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_BlueprintContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_ActorPreviewContext_MetaData[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/** \n\x09* The preview actor context to be used if in a blueprint context. \n\x09* This must have a value if BlueprintContext is needed. \n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "The preview actor context to be used if in a blueprint context.\nThis must have a value if BlueprintContext is needed." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_ActorPreviewContext = { "ActorPreviewContext", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReparentSubobjectParams, ActorPreviewContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_ActorPreviewContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_ActorPreviewContext_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_NewParentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_BlueprintContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewProp_ActorPreviewContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectDataInterface,
		nullptr,
		&NewStructOps,
		"ReparentSubobjectParams",
		sizeof(FReparentSubobjectParams),
		alignof(FReparentSubobjectParams),
		Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReparentSubobjectParams()
	{
		if (!Z_Registration_Info_UScriptStruct_ReparentSubobjectParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReparentSubobjectParams.InnerSingleton, Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReparentSubobjectParams.InnerSingleton;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execRenameSubobjectMemberVariable)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_BPContext);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_InHandle);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubobjectDataSubsystem::RenameSubobjectMemberVariable(Z_Param_BPContext,Z_Param_Out_InHandle,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execCanPasteSubobjects)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_RootHandle);
		P_GET_OBJECT(UBlueprint,Z_Param_BPContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanPasteSubobjects(Z_Param_Out_RootHandle,Z_Param_BPContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execCopySubobjects)
	{
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_Handles);
		P_GET_OBJECT(UBlueprint,Z_Param_BpContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopySubobjects(Z_Param_Out_Handles,Z_Param_BpContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execCanCopySubobjects)
	{
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_Handles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanCopySubobjects(Z_Param_Out_Handles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execIsValidRename)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InNewText);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_OutErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidRename(Z_Param_Out_Handle,Z_Param_Out_InNewText,Z_Param_Out_OutErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execAttachSubobject)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_OwnerHandle);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ChildToAddHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AttachSubobject(Z_Param_Out_OwnerHandle,Z_Param_Out_ChildToAddHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execDetachSubobject)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_OwnerHandle);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ChildToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DetachSubobject(Z_Param_Out_OwnerHandle,Z_Param_Out_ChildToRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execReparentSubobjects)
	{
		P_GET_STRUCT_REF(FReparentSubobjectParams,Z_Param_Out_Params);
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_HandlesToMove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReparentSubobjects(Z_Param_Out_Params,Z_Param_Out_HandlesToMove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execMakeNewSceneRoot)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_Context);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_NewSceneRoot);
		P_GET_OBJECT(UBlueprint,Z_Param_BPContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MakeNewSceneRoot(Z_Param_Out_Context,Z_Param_Out_NewSceneRoot,Z_Param_BPContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execReparentSubobject)
	{
		P_GET_STRUCT_REF(FReparentSubobjectParams,Z_Param_Out_Params);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ToReparentHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReparentSubobject(Z_Param_Out_Params,Z_Param_Out_ToReparentHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execChangeSubobjectClass)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_Handle);
		P_GET_OBJECT(UClass,Z_Param_NewClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ChangeSubobjectClass(Z_Param_Out_Handle,Z_Param_NewClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execRenameSubobject)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_Handle);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RenameSubobject(Z_Param_Out_Handle,Z_Param_Out_InNewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execK2_DeleteSubobjectFromInstance)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ContextHandle);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_SubobjectToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->K2_DeleteSubobjectFromInstance(Z_Param_Out_ContextHandle,Z_Param_Out_SubobjectToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execDeleteSubobject)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ContextHandle);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_SubobjectToDelete);
		P_GET_OBJECT(UBlueprint,Z_Param_BPContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeleteSubobject(Z_Param_Out_ContextHandle,Z_Param_Out_SubobjectToDelete,Z_Param_BPContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execK2_DeleteSubobjectsFromInstance)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ContextHandle);
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_SubobjectsToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->K2_DeleteSubobjectsFromInstance(Z_Param_Out_ContextHandle,Z_Param_Out_SubobjectsToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execDeleteSubobjects)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_ContextHandle);
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_SubobjectsToDelete);
		P_GET_OBJECT(UBlueprint,Z_Param_BPContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeleteSubobjects(Z_Param_Out_ContextHandle,Z_Param_Out_SubobjectsToDelete,Z_Param_BPContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execAddNewSubobject)
	{
		P_GET_STRUCT_REF(FAddNewSubobjectParams,Z_Param_Out_Params);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_FailReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubobjectDataHandle*)Z_Param__Result=P_THIS->AddNewSubobject(Z_Param_Out_Params,Z_Param_Out_FailReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execCreateNewBPComponent)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewClassPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewClassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=USubobjectDataSubsystem::CreateNewBPComponent(Z_Param_ComponentClass,Z_Param_NewClassPath,Z_Param_NewClassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execCreateNewCPPComponent)
	{
		P_GET_OBJECT(UClass,Z_Param_ComponentClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewClassPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewClassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=USubobjectDataSubsystem::CreateNewCPPComponent(Z_Param_ComponentClass,Z_Param_NewClassPath,Z_Param_NewClassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execFindHandleForObject)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_Context);
		P_GET_OBJECT(UObject,Z_Param_ObjectToFind);
		P_GET_OBJECT(UBlueprint,Z_Param_BPContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSubobjectDataHandle*)Z_Param__Result=P_THIS->FindHandleForObject(Z_Param_Out_Context,Z_Param_ObjectToFind,Z_Param_BPContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execK2_FindSubobjectDataFromHandle)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_Handle);
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_OutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->K2_FindSubobjectDataFromHandle(Z_Param_Out_Handle,Z_Param_Out_OutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execK2_GatherSubobjectDataForInstance)
	{
		P_GET_OBJECT(AActor,Z_Param_Context);
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GatherSubobjectDataForInstance(Z_Param_Context,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataSubsystem::execK2_GatherSubobjectDataForBlueprint)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_Context);
		P_GET_TARRAY_REF(FSubobjectDataHandle,Z_Param_Out_OutArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_GatherSubobjectDataForBlueprint(Z_Param_Context,Z_Param_Out_OutArray);
		P_NATIVE_END;
	}
	void USubobjectDataSubsystem::StaticRegisterNativesUSubobjectDataSubsystem()
	{
		UClass* Class = USubobjectDataSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewSubobject", &USubobjectDataSubsystem::execAddNewSubobject },
			{ "AttachSubobject", &USubobjectDataSubsystem::execAttachSubobject },
			{ "CanCopySubobjects", &USubobjectDataSubsystem::execCanCopySubobjects },
			{ "CanPasteSubobjects", &USubobjectDataSubsystem::execCanPasteSubobjects },
			{ "ChangeSubobjectClass", &USubobjectDataSubsystem::execChangeSubobjectClass },
			{ "CopySubobjects", &USubobjectDataSubsystem::execCopySubobjects },
			{ "CreateNewBPComponent", &USubobjectDataSubsystem::execCreateNewBPComponent },
			{ "CreateNewCPPComponent", &USubobjectDataSubsystem::execCreateNewCPPComponent },
			{ "DeleteSubobject", &USubobjectDataSubsystem::execDeleteSubobject },
			{ "DeleteSubobjects", &USubobjectDataSubsystem::execDeleteSubobjects },
			{ "DetachSubobject", &USubobjectDataSubsystem::execDetachSubobject },
			{ "FindHandleForObject", &USubobjectDataSubsystem::execFindHandleForObject },
			{ "IsValidRename", &USubobjectDataSubsystem::execIsValidRename },
			{ "K2_DeleteSubobjectFromInstance", &USubobjectDataSubsystem::execK2_DeleteSubobjectFromInstance },
			{ "K2_DeleteSubobjectsFromInstance", &USubobjectDataSubsystem::execK2_DeleteSubobjectsFromInstance },
			{ "K2_FindSubobjectDataFromHandle", &USubobjectDataSubsystem::execK2_FindSubobjectDataFromHandle },
			{ "K2_GatherSubobjectDataForBlueprint", &USubobjectDataSubsystem::execK2_GatherSubobjectDataForBlueprint },
			{ "K2_GatherSubobjectDataForInstance", &USubobjectDataSubsystem::execK2_GatherSubobjectDataForInstance },
			{ "MakeNewSceneRoot", &USubobjectDataSubsystem::execMakeNewSceneRoot },
			{ "RenameSubobject", &USubobjectDataSubsystem::execRenameSubobject },
			{ "RenameSubobjectMemberVariable", &USubobjectDataSubsystem::execRenameSubobjectMemberVariable },
			{ "ReparentSubobject", &USubobjectDataSubsystem::execReparentSubobject },
			{ "ReparentSubobjects", &USubobjectDataSubsystem::execReparentSubobjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics
	{
		struct SubobjectDataSubsystem_eventAddNewSubobject_Parms
		{
			FAddNewSubobjectParams Params;
			FText FailReason;
			FSubobjectDataHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FTextPropertyParams NewProp_FailReason;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventAddNewSubobject_Parms, Params), Z_Construct_UScriptStruct_FAddNewSubobjectParams, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_Params_MetaData)) }; // 1200324848
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_FailReason = { "FailReason", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventAddNewSubobject_Parms, FailReason), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventAddNewSubobject_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_FailReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Add a new subobject as a child to the given parent object \n\x09*\n\x09* @param Params\x09\x09\x09Options to consider when adding this subobject\n\x09*\n\x09* @return FSubobjectDataHandle\x09\x09Handle to the newly created subobject, Invalid handle if creation failed\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Add a new subobject as a child to the given parent object\n\n@param Params                 Options to consider when adding this subobject\n\n@return FSubobjectDataHandle          Handle to the newly created subobject, Invalid handle if creation failed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "AddNewSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::SubobjectDataSubsystem_eventAddNewSubobject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics
	{
		struct SubobjectDataSubsystem_eventAttachSubobject_Parms
		{
			FSubobjectDataHandle OwnerHandle;
			FSubobjectDataHandle ChildToAddHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildToAddHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildToAddHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_OwnerHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_OwnerHandle = { "OwnerHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventAttachSubobject_Parms, OwnerHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_OwnerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_OwnerHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ChildToAddHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ChildToAddHandle = { "ChildToAddHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventAttachSubobject_Parms, ChildToAddHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ChildToAddHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ChildToAddHandle_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventAttachSubobject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventAttachSubobject_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_OwnerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ChildToAddHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Add the given subobject to a new owner. This will remove the subobject from its previous \n\x09 * owner if necessary.\n\x09 *\n\x09 * @param OwnerHandle\x09\x09The new owner to attach to\n\x09 * @param ChildToAddHandle\x09Handle to the subobject that will become a child of the owner\n\x09 * \n\x09 * @return true if the child was added successfully\n\x09 */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Add the given subobject to a new owner. This will remove the subobject from its previous\nowner if necessary.\n\n@param OwnerHandle           The new owner to attach to\n@param ChildToAddHandle      Handle to the subobject that will become a child of the owner\n\n@return true if the child was added successfully" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "AttachSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::SubobjectDataSubsystem_eventAttachSubobject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics
	{
		struct SubobjectDataSubsystem_eventCanCopySubobjects_Parms
		{
			TArray<FSubobjectDataHandle> Handles;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCanCopySubobjects_Parms, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventCanCopySubobjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventCanCopySubobjects_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_Handles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Returns true if the given array of handles represents subobjects that\n\x09 * can be copied.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Returns true if the given array of handles represents subobjects that\ncan be copied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "CanCopySubobjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::SubobjectDataSubsystem_eventCanCopySubobjects_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics
	{
		struct SubobjectDataSubsystem_eventCanPasteSubobjects_Parms
		{
			FSubobjectDataHandle RootHandle;
			UBlueprint* BPContext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_RootHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_RootHandle = { "RootHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCanPasteSubobjects_Parms, RootHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_RootHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_RootHandle_MetaData)) }; // 3209397774
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_BPContext = { "BPContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCanPasteSubobjects_Parms, BPContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventCanPasteSubobjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventCanPasteSubobjects_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_RootHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_BPContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "CPP_Default_BPContext", "None" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "CanPasteSubobjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::SubobjectDataSubsystem_eventCanPasteSubobjects_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics
	{
		struct SubobjectDataSubsystem_eventChangeSubobjectClass_Parms
		{
			FSubobjectDataHandle Handle;
			const UClass* NewClass;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventChangeSubobjectClass_Parms, Handle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_Handle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_NewClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventChangeSubobjectClass_Parms, NewClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_NewClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_NewClass_MetaData)) };
	void Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventChangeSubobjectClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventChangeSubobjectClass_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_NewClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to change the subclass of a native component\n\x09*\n\x09* @param Handle\x09\x09\x09Handle to the subobject to change class of\n\x09* @param NewClass\x09\x09The new class that is desired for the given subobject\n\x09*\n\x09* @return True if the class change was successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to change the subclass of a native component\n\n@param Handle                 Handle to the subobject to change class of\n@param NewClass               The new class that is desired for the given subobject\n\n@return True if the class change was successful, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "ChangeSubobjectClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::SubobjectDataSubsystem_eventChangeSubobjectClass_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics
	{
		struct SubobjectDataSubsystem_eventCopySubobjects_Parms
		{
			TArray<FSubobjectDataHandle> Handles;
			UBlueprint* BpContext;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Handles;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BpContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles_Inner = { "Handles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles = { "Handles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCopySubobjects_Parms, Handles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles_MetaData)) }; // 3209397774
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_BpContext = { "BpContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCopySubobjects_Parms, BpContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_Handles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::NewProp_BpContext,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "CopySubobjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::SubobjectDataSubsystem_eventCopySubobjects_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics
	{
		struct SubobjectDataSubsystem_eventCreateNewBPComponent_Parms
		{
			TSubclassOf<UActorComponent>  ComponentClass;
			FString NewClassPath;
			FString NewClassName;
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewClassName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewBPComponent_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassPath = { "NewClassPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewBPComponent_Parms, NewClassPath), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassName = { "NewClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewBPComponent_Parms, NewClassName), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassName_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewBPComponent_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_NewClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Creates a new Blueprint component from the specified class type\n\x09 * The user will be prompted to pick a new subclass name and a blueprint asset will be created\n\x09 *\n\x09 * @return The new class that was created\n\x09 */" },
		{ "DisplayName", "Create New Blueprint Component" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Creates a new Blueprint component from the specified class type\nThe user will be prompted to pick a new subclass name and a blueprint asset will be created\n\n@return The new class that was created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "CreateNewBPComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::SubobjectDataSubsystem_eventCreateNewBPComponent_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics
	{
		struct SubobjectDataSubsystem_eventCreateNewCPPComponent_Parms
		{
			TSubclassOf<UActorComponent>  ComponentClass;
			FString NewClassPath;
			FString NewClassName;
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewClassName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewCPPComponent_Parms, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassPath = { "NewClassPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewCPPComponent_Parms, NewClassPath), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassName = { "NewClassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewCPPComponent_Parms, NewClassName), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassName_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventCreateNewCPPComponent_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_ComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_NewClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Creates a new C++ component from the specified class type\n\x09 * The user will be prompted to pick a new subclass name and code will be recompiled\n\x09 *\n\x09 * @return The new class that was created\n\x09 */" },
		{ "DisplayName", "Create New C++ Component" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Creates a new C++ component from the specified class type\nThe user will be prompted to pick a new subclass name and code will be recompiled\n\n@return The new class that was created" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "CreateNewCPPComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::SubobjectDataSubsystem_eventCreateNewCPPComponent_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics
	{
		struct SubobjectDataSubsystem_eventDeleteSubobject_Parms
		{
			FSubobjectDataHandle ContextHandle;
			FSubobjectDataHandle SubobjectToDelete;
			UBlueprint* BPContext;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubobjectToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubobjectToDelete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobject_Parms, ContextHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ContextHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_SubobjectToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_SubobjectToDelete = { "SubobjectToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobject_Parms, SubobjectToDelete), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_SubobjectToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_SubobjectToDelete_MetaData)) }; // 3209397774
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_BPContext = { "BPContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobject_Parms, BPContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobject_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_SubobjectToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_BPContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to delete the given subobject from its blueprint context \n\x09*\n\x09* @param ContextHandle\x09\x09\x09The owning context of the subobjects that should be removed\n\x09* @param SubobjectToDelete\x09\x09The subobject handles that should be deleted\n\x09* @param BPContext\x09\x09\x09\x09The blueprint context for the given \n\x09*\n\x09* @return \x09The number of subobjects successfully deleted\n\x09*/" },
		{ "CPP_Default_BPContext", "None" },
		{ "DisplayName", "Delete Subobject from Blueprint" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to delete the given subobject from its blueprint context\n\n@param ContextHandle                  The owning context of the subobjects that should be removed\n@param SubobjectToDelete              The subobject handles that should be deleted\n@param BPContext                              The blueprint context for the given\n\n@return       The number of subobjects successfully deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "DeleteSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::SubobjectDataSubsystem_eventDeleteSubobject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics
	{
		struct SubobjectDataSubsystem_eventDeleteSubobjects_Parms
		{
			FSubobjectDataHandle ContextHandle;
			TArray<FSubobjectDataHandle> SubobjectsToDelete;
			UBlueprint* BPContext;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubobjectsToDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubobjectsToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubobjectsToDelete;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPContext;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobjects_Parms, ContextHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ContextHandle_MetaData)) }; // 3209397774
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete_Inner = { "SubobjectsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete = { "SubobjectsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobjects_Parms, SubobjectsToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete_MetaData)) }; // 3209397774
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_BPContext = { "BPContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobjects_Parms, BPContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDeleteSubobjects_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_SubobjectsToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_BPContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to delete the given array of subobjects from their context \n\x09*\n\x09* @param ContextHandle\x09\x09\x09The owning context of the subobjects that should be removed\n\x09* @param SubobjectsToDelete\x09\x09""Array of subobject handles that should be deleted\n\x09* @param BPContext\x09\x09\x09\x09The blueprint context for the given\n\x09* \n\x09* @return \x09The number of subobjects successfully deleted\n\x09*/" },
		{ "CPP_Default_BPContext", "None" },
		{ "DisplayName", "Delete Subobjects from Blueprint" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to delete the given array of subobjects from their context\n\n@param ContextHandle                  The owning context of the subobjects that should be removed\n@param SubobjectsToDelete             Array of subobject handles that should be deleted\n@param BPContext                              The blueprint context for the given\n\n@return       The number of subobjects successfully deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "DeleteSubobjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::SubobjectDataSubsystem_eventDeleteSubobjects_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics
	{
		struct SubobjectDataSubsystem_eventDetachSubobject_Parms
		{
			FSubobjectDataHandle OwnerHandle;
			FSubobjectDataHandle ChildToRemove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_OwnerHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_OwnerHandle = { "OwnerHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDetachSubobject_Parms, OwnerHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_OwnerHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_OwnerHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ChildToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ChildToRemove = { "ChildToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventDetachSubobject_Parms, ChildToRemove), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ChildToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ChildToRemove_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventDetachSubobject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventDetachSubobject_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_OwnerHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ChildToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Remove the child subobject from the owner\n\x09 *\n\x09 * @return True if the child was successfully removed. \n\x09 */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Remove the child subobject from the owner\n\n@return True if the child was successfully removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "DetachSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::SubobjectDataSubsystem_eventDetachSubobject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics
	{
		struct SubobjectDataSubsystem_eventFindHandleForObject_Parms
		{
			FSubobjectDataHandle Context;
			const UObject* ObjectToFind;
			UBlueprint* BPContext;
			FSubobjectDataHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectToFind_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectToFind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPContext;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventFindHandleForObject_Parms, Context), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_Context_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ObjectToFind_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ObjectToFind = { "ObjectToFind", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventFindHandleForObject_Parms, ObjectToFind), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ObjectToFind_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ObjectToFind_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_BPContext = { "BPContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventFindHandleForObject_Parms, BPContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventFindHandleForObject_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ObjectToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_BPContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempt to find an existing handle for the given object. \n\x09*\n\x09* @param Context\x09\x09The context that the object to find is within\n\x09* @param ObjectToFind\x09The object that you want to find the handle for within the context\n\x09*\n\x09* @return FSubobjectDataHandle\x09The subobject handle for the object, Invalid handle if not found.\n\x09*/" },
		{ "CPP_Default_BPContext", "None" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempt to find an existing handle for the given object.\n\n@param Context                The context that the object to find is within\n@param ObjectToFind   The object that you want to find the handle for within the context\n\n@return FSubobjectDataHandle  The subobject handle for the object, Invalid handle if not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "FindHandleForObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::SubobjectDataSubsystem_eventFindHandleForObject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics
	{
		struct SubobjectDataSubsystem_eventIsValidRename_Parms
		{
			FSubobjectDataHandle Handle;
			FText InNewText;
			FText OutErrorMessage;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InNewText;
		static const UECodeGen_Private::FTextPropertyParams NewProp_OutErrorMessage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventIsValidRename_Parms, Handle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_Handle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_InNewText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_InNewText = { "InNewText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventIsValidRename_Parms, InNewText), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_InNewText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_InNewText_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_OutErrorMessage = { "OutErrorMessage", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventIsValidRename_Parms, OutErrorMessage), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventIsValidRename_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventIsValidRename_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_InNewText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_OutErrorMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09 * Returns true if the given new text is a valid option to rename the\n\x09 * subobject with the given handle. Populates the OutErrorMessage if\n\x09 * it is not valid.\n\x09 *\n\x09 * @param Handle\x09\x09\x09Handle to the subobject that is being checked\n\x09 * @param InNewText\x09\x09\x09The new name that is desired\n\x09 * @param OutErrorMessage\x09The reasoning for an invalid name\n\x09 *\n\x09 * @return True if the rename is valid\n\x09 */" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Returns true if the given new text is a valid option to rename the\nsubobject with the given handle. Populates the OutErrorMessage if\nit is not valid.\n\n@param Handle                        Handle to the subobject that is being checked\n@param InNewText                     The new name that is desired\n@param OutErrorMessage       The reasoning for an invalid name\n\n@return True if the rename is valid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "IsValidRename", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::SubobjectDataSubsystem_eventIsValidRename_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics
	{
		struct SubobjectDataSubsystem_eventK2_DeleteSubobjectFromInstance_Parms
		{
			FSubobjectDataHandle ContextHandle;
			FSubobjectDataHandle SubobjectToDelete;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubobjectToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubobjectToDelete;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_DeleteSubobjectFromInstance_Parms, ContextHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ContextHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_SubobjectToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_SubobjectToDelete = { "SubobjectToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_DeleteSubobjectFromInstance_Parms, SubobjectToDelete), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_SubobjectToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_SubobjectToDelete_MetaData)) }; // 3209397774
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_DeleteSubobjectFromInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_SubobjectToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to delete the given subobject from its context \n\x09*\n\x09* @param ContextHandle\x09\x09\x09The owning context of the subobjects that should be removed\n\x09* @param SubobjectToDelete\x09\x09The subobject handles that should be deleted\n\x09*\n\x09* @return \x09The number of subobjects successfully deleted\n\x09*/" },
		{ "DisplayName", "Delete Subobject from Instance" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to delete the given subobject from its context\n\n@param ContextHandle                  The owning context of the subobjects that should be removed\n@param SubobjectToDelete              The subobject handles that should be deleted\n\n@return       The number of subobjects successfully deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "K2_DeleteSubobjectFromInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::SubobjectDataSubsystem_eventK2_DeleteSubobjectFromInstance_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics
	{
		struct SubobjectDataSubsystem_eventK2_DeleteSubobjectsFromInstance_Parms
		{
			FSubobjectDataHandle ContextHandle;
			TArray<FSubobjectDataHandle> SubobjectsToDelete;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContextHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContextHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubobjectsToDelete_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubobjectsToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubobjectsToDelete;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ContextHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ContextHandle = { "ContextHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_DeleteSubobjectsFromInstance_Parms, ContextHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ContextHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ContextHandle_MetaData)) }; // 3209397774
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete_Inner = { "SubobjectsToDelete", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete = { "SubobjectsToDelete", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_DeleteSubobjectsFromInstance_Parms, SubobjectsToDelete), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete_MetaData)) }; // 3209397774
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_DeleteSubobjectsFromInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ContextHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_SubobjectsToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to delete the given array of subobjects from their context \n\x09*\n\x09* @param ContextHandle\x09\x09\x09The owning context of the subobjects that should be removed\n\x09* @param SubobjectsToDelete\x09\x09""Array of subobject handles that should be deleted\n\x09*\n\x09* @return \x09The number of subobjects successfully deleted\n\x09*/" },
		{ "DisplayName", "Delete Subobjects from Instance" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to delete the given array of subobjects from their context\n\n@param ContextHandle                  The owning context of the subobjects that should be removed\n@param SubobjectsToDelete             Array of subobject handles that should be deleted\n\n@return       The number of subobjects successfully deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "K2_DeleteSubobjectsFromInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::SubobjectDataSubsystem_eventK2_DeleteSubobjectsFromInstance_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics
	{
		struct SubobjectDataSubsystem_eventK2_FindSubobjectDataFromHandle_Parms
		{
			FSubobjectDataHandle Handle;
			FSubobjectData OutData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_FindSubobjectDataFromHandle_Parms, Handle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_Handle_MetaData)) }; // 3209397774
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_FindSubobjectDataFromHandle_Parms, OutData), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(nullptr, 0) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventK2_FindSubobjectDataFromHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventK2_FindSubobjectDataFromHandle_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_OutData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempt to find the subobject data for a given handle. OutData will only \n\x09* be valid if the function returns true.\n\x09*\n\x09* @param Handle\x09\x09Handle of the subobject data you want to acquire\n\x09* @param OutData\x09Reference to the subobject data to populate\n\x09*\n\x09* @return bool\x09\x09true if the data was found\n\x09*/" },
		{ "DisplayName", "FindSubobjectDataFromHandle" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempt to find the subobject data for a given handle. OutData will only\nbe valid if the function returns true.\n\n@param Handle         Handle of the subobject data you want to acquire\n@param OutData        Reference to the subobject data to populate\n\n@return bool          true if the data was found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "K2_FindSubobjectDataFromHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::SubobjectDataSubsystem_eventK2_FindSubobjectDataFromHandle_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics
	{
		struct SubobjectDataSubsystem_eventK2_GatherSubobjectDataForBlueprint_Parms
		{
			UBlueprint* Context;
			TArray<FSubobjectDataHandle> OutArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_GatherSubobjectDataForBlueprint_Parms, Context), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_GatherSubobjectDataForBlueprint_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Gather all subobjects that the given Blueprint context has. Populates an array of\n\x09* handles that will have the given context and all it's subobjects.\n\x09*\n\x09* @param Context\x09\x09Object to gather subobjects for\n\x09* @param OutArray\x09\x09""Array to populate (will be emptied first)\n\x09*/" },
		{ "DisplayName", "Gather Subobject Data For Blueprint" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Gather all subobjects that the given Blueprint context has. Populates an array of\nhandles that will have the given context and all it's subobjects.\n\n@param Context                Object to gather subobjects for\n@param OutArray               Array to populate (will be emptied first)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "K2_GatherSubobjectDataForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::SubobjectDataSubsystem_eventK2_GatherSubobjectDataForBlueprint_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics
	{
		struct SubobjectDataSubsystem_eventK2_GatherSubobjectDataForInstance_Parms
		{
			AActor* Context;
			TArray<FSubobjectDataHandle> OutArray;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_GatherSubobjectDataForInstance_Parms, Context), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::NewProp_OutArray_Inner = { "OutArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::NewProp_OutArray = { "OutArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventK2_GatherSubobjectDataForInstance_Parms, OutArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::NewProp_OutArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::NewProp_OutArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Gather all subobjects that the given actor instance has. Populates an array of\n\x09* handles that will have the given context and all it's subobjects.\n\x09*\n\x09* @param Context\x09\x09Object to gather subobjects for\n\x09* @param OutArray\x09\x09""Array to populate (will be emptied first)\n\x09*/" },
		{ "DisplayName", "Gather Subobject Data For Instance" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Gather all subobjects that the given actor instance has. Populates an array of\nhandles that will have the given context and all it's subobjects.\n\n@param Context                Object to gather subobjects for\n@param OutArray               Array to populate (will be emptied first)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "K2_GatherSubobjectDataForInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::SubobjectDataSubsystem_eventK2_GatherSubobjectDataForInstance_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics
	{
		struct SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms
		{
			FSubobjectDataHandle Context;
			FSubobjectDataHandle NewSceneRoot;
			UBlueprint* BPContext;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSceneRoot;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPContext;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms, Context), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_Context_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_NewSceneRoot_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_NewSceneRoot = { "NewSceneRoot", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms, NewSceneRoot), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_NewSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_NewSceneRoot_MetaData)) }; // 3209397774
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_BPContext = { "BPContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms, BPContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_NewSceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_BPContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "MakeNewSceneRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::SubobjectDataSubsystem_eventMakeNewSceneRoot_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics
	{
		struct SubobjectDataSubsystem_eventRenameSubobject_Parms
		{
			FSubobjectDataHandle Handle;
			FText InNewName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InNewName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventRenameSubobject_Parms, Handle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_Handle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_InNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_InNewName = { "InNewName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventRenameSubobject_Parms, InNewName), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_InNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_InNewName_MetaData)) };
	void Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventRenameSubobject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventRenameSubobject_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_InNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to rename the given subobject to the new name.\n\x09*\n\x09* @param Handle\x09\x09\x09Handle to the subobject to rename\n\x09* @param InNewName\x09\x09The new name that is desired for the given subobject\n\x09*\n\x09* @return True if the rename was successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to rename the given subobject to the new name.\n\n@param Handle                 Handle to the subobject to rename\n@param InNewName              The new name that is desired for the given subobject\n\n@return True if the rename was successful, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "RenameSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::SubobjectDataSubsystem_eventRenameSubobject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics
	{
		struct SubobjectDataSubsystem_eventRenameSubobjectMemberVariable_Parms
		{
			UBlueprint* BPContext;
			FSubobjectDataHandle InHandle;
			FName NewName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BPContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_BPContext = { "BPContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventRenameSubobjectMemberVariable_Parms, BPContext), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventRenameSubobjectMemberVariable_Parms, InHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_InHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_InHandle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventRenameSubobjectMemberVariable_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_BPContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_InHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "RenameSubobjectMemberVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::SubobjectDataSubsystem_eventRenameSubobjectMemberVariable_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics
	{
		struct SubobjectDataSubsystem_eventReparentSubobject_Parms
		{
			FReparentSubobjectParams Params;
			FSubobjectDataHandle ToReparentHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToReparentHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToReparentHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventReparentSubobject_Parms, Params), Z_Construct_UScriptStruct_FReparentSubobjectParams, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_Params_MetaData)) }; // 1304299767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ToReparentHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ToReparentHandle = { "ToReparentHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventReparentSubobject_Parms, ToReparentHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ToReparentHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ToReparentHandle_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventReparentSubobject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventReparentSubobject_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ToReparentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to reparent the given subobject to the new parent\n\x09*\n\x09* @param NewParentHandle\x09\x09Handle of the new parent\n\x09* @param ToReparentHandle\x09\x09The handle of the subobject that will get moved\n\x09*\n\x09* @return True if the reparent was successful, false otherwise.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to reparent the given subobject to the new parent\n\n@param NewParentHandle                Handle of the new parent\n@param ToReparentHandle               The handle of the subobject that will get moved\n\n@return True if the reparent was successful, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "ReparentSubobject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::SubobjectDataSubsystem_eventReparentSubobject_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics
	{
		struct SubobjectDataSubsystem_eventReparentSubobjects_Parms
		{
			FReparentSubobjectParams Params;
			TArray<FSubobjectDataHandle> HandlesToMove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandlesToMove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandlesToMove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HandlesToMove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventReparentSubobjects_Parms, Params), Z_Construct_UScriptStruct_FReparentSubobjectParams, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_Params_MetaData)) }; // 1304299767
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove_Inner = { "HandlesToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove = { "HandlesToMove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataSubsystem_eventReparentSubobjects_Parms, HandlesToMove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataSubsystem_eventReparentSubobjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataSubsystem_eventReparentSubobjects_Parms), &Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_Params,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_HandlesToMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n\x09* Attempts to reparent all subobjects in the HandlesToMove array to the new parent handle.\n\x09* \n\x09* @param NewParentHandle\x09\x09Handle of the new parent\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "Attempts to reparent all subobjects in the HandlesToMove array to the new parent handle.\n\n@param NewParentHandle                Handle of the new parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataSubsystem, nullptr, "ReparentSubobjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::SubobjectDataSubsystem_eventReparentSubobjects_Parms), Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubobjectDataSubsystem);
	UClass* Z_Construct_UClass_USubobjectDataSubsystem_NoRegister()
	{
		return USubobjectDataSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USubobjectDataSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubobjectDataSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectDataInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubobjectDataSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_AddNewSubobject, "AddNewSubobject" }, // 2128913480
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_AttachSubobject, "AttachSubobject" }, // 4260269353
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_CanCopySubobjects, "CanCopySubobjects" }, // 3651742408
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_CanPasteSubobjects, "CanPasteSubobjects" }, // 2270296936
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_ChangeSubobjectClass, "ChangeSubobjectClass" }, // 3934131010
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_CopySubobjects, "CopySubobjects" }, // 1018969231
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewBPComponent, "CreateNewBPComponent" }, // 4085638222
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_CreateNewCPPComponent, "CreateNewCPPComponent" }, // 2275940850
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobject, "DeleteSubobject" }, // 2937469096
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_DeleteSubobjects, "DeleteSubobjects" }, // 1799065569
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_DetachSubobject, "DetachSubobject" }, // 2841401242
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_FindHandleForObject, "FindHandleForObject" }, // 4018782397
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_IsValidRename, "IsValidRename" }, // 498924722
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectFromInstance, "K2_DeleteSubobjectFromInstance" }, // 2507717785
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_K2_DeleteSubobjectsFromInstance, "K2_DeleteSubobjectsFromInstance" }, // 2267544796
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_K2_FindSubobjectDataFromHandle, "K2_FindSubobjectDataFromHandle" }, // 1654947490
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForBlueprint, "K2_GatherSubobjectDataForBlueprint" }, // 2994107784
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_K2_GatherSubobjectDataForInstance, "K2_GatherSubobjectDataForInstance" }, // 2230077792
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_MakeNewSceneRoot, "MakeNewSceneRoot" }, // 1770024956
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobject, "RenameSubobject" }, // 2898710140
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_RenameSubobjectMemberVariable, "RenameSubobjectMemberVariable" }, // 3643808854
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobject, "ReparentSubobject" }, // 1513726866
		{ &Z_Construct_UFunction_USubobjectDataSubsystem_ReparentSubobjects, "ReparentSubobjects" }, // 414552681
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobjectDataSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Category", "SubobjectDataSubsystem" },
		{ "Comment", "/**\n* The Subobject Data Subsystem will produce the reflected subobject data\n* based on a given root object. A root object can be anything, an actor \n* instance clicked on via the level editor, a UBlueprint* by opening an asset,\n* or something piped in from python or other scripting languages. \n*/" },
		{ "IncludePath", "SubobjectDataSubsystem.h" },
		{ "ModuleRelativePath", "Public/SubobjectDataSubsystem.h" },
		{ "ToolTip", "The Subobject Data Subsystem will produce the reflected subobject data\nbased on a given root object. A root object can be anything, an actor\ninstance clicked on via the level editor, a UBlueprint* by opening an asset,\nor something piped in from python or other scripting languages." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubobjectDataSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubobjectDataSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubobjectDataSubsystem_Statics::ClassParams = {
		&USubobjectDataSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubobjectDataSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubobjectDataSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubobjectDataSubsystem()
	{
		if (!Z_Registration_Info_UClass_USubobjectDataSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubobjectDataSubsystem.OuterSingleton, Z_Construct_UClass_USubobjectDataSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubobjectDataSubsystem.OuterSingleton;
	}
	template<> SUBOBJECTDATAINTERFACE_API UClass* StaticClass<USubobjectDataSubsystem>()
	{
		return USubobjectDataSubsystem::StaticClass();
	}
	USubobjectDataSubsystem::USubobjectDataSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubobjectDataSubsystem);
	USubobjectDataSubsystem::~USubobjectDataSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FAddNewSubobjectParams::StaticStruct, Z_Construct_UScriptStruct_FAddNewSubobjectParams_Statics::NewStructOps, TEXT("AddNewSubobjectParams"), &Z_Registration_Info_UScriptStruct_AddNewSubobjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddNewSubobjectParams), 1200324848U) },
		{ FReparentSubobjectParams::StaticStruct, Z_Construct_UScriptStruct_FReparentSubobjectParams_Statics::NewStructOps, TEXT("ReparentSubobjectParams"), &Z_Registration_Info_UScriptStruct_ReparentSubobjectParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReparentSubobjectParams), 1304299767U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubobjectDataSubsystem, USubobjectDataSubsystem::StaticClass, TEXT("USubobjectDataSubsystem"), &Z_Registration_Info_UClass_USubobjectDataSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubobjectDataSubsystem), 601116127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_3023264734(TEXT("/Script/SubobjectDataInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
