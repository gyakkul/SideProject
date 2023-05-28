// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputRouter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputRouter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputRouter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	void UInputRouter::StaticRegisterNativesUInputRouter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputRouter);
	UClass* Z_Construct_UClass_UInputRouter_NoRegister()
	{
		return UInputRouter::StaticClass();
	}
	struct Z_Construct_UClass_UInputRouter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInvalidateOnHover_MetaData[];
#endif
		static void NewProp_bAutoInvalidateOnHover_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInvalidateOnHover;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoInvalidateOnCapture_MetaData[];
#endif
		static void NewProp_bAutoInvalidateOnCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoInvalidateOnCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveInputBehaviors_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveInputBehaviors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputRouter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputRouter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputRouter mediates between a higher-level input event source (eg like an FEdMode)\n * and a set of InputBehaviors that respond to those events. Sets of InputBehaviors are\n * registered, and then PostInputEvent() is called for each event. \n *\n * Internally one of the active Behaviors may \"capture\" the event stream.\n * Separate \"Left\" and \"Right\" captures are supported, which means that (eg)\n * an independent capture can be tracked for each VR controller.\n *\n * If the input device supports \"hover\",  PostHoverInputEvent() will forward\n * hover events to InputBehaviors that also support it.\n *\n */" },
		{ "IncludePath", "InputRouter.h" },
		{ "ModuleRelativePath", "Public/InputRouter.h" },
		{ "ToolTip", "UInputRouter mediates between a higher-level input event source (eg like an FEdMode)\nand a set of InputBehaviors that respond to those events. Sets of InputBehaviors are\nregistered, and then PostInputEvent() is called for each event.\n\nInternally one of the active Behaviors may \"capture\" the event stream.\nSeparate \"Left\" and \"Right\" captures are supported, which means that (eg)\nan independent capture can be tracked for each VR controller.\n\nIf the input device supports \"hover\",  PostHoverInputEvent() will forward\nhover events to InputBehaviors that also support it." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_MetaData[] = {
		{ "Comment", "/** If true, then we post an Invalidation (ie redraw) request if any active InputBehavior responds to Hover events (default false) */" },
		{ "ModuleRelativePath", "Public/InputRouter.h" },
		{ "ToolTip", "If true, then we post an Invalidation (ie redraw) request if any active InputBehavior responds to Hover events (default false)" },
	};
#endif
	void Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_SetBit(void* Obj)
	{
		((UInputRouter*)Obj)->bAutoInvalidateOnHover = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover = { "bAutoInvalidateOnHover", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputRouter), &Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_MetaData[] = {
		{ "Comment", "/** If true, then we post an Invalidation (ie redraw) request on every captured input event (default false) */" },
		{ "ModuleRelativePath", "Public/InputRouter.h" },
		{ "ToolTip", "If true, then we post an Invalidation (ie redraw) request on every captured input event (default false)" },
	};
#endif
	void Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_SetBit(void* Obj)
	{
		((UInputRouter*)Obj)->bAutoInvalidateOnCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture = { "bAutoInvalidateOnCapture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInputRouter), &Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors_MetaData[] = {
		{ "ModuleRelativePath", "Public/InputRouter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors = { "ActiveInputBehaviors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputRouter, ActiveInputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputRouter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnHover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputRouter_Statics::NewProp_bAutoInvalidateOnCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputRouter_Statics::NewProp_ActiveInputBehaviors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputRouter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputRouter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputRouter_Statics::ClassParams = {
		&UInputRouter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputRouter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInputRouter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputRouter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputRouter()
	{
		if (!Z_Registration_Info_UClass_UInputRouter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputRouter.OuterSingleton, Z_Construct_UClass_UInputRouter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputRouter.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputRouter>()
	{
		return UInputRouter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputRouter);
	UInputRouter::~UInputRouter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputRouter, UInputRouter::StaticClass, TEXT("UInputRouter"), &Z_Registration_Info_UClass_UInputRouter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputRouter), 2819814803U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_3606499377(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputRouter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
