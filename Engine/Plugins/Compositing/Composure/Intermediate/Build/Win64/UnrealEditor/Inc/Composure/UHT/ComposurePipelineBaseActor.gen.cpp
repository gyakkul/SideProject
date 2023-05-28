// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposurePipelineBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePipelineBaseActor() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_AComposurePipelineBaseActor();
	COMPOSURE_API UClass* Z_Construct_UClass_AComposurePipelineBaseActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(AComposurePipelineBaseActor::execSetAutoRunChildrenAndSelf)
	{
		P_GET_UBOOL(Z_Param_bAutoRunChildAndSelf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoRunChildrenAndSelf(Z_Param_bAutoRunChildAndSelf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComposurePipelineBaseActor::execEnqueueRendering)
	{
		P_GET_UBOOL(Z_Param_bCameraCutThisFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnqueueRendering_Implementation(Z_Param_bCameraCutThisFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComposurePipelineBaseActor::execIsActivelyRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivelyRunning_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComposurePipelineBaseActor::execAreChildrenAndSelfAutoRun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreChildrenAndSelfAutoRun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AComposurePipelineBaseActor::execSetAutoRun)
	{
		P_GET_UBOOL(Z_Param_bNewAutoRunVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAutoRun(Z_Param_bNewAutoRunVal);
		P_NATIVE_END;
	}
	struct ComposurePipelineBaseActor_eventEnqueueRendering_Parms
	{
		bool bCameraCutThisFrame;
	};
	struct ComposurePipelineBaseActor_eventIsActivelyRunning_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ComposurePipelineBaseActor_eventIsActivelyRunning_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_AComposurePipelineBaseActor_EnqueueRendering = FName(TEXT("EnqueueRendering"));
	void AComposurePipelineBaseActor::EnqueueRendering(bool bCameraCutThisFrame)
	{
		ComposurePipelineBaseActor_eventEnqueueRendering_Parms Parms;
		Parms.bCameraCutThisFrame=bCameraCutThisFrame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AComposurePipelineBaseActor_EnqueueRendering),&Parms);
	}
	static FName NAME_AComposurePipelineBaseActor_IsActivelyRunning = FName(TEXT("IsActivelyRunning"));
	bool AComposurePipelineBaseActor::IsActivelyRunning() const
	{
		ComposurePipelineBaseActor_eventIsActivelyRunning_Parms Parms;
		const_cast<AComposurePipelineBaseActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AComposurePipelineBaseActor_IsActivelyRunning),&Parms);
		return !!Parms.ReturnValue;
	}
	void AComposurePipelineBaseActor::StaticRegisterNativesAComposurePipelineBaseActor()
	{
		UClass* Class = AComposurePipelineBaseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AreChildrenAndSelfAutoRun", &AComposurePipelineBaseActor::execAreChildrenAndSelfAutoRun },
			{ "EnqueueRendering", &AComposurePipelineBaseActor::execEnqueueRendering },
			{ "IsActivelyRunning", &AComposurePipelineBaseActor::execIsActivelyRunning },
			{ "SetAutoRun", &AComposurePipelineBaseActor::execSetAutoRun },
			{ "SetAutoRunChildrenAndSelf", &AComposurePipelineBaseActor::execSetAutoRunChildrenAndSelf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics
	{
		struct ComposurePipelineBaseActor_eventAreChildrenAndSelfAutoRun_Parms
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
	void Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposurePipelineBaseActor_eventAreChildrenAndSelfAutoRun_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposurePipelineBaseActor_eventAreChildrenAndSelfAutoRun_Parms), &Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComposurePipelineBaseActor, nullptr, "AreChildrenAndSelfAutoRun", nullptr, nullptr, sizeof(Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::ComposurePipelineBaseActor_eventAreChildrenAndSelfAutoRun_Parms), Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics
	{
		static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
	{
		((ComposurePipelineBaseActor_eventEnqueueRendering_Parms*)Obj)->bCameraCutThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposurePipelineBaseActor_eventEnqueueRendering_Parms), &Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::NewProp_bCameraCutThisFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure" },
		{ "Comment", "/** \n\x09 * Entry point for a composure Blueprint to do its render enqueuing from.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
		{ "ToolTip", "Entry point for a composure Blueprint to do its render enqueuing from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComposurePipelineBaseActor, nullptr, "EnqueueRendering", nullptr, nullptr, sizeof(ComposurePipelineBaseActor_eventEnqueueRendering_Parms), Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposurePipelineBaseActor_eventIsActivelyRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposurePipelineBaseActor_eventIsActivelyRunning_Parms), &Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure" },
		{ "Comment", "/** \n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComposurePipelineBaseActor, nullptr, "IsActivelyRunning", nullptr, nullptr, sizeof(ComposurePipelineBaseActor_eventIsActivelyRunning_Parms), Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics
	{
		struct ComposurePipelineBaseActor_eventSetAutoRun_Parms
		{
			bool bNewAutoRunVal;
		};
		static void NewProp_bNewAutoRunVal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewAutoRunVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::NewProp_bNewAutoRunVal_SetBit(void* Obj)
	{
		((ComposurePipelineBaseActor_eventSetAutoRun_Parms*)Obj)->bNewAutoRunVal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::NewProp_bNewAutoRunVal = { "bNewAutoRunVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposurePipelineBaseActor_eventSetAutoRun_Parms), &Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::NewProp_bNewAutoRunVal_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::NewProp_bNewAutoRunVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComposurePipelineBaseActor, nullptr, "SetAutoRun", nullptr, nullptr, sizeof(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::ComposurePipelineBaseActor_eventSetAutoRun_Parms), Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics
	{
		struct ComposurePipelineBaseActor_eventSetAutoRunChildrenAndSelf_Parms
		{
			bool bAutoRunChildAndSelf;
		};
		static void NewProp_bAutoRunChildAndSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRunChildAndSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::NewProp_bAutoRunChildAndSelf_SetBit(void* Obj)
	{
		((ComposurePipelineBaseActor_eventSetAutoRunChildrenAndSelf_Parms*)Obj)->bAutoRunChildAndSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::NewProp_bAutoRunChildAndSelf = { "bAutoRunChildAndSelf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposurePipelineBaseActor_eventSetAutoRunChildrenAndSelf_Parms), &Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::NewProp_bAutoRunChildAndSelf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::NewProp_bAutoRunChildAndSelf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Composure|Element" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AComposurePipelineBaseActor, nullptr, "SetAutoRunChildrenAndSelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::ComposurePipelineBaseActor_eventSetAutoRunChildrenAndSelf_Parms), Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AComposurePipelineBaseActor);
	UClass* Z_Construct_UClass_AComposurePipelineBaseActor_NoRegister()
	{
		return AComposurePipelineBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AComposurePipelineBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRun_MetaData[];
#endif
		static void NewProp_bAutoRun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRun;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunInEditor_MetaData[];
#endif
		static void NewProp_bRunInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunInEditor;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRunChildElementsAndSelf_MetaData[];
#endif
		static void NewProp_bAutoRunChildElementsAndSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRunChildElementsAndSelf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComposurePipelineBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AComposurePipelineBaseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AComposurePipelineBaseActor_AreChildrenAndSelfAutoRun, "AreChildrenAndSelfAutoRun" }, // 1180059468
		{ &Z_Construct_UFunction_AComposurePipelineBaseActor_EnqueueRendering, "EnqueueRendering" }, // 2625009899
		{ &Z_Construct_UFunction_AComposurePipelineBaseActor_IsActivelyRunning, "IsActivelyRunning" }, // 3694439234
		{ &Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRun, "SetAutoRun" }, // 3870564245
		{ &Z_Construct_UFunction_AComposurePipelineBaseActor_SetAutoRunChildrenAndSelf, "SetAutoRunChildrenAndSelf" }, // 3921074856
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComposurePipelineBaseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Actor designed to implement compositing pipeline in a blueprint.\n */" },
		{ "IncludePath", "ComposurePipelineBaseActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
		{ "ShortTooltip", "Actor designed to implement compositing pipeline in a blueprint." },
		{ "ToolTip", "Actor designed to implement compositing pipeline in a blueprint." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun_MetaData[] = {
		{ "BlueprintSetter", "SetAutoRun" },
		{ "Category", "Composure|Ticking" },
		{ "Comment", "/** \n\x09 * When set, we'll call EnqueueRendering() each frame automatically. If left \n\x09 * off, it is up to the user to manually call their composure rendering. \n\x09 * Toggle this on/off at runtime to enable/disable this pipeline.\n\x09 */" },
		{ "DisplayAfter", "bEnableChildElementsAndSelf" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
		{ "ToolTip", "When set, we'll call EnqueueRendering() each frame automatically. If left\noff, it is up to the user to manually call their composure rendering.\nToggle this on/off at runtime to enable/disable this pipeline." },
	};
#endif
	void Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun_SetBit(void* Obj)
	{
		((AComposurePipelineBaseActor*)Obj)->bAutoRun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun = { "bAutoRun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AComposurePipelineBaseActor), &Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor_MetaData[] = {
		{ "Category", "Composure|Ticking" },
		{ "Comment", "/** With bAutoRun, this will run EnqueueRendering() in editor - enqueuing render calls along with Editor scene rendering. */" },
		{ "DisplayAfter", "bAutoRun" },
		{ "EditCondition", "bAutoRun" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
		{ "ToolTip", "With bAutoRun, this will run EnqueueRendering() in editor - enqueuing render calls along with Editor scene rendering." },
	};
#endif
	void Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor_SetBit(void* Obj)
	{
		((AComposurePipelineBaseActor*)Obj)->bRunInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor = { "bRunInEditor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AComposurePipelineBaseActor), &Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf_MetaData[] = {
		{ "BlueprintGetter", "AreChildrenAndSelfAutoRun" },
		{ "BlueprintSetter", "SetAutoRunChildrenAndSelf" },
		{ "Category", "Composure|Ticking" },
		{ "Comment", "/**\n\x09 * When set to false, all composure elements including itself's rendering will not automatically be called in the pipeline.\n\x09 * When set to true, all of its children and its self's rendering will be called every frame.\n\x09 */" },
		{ "DisplayName", "Auto run children and self" },
		{ "ModuleRelativePath", "Classes/ComposurePipelineBaseActor.h" },
		{ "ToolTip", "When set to false, all composure elements including itself's rendering will not automatically be called in the pipeline.\nWhen set to true, all of its children and its self's rendering will be called every frame." },
	};
#endif
	void Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf_SetBit(void* Obj)
	{
		((AComposurePipelineBaseActor*)Obj)->bAutoRunChildElementsAndSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf = { "bAutoRunChildElementsAndSelf", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AComposurePipelineBaseActor), &Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AComposurePipelineBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRun,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bRunInEditor,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AComposurePipelineBaseActor_Statics::NewProp_bAutoRunChildElementsAndSelf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComposurePipelineBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComposurePipelineBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AComposurePipelineBaseActor_Statics::ClassParams = {
		&AComposurePipelineBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AComposurePipelineBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComposurePipelineBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComposurePipelineBaseActor()
	{
		if (!Z_Registration_Info_UClass_AComposurePipelineBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AComposurePipelineBaseActor.OuterSingleton, Z_Construct_UClass_AComposurePipelineBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AComposurePipelineBaseActor.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<AComposurePipelineBaseActor>()
	{
		return AComposurePipelineBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComposurePipelineBaseActor);
	AComposurePipelineBaseActor::~AComposurePipelineBaseActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AComposurePipelineBaseActor, AComposurePipelineBaseActor::StaticClass, TEXT("AComposurePipelineBaseActor"), &Z_Registration_Info_UClass_AComposurePipelineBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AComposurePipelineBaseActor), 387160787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_1020826478(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePipelineBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
