// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Audio/AudioPanelWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioPanelWidgetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UAudioPanelWidgetInterface();
	ENGINE_API UClass* Z_Construct_UClass_UAudioPanelWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct AudioPanelWidgetInterface_eventGetEditorName_Parms
	{
		FText ReturnValue;
	};
	struct AudioPanelWidgetInterface_eventGetIconBrushName_Parms
	{
		FName ReturnValue;
	};
	FText IAudioPanelWidgetInterface::GetEditorName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetEditorName instead.");
		AudioPanelWidgetInterface_eventGetEditorName_Parms Parms;
		return Parms.ReturnValue;
	}
	FName IAudioPanelWidgetInterface::GetIconBrushName()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetIconBrushName instead.");
		AudioPanelWidgetInterface_eventGetIconBrushName_Parms Parms;
		return Parms.ReturnValue;
	}
	void UAudioPanelWidgetInterface::StaticRegisterNativesUAudioPanelWidgetInterface()
	{
	}
	struct Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics
	{
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioPanelWidgetInterface_eventGetEditorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPanelWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPanelWidgetInterface, nullptr, "GetEditorName", nullptr, nullptr, sizeof(AudioPanelWidgetInterface_eventGetEditorName_Parms), Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AudioPanelWidgetInterface_eventGetIconBrushName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPanelWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioPanelWidgetInterface, nullptr, "GetIconBrushName", nullptr, nullptr, sizeof(AudioPanelWidgetInterface_eventGetIconBrushName_Parms), Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioPanelWidgetInterface);
	UClass* Z_Construct_UClass_UAudioPanelWidgetInterface_NoRegister()
	{
		return UAudioPanelWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAudioPanelWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioPanelWidgetInterface_GetEditorName, "GetEditorName" }, // 904721791
		{ &Z_Construct_UFunction_UAudioPanelWidgetInterface_GetIconBrushName, "GetIconBrushName" }, // 1069241100
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/AudioPanelWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAudioPanelWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::ClassParams = {
		&UAudioPanelWidgetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioPanelWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_UAudioPanelWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioPanelWidgetInterface.OuterSingleton, Z_Construct_UClass_UAudioPanelWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioPanelWidgetInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioPanelWidgetInterface>()
	{
		return UAudioPanelWidgetInterface::StaticClass();
	}
	UAudioPanelWidgetInterface::UAudioPanelWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioPanelWidgetInterface);
	UAudioPanelWidgetInterface::~UAudioPanelWidgetInterface() {}
	static FName NAME_UAudioPanelWidgetInterface_GetEditorName = FName(TEXT("GetEditorName"));
	FText IAudioPanelWidgetInterface::Execute_GetEditorName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAudioPanelWidgetInterface::StaticClass()));
		AudioPanelWidgetInterface_eventGetEditorName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAudioPanelWidgetInterface_GetEditorName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UAudioPanelWidgetInterface_GetIconBrushName = FName(TEXT("GetIconBrushName"));
	FName IAudioPanelWidgetInterface::Execute_GetIconBrushName(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UAudioPanelWidgetInterface::StaticClass()));
		AudioPanelWidgetInterface_eventGetIconBrushName_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UAudioPanelWidgetInterface_GetIconBrushName);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioPanelWidgetInterface, UAudioPanelWidgetInterface::StaticClass, TEXT("UAudioPanelWidgetInterface"), &Z_Registration_Info_UClass_UAudioPanelWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioPanelWidgetInterface), 3111936283U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_1053119477(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_AudioPanelWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
