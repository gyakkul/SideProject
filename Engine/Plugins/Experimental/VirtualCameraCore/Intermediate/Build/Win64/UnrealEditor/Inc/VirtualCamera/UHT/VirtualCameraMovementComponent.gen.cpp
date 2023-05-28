// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraMovementComponent();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraMovementComponent_NoRegister();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraMovementComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VirtualCamera, nullptr, "VirtualCameraResetOffsetsDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraResetOffsetsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FVirtualCameraResetOffsetsDelegate_DelegateWrapper(const FMulticastScriptDelegate& VirtualCameraResetOffsetsDelegate)
{
	VirtualCameraResetOffsetsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	void UVirtualCameraMovementComponent::StaticRegisterNativesUVirtualCameraMovementComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraMovementComponent);
	UClass* Z_Construct_UClass_UVirtualCameraMovementComponent_NoRegister()
	{
		return UVirtualCameraMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootUpdatedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootUpdatedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootUpdatedPrimitive_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootUpdatedPrimitive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualCameraMovementComponent.h" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedComponent_MetaData[] = {
		{ "Comment", "/**\n\x09 * The component we move and update when the input is coming from the controller.\n\x09 * If this is null UpdatedComponent will be used instead.\n\x09 * @see UpdatedComponent\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovementComponent.h" },
		{ "ToolTip", "The component we move and update when the input is coming from the controller.\nIf this is null UpdatedComponent will be used instead.\n@see UpdatedComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedComponent = { "RootUpdatedComponent", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraMovementComponent, RootUpdatedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedPrimitive_MetaData[] = {
		{ "Comment", "/**\n\x09 * RootUpdatedComponent, cast as a UPrimitiveComponent. May be invalid if RootUpdatedComponent was null or not a UPrimitiveComponent.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraMovementComponent.h" },
		{ "ToolTip", "RootUpdatedComponent, cast as a UPrimitiveComponent. May be invalid if RootUpdatedComponent was null or not a UPrimitiveComponent." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedPrimitive = { "RootUpdatedPrimitive", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualCameraMovementComponent, RootUpdatedPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedPrimitive_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::NewProp_RootUpdatedPrimitive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCameraMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::ClassParams = {
		&UVirtualCameraMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraMovementComponent.OuterSingleton, Z_Construct_UClass_UVirtualCameraMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraMovementComponent.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraMovementComponent>()
	{
		return UVirtualCameraMovementComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraMovementComponent);
	UVirtualCameraMovementComponent::~UVirtualCameraMovementComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraMovementComponent, UVirtualCameraMovementComponent::StaticClass, TEXT("UVirtualCameraMovementComponent"), &Z_Registration_Info_UClass_UVirtualCameraMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraMovementComponent), 875291317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovementComponent_h_1725396988(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
