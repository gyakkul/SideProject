// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwitchNode/VCamK2Node_SwitchConnectionSystemBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamK2Node_SwitchConnectionSystemBase() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_Switch();
	UPackage* Z_Construct_UPackage__Script_VCamBlueprintNodes();
	VCAMBLUEPRINTNODES_API UClass* Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase();
	VCAMBLUEPRINTNODES_API UClass* Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_NoRegister();
// End Cross Module References
	void UVCamK2Node_SwitchConnectionSystemBase::StaticRegisterNativesUVCamK2Node_SwitchConnectionSystemBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamK2Node_SwitchConnectionSystemBase);
	UClass* Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_NoRegister()
	{
		return UVCamK2Node_SwitchConnectionSystemBase::StaticClass();
	}
	struct Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamBlueprintNodes,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base functionality for a switch node for the connections & connection points system.\n * \n * It updates automatically when connections or connections points are added from a target object.\n * Subclasses define how to obtain connections & connection points.\n */" },
		{ "IncludePath", "SwitchNode/VCamK2Node_SwitchConnectionSystemBase.h" },
		{ "ModuleRelativePath", "Private/SwitchNode/VCamK2Node_SwitchConnectionSystemBase.h" },
		{ "ToolTip", "Base functionality for a switch node for the connections & connection points system.\n\nIt updates automatically when connections or connections points are added from a target object.\nSubclasses define how to obtain connections & connection points." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamK2Node_SwitchConnectionSystemBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::ClassParams = {
		&UVCamK2Node_SwitchConnectionSystemBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase()
	{
		if (!Z_Registration_Info_UClass_UVCamK2Node_SwitchConnectionSystemBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamK2Node_SwitchConnectionSystemBase.OuterSingleton, Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamK2Node_SwitchConnectionSystemBase.OuterSingleton;
	}
	template<> VCAMBLUEPRINTNODES_API UClass* StaticClass<UVCamK2Node_SwitchConnectionSystemBase>()
	{
		return UVCamK2Node_SwitchConnectionSystemBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamK2Node_SwitchConnectionSystemBase);
	UVCamK2Node_SwitchConnectionSystemBase::~UVCamK2Node_SwitchConnectionSystemBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchConnectionSystemBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchConnectionSystemBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamK2Node_SwitchConnectionSystemBase, UVCamK2Node_SwitchConnectionSystemBase::StaticClass, TEXT("UVCamK2Node_SwitchConnectionSystemBase"), &Z_Registration_Info_UClass_UVCamK2Node_SwitchConnectionSystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamK2Node_SwitchConnectionSystemBase), 2678702174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchConnectionSystemBase_h_1249776457(TEXT("/Script/VCamBlueprintNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchConnectionSystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamBlueprintNodes_Private_SwitchNode_VCamK2Node_SwitchConnectionSystemBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
