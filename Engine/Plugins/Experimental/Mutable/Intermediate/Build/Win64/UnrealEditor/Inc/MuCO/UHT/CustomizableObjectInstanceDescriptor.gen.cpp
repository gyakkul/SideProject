// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCO/CustomizableObjectInstanceDescriptor.h"
#include "../Public/MuCO/CustomizableObjectParameterTypeDefinitions.h"
#include "../Public/MuCO/MultilayerProjector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectInstanceDescriptor() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjector();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor;
class UScriptStruct* FCustomizableObjectInstanceDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizableObjectInstanceDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizableObjectInstanceDescriptor>()
{
	return FCustomizableObjectInstanceDescriptor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultilayerProjectors_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MultilayerProjectors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultilayerProjectors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MultilayerProjectors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Set of parameters + state that defines a CustomizableObjectInstance.\n *\n * This object has the same parameters + state interface as UCustomizableObjectInstance.\n * UCustomizableObjectInstance must share the same interface. Any public methods added here should also end up in the Instance. */" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
		{ "ToolTip", "Set of parameters + state that defines a CustomizableObjectInstance.\n\nThis object has the same parameters + state interface as UCustomizableObjectInstance.\nUCustomizableObjectInstance must share the same interface. Any public methods added here should also end up in the Instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectInstanceDescriptor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_CustomizableObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, CustomizableObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_CustomizableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_CustomizableObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters_Inner = { "BoolParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue, METADATA_PARAMS(nullptr, 0) }; // 709592541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters = { "BoolParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, BoolParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters_MetaData)) }; // 709592541
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters_Inner = { "IntParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3556153112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters = { "IntParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, IntParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters_MetaData)) }; // 3556153112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters_Inner = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue, METADATA_PARAMS(nullptr, 0) }; // 248359709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, FloatParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters_MetaData)) }; // 248359709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters_Inner = { "TextureParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1140826405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters = { "TextureParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, TextureParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters_MetaData)) }; // 1140826405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1245826816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, VectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters_MetaData)) }; // 1245826816
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters_Inner = { "ProjectorParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 2841439205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters = { "ProjectorParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, ProjectorParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters_MetaData)) }; // 2841439205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_ValueProp = { "MultilayerProjectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMultilayerProjector, METADATA_PARAMS(nullptr, 0) }; // 3527378634
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_Key_KeyProp = { "MultilayerProjectors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_MetaData[] = {
		{ "Comment", "/** Multilayer Projector helpers. See FMultilayerProjector.*/" },
		{ "ModuleRelativePath", "Public/MuCO/CustomizableObjectInstanceDescriptor.h" },
		{ "ToolTip", "Multilayer Projector helpers. See FMultilayerProjector." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors = { "MultilayerProjectors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectInstanceDescriptor, MultilayerProjectors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_MetaData)) }; // 3527378634
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_CustomizableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_BoolParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_IntParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_FloatParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_TextureParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_VectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_ProjectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewProp_MultilayerProjectors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizableObjectInstanceDescriptor",
		sizeof(FCustomizableObjectInstanceDescriptor),
		alignof(FCustomizableObjectInstanceDescriptor),
		Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceDescriptor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceDescriptor_h_Statics::ScriptStructInfo[] = {
		{ FCustomizableObjectInstanceDescriptor::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor_Statics::NewStructOps, TEXT("CustomizableObjectInstanceDescriptor"), &Z_Registration_Info_UScriptStruct_CustomizableObjectInstanceDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectInstanceDescriptor), 3072689739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceDescriptor_h_630487101(TEXT("/Script/CustomizableObject"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceDescriptor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Public_MuCO_CustomizableObjectInstanceDescriptor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
