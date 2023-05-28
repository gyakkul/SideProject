// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ContextObjects/UVToolContextObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVToolContextObjects() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolPropertiesAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolPropertiesAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVTool2DViewportAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVTool2DViewportAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAABBTreeStorage();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAABBTreeStorage_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAssetAndChannelAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAssetAndChannelAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolContextObject();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolContextObject_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolEmitChangeAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolLivePreviewAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolLivePreviewAPI_NoRegister();
	UVEDITORTOOLS_API UScriptStruct* Z_Construct_UScriptStruct_FUDIMBlock();
// End Cross Module References
	void UUVToolContextObject::StaticRegisterNativesUUVToolContextObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolContextObject);
	UClass* Z_Construct_UClass_UUVToolContextObject_NoRegister()
	{
		return UUVToolContextObject::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolContextObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolContextObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolContextObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for context objects used in the UV editor.\n */" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "Base class for context objects used in the UV editor." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolContextObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolContextObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolContextObject_Statics::ClassParams = {
		&UUVToolContextObject::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolContextObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolContextObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolContextObject()
	{
		if (!Z_Registration_Info_UClass_UUVToolContextObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolContextObject.OuterSingleton, Z_Construct_UClass_UUVToolContextObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolContextObject.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolContextObject>()
	{
		return UUVToolContextObject::StaticClass();
	}
	UUVToolContextObject::UUVToolContextObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolContextObject);
	UUVToolContextObject::~UUVToolContextObject() {}
	void UUVToolEmitChangeAPI::StaticRegisterNativesUUVToolEmitChangeAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolEmitChangeAPI);
	UClass* Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister()
	{
		return UUVToolEmitChangeAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolEmitChangeAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An API object meant to be stored in a context object store that allows UV editor tools\n * to emit appropriate undo/redo transactions.\n */" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "An API object meant to be stored in a context object store that allows UV editor tools\nto emit appropriate undo/redo transactions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolEmitChangeAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::ClassParams = {
		&UUVToolEmitChangeAPI::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolEmitChangeAPI()
	{
		if (!Z_Registration_Info_UClass_UUVToolEmitChangeAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolEmitChangeAPI.OuterSingleton, Z_Construct_UClass_UUVToolEmitChangeAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolEmitChangeAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolEmitChangeAPI>()
	{
		return UUVToolEmitChangeAPI::StaticClass();
	}
	UUVToolEmitChangeAPI::UUVToolEmitChangeAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolEmitChangeAPI);
	UUVToolEmitChangeAPI::~UUVToolEmitChangeAPI() {}
	void UUVToolLivePreviewAPI::StaticRegisterNativesUUVToolLivePreviewAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolLivePreviewAPI);
	UClass* Z_Construct_UClass_UUVToolLivePreviewAPI_NoRegister()
	{
		return UUVToolLivePreviewAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolLivePreviewAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRouter_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_InputRouter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows tools to interact with the 3d preview viewport, which has a separate\n * world and input router.\n */" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "Allows tools to interact with the 3d preview viewport, which has a separate\nworld and input router." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolLivePreviewAPI, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_InputRouter_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_InputRouter = { "InputRouter", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolLivePreviewAPI, InputRouter), Z_Construct_UClass_UInputRouter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_InputRouter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_InputRouter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::NewProp_InputRouter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolLivePreviewAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::ClassParams = {
		&UUVToolLivePreviewAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolLivePreviewAPI()
	{
		if (!Z_Registration_Info_UClass_UUVToolLivePreviewAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolLivePreviewAPI.OuterSingleton, Z_Construct_UClass_UUVToolLivePreviewAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolLivePreviewAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolLivePreviewAPI>()
	{
		return UUVToolLivePreviewAPI::StaticClass();
	}
	UUVToolLivePreviewAPI::UUVToolLivePreviewAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolLivePreviewAPI);
	UUVToolLivePreviewAPI::~UUVToolLivePreviewAPI() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UDIMBlock;
class UScriptStruct* FUDIMBlock::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UDIMBlock.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UDIMBlock.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUDIMBlock, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("UDIMBlock"));
	}
	return Z_Registration_Info_UScriptStruct_UDIMBlock.OuterSingleton;
}
template<> UVEDITORTOOLS_API UScriptStruct* StaticStruct<FUDIMBlock>()
{
	return FUDIMBlock::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUDIMBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDIM_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UDIM;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDIMBlock_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUDIMBlock>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewProp_UDIM_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewProp_UDIM = { "UDIM", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUDIMBlock, UDIM), METADATA_PARAMS(Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewProp_UDIM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewProp_UDIM_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUDIMBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewProp_UDIM,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUDIMBlock_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		&NewStructOps,
		"UDIMBlock",
		sizeof(FUDIMBlock),
		alignof(FUDIMBlock),
		Z_Construct_UScriptStruct_FUDIMBlock_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMBlock_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUDIMBlock_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUDIMBlock_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUDIMBlock()
	{
		if (!Z_Registration_Info_UScriptStruct_UDIMBlock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UDIMBlock.InnerSingleton, Z_Construct_UScriptStruct_FUDIMBlock_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UDIMBlock.InnerSingleton;
	}
	void UUVTool2DViewportAPI::StaticRegisterNativesUUVTool2DViewportAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVTool2DViewportAPI);
	UClass* Z_Construct_UClass_UUVTool2DViewportAPI_NoRegister()
	{
		return UUVTool2DViewportAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVTool2DViewportAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UDIMBlocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UDIMBlocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UDIMBlocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawGrid_MetaData[];
#endif
		static void NewProp_bDrawGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawRulers_MetaData[];
#endif
		static void NewProp_bDrawRulers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawRulers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVTool2DViewportAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVTool2DViewportAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows tools to interact with the 2d preview viewport \n */" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "Allows tools to interact with the 2d preview viewport" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks_Inner = { "UDIMBlocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUDIMBlock, METADATA_PARAMS(nullptr, 0) }; // 3605972043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks = { "UDIMBlocks", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVTool2DViewportAPI, UDIMBlocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks_MetaData)) }; // 3605972043
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	void Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid_SetBit(void* Obj)
	{
		((UUVTool2DViewportAPI*)Obj)->bDrawGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid = { "bDrawGrid", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVTool2DViewportAPI), &Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	void Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers_SetBit(void* Obj)
	{
		((UUVTool2DViewportAPI*)Obj)->bDrawRulers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers = { "bDrawRulers", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVTool2DViewportAPI), &Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVTool2DViewportAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_UDIMBlocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVTool2DViewportAPI_Statics::NewProp_bDrawRulers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVTool2DViewportAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVTool2DViewportAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVTool2DViewportAPI_Statics::ClassParams = {
		&UUVTool2DViewportAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVTool2DViewportAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVTool2DViewportAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVTool2DViewportAPI()
	{
		if (!Z_Registration_Info_UClass_UUVTool2DViewportAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVTool2DViewportAPI.OuterSingleton, Z_Construct_UClass_UUVTool2DViewportAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVTool2DViewportAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVTool2DViewportAPI>()
	{
		return UUVTool2DViewportAPI::StaticClass();
	}
	UUVTool2DViewportAPI::UUVTool2DViewportAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVTool2DViewportAPI);
	UUVTool2DViewportAPI::~UUVTool2DViewportAPI() {}
	void UUVToolAssetAndChannelAPI::StaticRegisterNativesUUVToolAssetAndChannelAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolAssetAndChannelAPI);
	UClass* Z_Construct_UClass_UUVToolAssetAndChannelAPI_NoRegister()
	{
		return UUVToolAssetAndChannelAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows tools to interact with the assets and their UV layers\n*/" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "Allows tools to interact with the assets and their UV layers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolAssetAndChannelAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::ClassParams = {
		&UUVToolAssetAndChannelAPI::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolAssetAndChannelAPI()
	{
		if (!Z_Registration_Info_UClass_UUVToolAssetAndChannelAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolAssetAndChannelAPI.OuterSingleton, Z_Construct_UClass_UUVToolAssetAndChannelAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolAssetAndChannelAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolAssetAndChannelAPI>()
	{
		return UUVToolAssetAndChannelAPI::StaticClass();
	}
	UUVToolAssetAndChannelAPI::UUVToolAssetAndChannelAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolAssetAndChannelAPI);
	UUVToolAssetAndChannelAPI::~UUVToolAssetAndChannelAPI() {}
	void UUVToolAABBTreeStorage::StaticRegisterNativesUUVToolAABBTreeStorage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolAABBTreeStorage);
	UClass* Z_Construct_UClass_UUVToolAABBTreeStorage_NoRegister()
	{
		return UUVToolAABBTreeStorage::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolAABBTreeStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Stores AABB trees for UV input object unwrap canonical or applied canonical meshes.\n * Binds to the input objects' OnCanonicalModified delegate to automatically update \n * the tree when necessary.\n */" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "Stores AABB trees for UV input object unwrap canonical or applied canonical meshes.\nBinds to the input objects' OnCanonicalModified delegate to automatically update\nthe tree when necessary." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolAABBTreeStorage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::ClassParams = {
		&UUVToolAABBTreeStorage::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolAABBTreeStorage()
	{
		if (!Z_Registration_Info_UClass_UUVToolAABBTreeStorage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolAABBTreeStorage.OuterSingleton, Z_Construct_UClass_UUVToolAABBTreeStorage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolAABBTreeStorage.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolAABBTreeStorage>()
	{
		return UUVToolAABBTreeStorage::StaticClass();
	}
	UUVToolAABBTreeStorage::UUVToolAABBTreeStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolAABBTreeStorage);
	UUVToolAABBTreeStorage::~UUVToolAABBTreeStorage() {}
	void UUVEditorToolPropertiesAPI::StaticRegisterNativesUUVEditorToolPropertiesAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorToolPropertiesAPI);
	UClass* Z_Construct_UClass_UUVEditorToolPropertiesAPI_NoRegister()
	{
		return UUVEditorToolPropertiesAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolDisplayProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolDisplayProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Stores pointers to additional property sets for the active tool, used by the UVEditor Mode and Toolkit to \n* populate other settings menus, such as the Display menu.\n*/" },
		{ "IncludePath", "ContextObjects/UVToolContextObjects.h" },
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
		{ "ToolTip", "Stores pointers to additional property sets for the active tool, used by the UVEditor Mode and Toolkit to\npopulate other settings menus, such as the Display menu." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::NewProp_ToolDisplayProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ContextObjects/UVToolContextObjects.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::NewProp_ToolDisplayProperties = { "ToolDisplayProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorToolPropertiesAPI, ToolDisplayProperties), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::NewProp_ToolDisplayProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::NewProp_ToolDisplayProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::NewProp_ToolDisplayProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorToolPropertiesAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::ClassParams = {
		&UUVEditorToolPropertiesAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorToolPropertiesAPI()
	{
		if (!Z_Registration_Info_UClass_UUVEditorToolPropertiesAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorToolPropertiesAPI.OuterSingleton, Z_Construct_UClass_UUVEditorToolPropertiesAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorToolPropertiesAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorToolPropertiesAPI>()
	{
		return UUVEditorToolPropertiesAPI::StaticClass();
	}
	UUVEditorToolPropertiesAPI::UUVEditorToolPropertiesAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorToolPropertiesAPI);
	UUVEditorToolPropertiesAPI::~UUVEditorToolPropertiesAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics::ScriptStructInfo[] = {
		{ FUDIMBlock::StaticStruct, Z_Construct_UScriptStruct_FUDIMBlock_Statics::NewStructOps, TEXT("UDIMBlock"), &Z_Registration_Info_UScriptStruct_UDIMBlock, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUDIMBlock), 3605972043U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVToolContextObject, UUVToolContextObject::StaticClass, TEXT("UUVToolContextObject"), &Z_Registration_Info_UClass_UUVToolContextObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolContextObject), 3376765676U) },
		{ Z_Construct_UClass_UUVToolEmitChangeAPI, UUVToolEmitChangeAPI::StaticClass, TEXT("UUVToolEmitChangeAPI"), &Z_Registration_Info_UClass_UUVToolEmitChangeAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolEmitChangeAPI), 1634939497U) },
		{ Z_Construct_UClass_UUVToolLivePreviewAPI, UUVToolLivePreviewAPI::StaticClass, TEXT("UUVToolLivePreviewAPI"), &Z_Registration_Info_UClass_UUVToolLivePreviewAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolLivePreviewAPI), 1240287188U) },
		{ Z_Construct_UClass_UUVTool2DViewportAPI, UUVTool2DViewportAPI::StaticClass, TEXT("UUVTool2DViewportAPI"), &Z_Registration_Info_UClass_UUVTool2DViewportAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVTool2DViewportAPI), 3056489265U) },
		{ Z_Construct_UClass_UUVToolAssetAndChannelAPI, UUVToolAssetAndChannelAPI::StaticClass, TEXT("UUVToolAssetAndChannelAPI"), &Z_Registration_Info_UClass_UUVToolAssetAndChannelAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolAssetAndChannelAPI), 2850423261U) },
		{ Z_Construct_UClass_UUVToolAABBTreeStorage, UUVToolAABBTreeStorage::StaticClass, TEXT("UUVToolAABBTreeStorage"), &Z_Registration_Info_UClass_UUVToolAABBTreeStorage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolAABBTreeStorage), 482259750U) },
		{ Z_Construct_UClass_UUVEditorToolPropertiesAPI, UUVEditorToolPropertiesAPI::StaticClass, TEXT("UUVEditorToolPropertiesAPI"), &Z_Registration_Info_UClass_UUVEditorToolPropertiesAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorToolPropertiesAPI), 2072558239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_3621643909(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_ContextObjects_UVToolContextObjects_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
