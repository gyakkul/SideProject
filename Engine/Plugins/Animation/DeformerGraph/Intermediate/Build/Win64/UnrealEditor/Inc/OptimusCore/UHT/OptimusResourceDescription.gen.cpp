// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusResourceDescription.h"
#include "OptimusDataDomain.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusResourceDescription() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataDomain();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusResourceDescription::StaticRegisterNativesUOptimusResourceDescription()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusResourceDescription);
	UClass* Z_Construct_UClass_UOptimusResourceDescription_NoRegister()
	{
		return UOptimusResourceDescription::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusResourceDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentBinding_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ComponentBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusResourceDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceDescription_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OptimusResourceDescription.h" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName = { "ResourceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusResourceDescription, ResourceName), METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "Comment", "/** The the data type of each element of the resource */" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
		{ "ToolTip", "The the data type of each element of the resource" },
		{ "UseInResource", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusResourceDescription, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType_MetaData)) }; // 2733180919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "Comment", "/** The component binding that this resource description is bound to */" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
		{ "ToolTip", "The component binding that this resource description is bound to" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding = { "ComponentBinding", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusResourceDescription, ComponentBinding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain_MetaData[] = {
		{ "Category", "ResourceDescription" },
		{ "Comment", "/** The data domain for this resource. */" },
		{ "EditCondition", "ComponentBinding != nullptr" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
		{ "ToolTip", "The data domain for this resource." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain = { "DataDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusResourceDescription, DataDomain), Z_Construct_UScriptStruct_FOptimusDataDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain_MetaData)) }; // 413683696
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusResourceDescription.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusResourceDescription, DataInterface), Z_Construct_UClass_UOptimusPersistentBufferDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ResourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_ComponentBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusResourceDescription_Statics::NewProp_DataInterface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusResourceDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusResourceDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusResourceDescription_Statics::ClassParams = {
		&UOptimusResourceDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusResourceDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusResourceDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusResourceDescription()
	{
		if (!Z_Registration_Info_UClass_UOptimusResourceDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusResourceDescription.OuterSingleton, Z_Construct_UClass_UOptimusResourceDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusResourceDescription.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusResourceDescription>()
	{
		return UOptimusResourceDescription::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusResourceDescription);
	UOptimusResourceDescription::~UOptimusResourceDescription() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusResourceDescription, UOptimusResourceDescription::StaticClass, TEXT("UOptimusResourceDescription"), &Z_Registration_Info_UClass_UOptimusResourceDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusResourceDescription), 2277276915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_4226897376(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusResourceDescription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
