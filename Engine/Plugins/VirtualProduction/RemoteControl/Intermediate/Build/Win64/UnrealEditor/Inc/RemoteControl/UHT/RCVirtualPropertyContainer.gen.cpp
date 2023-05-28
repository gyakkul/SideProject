// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RCVirtualPropertyContainer.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCVirtualPropertyContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyBase_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	void URCVirtualPropertyContainerBase::StaticRegisterNativesURCVirtualPropertyContainerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCVirtualPropertyContainerBase);
	UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister()
	{
		return URCVirtualPropertyContainerBase::StaticClass();
	}
	struct Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bag_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bag;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VirtualProperties_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualProperties_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_VirtualProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PresetWeakPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Container for more then one Virtual Property\n */" },
		{ "IncludePath", "RCVirtualPropertyContainer.h" },
		{ "ModuleRelativePath", "Public/RCVirtualPropertyContainer.h" },
		{ "ToolTip", "Container for more then one Virtual Property" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_Bag_MetaData[] = {
		{ "Comment", "/** Holds bag of properties. */" },
		{ "ModuleRelativePath", "Public/RCVirtualPropertyContainer.h" },
		{ "ToolTip", "Holds bag of properties." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_Bag = { "Bag", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyContainerBase, Bag), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_Bag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_Bag_MetaData)) }; // 3551882691
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties_ElementProp = { "VirtualProperties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCVirtualPropertyBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties_MetaData[] = {
		{ "Comment", "/** Set of the virtual properties */" },
		{ "ModuleRelativePath", "Public/RCVirtualPropertyContainer.h" },
		{ "ToolTip", "Set of the virtual properties" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties = { "VirtualProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyContainerBase, VirtualProperties), METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_PresetWeakPtr_MetaData[] = {
		{ "Comment", "/** Pointer to Remote Control Preset */" },
		{ "ModuleRelativePath", "Public/RCVirtualPropertyContainer.h" },
		{ "ToolTip", "Pointer to Remote Control Preset" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_PresetWeakPtr = { "PresetWeakPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCVirtualPropertyContainerBase, PresetWeakPtr), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_PresetWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_PresetWeakPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_Bag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_VirtualProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::NewProp_PresetWeakPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCVirtualPropertyContainerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::ClassParams = {
		&URCVirtualPropertyContainerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase()
	{
		if (!Z_Registration_Info_UClass_URCVirtualPropertyContainerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCVirtualPropertyContainerBase.OuterSingleton, Z_Construct_UClass_URCVirtualPropertyContainerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCVirtualPropertyContainerBase.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URCVirtualPropertyContainerBase>()
	{
		return URCVirtualPropertyContainerBase::StaticClass();
	}
	URCVirtualPropertyContainerBase::URCVirtualPropertyContainerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCVirtualPropertyContainerBase);
	URCVirtualPropertyContainerBase::~URCVirtualPropertyContainerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCVirtualPropertyContainerBase, URCVirtualPropertyContainerBase::StaticClass, TEXT("URCVirtualPropertyContainerBase"), &Z_Registration_Info_UClass_URCVirtualPropertyContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCVirtualPropertyContainerBase), 1597728152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_3645137619(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RCVirtualPropertyContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
