// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manipulator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManipulator() {}
// Cross Module References
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_AManipulator();
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_AManipulator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ComponentVisualizers();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportInteractableInterface_NoRegister();
// End Cross Module References
	void AManipulator::StaticRegisterNativesAManipulator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManipulator);
	UClass* Z_Construct_UClass_AManipulator_NoRegister()
	{
		return AManipulator::StaticClass();
	}
	struct Z_Construct_UClass_AManipulator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssociatedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManipulator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ComponentVisualizers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Manipulator.h" },
		{ "ModuleRelativePath", "Public/Manipulator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent_MetaData[] = {
		{ "Comment", "/** The component to transform when this manipulator was moved. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Manipulator.h" },
		{ "ToolTip", "The component to transform when this manipulator was moved." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent = { "AssociatedComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AManipulator, AssociatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Comment", "/** Visual representation of this manipulator. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Manipulator.h" },
		{ "ToolTip", "Visual representation of this manipulator." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AManipulator, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManipulator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManipulator_Statics::NewProp_AssociatedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManipulator_Statics::NewProp_StaticMeshComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AManipulator_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UViewportInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AManipulator, IViewportInteractableInterface), false },  // 2490261028
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManipulator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManipulator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManipulator_Statics::ClassParams = {
		&AManipulator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AManipulator_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AManipulator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AManipulator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManipulator()
	{
		if (!Z_Registration_Info_UClass_AManipulator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManipulator.OuterSingleton, Z_Construct_UClass_AManipulator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManipulator.OuterSingleton;
	}
	template<> COMPONENTVISUALIZERS_API UClass* StaticClass<AManipulator>()
	{
		return AManipulator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManipulator);
	AManipulator::~AManipulator() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManipulator, AManipulator::StaticClass, TEXT("AManipulator"), &Z_Registration_Info_UClass_AManipulator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManipulator), 1835571391U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_1950639620(TEXT("/Script/ComponentVisualizers"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ComponentVisualizers_Public_Manipulator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
