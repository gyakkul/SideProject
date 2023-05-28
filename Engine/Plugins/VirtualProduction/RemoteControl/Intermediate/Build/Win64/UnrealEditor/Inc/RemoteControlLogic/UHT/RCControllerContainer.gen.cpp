// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Controller/RCControllerContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCControllerContainer() {}
// Cross Module References
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCActionContainer_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCControllerContainer();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCControllerContainer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	void URCControllerContainer::StaticRegisterNativesURCControllerContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCControllerContainer);
	UClass* Z_Construct_UClass_URCControllerContainer_NoRegister()
	{
		return URCControllerContainer::StaticClass();
	}
	struct Z_Construct_UClass_URCControllerContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorSliderDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorSliderDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorLinearDeltaSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VectorLinearDeltaSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatorSliderDelta_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatorSliderDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotatorLinearDeltaSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotatorLinearDeltaSensitivity;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SharedActionContainers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedActionContainers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_SharedActionContainers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCControllerContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCVirtualPropertyContainerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCControllerContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Controller Container which holds all virtual controller properties \n */" },
		{ "IncludePath", "Controller/RCControllerContainer.h" },
		{ "ModuleRelativePath", "Public/Controller/RCControllerContainer.h" },
		{ "ToolTip", "Controller Container which holds all virtual controller properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorSliderDelta_MetaData[] = {
		{ "Comment", "/** Slider exponent for Vector Controller sliders. Determines how fast the value change travels while scrubbing the X/Y/Z sliders in UI\n\x09* The default value approximates the behaviour of SceneComponent Location Vectors (see SNumericVectorInputBox in ComponentTransformDetails.cpp) */" },
		{ "ModuleRelativePath", "Public/Controller/RCControllerContainer.h" },
		{ "ToolTip", "Slider exponent for Vector Controller sliders. Determines how fast the value change travels while scrubbing the X/Y/Z sliders in UI\nThe default value approximates the behaviour of SceneComponent Location Vectors (see SNumericVectorInputBox in ComponentTransformDetails.cpp)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorSliderDelta = { "VectorSliderDelta", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCControllerContainer, VectorSliderDelta), METADATA_PARAMS(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorSliderDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorSliderDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorLinearDeltaSensitivity_MetaData[] = {
		{ "Comment", "/** Linear Delta Sensitivity for Vector Controller sliders. Multiplied inversely with mouse movement to determine actual slider change */" },
		{ "ModuleRelativePath", "Public/Controller/RCControllerContainer.h" },
		{ "ToolTip", "Linear Delta Sensitivity for Vector Controller sliders. Multiplied inversely with mouse movement to determine actual slider change" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorLinearDeltaSensitivity = { "VectorLinearDeltaSensitivity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCControllerContainer, VectorLinearDeltaSensitivity), METADATA_PARAMS(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorLinearDeltaSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorLinearDeltaSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorSliderDelta_MetaData[] = {
		{ "Comment", "/** Slider exponent for Rotator Controller sliders.*/" },
		{ "ModuleRelativePath", "Public/Controller/RCControllerContainer.h" },
		{ "ToolTip", "Slider exponent for Rotator Controller sliders." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorSliderDelta = { "RotatorSliderDelta", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCControllerContainer, RotatorSliderDelta), METADATA_PARAMS(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorSliderDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorSliderDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorLinearDeltaSensitivity_MetaData[] = {
		{ "Comment", "/** Linear Delta Sensitivity for Rotator Controller sliders*/" },
		{ "ModuleRelativePath", "Public/Controller/RCControllerContainer.h" },
		{ "ToolTip", "Linear Delta Sensitivity for Rotator Controller sliders" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorLinearDeltaSensitivity = { "RotatorLinearDeltaSensitivity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCControllerContainer, RotatorLinearDeltaSensitivity), METADATA_PARAMS(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorLinearDeltaSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorLinearDeltaSensitivity_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers_ElementProp = { "SharedActionContainers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCActionContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers_MetaData[] = {
		{ "Comment", "/** Controller Container could holds the set of shared Action containers which is holds some action but independent from the behaviour */" },
		{ "ModuleRelativePath", "Public/Controller/RCControllerContainer.h" },
		{ "ToolTip", "Controller Container could holds the set of shared Action containers which is holds some action but independent from the behaviour" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers = { "SharedActionContainers", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCControllerContainer, SharedActionContainers), METADATA_PARAMS(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCControllerContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorSliderDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCControllerContainer_Statics::NewProp_VectorLinearDeltaSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorSliderDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCControllerContainer_Statics::NewProp_RotatorLinearDeltaSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCControllerContainer_Statics::NewProp_SharedActionContainers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCControllerContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCControllerContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCControllerContainer_Statics::ClassParams = {
		&URCControllerContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCControllerContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCControllerContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCControllerContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCControllerContainer()
	{
		if (!Z_Registration_Info_UClass_URCControllerContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCControllerContainer.OuterSingleton, Z_Construct_UClass_URCControllerContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCControllerContainer.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCControllerContainer>()
	{
		return URCControllerContainer::StaticClass();
	}
	URCControllerContainer::URCControllerContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCControllerContainer);
	URCControllerContainer::~URCControllerContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCControllerContainer, URCControllerContainer::StaticClass, TEXT("URCControllerContainer"), &Z_Registration_Info_UClass_URCControllerContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCControllerContainer), 596294665U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_2805181484(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Controller_RCControllerContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
