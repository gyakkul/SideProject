// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/DragAlignmentMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragAlignmentMechanic() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentInteraction();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentInteraction_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UDragAlignmentMechanic::StaticRegisterNativesUDragAlignmentMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragAlignmentMechanic);
	UClass* Z_Construct_UClass_UDragAlignmentMechanic_NoRegister()
	{
		return UDragAlignmentMechanic::StaticClass();
	}
	struct Z_Construct_UClass_UDragAlignmentMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragAlignmentMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragAlignmentMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Mechanic that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\n * scene geometry in rotation and translation when the Ctrl key is pressed.\n */" },
		{ "IncludePath", "Mechanics/DragAlignmentMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/DragAlignmentMechanic.h" },
		{ "ToolTip", "Mechanic that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\nscene geometry in rotation and translation when the Ctrl key is pressed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragAlignmentMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragAlignmentMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragAlignmentMechanic_Statics::ClassParams = {
		&UDragAlignmentMechanic::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDragAlignmentMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragAlignmentMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragAlignmentMechanic()
	{
		if (!Z_Registration_Info_UClass_UDragAlignmentMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragAlignmentMechanic.OuterSingleton, Z_Construct_UClass_UDragAlignmentMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragAlignmentMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDragAlignmentMechanic>()
	{
		return UDragAlignmentMechanic::StaticClass();
	}
	UDragAlignmentMechanic::UDragAlignmentMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragAlignmentMechanic);
	UDragAlignmentMechanic::~UDragAlignmentMechanic() {}
	void UDragAlignmentInteraction::StaticRegisterNativesUDragAlignmentInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDragAlignmentInteraction);
	UClass* Z_Construct_UClass_UDragAlignmentInteraction_NoRegister()
	{
		return UDragAlignmentInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDragAlignmentInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragAlignmentInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragAlignmentInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Interaction that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\n * scene geometry in rotation and translation. Generally driven by an externally-provided UKeyAsModifierInputBehavior,\n * or alternately can be directly updated by calling ::OnUpdateModifierState()\n */" },
		{ "IncludePath", "Mechanics/DragAlignmentMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/DragAlignmentMechanic.h" },
		{ "ToolTip", "Interaction that can be added to (potentially multiple) UCombinedTransformGizmo object to allow them to snap to\nscene geometry in rotation and translation. Generally driven by an externally-provided UKeyAsModifierInputBehavior,\nor alternately can be directly updated by calling ::OnUpdateModifierState()" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragAlignmentInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragAlignmentInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDragAlignmentInteraction_Statics::ClassParams = {
		&UDragAlignmentInteraction::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDragAlignmentInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDragAlignmentInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragAlignmentInteraction()
	{
		if (!Z_Registration_Info_UClass_UDragAlignmentInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDragAlignmentInteraction.OuterSingleton, Z_Construct_UClass_UDragAlignmentInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDragAlignmentInteraction.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDragAlignmentInteraction>()
	{
		return UDragAlignmentInteraction::StaticClass();
	}
	UDragAlignmentInteraction::UDragAlignmentInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragAlignmentInteraction);
	UDragAlignmentInteraction::~UDragAlignmentInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDragAlignmentMechanic, UDragAlignmentMechanic::StaticClass, TEXT("UDragAlignmentMechanic"), &Z_Registration_Info_UClass_UDragAlignmentMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragAlignmentMechanic), 3773546018U) },
		{ Z_Construct_UClass_UDragAlignmentInteraction, UDragAlignmentInteraction::StaticClass, TEXT("UDragAlignmentInteraction"), &Z_Registration_Info_UClass_UDragAlignmentInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDragAlignmentInteraction), 258714010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_3256599635(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_DragAlignmentMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
