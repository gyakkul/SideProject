// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Video/SimpleVideo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleVideo() {}
// Cross Module References
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleAVHelper();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoHelper();
	AVCODECSCORERHI_API UClass* Z_Construct_UClass_USimpleVideoHelper_NoRegister();
	AVCODECSCORERHI_API UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec();
	AVCODECSCORERHI_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleVideoPacket();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AVCodecsCoreRHI();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleVideoCodec;
	static UEnum* ESimpleVideoCodec_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleVideoCodec.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleVideoCodec.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("ESimpleVideoCodec"));
		}
		return Z_Registration_Info_UEnum_ESimpleVideoCodec.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UEnum* StaticEnum<ESimpleVideoCodec>()
	{
		return ESimpleVideoCodec_StaticEnum();
	}
	struct Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::Enumerators[] = {
		{ "ESimpleVideoCodec::H264", (int64)ESimpleVideoCodec::H264 },
		{ "ESimpleVideoCodec::H265", (int64)ESimpleVideoCodec::H265 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "H264.Name", "ESimpleVideoCodec::H264" },
		{ "H265.Name", "ESimpleVideoCodec::H265" },
		{ "ModuleRelativePath", "Public/Video/SimpleVideo.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		"ESimpleVideoCodec",
		"ESimpleVideoCodec",
		Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec()
	{
		if (!Z_Registration_Info_UEnum_ESimpleVideoCodec.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleVideoCodec.InnerSingleton, Z_Construct_UEnum_AVCodecsCoreRHI_ESimpleVideoCodec_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleVideoCodec.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleVideoPacket;
class UScriptStruct* FSimpleVideoPacket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleVideoPacket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleVideoPacket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleVideoPacket, (UObject*)Z_Construct_UPackage__Script_AVCodecsCoreRHI(), TEXT("SimpleVideoPacket"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleVideoPacket.OuterSingleton;
}
template<> AVCODECSCORERHI_API UScriptStruct* StaticStruct<FSimpleVideoPacket>()
{
	return FSimpleVideoPacket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Video/SimpleVideo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleVideoPacket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
		nullptr,
		&NewStructOps,
		"SimpleVideoPacket",
		sizeof(FSimpleVideoPacket),
		alignof(FSimpleVideoPacket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleVideoPacket()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleVideoPacket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleVideoPacket.InnerSingleton, Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleVideoPacket.InnerSingleton;
	}
	DEFINE_FUNCTION(USimpleVideoHelper::execShareRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		USimpleVideoHelper::ShareRenderTarget2D(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	void USimpleVideoHelper::StaticRegisterNativesUSimpleVideoHelper()
	{
		UClass* Class = USimpleVideoHelper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShareRenderTarget2D", &USimpleVideoHelper::execShareRenderTarget2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics
	{
		struct SimpleVideoHelper_eventShareRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleVideoHelper_eventShareRenderTarget2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Video" },
		{ "ModuleRelativePath", "Public/Video/SimpleVideo.h" },
		{ "WorldContext", "WorldContext" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleVideoHelper, nullptr, "ShareRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::SimpleVideoHelper_eventShareRenderTarget2D_Parms), Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleVideoHelper);
	UClass* Z_Construct_UClass_USimpleVideoHelper_NoRegister()
	{
		return USimpleVideoHelper::StaticClass();
	}
	struct Z_Construct_UClass_USimpleVideoHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleVideoHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USimpleAVHelper,
		(UObject* (*)())Z_Construct_UPackage__Script_AVCodecsCoreRHI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleVideoHelper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleVideoHelper_ShareRenderTarget2D, "ShareRenderTarget2D" }, // 4002563867
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleVideoHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Video/SimpleVideo.h" },
		{ "ModuleRelativePath", "Public/Video/SimpleVideo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleVideoHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleVideoHelper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleVideoHelper_Statics::ClassParams = {
		&USimpleVideoHelper::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleVideoHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleVideoHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleVideoHelper()
	{
		if (!Z_Registration_Info_UClass_USimpleVideoHelper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleVideoHelper.OuterSingleton, Z_Construct_UClass_USimpleVideoHelper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleVideoHelper.OuterSingleton;
	}
	template<> AVCODECSCORERHI_API UClass* StaticClass<USimpleVideoHelper>()
	{
		return USimpleVideoHelper::StaticClass();
	}
	USimpleVideoHelper::USimpleVideoHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleVideoHelper);
	USimpleVideoHelper::~USimpleVideoHelper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::EnumInfo[] = {
		{ ESimpleVideoCodec_StaticEnum, TEXT("ESimpleVideoCodec"), &Z_Registration_Info_UEnum_ESimpleVideoCodec, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1114698386U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::ScriptStructInfo[] = {
		{ FSimpleVideoPacket::StaticStruct, Z_Construct_UScriptStruct_FSimpleVideoPacket_Statics::NewStructOps, TEXT("SimpleVideoPacket"), &Z_Registration_Info_UScriptStruct_SimpleVideoPacket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleVideoPacket), 2940460534U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleVideoHelper, USimpleVideoHelper::StaticClass, TEXT("USimpleVideoHelper"), &Z_Registration_Info_UClass_USimpleVideoHelper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleVideoHelper), 111667521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_1673375080(TEXT("/Script/AVCodecsCoreRHI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AVCodecs_AVCodecsCore_Source_AVCodecsCoreRHI_Public_Video_SimpleVideo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
