// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassLODSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLODSubsystem() {}
// Cross Module References
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FIndexedHandleBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODSubsystem();
	MASSLOD_API UClass* Z_Construct_UClass_UMassLODSubsystem_NoRegister();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FMassViewerHandle();
	MASSLOD_API UScriptStruct* Z_Construct_UScriptStruct_FViewerInfo();
	UPackage* Z_Construct_UPackage__Script_MassLOD();
// End Cross Module References

static_assert(std::is_polymorphic<FMassViewerHandle>() == std::is_polymorphic<FIndexedHandleBase>(), "USTRUCT FMassViewerHandle cannot be polymorphic unless super FIndexedHandleBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassViewerHandle;
class UScriptStruct* FMassViewerHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassViewerHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassViewerHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassViewerHandle, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("MassViewerHandle"));
	}
	return Z_Registration_Info_UScriptStruct_MassViewerHandle.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FMassViewerHandle>()
{
	return FMassViewerHandle::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassViewerHandle_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassViewerHandle_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Handle that lets you reference the concept of a viewer\n */" },
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
		{ "ToolTip", "* Handle that lets you reference the concept of a viewer" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassViewerHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassViewerHandle>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassViewerHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		Z_Construct_UScriptStruct_FIndexedHandleBase,
		&NewStructOps,
		"MassViewerHandle",
		sizeof(FMassViewerHandle),
		alignof(FMassViewerHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassViewerHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassViewerHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassViewerHandle()
	{
		if (!Z_Registration_Info_UScriptStruct_MassViewerHandle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassViewerHandle.InnerSingleton, Z_Construct_UScriptStruct_FMassViewerHandle_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassViewerHandle.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewerInfo;
class UScriptStruct* FViewerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewerInfo, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("ViewerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ViewerInfo.OuterSingleton;
}
template<> MASSLOD_API UScriptStruct* StaticStruct<FViewerInfo>()
{
	return FViewerInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FViewerInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewerInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FViewerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewerInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FViewerInfo_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FViewerInfo_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FViewerInfo, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FViewerInfo_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewerInfo_Statics::NewProp_PlayerController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewerInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewerInfo_Statics::NewProp_PlayerController,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
		nullptr,
		&NewStructOps,
		"ViewerInfo",
		sizeof(FViewerInfo),
		alignof(FViewerInfo),
		Z_Construct_UScriptStruct_FViewerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FViewerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FViewerInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ViewerInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewerInfo.InnerSingleton, Z_Construct_UScriptStruct_FViewerInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ViewerInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(UMassLODSubsystem::execOnPlayerControllerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerControllerEndPlay(Z_Param_Actor,EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void UMassLODSubsystem::StaticRegisterNativesUMassLODSubsystem()
	{
		UClass* Class = UMassLODSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerControllerEndPlay", &UMassLODSubsystem::execOnPlayerControllerEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics
	{
		struct MassLODSubsystem_eventOnPlayerControllerEndPlay_Parms
		{
			AActor* Actor;
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassLODSubsystem_eventOnPlayerControllerEndPlay_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MassLODSubsystem_eventOnPlayerControllerEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Player controller EndPlay callback, removing viewers from the list */" },
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
		{ "ToolTip", "Player controller EndPlay callback, removing viewers from the list" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassLODSubsystem, nullptr, "OnPlayerControllerEndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::MassLODSubsystem_eventOnPlayerControllerEndPlay_Parms), Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassLODSubsystem);
	UClass* Z_Construct_UClass_UMassLODSubsystem_NoRegister()
	{
		return UMassLODSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassLODSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Viewers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Viewers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Viewers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewerMap_ValueProp;
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ViewerMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewerMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ViewerMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassLODSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassLOD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassLODSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassLODSubsystem_OnPlayerControllerEndPlay, "OnPlayerControllerEndPlay" }, // 4020184106
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLODSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * Manager responsible to manage and synchronized available viewers\n */" },
		{ "IncludePath", "MassLODSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
		{ "ToolTip", "* Manager responsible to manage and synchronized available viewers" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers_Inner = { "Viewers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FViewerInfo, METADATA_PARAMS(nullptr, 0) }; // 3175047567
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers_MetaData[] = {
		{ "Comment", "/** The actual array of viewer's information*/" },
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
		{ "ToolTip", "The actual array of viewer's information" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers = { "Viewers", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLODSubsystem, Viewers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers_MetaData)) }; // 3175047567
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_ValueProp = { "ViewerMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMassViewerHandle, METADATA_PARAMS(nullptr, 0) }; // 2125960232
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_Key_KeyProp = { "ViewerMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_MetaData[] = {
		{ "Comment", "/** The map that do reverse look up to get ViewerHandle */" },
		{ "ModuleRelativePath", "Public/MassLODSubsystem.h" },
		{ "ToolTip", "The map that do reverse look up to get ViewerHandle" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap = { "ViewerMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassLODSubsystem, ViewerMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_MetaData)) }; // 2125960232
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassLODSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_Viewers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassLODSubsystem_Statics::NewProp_ViewerMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassLODSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassLODSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassLODSubsystem_Statics::ClassParams = {
		&UMassLODSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMassLODSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassLODSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassLODSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassLODSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassLODSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassLODSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassLODSubsystem.OuterSingleton, Z_Construct_UClass_UMassLODSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassLODSubsystem.OuterSingleton;
	}
	template<> MASSLOD_API UClass* StaticClass<UMassLODSubsystem>()
	{
		return UMassLODSubsystem::StaticClass();
	}
	UMassLODSubsystem::UMassLODSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassLODSubsystem);
	UMassLODSubsystem::~UMassLODSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FMassViewerHandle::StaticStruct, Z_Construct_UScriptStruct_FMassViewerHandle_Statics::NewStructOps, TEXT("MassViewerHandle"), &Z_Registration_Info_UScriptStruct_MassViewerHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassViewerHandle), 2125960232U) },
		{ FViewerInfo::StaticStruct, Z_Construct_UScriptStruct_FViewerInfo_Statics::NewStructOps, TEXT("ViewerInfo"), &Z_Registration_Info_UScriptStruct_ViewerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewerInfo), 3175047567U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassLODSubsystem, UMassLODSubsystem::StaticClass, TEXT("UMassLODSubsystem"), &Z_Registration_Info_UClass_UMassLODSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassLODSubsystem), 3288020773U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_176616226(TEXT("/Script/MassLOD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
