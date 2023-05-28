// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mechanics/RectangleMarqueeMechanic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectangleMarqueeMechanic() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UClickDragInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractionMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeInteraction();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeInteraction_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void URectangleMarqueeMechanic::StaticRegisterNativesURectangleMarqueeMechanic()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleMarqueeMechanic);
	UClass* Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister()
	{
		return URectangleMarqueeMechanic::StaticClass();
	}
	struct Z_Construct_UClass_URectangleMarqueeMechanic_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalClickDragBehavior_MetaData[];
#endif
		static void NewProp_bUseExternalClickDragBehavior_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalClickDragBehavior;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseExternalUpdateCameraState_MetaData[];
#endif
		static void NewProp_bUseExternalUpdateCameraState_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseExternalUpdateCameraState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDragRectangleChangedDeferredThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_OnDragRectangleChangedDeferredThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClickDragBehavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClickDragBehavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectangleMarqueeMechanic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionMechanic,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeMechanic_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Mechanic for a rectangle \"marquee\" selection. It creates and maintains the 2D rectangle associated with a mouse drag. \n * It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n *\n * When using this mechanic, you should call Render() on it in the tool's Render() call so that it can cache\n * necessary camera state, and DrawHUD() in the tool's DrawHUD() call so that it can draw the box.\n *\n * Attach to the mechanic's delegates and use the passed rectangle to test against your geometry. \n */" },
		{ "IncludePath", "Mechanics/RectangleMarqueeMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "* Mechanic for a rectangle \"marquee\" selection. It creates and maintains the 2D rectangle associated with a mouse drag.\n* It does not test against any scene geometry, nor does it maintain any sort of list of selected objects.\n*\n* When using this mechanic, you should call Render() on it in the tool's Render() call so that it can cache\n* necessary camera state, and DrawHUD() in the tool's DrawHUD() call so that it can draw the box.\n*\n* Attach to the mechanic's delegates and use the passed rectangle to test against your geometry." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_MetaData[] = {
		{ "Comment", "/** \n\x09 * If true, then the URectangleMarqueeMechanic will not create an internal UClickDragInputBehavior in ::Setup(), allowing\n\x09 * the client to control the marquee with an external InputBehavior that uses the marquee mechanic as it's IClickDragBehaviorTarget.\n\x09 * For instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior.\n\x09 * Must be configured before calling ::Setup()\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "If true, then the URectangleMarqueeMechanic will not create an internal UClickDragInputBehavior in ::Setup(), allowing\nthe client to control the marquee with an external InputBehavior that uses the marquee mechanic as it's IClickDragBehaviorTarget.\nFor instance, this allows the mechanic to be hooked in as the drag component of a USingleClickOrDragInputBehavior.\nMust be configured before calling ::Setup()" },
	};
#endif
	void Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_SetBit(void* Obj)
	{
		((URectangleMarqueeMechanic*)Obj)->bUseExternalClickDragBehavior = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior = { "bUseExternalClickDragBehavior", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URectangleMarqueeMechanic), &Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_SetBit, METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_MetaData[] = {
		{ "Comment", "/**\n\x09 * If true, then the URectangleMarqueeMechanic will not query the tool manager for the current camera view state,\n\x09 but instead call the custom provided function, UpdateCameraStateFunc, to recieve the correct camera state for the \n\x09 CameraRectangle.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "If true, then the URectangleMarqueeMechanic will not query the tool manager for the current camera view state,\n        but instead call the custom provided function, UpdateCameraStateFunc, to recieve the correct camera state for the\n        CameraRectangle." },
	};
#endif
	void Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_SetBit(void* Obj)
	{
		((URectangleMarqueeMechanic*)Obj)->bUseExternalUpdateCameraState = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState = { "bUseExternalUpdateCameraState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URectangleMarqueeMechanic), &Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_SetBit, METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold_MetaData[] = {
		{ "Comment", "/**\n\x09 * If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls\n\x09 * to this function (in the current drag sequence) will be deferred until the mouse button is released. This will\n\x09 * improve the responsiveness of the UI. The default value is set so this optimization is never triggered, if you\n\x09 * want it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "If the computation time for a single call to OnDragRectangleChanged ever exceeds this threshold then future calls\nto this function (in the current drag sequence) will be deferred until the mouse button is released. This will\nimprove the responsiveness of the UI. The default value is set so this optimization is never triggered, if you\nwant it you can set this to a small value e.g., 1./60 (time elapsed by 1 frame at 60 fps)" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold = { "OnDragRectangleChangedDeferredThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleMarqueeMechanic, OnDragRectangleChangedDeferredThreshold), METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior = { "ClickDragBehavior", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleMarqueeMechanic, ClickDragBehavior), Z_Construct_UClass_UClickDragInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalClickDragBehavior,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_bUseExternalUpdateCameraState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_OnDragRectangleChangedDeferredThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleMarqueeMechanic_Statics::NewProp_ClickDragBehavior,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleMarqueeMechanic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleMarqueeMechanic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleMarqueeMechanic_Statics::ClassParams = {
		&URectangleMarqueeMechanic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeMechanic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleMarqueeMechanic()
	{
		if (!Z_Registration_Info_UClass_URectangleMarqueeMechanic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleMarqueeMechanic.OuterSingleton, Z_Construct_UClass_URectangleMarqueeMechanic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleMarqueeMechanic.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<URectangleMarqueeMechanic>()
	{
		return URectangleMarqueeMechanic::StaticClass();
	}
	URectangleMarqueeMechanic::URectangleMarqueeMechanic() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleMarqueeMechanic);
	URectangleMarqueeMechanic::~URectangleMarqueeMechanic() {}
	void URectangleMarqueeInteraction::StaticRegisterNativesURectangleMarqueeInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleMarqueeInteraction);
	UClass* Z_Construct_UClass_URectangleMarqueeInteraction_NoRegister()
	{
		return URectangleMarqueeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_URectangleMarqueeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectangleMarqueeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleMarqueeInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * URectangleMarqueeInteraction is a simplified version of URectangleMarqueeMechanic that is not a UInteractionMechanic,\n * which requires a base Tool/ToolManager. This variant does not create it's own InputBehavior, but is still a \n * ClickDragBehaviorTarget. \n * \n * DrawHUD() must be called by the owning code. \n */" },
		{ "IncludePath", "Mechanics/RectangleMarqueeMechanic.h" },
		{ "ModuleRelativePath", "Public/Mechanics/RectangleMarqueeMechanic.h" },
		{ "ToolTip", "* URectangleMarqueeInteraction is a simplified version of URectangleMarqueeMechanic that is not a UInteractionMechanic,\n* which requires a base Tool/ToolManager. This variant does not create it's own InputBehavior, but is still a\n* ClickDragBehaviorTarget.\n*\n* DrawHUD() must be called by the owning code." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleMarqueeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleMarqueeInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleMarqueeInteraction_Statics::ClassParams = {
		&URectangleMarqueeInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URectangleMarqueeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleMarqueeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleMarqueeInteraction()
	{
		if (!Z_Registration_Info_UClass_URectangleMarqueeInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleMarqueeInteraction.OuterSingleton, Z_Construct_UClass_URectangleMarqueeInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleMarqueeInteraction.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<URectangleMarqueeInteraction>()
	{
		return URectangleMarqueeInteraction::StaticClass();
	}
	URectangleMarqueeInteraction::URectangleMarqueeInteraction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleMarqueeInteraction);
	URectangleMarqueeInteraction::~URectangleMarqueeInteraction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URectangleMarqueeMechanic, URectangleMarqueeMechanic::StaticClass, TEXT("URectangleMarqueeMechanic"), &Z_Registration_Info_UClass_URectangleMarqueeMechanic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleMarqueeMechanic), 141599909U) },
		{ Z_Construct_UClass_URectangleMarqueeInteraction, URectangleMarqueeInteraction::StaticClass, TEXT("URectangleMarqueeInteraction"), &Z_Registration_Info_UClass_URectangleMarqueeInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleMarqueeInteraction), 1289733953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_3530312145(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Mechanics_RectangleMarqueeMechanic_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
