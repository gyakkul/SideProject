// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewAssetAttachComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair;
class UScriptStruct* FPreviewAttachedObjectPair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PreviewAttachedObjectPair"));
	}
	return Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPreviewAttachedObjectPair>()
{
	return FPreviewAttachedObjectPair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AttachedObject;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Object;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedTo_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AttachedTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Preview items that are attached to the skeleton **/" },
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "Preview items that are attached to the skeleton *" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewAttachedObjectPair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject_MetaData[] = {
		{ "Comment", "/** the object to be attached */" },
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "the object to be attached" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject = { "AttachedObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewAttachedObjectPair, Object_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo_MetaData[] = {
		{ "Comment", "/** The name of the attach point of the Object (for example a bone or socket name) */" },
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "The name of the attach point of the Object (for example a bone or socket name)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo = { "AttachedTo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewAttachedObjectPair, AttachedTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedObject,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_Object,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewProp_AttachedTo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PreviewAttachedObjectPair",
		sizeof(FPreviewAttachedObjectPair),
		alignof(FPreviewAttachedObjectPair),
		Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewAttachedObjectPair()
	{
		if (!Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair.InnerSingleton, Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer;
class UScriptStruct* FPreviewAssetAttachContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PreviewAssetAttachContainer"));
	}
	return Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPreviewAssetAttachContainer>()
{
	return FPreviewAssetAttachContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttachedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttachedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttachedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Component which deals with attaching assets */" },
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
		{ "ToolTip", "Component which deals with attaching assets" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewAssetAttachContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_Inner = { "AttachedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPreviewAttachedObjectPair, METADATA_PARAMS(nullptr, 0) }; // 1291685569
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/PreviewAssetAttachComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects = { "AttachedObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewAssetAttachContainer, AttachedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_MetaData)) }; // 1291685569
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewProp_AttachedObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PreviewAssetAttachContainer",
		sizeof(FPreviewAssetAttachContainer),
		alignof(FPreviewAssetAttachContainer),
		Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer.InnerSingleton, Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_Statics::ScriptStructInfo[] = {
		{ FPreviewAttachedObjectPair::StaticStruct, Z_Construct_UScriptStruct_FPreviewAttachedObjectPair_Statics::NewStructOps, TEXT("PreviewAttachedObjectPair"), &Z_Registration_Info_UScriptStruct_PreviewAttachedObjectPair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreviewAttachedObjectPair), 1291685569U) },
		{ FPreviewAssetAttachContainer::StaticStruct, Z_Construct_UScriptStruct_FPreviewAssetAttachContainer_Statics::NewStructOps, TEXT("PreviewAssetAttachContainer"), &Z_Registration_Info_UScriptStruct_PreviewAssetAttachContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreviewAssetAttachContainer), 485243642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_1353700908(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_PreviewAssetAttachComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
