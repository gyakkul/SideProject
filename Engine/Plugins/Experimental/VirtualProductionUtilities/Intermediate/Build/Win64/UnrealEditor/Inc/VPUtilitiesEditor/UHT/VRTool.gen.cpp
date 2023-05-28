// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRTool() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVPTransientEditorTickableActorBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVRTool();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_AVRTool_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRTool::execGetReceivesEditorInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetReceivesEditorInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRTool::execSetReceivesEditorInput)
	{
		P_GET_UBOOL(Z_Param_bInValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReceivesEditorInput(Z_Param_bInValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVRTool::execGetInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputComponent**)Z_Param__Result=P_THIS->GetInputComponent();
		P_NATIVE_END;
	}
	void AVRTool::StaticRegisterNativesAVRTool()
	{
		UClass* Class = AVRTool::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInputComponent", &AVRTool::execGetInputComponent },
			{ "GetReceivesEditorInput", &AVRTool::execGetReceivesEditorInput },
			{ "SetReceivesEditorInput", &AVRTool::execSetReceivesEditorInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRTool_GetInputComponent_Statics
	{
		struct VRTool_eventGetInputComponent_Parms
		{
			UInputComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRTool_eventGetInputComponent_Parms, ReturnValue), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input|Editor" },
		{ "Comment", "/** Returns the current InputComponent on this utility actor. This will be NULL unless bReceivesEditorInput is set to true. */" },
		{ "ModuleRelativePath", "Public/VRTool.h" },
		{ "ToolTip", "Returns the current InputComponent on this utility actor. This will be NULL unless bReceivesEditorInput is set to true." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRTool, nullptr, "GetInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::VRTool_eventGetInputComponent_Parms), Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRTool_GetInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRTool_GetInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics
	{
		struct VRTool_eventGetReceivesEditorInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VRTool_eventGetReceivesEditorInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VRTool_eventGetReceivesEditorInput_Parms), &Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Input|Editor" },
		{ "ModuleRelativePath", "Public/VRTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRTool, nullptr, "GetReceivesEditorInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::VRTool_eventGetReceivesEditorInput_Parms), Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRTool_GetReceivesEditorInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRTool_GetReceivesEditorInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics
	{
		struct VRTool_eventSetReceivesEditorInput_Parms
		{
			bool bInValue;
		};
		static void NewProp_bInValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::NewProp_bInValue_SetBit(void* Obj)
	{
		((VRTool_eventSetReceivesEditorInput_Parms*)Obj)->bInValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::NewProp_bInValue = { "bInValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VRTool_eventSetReceivesEditorInput_Parms), &Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::NewProp_bInValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::NewProp_bInValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Input|Editor" },
		{ "ModuleRelativePath", "Public/VRTool.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRTool, nullptr, "SetReceivesEditorInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::VRTool_eventSetReceivesEditorInput_Parms), Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRTool_SetReceivesEditorInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRTool_SetReceivesEditorInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRTool);
	UClass* Z_Construct_UClass_AVRTool_NoRegister()
	{
		return AVRTool::StaticClass();
	}
	struct Z_Construct_UClass_AVRTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorOnlyInputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesEditorInput_MetaData[];
#endif
		static void NewProp_bReceivesEditorInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesEditorInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVPTransientEditorTickableActorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRTool_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRTool_GetInputComponent, "GetInputComponent" }, // 3668998317
		{ &Z_Construct_UFunction_AVRTool_GetReceivesEditorInput, "GetReceivesEditorInput" }, // 3839440015
		{ &Z_Construct_UFunction_AVRTool_SetReceivesEditorInput, "SetReceivesEditorInput" }, // 245562692
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for virtual production VR tools\n */" },
		{ "IncludePath", "VRTool.h" },
		{ "ModuleRelativePath", "Public/VRTool.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for virtual production VR tools" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTool_Statics::NewProp_EditorOnlyInputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VRTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVRTool_Statics::NewProp_EditorOnlyInputComponent = { "EditorOnlyInputComponent", nullptr, (EPropertyFlags)0x0044000000282008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVRTool, EditorOnlyInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRTool_Statics::NewProp_EditorOnlyInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRTool_Statics::NewProp_EditorOnlyInputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput_MetaData[] = {
		{ "BlueprintGetter", "GetReceivesEditorInput" },
		{ "BlueprintSetter", "SetReceivesEditorInput" },
		{ "Category", "Input|Editor" },
		{ "Comment", "/** If set to true, then this actor will be able to recieve input delegate callbacks when in the editor. */" },
		{ "ModuleRelativePath", "Public/VRTool.h" },
		{ "ToolTip", "If set to true, then this actor will be able to recieve input delegate callbacks when in the editor." },
	};
#endif
	void Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput_SetBit(void* Obj)
	{
		((AVRTool*)Obj)->bReceivesEditorInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput = { "bReceivesEditorInput", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVRTool), &Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRTool_Statics::NewProp_EditorOnlyInputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRTool_Statics::NewProp_bReceivesEditorInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRTool_Statics::ClassParams = {
		&AVRTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVRTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRTool_Statics::PropPointers),
		0,
		0x008000ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVRTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRTool()
	{
		if (!Z_Registration_Info_UClass_AVRTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRTool.OuterSingleton, Z_Construct_UClass_AVRTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRTool.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<AVRTool>()
	{
		return AVRTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRTool);
	AVRTool::~AVRTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRTool, AVRTool::StaticClass, TEXT("AVRTool"), &Z_Registration_Info_UClass_AVRTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRTool), 3871714188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_2877345811(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Public_VRTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
