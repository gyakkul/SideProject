// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VPCameraBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPCameraBase() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPCameraBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPCameraBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVPCameraBase::execResetPreview)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPreview();
		P_NATIVE_END;
	}
	void AVPCameraBase::StaticRegisterNativesAVPCameraBase()
	{
		UClass* Class = AVPCameraBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetPreview", &AVPCameraBase::execResetPreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVPCameraBase_ResetPreview_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPCameraBase_ResetPreview_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Editor Scripting | Camera" },
		{ "Comment", "/** Remove the preview and clear the list of selected user. Another user may have the camera selected and will re-add it later. */" },
		{ "ModuleRelativePath", "Private/VPCameraBase.h" },
		{ "ToolTip", "Remove the preview and clear the list of selected user. Another user may have the camera selected and will re-add it later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPCameraBase_ResetPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPCameraBase, nullptr, "ResetPreview", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPCameraBase_ResetPreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPCameraBase_ResetPreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPCameraBase_ResetPreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPCameraBase_ResetPreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPCameraBase);
	UClass* Z_Construct_UClass_AVPCameraBase_NoRegister()
	{
		return AVPCameraBase::StaticClass();
	}
	struct Z_Construct_UClass_AVPCameraBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedByUsers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedByUsers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedByUsers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPCameraBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVPCameraBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVPCameraBase_ResetPreview, "ResetPreview" }, // 3231307180
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPCameraBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "VPCameraBase.h" },
		{ "ModuleRelativePath", "Private/VPCameraBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers_Inner = { "SelectedByUsers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers_MetaData[] = {
		{ "Comment", "/** Contains the name of users in an MU session that have selected this */" },
		{ "ModuleRelativePath", "Private/VPCameraBase.h" },
		{ "ToolTip", "Contains the name of users in an MU session that have selected this" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers = { "SelectedByUsers", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPCameraBase, SelectedByUsers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVPCameraBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPCameraBase_Statics::NewProp_SelectedByUsers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPCameraBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPCameraBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPCameraBase_Statics::ClassParams = {
		&AVPCameraBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVPCameraBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVPCameraBase_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVPCameraBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPCameraBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPCameraBase()
	{
		if (!Z_Registration_Info_UClass_AVPCameraBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPCameraBase.OuterSingleton, Z_Construct_UClass_AVPCameraBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPCameraBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<AVPCameraBase>()
	{
		return AVPCameraBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPCameraBase);
	AVPCameraBase::~AVPCameraBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPCameraBase, AVPCameraBase::StaticClass, TEXT("AVPCameraBase"), &Z_Registration_Info_UClass_AVPCameraBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPCameraBase), 1768141097U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraBase_h_693904794(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPCameraBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
