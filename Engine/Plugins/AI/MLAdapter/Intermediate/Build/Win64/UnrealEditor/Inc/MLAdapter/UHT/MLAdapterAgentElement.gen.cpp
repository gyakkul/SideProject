// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Agents/MLAdapterAgentElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterAgentElement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgentElement();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterAgentElement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterAgentElement::StaticRegisterNativesUMLAdapterAgentElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterAgentElement);
	UClass* Z_Construct_UClass_UMLAdapterAgentElement_NoRegister()
	{
		return UMLAdapterAgentElement::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterAgentElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementID_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ElementID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nickname;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterAgentElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgentElement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An agent element is any object that can be attached to an agent. Base class for UMLAdapterSensor and UMLAdapterActuator.\n */" },
		{ "IncludePath", "Agents/MLAdapterAgentElement.h" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgentElement.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "An agent element is any object that can be attached to an agent. Base class for UMLAdapterSensor and UMLAdapterActuator." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_ElementID_MetaData[] = {
		{ "Comment", "/** @note This is not a common counter, meaning Sensors and Actuators (for example) track the ID separately. */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgentElement.h" },
		{ "ToolTip", "@note This is not a common counter, meaning Sensors and Actuators (for example) track the ID separately." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_ElementID = { "ElementID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgentElement, ElementID), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_ElementID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_ElementID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_Nickname_MetaData[] = {
		{ "Comment", "/**\n\x09 * User-configured name for this element, mostly for debugging purposes but comes in handy when fetching\n\x09 * observation/action spaces descriptions. Defaults to UnrealEngine instance name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Agents/MLAdapterAgentElement.h" },
		{ "ToolTip", "User-configured name for this element, mostly for debugging purposes but comes in handy when fetching\nobservation/action spaces descriptions. Defaults to UnrealEngine instance name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterAgentElement, Nickname), METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_Nickname_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterAgentElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_ElementID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterAgentElement_Statics::NewProp_Nickname,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterAgentElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterAgentElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterAgentElement_Statics::ClassParams = {
		&UMLAdapterAgentElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterAgentElement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgentElement_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterAgentElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterAgentElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterAgentElement()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterAgentElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterAgentElement.OuterSingleton, Z_Construct_UClass_UMLAdapterAgentElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterAgentElement.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterAgentElement>()
	{
		return UMLAdapterAgentElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterAgentElement);
	UMLAdapterAgentElement::~UMLAdapterAgentElement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgentElement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgentElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterAgentElement, UMLAdapterAgentElement::StaticClass, TEXT("UMLAdapterAgentElement"), &Z_Registration_Info_UClass_UMLAdapterAgentElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterAgentElement), 767027404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgentElement_h_2104256715(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgentElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Agents_MLAdapterAgentElement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
