// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_DataInterface.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_DataInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_DataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_DataInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_DataInterface::StaticRegisterNativesUOptimusNode_DataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_DataInterface);
	UClass* Z_Construct_UClass_UOptimusNode_DataInterface_NoRegister()
	{
		return UOptimusNode_DataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_DataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DataInterfaceClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterfaceData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_DataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_DataInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nodes/OptimusNode_DataInterface.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_DataInterface.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass_MetaData[] = {
		{ "Comment", "// The class of the data interface that this node represents. We call the CDO\n// to interrogate display names and pin definitions. This may change in the future once\n// data interfaces get tied closer to the objects they proxy.\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_DataInterface.h" },
		{ "ToolTip", "The class of the data interface that this node represents. We call the CDO\nto interrogate display names and pin definitions. This may change in the future once\ndata interfaces get tied closer to the objects they proxy." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass = { "DataInterfaceClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_DataInterface, DataInterfaceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData_MetaData[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "// Editable copy of the DataInterface for storing properties that will customize behavior on on the data interface.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_DataInterface.h" },
		{ "ToolTip", "Editable copy of the DataInterface for storing properties that will customize behavior on on the data interface." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData = { "DataInterfaceData", nullptr, (EPropertyFlags)0x00260800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_DataInterface, DataInterfaceData), Z_Construct_UClass_UOptimusComputeDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_DataInterface_Statics::NewProp_DataInterfaceData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusDataInterfaceProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_DataInterface, IOptimusDataInterfaceProvider), false },  // 3536699185
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_DataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_DataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_DataInterface_Statics::ClassParams = {
		&UOptimusNode_DataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x018000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_DataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_DataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_DataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_DataInterface.OuterSingleton, Z_Construct_UClass_UOptimusNode_DataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_DataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_DataInterface>()
	{
		return UOptimusNode_DataInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_DataInterface);
	UOptimusNode_DataInterface::~UOptimusNode_DataInterface() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode_DataInterface)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_DataInterface, UOptimusNode_DataInterface::StaticClass, TEXT("UOptimusNode_DataInterface"), &Z_Registration_Info_UClass_UOptimusNode_DataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_DataInterface), 3240428802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_2252317528(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_DataInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
