// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NDIRenderTargetVolumeSimCacheData.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNDIRenderTargetVolumeSimCacheData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	NIAGARA_API UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData();
	NIAGARA_API UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame;
class UScriptStruct* FNDIRenderTargetVolumeSimCacheFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NDIRenderTargetVolumeSimCacheFrame"));
	}
	return Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIRenderTargetVolumeSimCacheFrame>()
{
	return FNDIRenderTargetVolumeSimCacheFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressedSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CompressedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIRenderTargetVolumeSimCacheFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, Size), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, Format), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize = { "UncompressedSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, UncompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize = { "CompressedSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNDIRenderTargetVolumeSimCacheFrame, CompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_UncompressedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewProp_CompressedSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NDIRenderTargetVolumeSimCacheFrame",
		sizeof(FNDIRenderTargetVolumeSimCacheFrame),
		alignof(FNDIRenderTargetVolumeSimCacheFrame),
		Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.InnerSingleton, Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame.InnerSingleton;
	}
	void UNDIRenderTargetVolumeSimCacheData::StaticRegisterNativesUNDIRenderTargetVolumeSimCacheData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNDIRenderTargetVolumeSimCacheData);
	UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_NoRegister()
	{
		return UNDIRenderTargetVolumeSimCacheData::StaticClass();
	}
	struct Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompressionType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompressionType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NDIRenderTargetVolumeSimCacheData.h" },
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType = { "CompressionType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIRenderTargetVolumeSimCacheData, CompressionType), METADATA_PARAMS(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame, METADATA_PARAMS(nullptr, 0) }; // 3324510255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_MetaData[] = {
		{ "ModuleRelativePath", "Private/NDIRenderTargetVolumeSimCacheData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNDIRenderTargetVolumeSimCacheData, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_MetaData)) }; // 3324510255
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_CompressionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::NewProp_Frames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNDIRenderTargetVolumeSimCacheData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::ClassParams = {
		&UNDIRenderTargetVolumeSimCacheData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData()
	{
		if (!Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData.OuterSingleton, Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNDIRenderTargetVolumeSimCacheData>()
	{
		return UNDIRenderTargetVolumeSimCacheData::StaticClass();
	}
	UNDIRenderTargetVolumeSimCacheData::UNDIRenderTargetVolumeSimCacheData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNDIRenderTargetVolumeSimCacheData);
	UNDIRenderTargetVolumeSimCacheData::~UNDIRenderTargetVolumeSimCacheData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNDIRenderTargetVolumeSimCacheData)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ScriptStructInfo[] = {
		{ FNDIRenderTargetVolumeSimCacheFrame::StaticStruct, Z_Construct_UScriptStruct_FNDIRenderTargetVolumeSimCacheFrame_Statics::NewStructOps, TEXT("NDIRenderTargetVolumeSimCacheFrame"), &Z_Registration_Info_UScriptStruct_NDIRenderTargetVolumeSimCacheFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNDIRenderTargetVolumeSimCacheFrame), 3324510255U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNDIRenderTargetVolumeSimCacheData, UNDIRenderTargetVolumeSimCacheData::StaticClass, TEXT("UNDIRenderTargetVolumeSimCacheData"), &Z_Registration_Info_UClass_UNDIRenderTargetVolumeSimCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNDIRenderTargetVolumeSimCacheData), 2154854295U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_888310272(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NDIRenderTargetVolumeSimCacheData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
