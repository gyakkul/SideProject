// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_CustomProperty.h"
#include "K2Node.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_CustomProperty() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UClassVariableCreator_NoRegister();
	BLUEPRINTGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FOptionalPinFromProperty();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_CustomProperty::StaticRegisterNativesUAnimGraphNode_CustomProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_CustomProperty);
	UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty_NoRegister()
	{
		return UAnimGraphNode_CustomProperty::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KnownExposableProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KnownExposableProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KnownExposableProperties;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExposedPropertyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedPropertyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExposedPropertyNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPinProperties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomPinProperties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomPinProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_CustomProperty.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CustomProperty.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties_Inner = { "KnownExposableProperties", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties_MetaData[] = {
		{ "Comment", "/** List of property names we know to exist on the target class, so we can detect when\n\x09 *  Properties are added or removed on reconstruction\n\x09 * Deprecated, use CustomPinProperties instead.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CustomProperty.h" },
		{ "ToolTip", "List of property names we know to exist on the target class, so we can detect when\nProperties are added or removed on reconstruction\nDeprecated, use CustomPinProperties instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties = { "KnownExposableProperties", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CustomProperty, KnownExposableProperties_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames_Inner = { "ExposedPropertyNames", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames_MetaData[] = {
		{ "Comment", "/** Names of properties the user has chosen to expose. Deprecated, use CustomPinProperties instead. */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CustomProperty.h" },
		{ "ToolTip", "Names of properties the user has chosen to expose. Deprecated, use CustomPinProperties instead." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames = { "ExposedPropertyNames", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CustomProperty, ExposedPropertyNames_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties_Inner = { "CustomPinProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptionalPinFromProperty, METADATA_PARAMS(nullptr, 0) }; // 3358763809
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties_MetaData[] = {
		{ "Comment", "/** Exposed pin data for custom properties */" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_CustomProperty.h" },
		{ "ToolTip", "Exposed pin data for custom properties" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties = { "CustomPinProperties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_CustomProperty, CustomPinProperties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties_MetaData)) }; // 3358763809
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_KnownExposableProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_ExposedPropertyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::NewProp_CustomPinProperties,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UClassVariableCreator_NoRegister, (int32)VTABLE_OFFSET(UAnimGraphNode_CustomProperty, IClassVariableCreator), false },  // 2394176608
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_CustomProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::ClassParams = {
		&UAnimGraphNode_CustomProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_CustomProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_CustomProperty.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_CustomProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_CustomProperty.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_CustomProperty>()
	{
		return UAnimGraphNode_CustomProperty::StaticClass();
	}
	UAnimGraphNode_CustomProperty::UAnimGraphNode_CustomProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_CustomProperty);
	UAnimGraphNode_CustomProperty::~UAnimGraphNode_CustomProperty() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_CustomProperty)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_CustomProperty, UAnimGraphNode_CustomProperty::StaticClass, TEXT("UAnimGraphNode_CustomProperty"), &Z_Registration_Info_UClass_UAnimGraphNode_CustomProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_CustomProperty), 2579467659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_608718800(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_CustomProperty_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
