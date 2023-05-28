// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidFileServerBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidFileServerBPLibrary() {}
// Cross Module References
	ANDROIDFILESERVER_API UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary();
	ANDROIDFILESERVER_API UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary_NoRegister();
	ANDROIDFILESERVER_API UEnum* Z_Construct_UEnum_AndroidFileServer_EAFSActiveType();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AndroidFileServer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAFSActiveType;
	static UEnum* EAFSActiveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType, (UObject*)Z_Construct_UPackage__Script_AndroidFileServer(), TEXT("EAFSActiveType"));
		}
		return Z_Registration_Info_UEnum_EAFSActiveType.OuterSingleton;
	}
	template<> ANDROIDFILESERVER_API UEnum* StaticEnum<EAFSActiveType::Type>()
	{
		return EAFSActiveType_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enumerators[] = {
		{ "EAFSActiveType::None", (int64)EAFSActiveType::None },
		{ "EAFSActiveType::USBOnly", (int64)EAFSActiveType::USBOnly },
		{ "EAFSActiveType::NetworkOnly", (int64)EAFSActiveType::NetworkOnly },
		{ "EAFSActiveType::Combined", (int64)EAFSActiveType::Combined },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enum_MetaDataParams[] = {
		{ "Combined.DisplayName", "USB and Network combined" },
		{ "Combined.Name", "EAFSActiveType::Combined" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "NetworkOnly.DisplayName", "Network only" },
		{ "NetworkOnly.Name", "EAFSActiveType::NetworkOnly" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAFSActiveType::None" },
		{ "USBOnly.DisplayName", "USB only" },
		{ "USBOnly.Name", "EAFSActiveType::USBOnly" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidFileServer,
		nullptr,
		"EAFSActiveType",
		"EAFSActiveType::Type",
		Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidFileServer_EAFSActiveType()
	{
		if (!Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton, Z_Construct_UEnum_AndroidFileServer_EAFSActiveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAFSActiveType.InnerSingleton;
	}
	DEFINE_FUNCTION(UAndroidFileServerBPLibrary::execIsFileServerRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAFSActiveType::Type>*)Z_Param__Result=UAndroidFileServerBPLibrary::IsFileServerRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidFileServerBPLibrary::execStopFileServer)
	{
		P_GET_UBOOL(Z_Param_bUSB);
		P_GET_UBOOL(Z_Param_bNetwork);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAndroidFileServerBPLibrary::StopFileServer(Z_Param_bUSB,Z_Param_bNetwork);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAndroidFileServerBPLibrary::execStartFileServer)
	{
		P_GET_UBOOL(Z_Param_bUSB);
		P_GET_UBOOL(Z_Param_bNetwork);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAndroidFileServerBPLibrary::StartFileServer(Z_Param_bUSB,Z_Param_bNetwork,Z_Param_Port);
		P_NATIVE_END;
	}
	void UAndroidFileServerBPLibrary::StaticRegisterNativesUAndroidFileServerBPLibrary()
	{
		UClass* Class = UAndroidFileServerBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsFileServerRunning", &UAndroidFileServerBPLibrary::execIsFileServerRunning },
			{ "StartFileServer", &UAndroidFileServerBPLibrary::execStartFileServer },
			{ "StopFileServer", &UAndroidFileServerBPLibrary::execStopFileServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics
	{
		struct AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms
		{
			TEnumAsByte<EAFSActiveType::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms, ReturnValue), Z_Construct_UEnum_AndroidFileServer_EAFSActiveType, METADATA_PARAMS(nullptr, 0) }; // 1145789759
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidFileServer" },
		{ "Comment", "/** Check if Android FileServer is running */" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "ToolTip", "Check if Android FileServer is running" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidFileServerBPLibrary, nullptr, "IsFileServerRunning", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::AndroidFileServerBPLibrary_eventIsFileServerRunning_Parms), Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics
	{
		struct AndroidFileServerBPLibrary_eventStartFileServer_Parms
		{
			bool bUSB;
			bool bNetwork;
			int32 Port;
			bool ReturnValue;
		};
		static void NewProp_bUSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUSB;
		static void NewProp_bNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetwork;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB_SetBit(void* Obj)
	{
		((AndroidFileServerBPLibrary_eventStartFileServer_Parms*)Obj)->bUSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB = { "bUSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStartFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork_SetBit(void* Obj)
	{
		((AndroidFileServerBPLibrary_eventStartFileServer_Parms*)Obj)->bNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork = { "bNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStartFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AndroidFileServerBPLibrary_eventStartFileServer_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AndroidFileServerBPLibrary_eventStartFileServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStartFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bUSB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_bNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidFileServer" },
		{ "Comment", "/** Request startup of Android FileServer */" },
		{ "CPP_Default_bNetwork", "false" },
		{ "CPP_Default_bUSB", "true" },
		{ "CPP_Default_Port", "57099" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "ToolTip", "Request startup of Android FileServer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidFileServerBPLibrary, nullptr, "StartFileServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::AndroidFileServerBPLibrary_eventStartFileServer_Parms), Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics
	{
		struct AndroidFileServerBPLibrary_eventStopFileServer_Parms
		{
			bool bUSB;
			bool bNetwork;
			bool ReturnValue;
		};
		static void NewProp_bUSB_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUSB;
		static void NewProp_bNetwork_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNetwork;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB_SetBit(void* Obj)
	{
		((AndroidFileServerBPLibrary_eventStopFileServer_Parms*)Obj)->bUSB = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB = { "bUSB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStopFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork_SetBit(void* Obj)
	{
		((AndroidFileServerBPLibrary_eventStopFileServer_Parms*)Obj)->bNetwork = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork = { "bNetwork", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStopFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AndroidFileServerBPLibrary_eventStopFileServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AndroidFileServerBPLibrary_eventStopFileServer_Parms), &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bUSB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_bNetwork,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "AndroidFileServer" },
		{ "Comment", "/** Request termination of Android FileServer */" },
		{ "CPP_Default_bNetwork", "true" },
		{ "CPP_Default_bUSB", "true" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
		{ "ToolTip", "Request termination of Android FileServer" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidFileServerBPLibrary, nullptr, "StopFileServer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::AndroidFileServerBPLibrary_eventStopFileServer_Parms), Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidFileServerBPLibrary);
	UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary_NoRegister()
	{
		return UAndroidFileServerBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidFileServer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidFileServerBPLibrary_IsFileServerRunning, "IsFileServerRunning" }, // 1157098875
		{ &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StartFileServer, "StartFileServer" }, // 3977684262
		{ &Z_Construct_UFunction_UAndroidFileServerBPLibrary_StopFileServer, "StopFileServer" }, // 3500224636
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidFileServerBPLibrary.h" },
		{ "ModuleRelativePath", "Classes/AndroidFileServerBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidFileServerBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::ClassParams = {
		&UAndroidFileServerBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidFileServerBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton, Z_Construct_UClass_UAndroidFileServerBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidFileServerBPLibrary.OuterSingleton;
	}
	template<> ANDROIDFILESERVER_API UClass* StaticClass<UAndroidFileServerBPLibrary>()
	{
		return UAndroidFileServerBPLibrary::StaticClass();
	}
	UAndroidFileServerBPLibrary::UAndroidFileServerBPLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidFileServerBPLibrary);
	UAndroidFileServerBPLibrary::~UAndroidFileServerBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::EnumInfo[] = {
		{ EAFSActiveType_StaticEnum, TEXT("EAFSActiveType"), &Z_Registration_Info_UEnum_EAFSActiveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1145789759U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidFileServerBPLibrary, UAndroidFileServerBPLibrary::StaticClass, TEXT("UAndroidFileServerBPLibrary"), &Z_Registration_Info_UClass_UAndroidFileServerBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidFileServerBPLibrary), 8659122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_3747706604(TEXT("/Script/AndroidFileServer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidFileServer_Source_AndroidFileServer_Classes_AndroidFileServerBPLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
