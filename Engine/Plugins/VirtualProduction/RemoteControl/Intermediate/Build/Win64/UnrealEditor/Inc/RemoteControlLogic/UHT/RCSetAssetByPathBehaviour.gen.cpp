// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCSetAssetByPathBehaviour() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCSetAssetByPathBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCSetAssetByPathBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UScriptStruct* Z_Construct_UScriptStruct_FRCSetAssetPath();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCSetAssetPath;
class UScriptStruct* FRCSetAssetPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCSetAssetPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCSetAssetPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCSetAssetPath, (UObject*)Z_Construct_UPackage__Script_RemoteControlLogic(), TEXT("RCSetAssetPath"));
	}
	return Z_Registration_Info_UScriptStruct_RCSetAssetPath.OuterSingleton;
}
template<> REMOTECONTROLLOGIC_API UScriptStruct* StaticStruct<FRCSetAssetPath>()
{
	return FRCSetAssetPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCSetAssetPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct to help generate Widgts for the DetailsPanel of the Bahviour */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Struct to help generate Widgts for the DetailsPanel of the Bahviour" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCSetAssetPath>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray_Inner = { "PathArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray_MetaData[] = {
		{ "Comment", "/** An Array of Strings holding the Path of an Asset, seperated in several String. Will concated back together later. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "An Array of Strings holding the Path of an Asset, seperated in several String. Will concated back together later." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray = { "PathArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCSetAssetPath, PathArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewProp_PathArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
		nullptr,
		&NewStructOps,
		"RCSetAssetPath",
		sizeof(FRCSetAssetPath),
		alignof(FRCSetAssetPath),
		Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCSetAssetPath()
	{
		if (!Z_Registration_Info_UScriptStruct_RCSetAssetPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCSetAssetPath.InnerSingleton, Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCSetAssetPath.InnerSingleton;
	}
	void URCSetAssetByPathBehaviour::StaticRegisterNativesURCSetAssetByPathBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCSetAssetByPathBehaviour);
	UClass* Z_Construct_UClass_URCSetAssetByPathBehaviour_NoRegister()
	{
		return URCSetAssetByPathBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyInContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyInContainer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_AssetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInternal_MetaData[];
#endif
		static void NewProp_bInternal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInternal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetEntityId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetEntityId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom behaviour for Set Asset By Path\n */" },
		{ "IncludePath", "Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Custom behaviour for Set Asset By Path" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PropertyInContainer_MetaData[] = {
		{ "Comment", "/** Pointer to property container */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Pointer to property container" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PropertyInContainer = { "PropertyInContainer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCSetAssetByPathBehaviour, PropertyInContainer), Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PropertyInContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PropertyInContainer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_AssetClass_MetaData[] = {
		{ "Comment", "/** Pointer to the current Class the Asset will use to set the Targeted Exposed Object. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Pointer to the current Class the Asset will use to set the Targeted Exposed Object." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_AssetClass = { "AssetClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCSetAssetByPathBehaviour, AssetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_AssetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_AssetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PathStruct_MetaData[] = {
		{ "Comment", "/** Struct holding the Path Information to help load Assets. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Struct holding the Path Information to help load Assets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PathStruct = { "PathStruct", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCSetAssetByPathBehaviour, PathStruct), Z_Construct_UScriptStruct_FRCSetAssetPath, METADATA_PARAMS(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PathStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PathStruct_MetaData)) }; // 3416378145
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal_MetaData[] = {
		{ "Comment", "/** Bool used to help tell if the path given is an internal or external one. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Bool used to help tell if the path given is an internal or external one." },
	};
#endif
	void Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal_SetBit(void* Obj)
	{
		((URCSetAssetByPathBehaviour*)Obj)->bInternal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal = { "bInternal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URCSetAssetByPathBehaviour), &Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal_SetBit, METADATA_PARAMS(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_TargetEntityId_MetaData[] = {
		{ "Comment", "/** Targeted Property Id */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/Path/RCSetAssetByPathBehaviour.h" },
		{ "ToolTip", "Targeted Property Id" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_TargetEntityId = { "TargetEntityId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCSetAssetByPathBehaviour, TargetEntityId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_TargetEntityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_TargetEntityId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PropertyInContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_AssetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_PathStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_bInternal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::NewProp_TargetEntityId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCSetAssetByPathBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::ClassParams = {
		&URCSetAssetByPathBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCSetAssetByPathBehaviour()
	{
		if (!Z_Registration_Info_UClass_URCSetAssetByPathBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCSetAssetByPathBehaviour.OuterSingleton, Z_Construct_UClass_URCSetAssetByPathBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCSetAssetByPathBehaviour.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCSetAssetByPathBehaviour>()
	{
		return URCSetAssetByPathBehaviour::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCSetAssetByPathBehaviour);
	URCSetAssetByPathBehaviour::~URCSetAssetByPathBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics::ScriptStructInfo[] = {
		{ FRCSetAssetPath::StaticStruct, Z_Construct_UScriptStruct_FRCSetAssetPath_Statics::NewStructOps, TEXT("RCSetAssetPath"), &Z_Registration_Info_UScriptStruct_RCSetAssetPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCSetAssetPath), 3416378145U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCSetAssetByPathBehaviour, URCSetAssetByPathBehaviour::StaticClass, TEXT("URCSetAssetByPathBehaviour"), &Z_Registration_Info_UClass_URCSetAssetByPathBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCSetAssetByPathBehaviour), 3023315662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_1813107492(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_Path_RCSetAssetByPathBehaviour_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
