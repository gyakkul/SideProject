// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceCamera() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCamera();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceCamera_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceCamera::StaticRegisterNativesUNiagaraDataInterfaceCamera()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceCamera);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCamera_NoRegister()
	{
		return UNiagaraDataInterfaceCamera::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerControllerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerControllerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireCurrentFrameData_MetaData[];
#endif
		static void NewProp_bRequireCurrentFrameData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireCurrentFrameData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::Class_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "DisplayName", "Camera Query" },
		{ "IncludePath", "NiagaraDataInterfaceCamera.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_PlayerControllerIndex_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** This is used to determine which camera position to query for cpu emitters. If no valid index is supplied, the first controller is used as camera reference. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCamera.h" },
		{ "ToolTip", "This is used to determine which camera position to query for cpu emitters. If no valid index is supplied, the first controller is used as camera reference." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_PlayerControllerIndex = { "PlayerControllerIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceCamera, PlayerControllerIndex), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_PlayerControllerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_PlayerControllerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** When this option is disabled, we use the previous frame's data for the camera and issue the simulation early. This greatly\n\x09reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceCamera.h" },
		{ "ToolTip", "When this option is disabled, we use the previous frame's data for the camera and issue the simulation early. This greatly\n      reduces overhead and allows the game thread to run faster, but comes at a tradeoff if the dependencies might leave gaps or other visual artifacts." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceCamera*)Obj)->bRequireCurrentFrameData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData = { "bRequireCurrentFrameData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceCamera), &Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_PlayerControllerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::NewProp_bRequireCurrentFrameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::ClassParams = {
		&UNiagaraDataInterfaceCamera::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceCamera()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceCamera>()
	{
		return UNiagaraDataInterfaceCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceCamera);
	UNiagaraDataInterfaceCamera::~UNiagaraDataInterfaceCamera() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceCamera, UNiagaraDataInterfaceCamera::StaticClass, TEXT("UNiagaraDataInterfaceCamera"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceCamera), 2093475983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_542375114(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceCamera_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
