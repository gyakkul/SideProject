// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VPCameraUIBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPCameraUIBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPCameraUIBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPCameraUIBase_NoRegister();
// End Cross Module References
	static FName NAME_UVPCameraUIBase_OnSelectedCameraChanged = FName(TEXT("OnSelectedCameraChanged"));
	void UVPCameraUIBase::OnSelectedCameraChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPCameraUIBase_OnSelectedCameraChanged),NULL);
	}
	void UVPCameraUIBase::StaticRegisterNativesUVPCameraUIBase()
	{
	}
	struct Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Private/VPCameraUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPCameraUIBase, nullptr, "OnSelectedCameraChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPCameraUIBase);
	UClass* Z_Construct_UClass_UVPCameraUIBase_NoRegister()
	{
		return UVPCameraUIBase::StaticClass();
	}
	struct Z_Construct_UClass_UVPCameraUIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedCameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPCameraUIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPCameraUIBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPCameraUIBase_OnSelectedCameraChanged, "OnSelectedCameraChanged" }, // 4115219165
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPCameraUIBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPCameraUIBase.h" },
		{ "ModuleRelativePath", "Private/VPCameraUIBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCamera_MetaData[] = {
		{ "ModuleRelativePath", "Private/VPCameraUIBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCamera = { "SelectedCamera", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPCameraUIBase, SelectedCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCameraComponent_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/VPCameraUIBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCameraComponent = { "SelectedCameraComponent", nullptr, (EPropertyFlags)0x002408000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPCameraUIBase, SelectedCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPCameraUIBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPCameraUIBase_Statics::NewProp_SelectedCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPCameraUIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPCameraUIBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPCameraUIBase_Statics::ClassParams = {
		&UVPCameraUIBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPCameraUIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPCameraUIBase_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPCameraUIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPCameraUIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPCameraUIBase()
	{
		if (!Z_Registration_Info_UClass_UVPCameraUIBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPCameraUIBase.OuterSingleton, Z_Construct_UClass_UVPCameraUIBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPCameraUIBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPCameraUIBase>()
	{
		return UVPCameraUIBase::StaticClass();
	}
	UVPCameraUIBase::UVPCameraUIBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPCameraUIBase);
	UVPCameraUIBase::~UVPCameraUIBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraUIBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraUIBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPCameraUIBase, UVPCameraUIBase::StaticClass, TEXT("UVPCameraUIBase"), &Z_Registration_Info_UClass_UVPCameraUIBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPCameraUIBase), 415704291U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraUIBase_h_1235029791(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraUIBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraUIBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
