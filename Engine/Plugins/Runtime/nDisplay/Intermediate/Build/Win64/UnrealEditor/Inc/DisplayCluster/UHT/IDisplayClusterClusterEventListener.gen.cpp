// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cluster/IDisplayClusterClusterEventListener.h"
#include "Cluster/DisplayClusterClusterEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIDisplayClusterClusterEventListener() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary();
	DISPLAYCLUSTER_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	struct DisplayClusterClusterEventListener_eventOnClusterEventBinary_Parms
	{
		FDisplayClusterClusterEventBinary Event;
	};
	struct DisplayClusterClusterEventListener_eventOnClusterEventJson_Parms
	{
		FDisplayClusterClusterEventJson Event;
	};
	void IDisplayClusterClusterEventListener::OnClusterEventBinary(FDisplayClusterClusterEventBinary const& Event)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnClusterEventBinary instead.");
	}
	void IDisplayClusterClusterEventListener::OnClusterEventJson(FDisplayClusterClusterEventJson const& Event)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnClusterEventJson instead.");
	}
	void UDisplayClusterClusterEventListener::StaticRegisterNativesUDisplayClusterClusterEventListener()
	{
	}
	struct Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterClusterEventListener_eventOnClusterEventBinary_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventBinary, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::NewProp_Event_MetaData)) }; // 1904386298
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// React on incoming binary cluster events\n" },
		{ "ModuleRelativePath", "Public/Cluster/IDisplayClusterClusterEventListener.h" },
		{ "ToolTip", "React on incoming binary cluster events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterClusterEventListener, nullptr, "OnClusterEventBinary", nullptr, nullptr, sizeof(DisplayClusterClusterEventListener_eventOnClusterEventBinary_Parms), Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Event;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterClusterEventListener_eventOnClusterEventJson_Parms, Event), Z_Construct_UScriptStruct_FDisplayClusterClusterEventJson, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::NewProp_Event_MetaData)) }; // 62572603
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::NewProp_Event,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "NDisplay" },
		{ "Comment", "// React on incoming JSON cluster events\n" },
		{ "ModuleRelativePath", "Public/Cluster/IDisplayClusterClusterEventListener.h" },
		{ "ToolTip", "React on incoming JSON cluster events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterClusterEventListener, nullptr, "OnClusterEventJson", nullptr, nullptr, sizeof(DisplayClusterClusterEventListener_eventOnClusterEventJson_Parms), Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterClusterEventListener);
	UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener_NoRegister()
	{
		return UDisplayClusterClusterEventListener::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventBinary, "OnClusterEventBinary" }, // 3670579392
		{ &Z_Construct_UFunction_UDisplayClusterClusterEventListener_OnClusterEventJson, "OnClusterEventJson" }, // 47292573
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Cluster/IDisplayClusterClusterEventListener.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDisplayClusterClusterEventListener>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::ClassParams = {
		&UDisplayClusterClusterEventListener::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterClusterEventListener()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterClusterEventListener.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterClusterEventListener.OuterSingleton, Z_Construct_UClass_UDisplayClusterClusterEventListener_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterClusterEventListener.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterClusterEventListener>()
	{
		return UDisplayClusterClusterEventListener::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterClusterEventListener);
	UDisplayClusterClusterEventListener::~UDisplayClusterClusterEventListener() {}
	static FName NAME_UDisplayClusterClusterEventListener_OnClusterEventBinary = FName(TEXT("OnClusterEventBinary"));
	void IDisplayClusterClusterEventListener::Execute_OnClusterEventBinary(UObject* O, FDisplayClusterClusterEventBinary const& Event)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDisplayClusterClusterEventListener::StaticClass()));
		DisplayClusterClusterEventListener_eventOnClusterEventBinary_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDisplayClusterClusterEventListener_OnClusterEventBinary);
		if (Func)
		{
			Parms.Event=Event;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UDisplayClusterClusterEventListener_OnClusterEventJson = FName(TEXT("OnClusterEventJson"));
	void IDisplayClusterClusterEventListener::Execute_OnClusterEventJson(UObject* O, FDisplayClusterClusterEventJson const& Event)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UDisplayClusterClusterEventListener::StaticClass()));
		DisplayClusterClusterEventListener_eventOnClusterEventJson_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UDisplayClusterClusterEventListener_OnClusterEventJson);
		if (Func)
		{
			Parms.Event=Event;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterClusterEventListener, UDisplayClusterClusterEventListener::StaticClass, TEXT("UDisplayClusterClusterEventListener"), &Z_Registration_Info_UClass_UDisplayClusterClusterEventListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterClusterEventListener), 3836146117U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_3092996052(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Cluster_IDisplayClusterClusterEventListener_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
