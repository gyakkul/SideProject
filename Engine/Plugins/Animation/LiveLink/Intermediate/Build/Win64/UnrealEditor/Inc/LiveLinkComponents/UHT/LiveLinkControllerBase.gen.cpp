// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkControllerBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkControllerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkComponents();
// End Cross Module References
	void ULiveLinkControllerBase::StaticRegisterNativesULiveLinkControllerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkControllerBase);
	UClass* Z_Construct_UClass_ULiveLinkControllerBase_NoRegister()
	{
		return ULiveLinkControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentPicker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkControllerBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "/**\n */" },
		{ "IncludePath", "LiveLinkControllerBase.h" },
		{ "ModuleRelativePath", "Public/LiveLinkControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.ActorComponent" },
		{ "Category", "ComponentToControl" },
		{ "Comment", "/**\n\x09 * A component reference (customized) that allows the user to specify a component that this controller should control\n\x09 */" },
		{ "DisallowedClasses", "/Script/LiveLinkComponents.LiveLinkComponentController" },
		{ "ModuleRelativePath", "Public/LiveLinkControllerBase.h" },
		{ "ToolTip", "A component reference (customized) that allows the user to specify a component that this controller should control" },
		{ "UseComponentPicker", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker = { "ComponentPicker", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkControllerBase, ComponentPicker), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker_MetaData)) }; // 1758507179
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkControllerBase_Statics::NewProp_ComponentPicker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkControllerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkControllerBase_Statics::ClassParams = {
		&ULiveLinkControllerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkControllerBase()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton, Z_Construct_UClass_ULiveLinkControllerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkControllerBase.OuterSingleton;
	}
	template<> LIVELINKCOMPONENTS_API UClass* StaticClass<ULiveLinkControllerBase>()
	{
		return ULiveLinkControllerBase::StaticClass();
	}
	ULiveLinkControllerBase::ULiveLinkControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkControllerBase);
	ULiveLinkControllerBase::~ULiveLinkControllerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkControllerBase, ULiveLinkControllerBase::StaticClass, TEXT("ULiveLinkControllerBase"), &Z_Registration_Info_UClass_ULiveLinkControllerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkControllerBase), 35283331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_1531769258(TEXT("/Script/LiveLinkComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkComponents_Public_LiveLinkControllerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
