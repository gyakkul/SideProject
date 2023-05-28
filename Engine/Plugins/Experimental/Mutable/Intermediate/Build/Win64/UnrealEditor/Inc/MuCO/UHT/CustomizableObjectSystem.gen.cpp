// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableObjectSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectSystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstanceLODManagementBase_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectSystem();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectSystem_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSystemImageProvider();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSystemImageProvider_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UDefaultImageProvider_NoRegister();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo;
class UScriptStruct* FPendingReleaseSkeletalMeshInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("PendingReleaseSkeletalMeshInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FPendingReleaseSkeletalMeshInfo>()
{
	return FPendingReleaseSkeletalMeshInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStamp_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeStamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingReleaseSkeletalMeshInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPendingReleaseSkeletalMeshInfo, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_TimeStamp_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPendingReleaseSkeletalMeshInfo, TimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_TimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_TimeStamp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewProp_TimeStamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"PendingReleaseSkeletalMeshInfo",
		sizeof(FPendingReleaseSkeletalMeshInfo),
		alignof(FPendingReleaseSkeletalMeshInfo),
		Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo.InnerSingleton, Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo.InnerSingleton;
	}
	void UCustomizableSystemImageProvider::StaticRegisterNativesUCustomizableSystemImageProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableSystemImageProvider);
	UClass* Z_Construct_UClass_UCustomizableSystemImageProvider_NoRegister()
	{
		return UCustomizableSystemImageProvider::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableSystemImageProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//\n" },
		{ "IncludePath", "MuCO/CustomizableObjectSystem.h" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableSystemImageProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::ClassParams = {
		&UCustomizableSystemImageProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableSystemImageProvider()
	{
		if (!Z_Registration_Info_UClass_UCustomizableSystemImageProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableSystemImageProvider.OuterSingleton, Z_Construct_UClass_UCustomizableSystemImageProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableSystemImageProvider.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableSystemImageProvider>()
	{
		return UCustomizableSystemImageProvider::StaticClass();
	}
	UCustomizableSystemImageProvider::UCustomizableSystemImageProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableSystemImageProvider);
	UCustomizableSystemImageProvider::~UCustomizableSystemImageProvider() {}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execSetReleaseMutableTexturesImmediately)
	{
		P_GET_UBOOL(Z_Param_bReleaseTextures);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReleaseMutableTexturesImmediately(Z_Param_bReleaseTextures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetAverageBuildTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAverageBuildTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetTextureMemoryUsed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTextureMemoryUsed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetTotalInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetNumPendingInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumPendingInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetNumInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetPluginVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPluginVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectSystem::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomizableObjectSystem**)Z_Param__Result=UCustomizableObjectSystem::GetInstance();
		P_NATIVE_END;
	}
	void UCustomizableObjectSystem::StaticRegisterNativesUCustomizableObjectSystem()
	{
		UClass* Class = UCustomizableObjectSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAverageBuildTime", &UCustomizableObjectSystem::execGetAverageBuildTime },
			{ "GetInstance", &UCustomizableObjectSystem::execGetInstance },
			{ "GetNumInstances", &UCustomizableObjectSystem::execGetNumInstances },
			{ "GetNumPendingInstances", &UCustomizableObjectSystem::execGetNumPendingInstances },
			{ "GetPluginVersion", &UCustomizableObjectSystem::execGetPluginVersion },
			{ "GetTextureMemoryUsed", &UCustomizableObjectSystem::execGetTextureMemoryUsed },
			{ "GetTotalInstances", &UCustomizableObjectSystem::execGetTotalInstances },
			{ "SetReleaseMutableTexturesImmediately", &UCustomizableObjectSystem::execSetReleaseMutableTexturesImmediately },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics
	{
		struct CustomizableObjectSystem_eventGetAverageBuildTime_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetAverageBuildTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Return the average build/update time of an instance in ms.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Return the average build/update time of an instance in ms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetAverageBuildTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::CustomizableObjectSystem_eventGetAverageBuildTime_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics
	{
		struct CustomizableObjectSystem_eventGetInstance_Parms
		{
			UCustomizableObjectSystem* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObjectSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Get the singleton object. It will be created if it doesn't exist yet.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Get the singleton object. It will be created if it doesn't exist yet." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::CustomizableObjectSystem_eventGetInstance_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics
	{
		struct CustomizableObjectSystem_eventGetNumInstances_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetNumInstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Get the number of instances built and alive.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Get the number of instances built and alive." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetNumInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::CustomizableObjectSystem_eventGetNumInstances_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics
	{
		struct CustomizableObjectSystem_eventGetNumPendingInstances_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetNumPendingInstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Get the number of instances waiting to be updated.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Get the number of instances waiting to be updated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetNumPendingInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::CustomizableObjectSystem_eventGetNumPendingInstances_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics
	{
		struct CustomizableObjectSystem_eventGetPluginVersion_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetPluginVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Find out the version of the plugin\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Find out the version of the plugin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetPluginVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::CustomizableObjectSystem_eventGetPluginVersion_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics
	{
		struct CustomizableObjectSystem_eventGetTextureMemoryUsed_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetTextureMemoryUsed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Get the amount of memory in use for textures generated by mutable.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Get the amount of memory in use for textures generated by mutable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetTextureMemoryUsed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::CustomizableObjectSystem_eventGetTextureMemoryUsed_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics
	{
		struct CustomizableObjectSystem_eventGetTotalInstances_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectSystem_eventGetTotalInstances_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// Get the total number of instances includingbuilt and not built.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Get the total number of instances includingbuilt and not built." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "GetTotalInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::CustomizableObjectSystem_eventGetTotalInstances_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics
	{
		struct CustomizableObjectSystem_eventSetReleaseMutableTexturesImmediately_Parms
		{
			bool bReleaseTextures;
		};
		static void NewProp_bReleaseTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReleaseTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::NewProp_bReleaseTextures_SetBit(void* Obj)
	{
		((CustomizableObjectSystem_eventSetReleaseMutableTexturesImmediately_Parms*)Obj)->bReleaseTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::NewProp_bReleaseTextures = { "bReleaseTextures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectSystem_eventSetReleaseMutableTexturesImmediately_Parms), &Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::NewProp_bReleaseTextures_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::NewProp_bReleaseTextures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::Function_MetaDataParams[] = {
		{ "Category", "Status" },
		{ "Comment", "// If set to true, Mutable will release Mutable-generated textures immediately when they are no longer used without waiting for GC\n// IMPORTANT!!! Do NOT keep references to any Mutable generated textures or skeletal meshes if this is enabled,\n// they are owned by Mutable and will be destroyed without notice\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "If set to true, Mutable will release Mutable-generated textures immediately when they are no longer used without waiting for GC\nIMPORTANT!!! Do NOT keep references to any Mutable generated textures or skeletal meshes if this is enabled,\nthey are owned by Mutable and will be destroyed without notice" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectSystem, nullptr, "SetReleaseMutableTexturesImmediately", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::CustomizableObjectSystem_eventSetReleaseMutableTexturesImmediately_Parms), Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectSystem);
	UClass* Z_Construct_UClass_UCustomizableObjectSystem_NoRegister()
	{
		return UCustomizableObjectSystem::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingReleaseSkeletalMesh_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingReleaseSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingReleaseSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImageProvider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultImageProvider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceLODManagement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultInstanceLODManagement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInstanceLODManagement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentInstanceLODManagement;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProtectedCachedTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProtectedCachedTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProtectedCachedTextures;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableObjectSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetAverageBuildTime, "GetAverageBuildTime" }, // 2878707592
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetInstance, "GetInstance" }, // 4046210108
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetNumInstances, "GetNumInstances" }, // 1995167041
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetNumPendingInstances, "GetNumPendingInstances" }, // 3307516470
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetPluginVersion, "GetPluginVersion" }, // 1340065137
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetTextureMemoryUsed, "GetTextureMemoryUsed" }, // 1848322144
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_GetTotalInstances, "GetTotalInstances" }, // 737353472
		{ &Z_Construct_UFunction_UCustomizableObjectSystem_SetReleaseMutableTexturesImmediately, "SetReleaseMutableTexturesImmediately" }, // 339640676
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MuCO/CustomizableObjectSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh_Inner = { "PendingReleaseSkeletalMesh", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo, METADATA_PARAMS(nullptr, 0) }; // 4171208576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh = { "PendingReleaseSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectSystem, PendingReleaseSkeletalMesh), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh_MetaData)) }; // 4171208576
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultImageProvider_MetaData[] = {
		{ "Comment", "/** Mutable default image provider. Used by the COIEditor and Instance/Descriptor APIs. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Mutable default image provider. Used by the COIEditor and Instance/Descriptor APIs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultImageProvider = { "DefaultImageProvider", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectSystem, DefaultImageProvider), Z_Construct_UClass_UDefaultImageProvider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultImageProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultImageProvider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultInstanceLODManagement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultInstanceLODManagement = { "DefaultInstanceLODManagement", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectSystem, DefaultInstanceLODManagement), Z_Construct_UClass_UCustomizableInstanceLODManagementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultInstanceLODManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultInstanceLODManagement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_CurrentInstanceLODManagement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_CurrentInstanceLODManagement = { "CurrentInstanceLODManagement", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectSystem, CurrentInstanceLODManagement), Z_Construct_UClass_UCustomizableInstanceLODManagementBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_CurrentInstanceLODManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_CurrentInstanceLODManagement_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures_Inner = { "ProtectedCachedTextures", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures_MetaData[] = {
		{ "Comment", "// Array where textures are added temporarily while the mutable thread may want to\n// reused them for some instance under construction.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectSystem.h" },
		{ "ToolTip", "Array where textures are added temporarily while the mutable thread may want to\nreused them for some instance under construction." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures = { "ProtectedCachedTextures", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectSystem, ProtectedCachedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectSystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_PendingReleaseSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultImageProvider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_DefaultInstanceLODManagement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_CurrentInstanceLODManagement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectSystem_Statics::NewProp_ProtectedCachedTextures,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectSystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectSystem_Statics::ClassParams = {
		&UCustomizableObjectSystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableObjectSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectSystem()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectSystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectSystem.OuterSingleton, Z_Construct_UClass_UCustomizableObjectSystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectSystem.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableObjectSystem>()
	{
		return UCustomizableObjectSystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectSystem);
	UCustomizableObjectSystem::~UCustomizableObjectSystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics::ScriptStructInfo[] = {
		{ FPendingReleaseSkeletalMeshInfo::StaticStruct, Z_Construct_UScriptStruct_FPendingReleaseSkeletalMeshInfo_Statics::NewStructOps, TEXT("PendingReleaseSkeletalMeshInfo"), &Z_Registration_Info_UScriptStruct_PendingReleaseSkeletalMeshInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPendingReleaseSkeletalMeshInfo), 4171208576U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableSystemImageProvider, UCustomizableSystemImageProvider::StaticClass, TEXT("UCustomizableSystemImageProvider"), &Z_Registration_Info_UClass_UCustomizableSystemImageProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableSystemImageProvider), 2328575197U) },
		{ Z_Construct_UClass_UCustomizableObjectSystem, UCustomizableObjectSystem::StaticClass, TEXT("UCustomizableObjectSystem"), &Z_Registration_Info_UClass_UCustomizableObjectSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectSystem), 2597674762U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_3881179924(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectSystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
