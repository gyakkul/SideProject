// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualSubjects/LiveLinkBlueprintVirtualSubject.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkBlueprintVirtualSubject() {}
// Cross Module References
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseStaticData();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	static FName NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize = FName(TEXT("OnInitialize"));
	void ULiveLinkBlueprintVirtualSubject::OnInitialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULiveLinkBlueprintVirtualSubject_OnInitialize),NULL);
	}
	static FName NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate = FName(TEXT("OnUpdate"));
	void ULiveLinkBlueprintVirtualSubject::OnUpdate()
	{
		ProcessEvent(FindFunctionChecked(NAME_ULiveLinkBlueprintVirtualSubject_OnUpdate),NULL);
	}
	void ULiveLinkBlueprintVirtualSubject::StaticRegisterNativesULiveLinkBlueprintVirtualSubject()
	{
		UClass* Class = ULiveLinkBlueprintVirtualSubject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateVirtualSubjectFrameData_Internal", &ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectFrameData_Internal },
			{ "UpdateVirtualSubjectStaticData_Internal", &ULiveLinkBlueprintVirtualSubject::execUpdateVirtualSubjectStaticData_Internal },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "OnInitialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "OnUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics
	{
		struct LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms
		{
			FLiveLinkBaseFrameData InStruct;
			bool bInShouldStampCurrentTime;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static void NewProp_bInShouldStampCurrentTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInShouldStampCurrentTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms, InStruct), Z_Construct_UScriptStruct_FLiveLinkBaseFrameData, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct_MetaData)) }; // 1384013997
	void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime_SetBit(void* Obj)
	{
		((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms*)Obj)->bInShouldStampCurrentTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime = { "bInShouldStampCurrentTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_bInShouldStampCurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "UpdateVirtualSubjectFrameData_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectFrameData_Internal_Parms), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics
	{
		struct LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms
		{
			FLiveLinkBaseStaticData InStruct;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InStruct;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct = { "InStruct", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms, InStruct), Z_Construct_UScriptStruct_FLiveLinkBaseStaticData, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct_MetaData)) }; // 1789085157
	void Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms), &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_InStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "LiveLink" },
		{ "CustomStructureParam", "InStruct" },
		{ "CustomThunk", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, nullptr, "UpdateVirtualSubjectStaticData_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::LiveLinkBlueprintVirtualSubject_eventUpdateVirtualSubjectStaticData_Internal_Parms), Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkBlueprintVirtualSubject);
	UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_NoRegister()
	{
		return ULiveLinkBlueprintVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkVirtualSubject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnInitialize, "OnInitialize" }, // 3851874814
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_OnUpdate, "OnUpdate" }, // 473110250
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal, "UpdateVirtualSubjectFrameData_Internal" }, // 340628945
		{ &Z_Construct_UFunction_ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal, "UpdateVirtualSubjectStaticData_Internal" }, // 1603656892
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Base class for creating virtual subjects in Blueprints\n" },
		{ "IncludePath", "VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualSubjects/LiveLinkBlueprintVirtualSubject.h" },
		{ "ToolTip", "Base class for creating virtual subjects in Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkBlueprintVirtualSubject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams = {
		&ULiveLinkBlueprintVirtualSubject::StaticClass,
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
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton, Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkBlueprintVirtualSubject>()
	{
		return ULiveLinkBlueprintVirtualSubject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkBlueprintVirtualSubject);
	ULiveLinkBlueprintVirtualSubject::~ULiveLinkBlueprintVirtualSubject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkBlueprintVirtualSubject, ULiveLinkBlueprintVirtualSubject::StaticClass, TEXT("ULiveLinkBlueprintVirtualSubject"), &Z_Registration_Info_UClass_ULiveLinkBlueprintVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkBlueprintVirtualSubject), 3117762729U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_118812186(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_VirtualSubjects_LiveLinkBlueprintVirtualSubject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
