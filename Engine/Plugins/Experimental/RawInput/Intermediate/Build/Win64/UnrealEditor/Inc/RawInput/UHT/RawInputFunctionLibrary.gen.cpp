// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RawInputFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRawInputFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary();
	RAWINPUT_API UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister();
	RAWINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo();
	UPackage* Z_Construct_UPackage__Script_RawInput();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo;
class UScriptStruct* FRegisteredDeviceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredDeviceInfo, (UObject*)Z_Construct_UPackage__Script_RawInput(), TEXT("RegisteredDeviceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo.OuterSingleton;
}
template<> RAWINPUT_API UScriptStruct* StaticStruct<FRegisteredDeviceInfo>()
{
	return FRegisteredDeviceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VendorID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VendorID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredDeviceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData[] = {
		{ "Category", "RawInput" },
		{ "Comment", "// Integer representation of the vendor ID (e.g. 0xC262 = 49762)\n" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
		{ "ToolTip", "Integer representation of the vendor ID (e.g. 0xC262 = 49762)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID = { "VendorID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, VendorID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "RawInput" },
		{ "Comment", "// Integer representation of the product ID (e.g. 0xC262 = 49762)\n" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
		{ "ToolTip", "Integer representation of the product ID (e.g. 0xC262 = 49762)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData[] = {
		{ "Category", "RawInput" },
		{ "Comment", "// Driver supplied device name\n" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
		{ "ToolTip", "Driver supplied device name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegisteredDeviceInfo, DeviceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_VendorID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_ProductID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewProp_DeviceName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
		nullptr,
		&NewStructOps,
		"RegisteredDeviceInfo",
		sizeof(FRegisteredDeviceInfo),
		alignof(FRegisteredDeviceInfo),
		Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisteredDeviceInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo.InnerSingleton, Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(URawInputFunctionLibrary::execGetRegisteredDevices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRegisteredDeviceInfo>*)Z_Param__Result=URawInputFunctionLibrary::GetRegisteredDevices();
		P_NATIVE_END;
	}
	void URawInputFunctionLibrary::StaticRegisterNativesURawInputFunctionLibrary()
	{
		UClass* Class = URawInputFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRegisteredDevices", &URawInputFunctionLibrary::execGetRegisteredDevices },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics
	{
		struct RawInputFunctionLibrary_eventGetRegisteredDevices_Parms
		{
			TArray<FRegisteredDeviceInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRegisteredDeviceInfo, METADATA_PARAMS(nullptr, 0) }; // 3860381385
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawInputFunctionLibrary_eventGetRegisteredDevices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3860381385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams[] = {
		{ "Category", "RawInput" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URawInputFunctionLibrary, nullptr, "GetRegisteredDevices", nullptr, nullptr, sizeof(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::RawInputFunctionLibrary_eventGetRegisteredDevices_Parms), Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URawInputFunctionLibrary);
	UClass* Z_Construct_UClass_URawInputFunctionLibrary_NoRegister()
	{
		return URawInputFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_URawInputFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawInputFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RawInput,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URawInputFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URawInputFunctionLibrary_GetRegisteredDevices, "GetRegisteredDevices" }, // 1774701941
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RawInputFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/RawInputFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawInputFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawInputFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URawInputFunctionLibrary_Statics::ClassParams = {
		&URawInputFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URawInputFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawInputFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_URawInputFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URawInputFunctionLibrary.OuterSingleton, Z_Construct_UClass_URawInputFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URawInputFunctionLibrary.OuterSingleton;
	}
	template<> RAWINPUT_API UClass* StaticClass<URawInputFunctionLibrary>()
	{
		return URawInputFunctionLibrary::StaticClass();
	}
	URawInputFunctionLibrary::URawInputFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawInputFunctionLibrary);
	URawInputFunctionLibrary::~URawInputFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FRegisteredDeviceInfo::StaticStruct, Z_Construct_UScriptStruct_FRegisteredDeviceInfo_Statics::NewStructOps, TEXT("RegisteredDeviceInfo"), &Z_Registration_Info_UScriptStruct_RegisteredDeviceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegisteredDeviceInfo), 3860381385U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URawInputFunctionLibrary, URawInputFunctionLibrary::StaticClass, TEXT("URawInputFunctionLibrary"), &Z_Registration_Info_UClass_URawInputFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URawInputFunctionLibrary), 3672191678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_1957927457(TEXT("/Script/RawInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RawInput_Source_RawInput_Public_RawInputFunctionLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
