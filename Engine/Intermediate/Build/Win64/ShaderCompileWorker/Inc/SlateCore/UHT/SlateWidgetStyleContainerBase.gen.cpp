// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateWidgetStyleContainerBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister();
	SLATECORE_API UClass* Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	void USlateWidgetStyleContainerBase::StaticRegisterNativesUSlateWidgetStyleContainerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateWidgetStyleContainerBase);
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase_NoRegister()
	{
		return USlateWidgetStyleContainerBase::StaticClass();
	}
	struct Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Just a wrapper for the struct with real data in it.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Styling/SlateWidgetStyleContainerBase.h" },
		{ "ModuleRelativePath", "Public/Styling/SlateWidgetStyleContainerBase.h" },
		{ "ToolTip", "Just a wrapper for the struct with real data in it." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USlateWidgetStyleContainerInterface_NoRegister, (int32)VTABLE_OFFSET(USlateWidgetStyleContainerBase, ISlateWidgetStyleContainerInterface), false },  // 465608376
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateWidgetStyleContainerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::ClassParams = {
		&USlateWidgetStyleContainerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateWidgetStyleContainerBase()
	{
		if (!Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.OuterSingleton, Z_Construct_UClass_USlateWidgetStyleContainerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateWidgetStyleContainerBase.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<USlateWidgetStyleContainerBase>()
	{
		return USlateWidgetStyleContainerBase::StaticClass();
	}
	USlateWidgetStyleContainerBase::USlateWidgetStyleContainerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateWidgetStyleContainerBase);
	USlateWidgetStyleContainerBase::~USlateWidgetStyleContainerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateWidgetStyleContainerBase, USlateWidgetStyleContainerBase::StaticClass, TEXT("USlateWidgetStyleContainerBase"), &Z_Registration_Info_UClass_USlateWidgetStyleContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateWidgetStyleContainerBase), 4265606718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_1967412460(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_SlateWidgetStyleContainerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
