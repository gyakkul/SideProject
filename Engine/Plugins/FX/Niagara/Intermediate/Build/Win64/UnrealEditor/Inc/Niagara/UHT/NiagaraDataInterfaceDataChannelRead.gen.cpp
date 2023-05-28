// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceDataChannelRead.h"
#include "DataInterface/NiagaraDataInterfaceDataChannelCommon.h"
#include "NiagaraDataChannelCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDataChannelRead() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIDataChannelCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelReference();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceDataChannelRead::StaticRegisterNativesUNiagaraDataInterfaceDataChannelRead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDataChannelRead);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_NoRegister()
	{
		return UNiagaraDataInterfaceDataChannelRead::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadCurrentFrame_MetaData[];
#endif
		static void NewProp_bReadCurrentFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadCurrentFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams[] = {
		{ "Category", "Data Channels" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Data Channel Reader" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** When reading from external, the channel to consume. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "When reading from external, the channel to consume." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, Channel), Z_Construct_UScriptStruct_FNiagaraDataChannelReference, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel_MetaData)) }; // 2371448466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** True if this reader will read the current frame's data. If false, we read the previous frame.\n\x09* Reading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.\n\x09* Reading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame.\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
		{ "ToolTip", "True if this reader will read the current frame's data. If false, we read the previous frame.\nReading the current frame introduces a tick order dependency but allows for zero latency reads. Any data channel elements that are generated after this reader is used are missed.\nReading the previous frame's data introduces a frame of latency but ensures we never miss any data as we have access to the whole frame." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceDataChannelRead*)Obj)->bReadCurrentFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame = { "bReadCurrentFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceDataChannelRead), &Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDataChannelRead.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceDataChannelRead, CompiledData), Z_Construct_UScriptStruct_FNDIDataChannelCompiledData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData_MetaData)) }; // 1464517729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_bReadCurrentFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::NewProp_CompiledData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDataChannelRead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams = {
		&UNiagaraDataInterfaceDataChannelRead::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDataChannelRead>()
	{
		return UNiagaraDataInterfaceDataChannelRead::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDataChannelRead);
	UNiagaraDataInterfaceDataChannelRead::~UNiagaraDataInterfaceDataChannelRead() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDataChannelRead, UNiagaraDataInterfaceDataChannelRead::StaticClass, TEXT("UNiagaraDataInterfaceDataChannelRead"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelRead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDataChannelRead), 4258056163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelRead_h_3061712973(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDataChannelRead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
