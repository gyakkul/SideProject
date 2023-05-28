// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Channel.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UChannel();
	ENGINE_API UClass* Z_Construct_UClass_UChannel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UChannel::StaticRegisterNativesUChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChannel);
	UClass* Z_Construct_UClass_UChannel_NoRegister()
	{
		return UChannel::StaticClass();
	}
	struct Z_Construct_UClass_UChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Connection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Connection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class of communication channels.\n */" },
		{ "IncludePath", "Engine/Channel.h" },
		{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
		{ "ToolTip", "Base class of communication channels." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChannel_Statics::NewProp_Connection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/Channel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UChannel_Statics::NewProp_Connection = { "Connection", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UChannel, Connection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UChannel_Statics::NewProp_Connection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::NewProp_Connection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UChannel_Statics::NewProp_Connection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChannel_Statics::ClassParams = {
		&UChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChannel()
	{
		if (!Z_Registration_Info_UClass_UChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChannel.OuterSingleton, Z_Construct_UClass_UChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChannel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UChannel>()
	{
		return UChannel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChannel);
	UChannel::~UChannel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UChannel)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChannel, UChannel::StaticClass, TEXT("UChannel"), &Z_Registration_Info_UClass_UChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChannel), 2606185907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_1836139185(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Channel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
