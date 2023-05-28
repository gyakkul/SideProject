// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectElements/DatasmithUSceneElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithUSceneElement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule();
	DATASMITHCORE_API UEnum* Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithBaseMaterialElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithCustomActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithLevelVariantSetsElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithLightActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMeshElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithMetaDataElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithObjectElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithPostProcessElement_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithSceneElementBase();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithSceneElementBase_NoRegister();
	DATASMITHIMPORTER_API UClass* Z_Construct_UClass_UDatasmithTextureElement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithImporter();
// End Cross Module References
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execAttachActorToSceneRoot)
	{
		P_GET_OBJECT(UDatasmithActorElement,Z_Param_NewParent);
		P_GET_ENUM(EDatasmithActorAttachmentRule,Z_Param_AttachmentRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachActorToSceneRoot(Z_Param_NewParent,EDatasmithActorAttachmentRule(Z_Param_AttachmentRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execAttachActor)
	{
		P_GET_OBJECT(UDatasmithActorElement,Z_Param_NewParent);
		P_GET_OBJECT(UDatasmithActorElement,Z_Param_Child);
		P_GET_ENUM(EDatasmithActorAttachmentRule,Z_Param_AttachmentRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachActor(Z_Param_NewParent,Z_Param_Child,EDatasmithActorAttachmentRule(Z_Param_AttachmentRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveLevelVariantSets)
	{
		P_GET_OBJECT(UDatasmithLevelVariantSetsElement,Z_Param_InElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLevelVariantSets(Z_Param_InElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllLevelVariantSets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithLevelVariantSetsElement*>*)Z_Param__Result=P_THIS->GetAllLevelVariantSets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execCreateLevelVariantSets)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithLevelVariantSetsElement**)Z_Param__Result=P_THIS->CreateLevelVariantSets(Z_Param_InElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllObjectsAndValuesForKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_TARRAY_REF(UDatasmithObjectElement*,Z_Param_Out_OutObjects);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllObjectsAndValuesForKey(Z_Param_Key,Z_Param_ObjectClass,Z_Param_Out_OutObjects,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllMetaData)
	{
		P_GET_OBJECT(UClass,Z_Param_ObjectClass);
		P_GET_TARRAY_REF(UDatasmithMetaDataElement*,Z_Param_Out_OutMetadatas);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllMetaData(Z_Param_ObjectClass,Z_Param_Out_OutMetadatas);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetMetaDataKeysAndValuesForValue)
	{
		P_GET_OBJECT(UDatasmithObjectElement,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_StringToMatch);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutKeys);
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutValues);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMetaDataKeysAndValuesForValue(Z_Param_Object,Z_Param_StringToMatch,Z_Param_Out_OutKeys,Z_Param_Out_OutValues);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetMetaDataValueForKey)
	{
		P_GET_OBJECT(UDatasmithObjectElement,Z_Param_Object);
		P_GET_PROPERTY(FStrProperty,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMetaDataValueForKey(Z_Param_Object,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetMetaDataForObject)
	{
		P_GET_OBJECT(UDatasmithObjectElement,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithMetaDataElement**)Z_Param__Result=P_THIS->GetMetaDataForObject(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetPostProcess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithPostProcessElement**)Z_Param__Result=P_THIS->GetPostProcess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveMaterial)
	{
		P_GET_OBJECT(UDatasmithBaseMaterialElement,Z_Param_InElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMaterial(Z_Param_InElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithBaseMaterialElement*>*)Z_Param__Result=P_THIS->GetAllMaterials();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveTexture)
	{
		P_GET_OBJECT(UDatasmithTextureElement,Z_Param_InElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTexture(Z_Param_InElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetTextures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithTextureElement*>*)Z_Param__Result=P_THIS->GetTextures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execCreateTexture)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithTextureElement**)Z_Param__Result=P_THIS->CreateTexture(Z_Param_InElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveCustomActor)
	{
		P_GET_OBJECT(UDatasmithCustomActorElement,Z_Param_InCustomActor);
		P_GET_ENUM(EDatasmithActorRemovalRule,Z_Param_RemoveRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCustomActor(Z_Param_InCustomActor,EDatasmithActorRemovalRule(Z_Param_RemoveRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllCustomActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithCustomActorElement*>*)Z_Param__Result=P_THIS->GetAllCustomActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetCustomActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithCustomActorElement*>*)Z_Param__Result=P_THIS->GetCustomActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveCameraActor)
	{
		P_GET_OBJECT(UDatasmithCameraActorElement,Z_Param_InMeshActor);
		P_GET_ENUM(EDatasmithActorRemovalRule,Z_Param_RemoveRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveCameraActor(Z_Param_InMeshActor,EDatasmithActorRemovalRule(Z_Param_RemoveRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllCameraActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithCameraActorElement*>*)Z_Param__Result=P_THIS->GetAllCameraActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetCameraActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithCameraActorElement*>*)Z_Param__Result=P_THIS->GetCameraActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execCreateCameraActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithCameraActorElement**)Z_Param__Result=P_THIS->CreateCameraActor(Z_Param_InElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveLightActor)
	{
		P_GET_OBJECT(UDatasmithLightActorElement,Z_Param_InLightActor);
		P_GET_ENUM(EDatasmithActorRemovalRule,Z_Param_RemoveRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveLightActor(Z_Param_InLightActor,EDatasmithActorRemovalRule(Z_Param_RemoveRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllLightActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithLightActorElement*>*)Z_Param__Result=P_THIS->GetAllLightActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetLightActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithLightActorElement*>*)Z_Param__Result=P_THIS->GetLightActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveMeshActor)
	{
		P_GET_OBJECT(UDatasmithMeshActorElement,Z_Param_InMeshActor);
		P_GET_ENUM(EDatasmithActorRemovalRule,Z_Param_RemoveRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMeshActor(Z_Param_InMeshActor,EDatasmithActorRemovalRule(Z_Param_RemoveRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetAllMeshActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithMeshActorElement*>*)Z_Param__Result=P_THIS->GetAllMeshActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetMeshActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithMeshActorElement*>*)Z_Param__Result=P_THIS->GetMeshActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execCreateMeshActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithMeshActorElement**)Z_Param__Result=P_THIS->CreateMeshActor(Z_Param_InElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execRemoveMesh)
	{
		P_GET_OBJECT(UDatasmithMeshElement,Z_Param_InMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMesh(Z_Param_InMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetMeshByPathName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MeshPathName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithMeshElement**)Z_Param__Result=P_THIS->GetMeshByPathName(Z_Param_MeshPathName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetMeshes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UDatasmithMeshElement*>*)Z_Param__Result=P_THIS->GetMeshes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execCreateMesh)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDatasmithMeshElement**)Z_Param__Result=P_THIS->CreateMesh(Z_Param_InElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetUsePhysicalSky)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUsePhysicalSky();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetExportDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetExportDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetUserOS)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserOS();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetUserID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUserID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetProductVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetProductName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetProductName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetVendor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetVendor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetExporterVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetExporterVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDatasmithSceneElementBase::execGetHost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetHost();
		P_NATIVE_END;
	}
	void UDatasmithSceneElementBase::StaticRegisterNativesUDatasmithSceneElementBase()
	{
		UClass* Class = UDatasmithSceneElementBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachActor", &UDatasmithSceneElementBase::execAttachActor },
			{ "AttachActorToSceneRoot", &UDatasmithSceneElementBase::execAttachActorToSceneRoot },
			{ "CreateCameraActor", &UDatasmithSceneElementBase::execCreateCameraActor },
			{ "CreateLevelVariantSets", &UDatasmithSceneElementBase::execCreateLevelVariantSets },
			{ "CreateMesh", &UDatasmithSceneElementBase::execCreateMesh },
			{ "CreateMeshActor", &UDatasmithSceneElementBase::execCreateMeshActor },
			{ "CreateTexture", &UDatasmithSceneElementBase::execCreateTexture },
			{ "GetAllCameraActors", &UDatasmithSceneElementBase::execGetAllCameraActors },
			{ "GetAllCustomActors", &UDatasmithSceneElementBase::execGetAllCustomActors },
			{ "GetAllLevelVariantSets", &UDatasmithSceneElementBase::execGetAllLevelVariantSets },
			{ "GetAllLightActors", &UDatasmithSceneElementBase::execGetAllLightActors },
			{ "GetAllMaterials", &UDatasmithSceneElementBase::execGetAllMaterials },
			{ "GetAllMeshActors", &UDatasmithSceneElementBase::execGetAllMeshActors },
			{ "GetAllMetaData", &UDatasmithSceneElementBase::execGetAllMetaData },
			{ "GetAllObjectsAndValuesForKey", &UDatasmithSceneElementBase::execGetAllObjectsAndValuesForKey },
			{ "GetCameraActors", &UDatasmithSceneElementBase::execGetCameraActors },
			{ "GetCustomActors", &UDatasmithSceneElementBase::execGetCustomActors },
			{ "GetExportDuration", &UDatasmithSceneElementBase::execGetExportDuration },
			{ "GetExporterVersion", &UDatasmithSceneElementBase::execGetExporterVersion },
			{ "GetHost", &UDatasmithSceneElementBase::execGetHost },
			{ "GetLightActors", &UDatasmithSceneElementBase::execGetLightActors },
			{ "GetMeshActors", &UDatasmithSceneElementBase::execGetMeshActors },
			{ "GetMeshByPathName", &UDatasmithSceneElementBase::execGetMeshByPathName },
			{ "GetMeshes", &UDatasmithSceneElementBase::execGetMeshes },
			{ "GetMetaDataForObject", &UDatasmithSceneElementBase::execGetMetaDataForObject },
			{ "GetMetaDataKeysAndValuesForValue", &UDatasmithSceneElementBase::execGetMetaDataKeysAndValuesForValue },
			{ "GetMetaDataValueForKey", &UDatasmithSceneElementBase::execGetMetaDataValueForKey },
			{ "GetPostProcess", &UDatasmithSceneElementBase::execGetPostProcess },
			{ "GetProductName", &UDatasmithSceneElementBase::execGetProductName },
			{ "GetProductVersion", &UDatasmithSceneElementBase::execGetProductVersion },
			{ "GetTextures", &UDatasmithSceneElementBase::execGetTextures },
			{ "GetUsePhysicalSky", &UDatasmithSceneElementBase::execGetUsePhysicalSky },
			{ "GetUserID", &UDatasmithSceneElementBase::execGetUserID },
			{ "GetUserOS", &UDatasmithSceneElementBase::execGetUserOS },
			{ "GetVendor", &UDatasmithSceneElementBase::execGetVendor },
			{ "RemoveCameraActor", &UDatasmithSceneElementBase::execRemoveCameraActor },
			{ "RemoveCustomActor", &UDatasmithSceneElementBase::execRemoveCustomActor },
			{ "RemoveLevelVariantSets", &UDatasmithSceneElementBase::execRemoveLevelVariantSets },
			{ "RemoveLightActor", &UDatasmithSceneElementBase::execRemoveLightActor },
			{ "RemoveMaterial", &UDatasmithSceneElementBase::execRemoveMaterial },
			{ "RemoveMesh", &UDatasmithSceneElementBase::execRemoveMesh },
			{ "RemoveMeshActor", &UDatasmithSceneElementBase::execRemoveMeshActor },
			{ "RemoveTexture", &UDatasmithSceneElementBase::execRemoveTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics
	{
		struct DatasmithSceneElementBase_eventAttachActor_Parms
		{
			UDatasmithActorElement* NewParent;
			UDatasmithActorElement* Child;
			EDatasmithActorAttachmentRule AttachmentRule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Child;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventAttachActor_Parms, NewParent), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventAttachActor_Parms, Child), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_AttachmentRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_AttachmentRule = { "AttachmentRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventAttachActor_Parms, AttachmentRule), Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1971496026
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_NewParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_AttachmentRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::NewProp_AttachmentRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Attach the actor to its new parent. Detach the actor if it was already attached. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Attach the actor to its new parent. Detach the actor if it was already attached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "AttachActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::DatasmithSceneElementBase_eventAttachActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics
	{
		struct DatasmithSceneElementBase_eventAttachActorToSceneRoot_Parms
		{
			UDatasmithActorElement* NewParent;
			EDatasmithActorAttachmentRule AttachmentRule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttachmentRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachmentRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventAttachActorToSceneRoot_Parms, NewParent), Z_Construct_UClass_UDatasmithActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::NewProp_AttachmentRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::NewProp_AttachmentRule = { "AttachmentRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventAttachActorToSceneRoot_Parms, AttachmentRule), Z_Construct_UEnum_DatasmithCore_EDatasmithActorAttachmentRule, METADATA_PARAMS(nullptr, 0) }; // 1971496026
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::NewProp_NewParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::NewProp_AttachmentRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::NewProp_AttachmentRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Attach the actor to the scene root. Detach the actor if it was already attached. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Attach the actor to the scene root. Detach the actor if it was already attached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "AttachActorToSceneRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::DatasmithSceneElementBase_eventAttachActorToSceneRoot_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics
	{
		struct DatasmithSceneElementBase_eventCreateCameraActor_Parms
		{
			FName InElementName;
			UDatasmithCameraActorElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateCameraActor_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateCameraActor_Parms, ReturnValue), Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new Camera Actor and add it to the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create a new Camera Actor and add it to the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "CreateCameraActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::DatasmithSceneElementBase_eventCreateCameraActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics
	{
		struct DatasmithSceneElementBase_eventCreateLevelVariantSets_Parms
		{
			FName InElementName;
			UDatasmithLevelVariantSetsElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateLevelVariantSets_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateLevelVariantSets_Parms, ReturnValue), Z_Construct_UClass_UDatasmithLevelVariantSetsElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new level variant sets and add it to the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create a new level variant sets and add it to the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "CreateLevelVariantSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::DatasmithSceneElementBase_eventCreateLevelVariantSets_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics
	{
		struct DatasmithSceneElementBase_eventCreateMesh_Parms
		{
			FName InElementName;
			UDatasmithMeshElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateMesh_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateMesh_Parms, ReturnValue), Z_Construct_UClass_UDatasmithMeshElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new Mesh and add it to the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create a new Mesh and add it to the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "CreateMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::DatasmithSceneElementBase_eventCreateMesh_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics
	{
		struct DatasmithSceneElementBase_eventCreateMeshActor_Parms
		{
			FName InElementName;
			UDatasmithMeshActorElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateMeshActor_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateMeshActor_Parms, ReturnValue), Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new MeshActor and add it to the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create a new MeshActor and add it to the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "CreateMeshActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::DatasmithSceneElementBase_eventCreateMeshActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics
	{
		struct DatasmithSceneElementBase_eventCreateTexture_Parms
		{
			FName InElementName;
			UDatasmithTextureElement* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::NewProp_InElementName = { "InElementName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateTexture_Parms, InElementName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventCreateTexture_Parms, ReturnValue), Z_Construct_UClass_UDatasmithTextureElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::NewProp_InElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create a new Texture and add it to the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create a new Texture and add it to the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "CreateTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::DatasmithSceneElementBase_eventCreateTexture_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllCameraActors_Parms
		{
			TArray<UDatasmithCameraActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllCameraActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with all the CameraActor in the Datasmith scene without taking into account the hierarchy.\n\x09 * Use CreateCameraActor -or- RemoveCameraActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the CameraActor in the Datasmith scene without taking into account the hierarchy.\nUse CreateCameraActor -or- RemoveCameraActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllCameraActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::DatasmithSceneElementBase_eventGetAllCameraActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllCustomActors_Parms
		{
			TArray<UDatasmithCustomActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithCustomActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllCustomActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with all the CustomActor in the Datasmith scene without taking into account the hierarchy.\n\x09 * Use RemoveCustomActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the CustomActor in the Datasmith scene without taking into account the hierarchy.\nUse RemoveCustomActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllCustomActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::DatasmithSceneElementBase_eventGetAllCustomActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllLevelVariantSets_Parms
		{
			TArray<UDatasmithLevelVariantSetsElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithLevelVariantSetsElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllLevelVariantSets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with all the level variants sets from the Datasmith scene\n\x09 * Use CreateLevelVariantSets -or- RemoveLevelVariantSets to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the level variants sets from the Datasmith scene\nUse CreateLevelVariantSets -or- RemoveLevelVariantSets to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllLevelVariantSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::DatasmithSceneElementBase_eventGetAllLevelVariantSets_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllLightActors_Parms
		{
			TArray<UDatasmithLightActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithLightActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllLightActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with all the LightActor in the Datasmith scene without taking into account the hierarchy.\n\x09 * Use RemoveLightActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the LightActor in the Datasmith scene without taking into account the hierarchy.\nUse RemoveLightActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllLightActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::DatasmithSceneElementBase_eventGetAllLightActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllMaterials_Parms
		{
			TArray<UDatasmithBaseMaterialElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithBaseMaterialElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create an array with all the Materials in the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the Materials in the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::DatasmithSceneElementBase_eventGetAllMaterials_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllMeshActors_Parms
		{
			TArray<UDatasmithMeshActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllMeshActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with all the MeshActor in the Datasmith scene without taking into account the hierarchy.\n\x09 * Use CreateMeshActor -or- RemoveMeshActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the MeshActor in the Datasmith scene without taking into account the hierarchy.\nUse CreateMeshActor -or- RemoveMeshActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::DatasmithSceneElementBase_eventGetAllMeshActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllMetaData_Parms
		{
			TSubclassOf<UDatasmithObjectElement>  ObjectClass;
			TArray<UDatasmithMetaDataElement*> OutMetadatas;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMetadatas_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMetadatas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllMetaData_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::NewProp_OutMetadatas_Inner = { "OutMetadatas", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithMetaDataElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::NewProp_OutMetadatas = { "OutMetadatas", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllMetaData_Parms, OutMetadatas), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::NewProp_OutMetadatas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::NewProp_OutMetadatas,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 *\x09""Find all metadata elements associated with objects of the given type.\n\x09 *\x09@param\x09ObjectClass\x09\x09""Class of the object on which to filter, if specificed; otherwise there's no filtering\n\x09 *\x09@param\x09OutMetadatas\x09Output array of metadata elements.\n\x09 */" },
		{ "DisplayName", "Get All Metadata" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ScriptName", "GetAllMetadata" },
		{ "ToolTip", "Find all metadata elements associated with objects of the given type.\n@param  ObjectClass             Class of the object on which to filter, if specificed; otherwise there's no filtering\n@param  OutMetadatas    Output array of metadata elements." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllMetaData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::DatasmithSceneElementBase_eventGetAllMetaData_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics
	{
		struct DatasmithSceneElementBase_eventGetAllObjectsAndValuesForKey_Parms
		{
			FString Key;
			TSubclassOf<UDatasmithObjectElement>  ObjectClass;
			TArray<UDatasmithObjectElement*> OutObjects;
			TArray<FString> OutValues;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutObjects_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutObjects;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllObjectsAndValuesForKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_ObjectClass = { "ObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllObjectsAndValuesForKey_Parms, ObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects_Inner = { "OutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects = { "OutObjects", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllObjectsAndValuesForKey_Parms, OutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetAllObjectsAndValuesForKey_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_ObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 *\x09""Find all objects of the given type that have a metadata element that contains the given key and their associated values.\n\x09 *\x09@param\x09Key\x09\x09\x09The key to find in the metadata element.\n\x09 *\x09@param\x09ObjectClass\x09""Class of the object on which to filter, if specificed; otherwise there's no filtering\n\x09 *\x09@param\x09OutObjects\x09Output array of objects for which the metadata element contains the given key.\n\x09 *\x09@param\x09OutValues\x09Output array of values associated with each object in OutObjects.\n\x09 */" },
		{ "DeterminesOutputType", "ObjectClass" },
		{ "DynamicOutputParam", "OutObjects" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Find all objects of the given type that have a metadata element that contains the given key and their associated values.\n@param  Key                     The key to find in the metadata element.\n@param  ObjectClass     Class of the object on which to filter, if specificed; otherwise there's no filtering\n@param  OutObjects      Output array of objects for which the metadata element contains the given key.\n@param  OutValues       Output array of values associated with each object in OutObjects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetAllObjectsAndValuesForKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::DatasmithSceneElementBase_eventGetAllObjectsAndValuesForKey_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetCameraActors_Parms
		{
			TArray<UDatasmithCameraActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetCameraActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with the CameraActor in the Datasmith scene that are at the root level of the hierarchy.\n\x09 * Use CreateCameraActor -or- RemoveCameraActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with the CameraActor in the Datasmith scene that are at the root level of the hierarchy.\nUse CreateCameraActor -or- RemoveCameraActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetCameraActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::DatasmithSceneElementBase_eventGetCameraActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetCustomActors_Parms
		{
			TArray<UDatasmithCustomActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithCustomActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetCustomActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with the CustomActor in the Datasmith scene that are at the root level of the hierarchy.\n\x09 * Use RemoveCustomActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with the CustomActor in the Datasmith scene that are at the root level of the hierarchy.\nUse RemoveCustomActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetCustomActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::DatasmithSceneElementBase_eventGetCustomActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics
	{
		struct DatasmithSceneElementBase_eventGetExportDuration_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetExportDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the time taken to export the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the time taken to export the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetExportDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::DatasmithSceneElementBase_eventGetExportDuration_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics
	{
		struct DatasmithSceneElementBase_eventGetExporterVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetExporterVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the Datasmith version used to export the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the Datasmith version used to export the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetExporterVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::DatasmithSceneElementBase_eventGetExporterVersion_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics
	{
		struct DatasmithSceneElementBase_eventGetHost_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetHost_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Sets the name of the host application which created the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Sets the name of the host application which created the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetHost", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::DatasmithSceneElementBase_eventGetHost_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetLightActors_Parms
		{
			TArray<UDatasmithLightActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithLightActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetLightActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with the LightActor in the Datasmith scene that are at the root level of the hierarchy.\n\x09 * Use RemoveLightActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with the LightActor in the Datasmith scene that are at the root level of the hierarchy.\nUse RemoveLightActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetLightActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::DatasmithSceneElementBase_eventGetLightActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics
	{
		struct DatasmithSceneElementBase_eventGetMeshActors_Parms
		{
			TArray<UDatasmithMeshActorElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMeshActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Create an array with the MeshActor in the Datasmith scene that are at the root level of the hierarchy.\n\x09 * Use CreateMeshActor -or- RemoveMeshActor to modify the Datasmith scene.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with the MeshActor in the Datasmith scene that are at the root level of the hierarchy.\nUse CreateMeshActor -or- RemoveMeshActor to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetMeshActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::DatasmithSceneElementBase_eventGetMeshActors_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics
	{
		struct DatasmithSceneElementBase_eventGetMeshByPathName_Parms
		{
			FString MeshPathName;
			UDatasmithMeshElement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshPathName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MeshPathName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_MeshPathName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_MeshPathName = { "MeshPathName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMeshByPathName_Parms, MeshPathName), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_MeshPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_MeshPathName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMeshByPathName_Parms, ReturnValue), Z_Construct_UClass_UDatasmithMeshElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_MeshPathName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Find in the Datasmith scene the MeshElement that correspond to the mesh path name.\n\x09 * The function will return an invalid MeshElement, if the MeshPathName is empty or if it's not relative to the Datasmith scene or if it's not found.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Find in the Datasmith scene the MeshElement that correspond to the mesh path name.\nThe function will return an invalid MeshElement, if the MeshPathName is empty or if it's not relative to the Datasmith scene or if it's not found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetMeshByPathName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::DatasmithSceneElementBase_eventGetMeshByPathName_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics
	{
		struct DatasmithSceneElementBase_eventGetMeshes_Parms
		{
			TArray<UDatasmithMeshElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithMeshElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMeshes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create an array with all the Mesh in the Datasmith scene. Use CreateMesh -or- RemoveMesh to modify the Datasmith scene. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the Mesh in the Datasmith scene. Use CreateMesh -or- RemoveMesh to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetMeshes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::DatasmithSceneElementBase_eventGetMeshes_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics
	{
		struct DatasmithSceneElementBase_eventGetMetaDataForObject_Parms
		{
			UDatasmithObjectElement* Object;
			UDatasmithMetaDataElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataForObject_Parms, Object), Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataForObject_Parms, ReturnValue), Z_Construct_UClass_UDatasmithMetaDataElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "DisplayName", "Get Metadata For Object" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ScriptName", "GetMetadataForObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetMetaDataForObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::DatasmithSceneElementBase_eventGetMetaDataForObject_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics
	{
		struct DatasmithSceneElementBase_eventGetMetaDataKeysAndValuesForValue_Parms
		{
			UDatasmithObjectElement* Object;
			FString StringToMatch;
			TArray<FString> OutKeys;
			TArray<FString> OutValues;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringToMatch_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringToMatch;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutValues_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataKeysAndValuesForValue_Parms, Object), Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_StringToMatch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_StringToMatch = { "StringToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataKeysAndValuesForValue_Parms, StringToMatch), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_StringToMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_StringToMatch_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataKeysAndValuesForValue_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutValues_Inner = { "OutValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutValues = { "OutValues", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataKeysAndValuesForValue_Parms, OutValues), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_StringToMatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::NewProp_OutValues,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Get the keys and values for which the associated value contains the string to match for the metadata element associated with the given object.\n\x09 * @param\x09Object\x09\x09\x09The Object that is associated with the metadata element of interest.\n\x09 * @param\x09StringToMatch\x09The string to match in the values.\n\x09 * @param\x09OutKeys\x09\x09\x09Output array of keys for which the associated values contain the string to match.\n\x09 * @param\x09OutValues\x09\x09Output array of values associated to the keys.\n\x09 */" },
		{ "DisplayName", "Get Metadata Keys And Values For Value" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ScriptName", "GetMetadataKeysAndValuesForValue" },
		{ "ToolTip", "Get the keys and values for which the associated value contains the string to match for the metadata element associated with the given object.\n@param       Object                  The Object that is associated with the metadata element of interest.\n@param       StringToMatch   The string to match in the values.\n@param       OutKeys                 Output array of keys for which the associated values contain the string to match.\n@param       OutValues               Output array of values associated to the keys." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetMetaDataKeysAndValuesForValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::DatasmithSceneElementBase_eventGetMetaDataKeysAndValuesForValue_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics
	{
		struct DatasmithSceneElementBase_eventGetMetaDataValueForKey_Parms
		{
			UDatasmithObjectElement* Object;
			FString Key;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataValueForKey_Parms, Object), Z_Construct_UClass_UDatasmithObjectElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataValueForKey_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetMetaDataValueForKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09 * Get the value associated with the given key of the metadata element associated with the given object.\n\x09 * @param\x09Object\x09The Object that is associated with the metadata element of interest.\n\x09 * @param\x09Key\x09\x09The key to find in the metadata element.\n\x09 * @return\x09\x09\x09The string value associated with the given key\n\x09 */" },
		{ "DisplayName", "Get Metadata Value For Key" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ScriptName", "GetMetadataValueForKey" },
		{ "ToolTip", "Get the value associated with the given key of the metadata element associated with the given object.\n@param       Object  The Object that is associated with the metadata element of interest.\n@param       Key             The key to find in the metadata element.\n@return                      The string value associated with the given key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetMetaDataValueForKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::DatasmithSceneElementBase_eventGetMetaDataValueForKey_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics
	{
		struct DatasmithSceneElementBase_eventGetPostProcess_Parms
		{
			UDatasmithPostProcessElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetPostProcess_Parms, ReturnValue), Z_Construct_UClass_UDatasmithPostProcessElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Get the Postprocess used by the scene. Can be invalid. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Get the Postprocess used by the scene. Can be invalid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetPostProcess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::DatasmithSceneElementBase_eventGetPostProcess_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics
	{
		struct DatasmithSceneElementBase_eventGetProductName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetProductName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the product name of the application used to export the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the product name of the application used to export the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetProductName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::DatasmithSceneElementBase_eventGetProductName_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics
	{
		struct DatasmithSceneElementBase_eventGetProductVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetProductVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the product version of the application used to export the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the product version of the application used to export the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetProductVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::DatasmithSceneElementBase_eventGetProductVersion_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics
	{
		struct DatasmithSceneElementBase_eventGetTextures_Parms
		{
			TArray<UDatasmithTextureElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDatasmithTextureElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetTextures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Create an array with all the Textures in the Datasmith scene. Call CreateTexture -or- RemoveTexture to modify the Datasmith scene. */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Create an array with all the Textures in the Datasmith scene. Call CreateTexture -or- RemoveTexture to modify the Datasmith scene." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetTextures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::DatasmithSceneElementBase_eventGetTextures_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics
	{
		struct DatasmithSceneElementBase_eventGetUsePhysicalSky_Parms
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
	void Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DatasmithSceneElementBase_eventGetUsePhysicalSky_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(DatasmithSceneElementBase_eventGetUsePhysicalSky_Parms), &Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/**\n\x09* Physical Sky could be generated in a large amount of modes, like material, lights etc\n\x09* that's why it has been added as static, just enable it and it is done.\n\x09* Notice that if a HDRI environment is used this gets disabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Physical Sky could be generated in a large amount of modes, like material, lights etc\nthat's why it has been added as static, just enable it and it is done.\nNotice that if a HDRI environment is used this gets disabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetUsePhysicalSky", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::DatasmithSceneElementBase_eventGetUsePhysicalSky_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics
	{
		struct DatasmithSceneElementBase_eventGetUserID_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetUserID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the user identifier who exported the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the user identifier who exported the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetUserID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::DatasmithSceneElementBase_eventGetUserID_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics
	{
		struct DatasmithSceneElementBase_eventGetUserOS_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetUserOS_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the OS name used by user who exported the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the OS name used by user who exported the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetUserOS", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::DatasmithSceneElementBase_eventGetUserOS_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics
	{
		struct DatasmithSceneElementBase_eventGetVendor_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventGetVendor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Returns the vendor name of the application used to export the scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Returns the vendor name of the application used to export the scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "GetVendor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::DatasmithSceneElementBase_eventGetVendor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveCameraActor_Parms
		{
			UDatasmithCameraActorElement* InMeshActor;
			EDatasmithActorRemovalRule RemoveRule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoveRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::NewProp_InMeshActor = { "InMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveCameraActor_Parms, InMeshActor), Z_Construct_UClass_UDatasmithCameraActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::NewProp_RemoveRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::NewProp_RemoveRule = { "RemoveRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveCameraActor_Parms, RemoveRule), Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule, METADATA_PARAMS(nullptr, 0) }; // 2616769342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::NewProp_InMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::NewProp_RemoveRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::NewProp_RemoveRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the Camera actor from the Datasmith scene */" },
		{ "CPP_Default_RemoveRule", "RemoveChildren" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the Camera actor from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveCameraActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::DatasmithSceneElementBase_eventRemoveCameraActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveCustomActor_Parms
		{
			UDatasmithCustomActorElement* InCustomActor;
			EDatasmithActorRemovalRule RemoveRule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InCustomActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoveRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::NewProp_InCustomActor = { "InCustomActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveCustomActor_Parms, InCustomActor), Z_Construct_UClass_UDatasmithCustomActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::NewProp_RemoveRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::NewProp_RemoveRule = { "RemoveRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveCustomActor_Parms, RemoveRule), Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule, METADATA_PARAMS(nullptr, 0) }; // 2616769342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::NewProp_InCustomActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::NewProp_RemoveRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::NewProp_RemoveRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the LightActor from the Datasmith scene */" },
		{ "CPP_Default_RemoveRule", "RemoveChildren" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the LightActor from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveCustomActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::DatasmithSceneElementBase_eventRemoveCustomActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveLevelVariantSets_Parms
		{
			UDatasmithLevelVariantSetsElement* InElement;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveLevelVariantSets_Parms, InElement), Z_Construct_UClass_UDatasmithLevelVariantSetsElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::NewProp_InElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the level variant sets from the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the level variant sets from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveLevelVariantSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::DatasmithSceneElementBase_eventRemoveLevelVariantSets_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveLightActor_Parms
		{
			UDatasmithLightActorElement* InLightActor;
			EDatasmithActorRemovalRule RemoveRule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLightActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoveRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::NewProp_InLightActor = { "InLightActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveLightActor_Parms, InLightActor), Z_Construct_UClass_UDatasmithLightActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::NewProp_RemoveRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::NewProp_RemoveRule = { "RemoveRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveLightActor_Parms, RemoveRule), Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule, METADATA_PARAMS(nullptr, 0) }; // 2616769342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::NewProp_InLightActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::NewProp_RemoveRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::NewProp_RemoveRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the LightActor from the Datasmith scene */" },
		{ "CPP_Default_RemoveRule", "RemoveChildren" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the LightActor from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveLightActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::DatasmithSceneElementBase_eventRemoveLightActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveMaterial_Parms
		{
			UDatasmithBaseMaterialElement* InElement;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveMaterial_Parms, InElement), Z_Construct_UClass_UDatasmithBaseMaterialElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::NewProp_InElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the material from the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the material from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::DatasmithSceneElementBase_eventRemoveMaterial_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveMesh_Parms
		{
			UDatasmithMeshElement* InMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveMesh_Parms, InMesh), Z_Construct_UClass_UDatasmithMeshElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the mesh from the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the mesh from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::DatasmithSceneElementBase_eventRemoveMesh_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveMeshActor_Parms
		{
			UDatasmithMeshActorElement* InMeshActor;
			EDatasmithActorRemovalRule RemoveRule;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMeshActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoveRule_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RemoveRule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::NewProp_InMeshActor = { "InMeshActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveMeshActor_Parms, InMeshActor), Z_Construct_UClass_UDatasmithMeshActorElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::NewProp_RemoveRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::NewProp_RemoveRule = { "RemoveRule", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveMeshActor_Parms, RemoveRule), Z_Construct_UEnum_DatasmithCore_EDatasmithActorRemovalRule, METADATA_PARAMS(nullptr, 0) }; // 2616769342
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::NewProp_InMeshActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::NewProp_RemoveRule_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::NewProp_RemoveRule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the MeshActor from the Datasmith scene */" },
		{ "CPP_Default_RemoveRule", "RemoveChildren" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the MeshActor from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveMeshActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::DatasmithSceneElementBase_eventRemoveMeshActor_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics
	{
		struct DatasmithSceneElementBase_eventRemoveTexture_Parms
		{
			UDatasmithTextureElement* InElement;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InElement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::NewProp_InElement = { "InElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DatasmithSceneElementBase_eventRemoveTexture_Parms, InElement), Z_Construct_UClass_UDatasmithTextureElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::NewProp_InElement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Datasmith | Scene" },
		{ "Comment", "/** Remove the Texture from the Datasmith scene */" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
		{ "ToolTip", "Remove the Texture from the Datasmith scene" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDatasmithSceneElementBase, nullptr, "RemoveTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::DatasmithSceneElementBase_eventRemoveTexture_Parms), Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithSceneElementBase);
	UClass* Z_Construct_UClass_UDatasmithSceneElementBase_NoRegister()
	{
		return UDatasmithSceneElementBase::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSceneElementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSceneElementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDatasmithSceneElementBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActor, "AttachActor" }, // 2842439732
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_AttachActorToSceneRoot, "AttachActorToSceneRoot" }, // 2270105979
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_CreateCameraActor, "CreateCameraActor" }, // 2485064609
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_CreateLevelVariantSets, "CreateLevelVariantSets" }, // 310319003
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMesh, "CreateMesh" }, // 2636229822
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_CreateMeshActor, "CreateMeshActor" }, // 2197363674
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_CreateTexture, "CreateTexture" }, // 2826016736
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCameraActors, "GetAllCameraActors" }, // 2002708604
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllCustomActors, "GetAllCustomActors" }, // 2311142099
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLevelVariantSets, "GetAllLevelVariantSets" }, // 3075740687
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllLightActors, "GetAllLightActors" }, // 1563485373
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMaterials, "GetAllMaterials" }, // 467142737
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMeshActors, "GetAllMeshActors" }, // 2860334009
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllMetaData, "GetAllMetaData" }, // 3423018788
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetAllObjectsAndValuesForKey, "GetAllObjectsAndValuesForKey" }, // 3891097335
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetCameraActors, "GetCameraActors" }, // 3543436993
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetCustomActors, "GetCustomActors" }, // 178751874
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetExportDuration, "GetExportDuration" }, // 3481609073
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetExporterVersion, "GetExporterVersion" }, // 1306991630
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetHost, "GetHost" }, // 3132336939
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetLightActors, "GetLightActors" }, // 1680846029
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshActors, "GetMeshActors" }, // 3267007995
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshByPathName, "GetMeshByPathName" }, // 4164576150
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetMeshes, "GetMeshes" }, // 2804705825
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataForObject, "GetMetaDataForObject" }, // 3093705405
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataKeysAndValuesForValue, "GetMetaDataKeysAndValuesForValue" }, // 3791933949
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetMetaDataValueForKey, "GetMetaDataValueForKey" }, // 3101453736
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetPostProcess, "GetPostProcess" }, // 1436186019
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductName, "GetProductName" }, // 4018533086
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetProductVersion, "GetProductVersion" }, // 140713682
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetTextures, "GetTextures" }, // 1230127757
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetUsePhysicalSky, "GetUsePhysicalSky" }, // 3482391291
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserID, "GetUserID" }, // 3704556424
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetUserOS, "GetUserOS" }, // 880766368
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_GetVendor, "GetVendor" }, // 2403871942
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCameraActor, "RemoveCameraActor" }, // 380283417
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveCustomActor, "RemoveCustomActor" }, // 2008656343
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLevelVariantSets, "RemoveLevelVariantSets" }, // 3178857433
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveLightActor, "RemoveLightActor" }, // 1899156838
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMaterial, "RemoveMaterial" }, // 177063062
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMesh, "RemoveMesh" }, // 1041481092
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveMeshActor, "RemoveMeshActor" }, // 4008663535
		{ &Z_Construct_UFunction_UDatasmithSceneElementBase_RemoveTexture, "RemoveTexture" }, // 2974713545
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSceneElementBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n */" },
		{ "IncludePath", "ObjectElements/DatasmithUSceneElement.h" },
		{ "ModuleRelativePath", "Public/ObjectElements/DatasmithUSceneElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSceneElementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSceneElementBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSceneElementBase_Statics::ClassParams = {
		&UDatasmithSceneElementBase::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSceneElementBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSceneElementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSceneElementBase()
	{
		if (!Z_Registration_Info_UClass_UDatasmithSceneElementBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithSceneElementBase.OuterSingleton, Z_Construct_UClass_UDatasmithSceneElementBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithSceneElementBase.OuterSingleton;
	}
	template<> DATASMITHIMPORTER_API UClass* StaticClass<UDatasmithSceneElementBase>()
	{
		return UDatasmithSceneElementBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSceneElementBase);
	UDatasmithSceneElementBase::~UDatasmithSceneElementBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithSceneElementBase, UDatasmithSceneElementBase::StaticClass, TEXT("UDatasmithSceneElementBase"), &Z_Registration_Info_UClass_UDatasmithSceneElementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithSceneElementBase), 655109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_1134924872(TEXT("/Script/DatasmithImporter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithImporter_Source_DatasmithImporter_Public_ObjectElements_DatasmithUSceneElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
