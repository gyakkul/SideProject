// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraConcertCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraConcertCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_NoRegister();
// End Cross Module References
	void UDEPRECATED_VirtualCameraConcertCameraComponent::StaticRegisterNativesUDEPRECATED_VirtualCameraConcertCameraComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_VirtualCameraConcertCameraComponent);
	UClass* Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_NoRegister()
	{
		return UDEPRECATED_VirtualCameraConcertCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasAuthority_MetaData[];
#endif
		static void NewProp_bHasAuthority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasAuthority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSendUpdateInEditor_MetaData[];
#endif
		static void NewProp_bSendUpdateInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSendUpdateInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateCameraComponentTransform_MetaData[];
#endif
		static void NewProp_bUpdateCameraComponentTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateCameraComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentToTrack;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * A class to transfer Camera data in MU session\n */" },
		{ "IncludePath", "VirtualCameraConcertCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraConcertCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A class to transfer Camera data in MU session" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_TrackingName_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * The tracked name used by the multi user system to send the data.\n\x09 * When not set the component name will be used. That may conflict with another instance that has the same name but within different actors.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraConcertCameraComponent.h" },
		{ "ToolTip", "The tracked name used by the multi user system to send the data.\nWhen not set the component name will be used. That may conflict with another instance that has the same name but within different actors." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_TrackingName = { "TrackingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_VirtualCameraConcertCameraComponent, TrackingName), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_TrackingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_TrackingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Is that component sending the camera information or receiving it. */" },
		{ "ModuleRelativePath", "Public/VirtualCameraConcertCameraComponent.h" },
		{ "ToolTip", "Is that component sending the camera information or receiving it." },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority_SetBit(void* Obj)
	{
		((UDEPRECATED_VirtualCameraConcertCameraComponent*)Obj)->bHasAuthority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority = { "bHasAuthority", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_VirtualCameraConcertCameraComponent), &Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * When the component has the authority and we are in the editor, we should broadcast the update.\n\x09 * @note The component needs to be owned by an actor that is ticked in the editor.\n\x09 * @see ShouldTickIfViewportsOnly\n\x09 */" },
		{ "EditCondition", "bHasAuthority" },
		{ "ModuleRelativePath", "Public/VirtualCameraConcertCameraComponent.h" },
		{ "ToolTip", "When the component has the authority and we are in the editor, we should broadcast the update.\n@note The component needs to be owned by an actor that is ticked in the editor.\n@see ShouldTickIfViewportsOnly" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor_SetBit(void* Obj)
	{
		((UDEPRECATED_VirtualCameraConcertCameraComponent*)Obj)->bSendUpdateInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor = { "bSendUpdateInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_VirtualCameraConcertCameraComponent), &Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** Should update the camera component relative location & rotation. */" },
		{ "EditCondition", "!bHasAuthority" },
		{ "ModuleRelativePath", "Public/VirtualCameraConcertCameraComponent.h" },
		{ "ToolTip", "Should update the camera component relative location & rotation." },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform_SetBit(void* Obj)
	{
		((UDEPRECATED_VirtualCameraConcertCameraComponent*)Obj)->bUpdateCameraComponentTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform = { "bUpdateCameraComponentTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_VirtualCameraConcertCameraComponent), &Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_ComponentToTrack_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/** The camera component that will be tracked. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraConcertCameraComponent.h" },
		{ "ToolTip", "The camera component that will be tracked." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_ComponentToTrack = { "ComponentToTrack", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_VirtualCameraConcertCameraComponent, ComponentToTrack), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_ComponentToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_ComponentToTrack_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_TrackingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bHasAuthority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bSendUpdateInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_bUpdateCameraComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::NewProp_ComponentToTrack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_VirtualCameraConcertCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::ClassParams = {
		&UDEPRECATED_VirtualCameraConcertCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::PropPointers),
		0,
		0x02B002A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UDEPRECATED_VirtualCameraConcertCameraComponent>()
	{
		return UDEPRECATED_VirtualCameraConcertCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_VirtualCameraConcertCameraComponent);
	UDEPRECATED_VirtualCameraConcertCameraComponent::~UDEPRECATED_VirtualCameraConcertCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraConcertCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraConcertCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent, UDEPRECATED_VirtualCameraConcertCameraComponent::StaticClass, TEXT("UDEPRECATED_VirtualCameraConcertCameraComponent"), &Z_Registration_Info_UClass_UDEPRECATED_VirtualCameraConcertCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_VirtualCameraConcertCameraComponent), 1496240012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraConcertCameraComponent_h_2888843181(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraConcertCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraConcertCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
