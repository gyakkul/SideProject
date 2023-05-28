// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/GoogleARCoreAPI.h"
#include "ARActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoogleARCoreAPI() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_UARPin_NoRegister();
	AUGMENTEDREALITY_API UScriptStruct* Z_Construct_UScriptStruct_FTrackedGeometryGroup();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreUObjectManager();
	GOOGLEARCOREBASE_API UClass* Z_Construct_UClass_UGoogleARCoreUObjectManager_NoRegister();
	GOOGLEARCOREBASE_API UScriptStruct* Z_Construct_UScriptStruct_FARCorePointer();
	UPackage* Z_Construct_UPackage__Script_GoogleARCoreBase();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARCorePointer;
class UScriptStruct* FARCorePointer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARCorePointer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARCorePointer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARCorePointer, (UObject*)Z_Construct_UPackage__Script_GoogleARCoreBase(), TEXT("ARCorePointer"));
	}
	return Z_Registration_Info_UScriptStruct_ARCorePointer.OuterSingleton;
}
template<> GOOGLEARCOREBASE_API UScriptStruct* StaticStruct<FARCorePointer>()
{
	return FARCorePointer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARCorePointer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARCorePointer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// A wrapper class that stores a native pointer internally, which can be used as the key type for TMap\n" },
		{ "ModuleRelativePath", "Private/GoogleARCoreAPI.h" },
		{ "ToolTip", "A wrapper class that stores a native pointer internally, which can be used as the key type for TMap" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARCorePointer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARCorePointer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARCorePointer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
		nullptr,
		&NewStructOps,
		"ARCorePointer",
		sizeof(FARCorePointer),
		alignof(FARCorePointer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARCorePointer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARCorePointer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARCorePointer()
	{
		if (!Z_Registration_Info_UScriptStruct_ARCorePointer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARCorePointer.InnerSingleton, Z_Construct_UScriptStruct_FARCorePointer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARCorePointer.InnerSingleton;
	}
	void UGoogleARCoreUObjectManager::StaticRegisterNativesUGoogleARCoreUObjectManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoogleARCoreUObjectManager);
	UClass* Z_Construct_UClass_UGoogleARCoreUObjectManager_NoRegister()
	{
		return UGoogleARCoreUObjectManager::StaticClass();
	}
	struct Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LatestPointCloud_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LatestPointCloud;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableHandleMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackableHandleMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackableHandleMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TrackableHandleMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandleToAnchorMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandleToAnchorMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleToAnchorMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HandleToAnchorMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GoogleARCoreBase,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GoogleARCoreAPI.h" },
		{ "ModuleRelativePath", "Private/GoogleARCoreAPI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_LatestPointCloud_MetaData[] = {
		{ "ModuleRelativePath", "Private/GoogleARCoreAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_LatestPointCloud = { "LatestPointCloud", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreUObjectManager, LatestPointCloud), Z_Construct_UClass_UGoogleARCorePointCloud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_LatestPointCloud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_LatestPointCloud_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_ValueProp = { "TrackableHandleMap", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTrackedGeometryGroup, METADATA_PARAMS(nullptr, 0) }; // 289183413
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_Key_KeyProp = { "TrackableHandleMap_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARCorePointer, METADATA_PARAMS(nullptr, 0) }; // 4250601306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_MetaData[] = {
		{ "Comment", "// pointer type is ArTrackable*\n" },
		{ "ModuleRelativePath", "Private/GoogleARCoreAPI.h" },
		{ "ToolTip", "pointer type is ArTrackable*" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap = { "TrackableHandleMap", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreUObjectManager, TrackableHandleMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_MetaData)) }; // 4250601306 289183413
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_ValueProp = { "HandleToAnchorMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UARPin_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_Key_KeyProp = { "HandleToAnchorMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FARCorePointer, METADATA_PARAMS(nullptr, 0) }; // 4250601306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_MetaData[] = {
		{ "Comment", "// pointer type is ArAnchor*\n" },
		{ "ModuleRelativePath", "Private/GoogleARCoreAPI.h" },
		{ "ToolTip", "pointer type is ArAnchor*" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap = { "HandleToAnchorMap", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGoogleARCoreUObjectManager, HandleToAnchorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_MetaData)) }; // 4250601306
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_LatestPointCloud,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_TrackableHandleMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::NewProp_HandleToAnchorMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoogleARCoreUObjectManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::ClassParams = {
		&UGoogleARCoreUObjectManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoogleARCoreUObjectManager()
	{
		if (!Z_Registration_Info_UClass_UGoogleARCoreUObjectManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoogleARCoreUObjectManager.OuterSingleton, Z_Construct_UClass_UGoogleARCoreUObjectManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoogleARCoreUObjectManager.OuterSingleton;
	}
	template<> GOOGLEARCOREBASE_API UClass* StaticClass<UGoogleARCoreUObjectManager>()
	{
		return UGoogleARCoreUObjectManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoogleARCoreUObjectManager);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics::ScriptStructInfo[] = {
		{ FARCorePointer::StaticStruct, Z_Construct_UScriptStruct_FARCorePointer_Statics::NewStructOps, TEXT("ARCorePointer"), &Z_Registration_Info_UScriptStruct_ARCorePointer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARCorePointer), 4250601306U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoogleARCoreUObjectManager, UGoogleARCoreUObjectManager::StaticClass, TEXT("UGoogleARCoreUObjectManager"), &Z_Registration_Info_UClass_UGoogleARCoreUObjectManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoogleARCoreUObjectManager), 1171866796U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_3623190271(TEXT("/Script/GoogleARCoreBase"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_Google_GoogleARCore_Source_GoogleARCoreBase_Private_GoogleARCoreAPI_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
