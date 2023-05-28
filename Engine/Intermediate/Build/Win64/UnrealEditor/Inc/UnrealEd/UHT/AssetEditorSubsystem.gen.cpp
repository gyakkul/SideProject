// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Subsystems/AssetEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorSubsystem() {}
// Cross Module References
	ASSETTOOLS_API UEnum* Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditorSubsystem();
	UNREALED_API UClass* Z_Construct_UClass_UAssetEditorSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UAssetEditorSubsystem::execCloseAllEditorsForAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->CloseAllEditorsForAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAssetEditorSubsystem::execOpenEditorForAssets)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Assets);
		P_GET_ENUM(EAssetTypeActivationOpenedMethod,Z_Param_OpenedMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->OpenEditorForAssets(Z_Param_Out_Assets,EAssetTypeActivationOpenedMethod(Z_Param_OpenedMethod));
		P_NATIVE_END;
	}
	void UAssetEditorSubsystem::StaticRegisterNativesUAssetEditorSubsystem()
	{
		UClass* Class = UAssetEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseAllEditorsForAsset", &UAssetEditorSubsystem::execCloseAllEditorsForAsset },
			{ "OpenEditorForAssets", &UAssetEditorSubsystem::execOpenEditorForAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics
	{
		struct AssetEditorSubsystem_eventCloseAllEditorsForAsset_Parms
		{
			UObject* Asset;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetEditorSubsystem_eventCloseAllEditorsForAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetEditorSubsystem_eventCloseAllEditorsForAsset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/** Close all active editors for the supplied asset and return the number of asset editors that were closed */" },
		{ "ModuleRelativePath", "Public/Subsystems/AssetEditorSubsystem.h" },
		{ "ToolTip", "Close all active editors for the supplied asset and return the number of asset editors that were closed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetEditorSubsystem, nullptr, "CloseAllEditorsForAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::AssetEditorSubsystem_eventCloseAllEditorsForAsset_Parms), Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics
	{
		struct AssetEditorSubsystem_eventOpenEditorForAssets_Parms
		{
			TArray<UObject*> Assets;
			EAssetTypeActivationOpenedMethod OpenedMethod;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Assets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Assets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Assets;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OpenedMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpenedMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OpenedMethod;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets_Inner = { "Assets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets = { "Assets", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetEditorSubsystem_eventOpenEditorForAssets_Parms, Assets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod = { "OpenedMethod", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AssetEditorSubsystem_eventOpenEditorForAssets_Parms, OpenedMethod), Z_Construct_UEnum_AssetTools_EAssetTypeActivationOpenedMethod, METADATA_PARAMS(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod_MetaData)) }; // 651740635
	void Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AssetEditorSubsystem_eventOpenEditorForAssets_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AssetEditorSubsystem_eventOpenEditorForAssets_Parms), &Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_Assets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_OpenedMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Asset Tools" },
		{ "Comment", "/**\n\x09 * Tries to open an editor for all of the specified assets.\n\x09 * If any of the assets are already open, it will not create a new editor for them.\n\x09 * If all assets are of the same type, the supporting AssetTypeAction (if it exists) is responsible for the details of how to handle opening multiple assets at once.\n\x09 */" },
		{ "CPP_Default_OpenedMethod", "Edit" },
		{ "ModuleRelativePath", "Public/Subsystems/AssetEditorSubsystem.h" },
		{ "ToolTip", "Tries to open an editor for all of the specified assets.\nIf any of the assets are already open, it will not create a new editor for them.\nIf all assets are of the same type, the supporting AssetTypeAction (if it exists) is responsible for the details of how to handle opening multiple assets at once." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAssetEditorSubsystem, nullptr, "OpenEditorForAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::AssetEditorSubsystem_eventOpenEditorForAssets_Parms), Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetEditorSubsystem);
	UClass* Z_Construct_UClass_UAssetEditorSubsystem_NoRegister()
	{
		return UAssetEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAssetEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwnedAssetEditors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnedAssetEditors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OwnedAssetEditors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAssetEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAssetEditorSubsystem_CloseAllEditorsForAsset, "CloseAllEditorsForAsset" }, // 1770129469
		{ &Z_Construct_UFunction_UAssetEditorSubsystem_OpenEditorForAssets, "OpenEditorForAssets" }, // 568339439
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAssetEditorSubsystem\n */" },
		{ "IncludePath", "Subsystems/AssetEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AssetEditorSubsystem.h" },
		{ "ToolTip", "UAssetEditorSubsystem" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors_Inner = { "OwnedAssetEditors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UAssetEditor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Subsystems/AssetEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors = { "OwnedAssetEditors", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAssetEditorSubsystem, OwnedAssetEditors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAssetEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAssetEditorSubsystem_Statics::NewProp_OwnedAssetEditors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetEditorSubsystem_Statics::ClassParams = {
		&UAssetEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAssetEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditorSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAssetEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetEditorSubsystem.OuterSingleton, Z_Construct_UClass_UAssetEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetEditorSubsystem.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAssetEditorSubsystem>()
	{
		return UAssetEditorSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetEditorSubsystem);
	UAssetEditorSubsystem::~UAssetEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetEditorSubsystem, UAssetEditorSubsystem::StaticClass, TEXT("UAssetEditorSubsystem"), &Z_Registration_Info_UClass_UAssetEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetEditorSubsystem), 4020736492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_1344927277(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Subsystems_AssetEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
