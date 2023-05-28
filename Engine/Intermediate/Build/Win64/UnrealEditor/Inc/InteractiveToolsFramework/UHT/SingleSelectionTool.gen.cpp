// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SingleSelectionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleSelectionTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleSelectionTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UToolTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void USingleSelectionTool::StaticRegisterNativesUSingleSelectionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleSelectionTool);
	UClass* Z_Construct_UClass_USingleSelectionTool_NoRegister()
	{
		return USingleSelectionTool::StaticClass();
	}
	struct Z_Construct_UClass_USingleSelectionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleSelectionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SingleSelectionTool.h" },
		{ "ModuleRelativePath", "Public/SingleSelectionTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleSelectionTool_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/SingleSelectionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USingleSelectionTool_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleSelectionTool, Target), Z_Construct_UClass_UToolTarget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleSelectionTool_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionTool_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleSelectionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleSelectionTool_Statics::NewProp_Target,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USingleSelectionTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolCameraFocusAPI_NoRegister, (int32)VTABLE_OFFSET(USingleSelectionTool, IInteractiveToolCameraFocusAPI), false },  // 3998126931
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleSelectionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleSelectionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleSelectionTool_Statics::ClassParams = {
		&USingleSelectionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleSelectionTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USingleSelectionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleSelectionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleSelectionTool()
	{
		if (!Z_Registration_Info_UClass_USingleSelectionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleSelectionTool.OuterSingleton, Z_Construct_UClass_USingleSelectionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleSelectionTool.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<USingleSelectionTool>()
	{
		return USingleSelectionTool::StaticClass();
	}
	USingleSelectionTool::USingleSelectionTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleSelectionTool);
	USingleSelectionTool::~USingleSelectionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleSelectionTool, USingleSelectionTool::StaticClass, TEXT("USingleSelectionTool"), &Z_Registration_Info_UClass_USingleSelectionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleSelectionTool), 3986944099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_4013486578(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_SingleSelectionTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
