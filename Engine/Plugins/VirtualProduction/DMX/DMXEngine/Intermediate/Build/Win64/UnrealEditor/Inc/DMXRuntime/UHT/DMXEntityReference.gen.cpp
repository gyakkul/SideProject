// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXEntityReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXEntityReference() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityController_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityReferenceConversions();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityReferenceConversions_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityControllerRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityReference();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXEntityReference;
class UScriptStruct* FDMXEntityReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXEntityReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXEntityReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXEntityReference, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXEntityReference"));
	}
	return Z_Registration_Info_UScriptStruct_DMXEntityReference.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXEntityReference>()
{
	return FDMXEntityReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXEntityReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DMXLibrary;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayLibraryPicker_MetaData[];
#endif
		static void NewProp_bDisplayLibraryPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayLibraryPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EntityType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an Entity from a DMX Library.\n * Used to allow objects outside the DMX Library package to store references to UDMXEntity objects\n */" },
		{ "DisplayName", "DMX Entity Reference" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "Represents an Entity from a DMX Library.\nUsed to allow objects outside the DMX Library package to store references to UDMXEntity objects" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXEntityReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_DMXLibrary_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * The parent DMX library of the Entity\n\x09 * Automatically set when calling SetEntity with a valid Entity.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "The parent DMX library of the Entity\nAutomatically set when calling SetEntity with a valid Entity." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_DMXLibrary = { "DMXLibrary", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityReference, DMXLibrary), Z_Construct_UClass_UDMXLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_DMXLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_DMXLibrary_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker_MetaData[] = {
		{ "Comment", "/** Display the DMX Library asset picker. True by default, for Blueprint variables */" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "Display the DMX Library asset picker. True by default, for Blueprint variables" },
	};
#endif
	void Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker_SetBit(void* Obj)
	{
		((FDMXEntityReference*)Obj)->bDisplayLibraryPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker = { "bDisplayLibraryPicker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDMXEntityReference), &Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityType = { "EntityType", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityReference, EntityType), Z_Construct_UClass_UClass, Z_Construct_UClass_UDMXEntity_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityId_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** The entity's unique ID */// Without EditAnywhere here the value is not saved on components in a Level\n" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "The entity's unique ID // Without EditAnywhere here the value is not saved on components in a Level" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityId = { "EntityId", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXEntityReference, EntityId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXEntityReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_DMXLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_bDisplayLibraryPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewProp_EntityId,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXEntityReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXEntityReference",
		sizeof(FDMXEntityReference),
		alignof(FDMXEntityReference),
		Z_Construct_UScriptStruct_FDMXEntityReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityReference()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXEntityReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXEntityReference.InnerSingleton, Z_Construct_UScriptStruct_FDMXEntityReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXEntityReference.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDMXEntityControllerRef>() == std::is_polymorphic<FDMXEntityReference>(), "USTRUCT FDMXEntityControllerRef cannot be polymorphic unless super FDMXEntityReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXEntityControllerRef;
class UScriptStruct* FDMXEntityControllerRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXEntityControllerRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXEntityControllerRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXEntityControllerRef, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXEntityControllerRef"));
	}
	return Z_Registration_Info_UScriptStruct_DMXEntityControllerRef.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXEntityControllerRef>()
{
	return FDMXEntityControllerRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a Controller from a DMX Library.\n * Used to store a reference to a Controller outside the DMX Library\n */" },
		{ "DisplayName", "DMX Controller Ref" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "Represents a Controller from a DMX Library.\nUsed to store a reference to a Controller outside the DMX Library" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXEntityControllerRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FDMXEntityReference,
		&NewStructOps,
		"DMXEntityControllerRef",
		sizeof(FDMXEntityControllerRef),
		alignof(FDMXEntityControllerRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityControllerRef()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXEntityControllerRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXEntityControllerRef.InnerSingleton, Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXEntityControllerRef.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDMXEntityFixtureTypeRef>() == std::is_polymorphic<FDMXEntityReference>(), "USTRUCT FDMXEntityFixtureTypeRef cannot be polymorphic unless super FDMXEntityReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef;
class UScriptStruct* FDMXEntityFixtureTypeRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXEntityFixtureTypeRef"));
	}
	return Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXEntityFixtureTypeRef>()
{
	return FDMXEntityFixtureTypeRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a Fixture Type from a DMX Library.\n * Used to store a reference to a Fixture Type outside the DMX Library\n */" },
		{ "DisplayName", "DMX Fixture Type Ref" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "Represents a Fixture Type from a DMX Library.\nUsed to store a reference to a Fixture Type outside the DMX Library" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXEntityFixtureTypeRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FDMXEntityReference,
		&NewStructOps,
		"DMXEntityFixtureTypeRef",
		sizeof(FDMXEntityFixtureTypeRef),
		alignof(FDMXEntityFixtureTypeRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef.InnerSingleton, Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDMXEntityFixturePatchRef>() == std::is_polymorphic<FDMXEntityReference>(), "USTRUCT FDMXEntityFixturePatchRef cannot be polymorphic unless super FDMXEntityReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef;
class UScriptStruct* FDMXEntityFixturePatchRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXEntityFixturePatchRef"));
	}
	return Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXEntityFixturePatchRef>()
{
	return FDMXEntityFixturePatchRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a Fixture Patch from a DMX Library.\n * Used to store a reference to a Fixture Patch outside the DMX Library\n */" },
		{ "DisplayName", "DMX Fixture Patch Ref" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "Represents a Fixture Patch from a DMX Library.\nUsed to store a reference to a Fixture Patch outside the DMX Library" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXEntityFixturePatchRef>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		Z_Construct_UScriptStruct_FDMXEntityReference,
		&NewStructOps,
		"DMXEntityFixturePatchRef",
		sizeof(FDMXEntityFixturePatchRef),
		alignof(FDMXEntityFixturePatchRef),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef.InnerSingleton, Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXEntityReferenceConversions::execConv_FixturePatchObjToRef)
	{
		P_GET_OBJECT(UDMXEntityFixturePatch,Z_Param_InFixturePatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDMXEntityFixturePatchRef*)Z_Param__Result=UDMXEntityReferenceConversions::Conv_FixturePatchObjToRef(Z_Param_InFixturePatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityReferenceConversions::execConv_FixtureTypeObjToRef)
	{
		P_GET_OBJECT(UDMXEntityFixtureType,Z_Param_InFixtureType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDMXEntityFixtureTypeRef*)Z_Param__Result=UDMXEntityReferenceConversions::Conv_FixtureTypeObjToRef(Z_Param_InFixtureType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityReferenceConversions::execConv_ControllerObjToRef)
	{
		P_GET_OBJECT(UDMXEntityController,Z_Param_InController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FDMXEntityControllerRef*)Z_Param__Result=UDMXEntityReferenceConversions::Conv_ControllerObjToRef(Z_Param_InController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityReferenceConversions::execConv_FixturePatchRefToObj)
	{
		P_GET_STRUCT_REF(FDMXEntityFixturePatchRef,Z_Param_Out_InFixturePatchRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixturePatch**)Z_Param__Result=UDMXEntityReferenceConversions::Conv_FixturePatchRefToObj(Z_Param_Out_InFixturePatchRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityReferenceConversions::execConv_FixtureTypeRefToObj)
	{
		P_GET_STRUCT_REF(FDMXEntityFixtureTypeRef,Z_Param_Out_InFixtureTypeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityFixtureType**)Z_Param__Result=UDMXEntityReferenceConversions::Conv_FixtureTypeRefToObj(Z_Param_Out_InFixtureTypeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXEntityReferenceConversions::execConv_ControllerRefToObj)
	{
		P_GET_STRUCT_REF(FDMXEntityControllerRef,Z_Param_Out_InControllerRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXEntityController**)Z_Param__Result=UDMXEntityReferenceConversions::Conv_ControllerRefToObj(Z_Param_Out_InControllerRef);
		P_NATIVE_END;
	}
	void UDMXEntityReferenceConversions::StaticRegisterNativesUDMXEntityReferenceConversions()
	{
		UClass* Class = UDMXEntityReferenceConversions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_ControllerObjToRef", &UDMXEntityReferenceConversions::execConv_ControllerObjToRef },
			{ "Conv_ControllerRefToObj", &UDMXEntityReferenceConversions::execConv_ControllerRefToObj },
			{ "Conv_FixturePatchObjToRef", &UDMXEntityReferenceConversions::execConv_FixturePatchObjToRef },
			{ "Conv_FixturePatchRefToObj", &UDMXEntityReferenceConversions::execConv_FixturePatchRefToObj },
			{ "Conv_FixtureTypeObjToRef", &UDMXEntityReferenceConversions::execConv_FixtureTypeObjToRef },
			{ "Conv_FixtureTypeRefToObj", &UDMXEntityReferenceConversions::execConv_FixtureTypeRefToObj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics
	{
		struct DMXEntityReferenceConversions_eventConv_ControllerObjToRef_Parms
		{
			UDMXEntityController* InController;
			FDMXEntityControllerRef ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_ControllerObjToRef_Parms, InController), Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_ControllerObjToRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FDMXEntityControllerRef, METADATA_PARAMS(nullptr, 0) }; // 3080844054
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::NewProp_InController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToControllerRef (Controller)" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityReferenceConversions, nullptr, "Conv_ControllerObjToRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::DMXEntityReferenceConversions_eventConv_ControllerObjToRef_Parms), Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics
	{
		struct DMXEntityReferenceConversions_eventConv_ControllerRefToObj_Parms
		{
			FDMXEntityControllerRef InControllerRef;
			UDMXEntityController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InControllerRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InControllerRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_InControllerRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_InControllerRef = { "InControllerRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_ControllerRefToObj_Parms, InControllerRef), Z_Construct_UScriptStruct_FDMXEntityControllerRef, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_InControllerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_InControllerRef_MetaData)) }; // 3080844054
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_ControllerRefToObj_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_InControllerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToController (ControllerReference)" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityReferenceConversions, nullptr, "Conv_ControllerRefToObj", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::DMXEntityReferenceConversions_eventConv_ControllerRefToObj_Parms), Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics
	{
		struct DMXEntityReferenceConversions_eventConv_FixturePatchObjToRef_Parms
		{
			UDMXEntityFixturePatch* InFixturePatch;
			FDMXEntityFixturePatchRef ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixturePatch;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::NewProp_InFixturePatch = { "InFixturePatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixturePatchObjToRef_Parms, InFixturePatch), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixturePatchObjToRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(nullptr, 0) }; // 1707509301
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::NewProp_InFixturePatch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFixturePatchRef (FixturePatch)" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityReferenceConversions, nullptr, "Conv_FixturePatchObjToRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::DMXEntityReferenceConversions_eventConv_FixturePatchObjToRef_Parms), Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics
	{
		struct DMXEntityReferenceConversions_eventConv_FixturePatchRefToObj_Parms
		{
			FDMXEntityFixturePatchRef InFixturePatchRef;
			UDMXEntityFixturePatch* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFixturePatchRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixturePatchRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_InFixturePatchRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_InFixturePatchRef = { "InFixturePatchRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixturePatchRefToObj_Parms, InFixturePatchRef), Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_InFixturePatchRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_InFixturePatchRef_MetaData)) }; // 1707509301
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixturePatchRefToObj_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_InFixturePatchRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFixturePatch (FixturePatchReference)" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityReferenceConversions, nullptr, "Conv_FixturePatchRefToObj", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::DMXEntityReferenceConversions_eventConv_FixturePatchRefToObj_Parms), Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics
	{
		struct DMXEntityReferenceConversions_eventConv_FixtureTypeObjToRef_Parms
		{
			UDMXEntityFixtureType* InFixtureType;
			FDMXEntityFixtureTypeRef ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InFixtureType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::NewProp_InFixtureType = { "InFixtureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixtureTypeObjToRef_Parms, InFixtureType), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixtureTypeObjToRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, METADATA_PARAMS(nullptr, 0) }; // 3909030762
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::NewProp_InFixtureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFixtureTypeRef (FixtureType)" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityReferenceConversions, nullptr, "Conv_FixtureTypeObjToRef", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::DMXEntityReferenceConversions_eventConv_FixtureTypeObjToRef_Parms), Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics
	{
		struct DMXEntityReferenceConversions_eventConv_FixtureTypeRefToObj_Parms
		{
			FDMXEntityFixtureTypeRef InFixtureTypeRef;
			UDMXEntityFixtureType* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InFixtureTypeRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InFixtureTypeRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_InFixtureTypeRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_InFixtureTypeRef = { "InFixtureTypeRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixtureTypeRefToObj_Parms, InFixtureTypeRef), Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_InFixtureTypeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_InFixtureTypeRef_MetaData)) }; // 3909030762
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXEntityReferenceConversions_eventConv_FixtureTypeRefToObj_Parms, ReturnValue), Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_InFixtureTypeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToFixtureType (FixtureTypeReference)" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXEntityReferenceConversions, nullptr, "Conv_FixtureTypeRefToObj", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::DMXEntityReferenceConversions_eventConv_FixtureTypeRefToObj_Parms), Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXEntityReferenceConversions);
	UClass* Z_Construct_UClass_UDMXEntityReferenceConversions_NoRegister()
	{
		return UDMXEntityReferenceConversions::StaticClass();
	}
	struct Z_Construct_UClass_UDMXEntityReferenceConversions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerObjToRef, "Conv_ControllerObjToRef" }, // 3225386055
		{ &Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_ControllerRefToObj, "Conv_ControllerRefToObj" }, // 4020916979
		{ &Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchObjToRef, "Conv_FixturePatchObjToRef" }, // 4118827418
		{ &Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixturePatchRefToObj, "Conv_FixturePatchRefToObj" }, // 3529550086
		{ &Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeObjToRef, "Conv_FixtureTypeObjToRef" }, // 4017010629
		{ &Z_Construct_UFunction_UDMXEntityReferenceConversions_Conv_FixtureTypeRefToObj, "Conv_FixtureTypeRefToObj" }, // 2141116636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Comment", "/** Extend type conversions to handle Entity Reference structs */" },
		{ "IncludePath", "Library/DMXEntityReference.h" },
		{ "ModuleRelativePath", "Public/Library/DMXEntityReference.h" },
		{ "ToolTip", "Extend type conversions to handle Entity Reference structs" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXEntityReferenceConversions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::ClassParams = {
		&UDMXEntityReferenceConversions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXEntityReferenceConversions()
	{
		if (!Z_Registration_Info_UClass_UDMXEntityReferenceConversions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXEntityReferenceConversions.OuterSingleton, Z_Construct_UClass_UDMXEntityReferenceConversions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXEntityReferenceConversions.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXEntityReferenceConversions>()
	{
		return UDMXEntityReferenceConversions::StaticClass();
	}
	UDMXEntityReferenceConversions::UDMXEntityReferenceConversions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXEntityReferenceConversions);
	UDMXEntityReferenceConversions::~UDMXEntityReferenceConversions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics::ScriptStructInfo[] = {
		{ FDMXEntityReference::StaticStruct, Z_Construct_UScriptStruct_FDMXEntityReference_Statics::NewStructOps, TEXT("DMXEntityReference"), &Z_Registration_Info_UScriptStruct_DMXEntityReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXEntityReference), 775753833U) },
		{ FDMXEntityControllerRef::StaticStruct, Z_Construct_UScriptStruct_FDMXEntityControllerRef_Statics::NewStructOps, TEXT("DMXEntityControllerRef"), &Z_Registration_Info_UScriptStruct_DMXEntityControllerRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXEntityControllerRef), 3080844054U) },
		{ FDMXEntityFixtureTypeRef::StaticStruct, Z_Construct_UScriptStruct_FDMXEntityFixtureTypeRef_Statics::NewStructOps, TEXT("DMXEntityFixtureTypeRef"), &Z_Registration_Info_UScriptStruct_DMXEntityFixtureTypeRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXEntityFixtureTypeRef), 3909030762U) },
		{ FDMXEntityFixturePatchRef::StaticStruct, Z_Construct_UScriptStruct_FDMXEntityFixturePatchRef_Statics::NewStructOps, TEXT("DMXEntityFixturePatchRef"), &Z_Registration_Info_UScriptStruct_DMXEntityFixturePatchRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXEntityFixturePatchRef), 1707509301U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXEntityReferenceConversions, UDMXEntityReferenceConversions::StaticClass, TEXT("UDMXEntityReferenceConversions"), &Z_Registration_Info_UClass_UDMXEntityReferenceConversions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXEntityReferenceConversions), 1909344397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_2199682701(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXEntityReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
