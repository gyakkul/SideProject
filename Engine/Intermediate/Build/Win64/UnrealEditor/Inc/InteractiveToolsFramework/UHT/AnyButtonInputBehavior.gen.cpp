// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BaseBehaviors/AnyButtonInputBehavior.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnyButtonInputBehavior() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UAnyButtonInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UAnyButtonInputBehavior::StaticRegisterNativesUAnyButtonInputBehavior()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnyButtonInputBehavior);
	UClass* Z_Construct_UClass_UAnyButtonInputBehavior_NoRegister()
	{
		return UAnyButtonInputBehavior::StaticClass();
	}
	struct Z_Construct_UClass_UAnyButtonInputBehavior_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnyButtonInputBehavior_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInputBehavior,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnyButtonInputBehavior_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAnyButtonInputBehavior is a base behavior that provides a generic\n * interface to a TargetButton on a physical Input Device. You can subclass\n * UAnyButtonInputBehavior to write InputBehaviors that can work independent\n * of a particular device type or button, by using the UAnyButtonInputBehavior functions below.\n * \n * The target device button is selected using the .ButtonNumber property, or you can\n * override the relevant GetXButtonState() function if you need more control.\n * \n *  @todo spatial controllers\n *  @todo support tablet fingers\n *  @todo support gamepad?\n */" },
		{ "IncludePath", "BaseBehaviors/AnyButtonInputBehavior.h" },
		{ "ModuleRelativePath", "Public/BaseBehaviors/AnyButtonInputBehavior.h" },
		{ "ToolTip", "UAnyButtonInputBehavior is a base behavior that provides a generic\ninterface to a TargetButton on a physical Input Device. You can subclass\nUAnyButtonInputBehavior to write InputBehaviors that can work independent\nof a particular device type or button, by using the UAnyButtonInputBehavior functions below.\n\nThe target device button is selected using the .ButtonNumber property, or you can\noverride the relevant GetXButtonState() function if you need more control.\n\n @todo spatial controllers\n @todo support tablet fingers\n @todo support gamepad?" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnyButtonInputBehavior_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnyButtonInputBehavior>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnyButtonInputBehavior_Statics::ClassParams = {
		&UAnyButtonInputBehavior::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnyButtonInputBehavior_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnyButtonInputBehavior_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnyButtonInputBehavior()
	{
		if (!Z_Registration_Info_UClass_UAnyButtonInputBehavior.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnyButtonInputBehavior.OuterSingleton, Z_Construct_UClass_UAnyButtonInputBehavior_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnyButtonInputBehavior.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UAnyButtonInputBehavior>()
	{
		return UAnyButtonInputBehavior::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnyButtonInputBehavior);
	UAnyButtonInputBehavior::~UAnyButtonInputBehavior() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_AnyButtonInputBehavior_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_AnyButtonInputBehavior_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnyButtonInputBehavior, UAnyButtonInputBehavior::StaticClass, TEXT("UAnyButtonInputBehavior"), &Z_Registration_Info_UClass_UAnyButtonInputBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnyButtonInputBehavior), 3057408167U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_AnyButtonInputBehavior_h_1327424243(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_AnyButtonInputBehavior_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_BaseBehaviors_AnyButtonInputBehavior_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
