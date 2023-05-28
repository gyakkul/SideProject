// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditorWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorWidgetComponent() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister();
	VREDITOR_API UEnum* Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy;
	static UEnum* EVREditorWidgetDrawingPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy, (UObject*)Z_Construct_UPackage__Script_VREditor(), TEXT("EVREditorWidgetDrawingPolicy"));
		}
		return Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy.OuterSingleton;
	}
	template<> VREDITOR_API UEnum* StaticEnum<EVREditorWidgetDrawingPolicy>()
	{
		return EVREditorWidgetDrawingPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::Enumerators[] = {
		{ "EVREditorWidgetDrawingPolicy::Always", (int64)EVREditorWidgetDrawingPolicy::Always },
		{ "EVREditorWidgetDrawingPolicy::Hovering", (int64)EVREditorWidgetDrawingPolicy::Hovering },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::Enum_MetaDataParams[] = {
		{ "Always.Name", "EVREditorWidgetDrawingPolicy::Always" },
		{ "Hovering.Name", "EVREditorWidgetDrawingPolicy::Hovering" },
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VREditor,
		nullptr,
		"EVREditorWidgetDrawingPolicy",
		"EVREditorWidgetDrawingPolicy",
		Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy()
	{
		if (!Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy.InnerSingleton, Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy.InnerSingleton;
	}
	void UVREditorWidgetComponent::StaticRegisterNativesUVREditorWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorWidgetComponent);
	UClass* Z_Construct_UClass_UVREditorWidgetComponent_NoRegister()
	{
		return UVREditorWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DrawingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHovering_MetaData[];
#endif
		static void NewProp_bIsHovering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHovering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEverDrawn_MetaData[];
#endif
		static void NewProp_bHasEverDrawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEverDrawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A specialized WidgetComponent for the VREditor\n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "VREditorWidgetComponent.h" },
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "A specialized WidgetComponent for the VREditor" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_MetaData[] = {
		{ "Comment", "/**\n\x09 * High level redrawing policy for the widget component.\n\x09 */" },
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "High level redrawing policy for the widget component." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy = { "DrawingPolicy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorWidgetComponent, DrawingPolicy), Z_Construct_UEnum_VREditor_EVREditorWidgetDrawingPolicy, METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_MetaData)) }; // 1174351918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_MetaData[] = {
		{ "Comment", "/**\n\x09 * Controls if we draw, the VREditorWidget allows for manual enabling or \n\x09 * disabling of updating the slate widget.\n\x09 */" },
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "Controls if we draw, the VREditorWidget allows for manual enabling or\ndisabling of updating the slate widget." },
	};
#endif
	void Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_SetBit(void* Obj)
	{
		((UVREditorWidgetComponent*)Obj)->bIsHovering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering = { "bIsHovering", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVREditorWidgetComponent), &Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_MetaData[] = {
		{ "Comment", "/**\n\x09 * Recorders if we've drawn at least once, that way we can always draw the first\n\x09 * frame then go manual after that.\n\x09 */" },
		{ "ModuleRelativePath", "VREditorWidgetComponent.h" },
		{ "ToolTip", "Recorders if we've drawn at least once, that way we can always draw the first\nframe then go manual after that." },
	};
#endif
	void Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_SetBit(void* Obj)
	{
		((UVREditorWidgetComponent*)Obj)->bHasEverDrawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn = { "bHasEverDrawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVREditorWidgetComponent), &Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorWidgetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_DrawingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bIsHovering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorWidgetComponent_Statics::NewProp_bHasEverDrawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorWidgetComponent_Statics::ClassParams = {
		&UVREditorWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVREditorWidgetComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::PropPointers),
		0,
		0x04A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorWidgetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UVREditorWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorWidgetComponent.OuterSingleton, Z_Construct_UClass_UVREditorWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorWidgetComponent.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorWidgetComponent>()
	{
		return UVREditorWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorWidgetComponent);
	UVREditorWidgetComponent::~UVREditorWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics::EnumInfo[] = {
		{ EVREditorWidgetDrawingPolicy_StaticEnum, TEXT("EVREditorWidgetDrawingPolicy"), &Z_Registration_Info_UEnum_EVREditorWidgetDrawingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1174351918U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorWidgetComponent, UVREditorWidgetComponent::StaticClass, TEXT("UVREditorWidgetComponent"), &Z_Registration_Info_UClass_UVREditorWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorWidgetComponent), 2697484758U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_3089956192(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorWidgetComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
