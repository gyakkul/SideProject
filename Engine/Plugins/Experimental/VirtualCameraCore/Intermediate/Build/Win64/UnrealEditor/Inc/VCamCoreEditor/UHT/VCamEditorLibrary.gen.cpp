// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamEditorLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamEditorLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VCamCoreEditor();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamEditorLibrary();
	VCAMCOREEDITOR_API UClass* Z_Construct_UClass_UVCamEditorLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVCamEditorLibrary::execGetAllVCamComponentsInLevel)
	{
		P_GET_TARRAY_REF(UVCamComponent*,Z_Param_Out_VCamComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVCamEditorLibrary::GetAllVCamComponentsInLevel(Z_Param_Out_VCamComponents);
		P_NATIVE_END;
	}
	void UVCamEditorLibrary::StaticRegisterNativesUVCamEditorLibrary()
	{
		UClass* Class = UVCamEditorLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllVCamComponentsInLevel", &UVCamEditorLibrary::execGetAllVCamComponentsInLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics
	{
		struct VCamEditorLibrary_eventGetAllVCamComponentsInLevel_Parms
		{
			TArray<UVCamComponent*> VCamComponents;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VCamComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCamComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VCamComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents_Inner = { "VCamComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents = { "VCamComponents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamEditorLibrary_eventGetAllVCamComponentsInLevel_Parms, VCamComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::NewProp_VCamComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Find all loaded VCam Components own by an actor in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...\n\x09 * @param VCamComponents Output List of found VCamComponents\n\x09 */" },
		{ "ModuleRelativePath", "Public/VCamEditorLibrary.h" },
		{ "ToolTip", "Find all loaded VCam Components own by an actor in the world editor. Exclude actor that are pending kill, in PIE, PreviewEditor, ...\n@param VCamComponents Output List of found VCamComponents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamEditorLibrary, nullptr, "GetAllVCamComponentsInLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::VCamEditorLibrary_eventGetAllVCamComponentsInLevel_Parms), Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamEditorLibrary);
	UClass* Z_Construct_UClass_UVCamEditorLibrary_NoRegister()
	{
		return UVCamEditorLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVCamEditorLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamEditorLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCoreEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamEditorLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamEditorLibrary_GetAllVCamComponentsInLevel, "GetAllVCamComponentsInLevel" }, // 92001579
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamEditorLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VCamEditorLibrary.h" },
		{ "ModuleRelativePath", "Public/VCamEditorLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamEditorLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamEditorLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamEditorLibrary_Statics::ClassParams = {
		&UVCamEditorLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVCamEditorLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamEditorLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamEditorLibrary()
	{
		if (!Z_Registration_Info_UClass_UVCamEditorLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamEditorLibrary.OuterSingleton, Z_Construct_UClass_UVCamEditorLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamEditorLibrary.OuterSingleton;
	}
	template<> VCAMCOREEDITOR_API UClass* StaticClass<UVCamEditorLibrary>()
	{
		return UVCamEditorLibrary::StaticClass();
	}
	UVCamEditorLibrary::UVCamEditorLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamEditorLibrary);
	UVCamEditorLibrary::~UVCamEditorLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamEditorLibrary, UVCamEditorLibrary::StaticClass, TEXT("UVCamEditorLibrary"), &Z_Registration_Info_UClass_UVCamEditorLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamEditorLibrary), 1564959739U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_1182026908(TEXT("/Script/VCamCoreEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCoreEditor_Public_VCamEditorLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
