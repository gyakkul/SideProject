// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElements/CompositingElementInputs.h"
#include "../Public/CompositingElements/CompositingMaterialPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingElementInputs() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingInputInterface();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingInputInterface_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingInputInterfaceProxy();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingInputInterfaceProxy_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingMediaInput();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingMediaInput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UMediaTextureCompositingInput();
	COMPOSURE_API UClass* Z_Construct_UClass_UMediaTextureCompositingInput_NoRegister();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositingMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UCompositingMediaInput::StaticRegisterNativesUCompositingMediaInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingMediaInput);
	UClass* Z_Construct_UClass_UCompositingMediaInput_NoRegister()
	{
		return UCompositingMediaInput::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingMediaInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTransformMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MediaTransformMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTestPlateMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultTestPlateMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FallbackMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FallbackMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingMediaInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementInputs.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_MediaTransformMaterial_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "MediaSource" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_MediaTransformMaterial = { "MediaTransformMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingMediaInput, MediaTransformMaterial), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_MediaTransformMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_MediaTransformMaterial_MetaData)) }; // 3535646560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingMediaInput, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultTestPlateMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultTestPlateMaterial = { "DefaultTestPlateMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingMediaInput, DefaultTestPlateMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultTestPlateMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultTestPlateMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_FallbackMID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_FallbackMID = { "FallbackMID", nullptr, (EPropertyFlags)0x00c4000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingMediaInput, FallbackMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_FallbackMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_FallbackMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingMediaInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_MediaTransformMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_DefaultTestPlateMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingMediaInput_Statics::NewProp_FallbackMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingMediaInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingMediaInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingMediaInput_Statics::ClassParams = {
		&UCompositingMediaInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositingMediaInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaInput_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingMediaInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingMediaInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingMediaInput()
	{
		if (!Z_Registration_Info_UClass_UCompositingMediaInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingMediaInput.OuterSingleton, Z_Construct_UClass_UCompositingMediaInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingMediaInput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingMediaInput>()
	{
		return UCompositingMediaInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingMediaInput);
	UCompositingMediaInput::~UCompositingMediaInput() {}
	void UMediaTextureCompositingInput::StaticRegisterNativesUMediaTextureCompositingInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaTextureCompositingInput);
	UClass* Z_Construct_UClass_UMediaTextureCompositingInput_NoRegister()
	{
		return UMediaTextureCompositingInput::StaticClass();
	}
	struct Z_Construct_UClass_UMediaTextureCompositingInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaTextureCompositingInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingMediaInput,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTextureCompositingInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementInputs.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaTextureCompositingInput_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaTextureCompositingInput_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaTextureCompositingInput, MediaSource), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaTextureCompositingInput_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTextureCompositingInput_Statics::NewProp_MediaSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaTextureCompositingInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaTextureCompositingInput_Statics::NewProp_MediaSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaTextureCompositingInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaTextureCompositingInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaTextureCompositingInput_Statics::ClassParams = {
		&UMediaTextureCompositingInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMediaTextureCompositingInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTextureCompositingInput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaTextureCompositingInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaTextureCompositingInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaTextureCompositingInput()
	{
		if (!Z_Registration_Info_UClass_UMediaTextureCompositingInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaTextureCompositingInput.OuterSingleton, Z_Construct_UClass_UMediaTextureCompositingInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaTextureCompositingInput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMediaTextureCompositingInput>()
	{
		return UMediaTextureCompositingInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaTextureCompositingInput);
	UMediaTextureCompositingInput::~UMediaTextureCompositingInput() {}
	DEFINE_FUNCTION(ICompositingInputInterface::execOnFrameEnd)
	{
		P_GET_OBJECT(UCompositingInputInterfaceProxy,Z_Param_Proxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFrameEnd_Implementation(Z_Param_Proxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICompositingInputInterface::execGenerateInput)
	{
		P_GET_OBJECT(UCompositingInputInterfaceProxy,Z_Param_Proxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GenerateInput_Implementation(Z_Param_Proxy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ICompositingInputInterface::execOnFrameBegin)
	{
		P_GET_OBJECT(UCompositingInputInterfaceProxy,Z_Param_Proxy);
		P_GET_UBOOL(Z_Param_bCameraCutThisFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFrameBegin_Implementation(Z_Param_Proxy,Z_Param_bCameraCutThisFrame);
		P_NATIVE_END;
	}
	struct CompositingInputInterface_eventGenerateInput_Parms
	{
		UCompositingInputInterfaceProxy* Proxy;
		UTexture* ReturnValue;

		/** Constructor, initializes return property only **/
		CompositingInputInterface_eventGenerateInput_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct CompositingInputInterface_eventOnFrameBegin_Parms
	{
		UCompositingInputInterfaceProxy* Proxy;
		bool bCameraCutThisFrame;
	};
	struct CompositingInputInterface_eventOnFrameEnd_Parms
	{
		UCompositingInputInterfaceProxy* Proxy;
	};
	UTexture* ICompositingInputInterface::GenerateInput(UCompositingInputInterfaceProxy* Proxy)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GenerateInput instead.");
		CompositingInputInterface_eventGenerateInput_Parms Parms;
		return Parms.ReturnValue;
	}
	void ICompositingInputInterface::OnFrameBegin(UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFrameBegin instead.");
	}
	void ICompositingInputInterface::OnFrameEnd(UCompositingInputInterfaceProxy* Proxy)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFrameEnd instead.");
	}
	void UCompositingInputInterface::StaticRegisterNativesUCompositingInputInterface()
	{
		UClass* Class = UCompositingInputInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateInput", &ICompositingInputInterface::execGenerateInput },
			{ "OnFrameBegin", &ICompositingInputInterface::execOnFrameBegin },
			{ "OnFrameEnd", &ICompositingInputInterface::execOnFrameEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingInputInterface_eventGenerateInput_Parms, Proxy), Z_Construct_UClass_UCompositingInputInterfaceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingInputInterface_eventGenerateInput_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure|Input" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingInputInterface, nullptr, "GenerateInput", nullptr, nullptr, sizeof(CompositingInputInterface_eventGenerateInput_Parms), Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingInputInterface_GenerateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingInputInterface_GenerateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingInputInterface_eventOnFrameBegin_Parms, Proxy), Z_Construct_UClass_UCompositingInputInterfaceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
	{
		((CompositingInputInterface_eventOnFrameBegin_Parms*)Obj)->bCameraCutThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingInputInterface_eventOnFrameBegin_Parms), &Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::NewProp_Proxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingInputInterface, nullptr, "OnFrameBegin", nullptr, nullptr, sizeof(CompositingInputInterface_eventOnFrameBegin_Parms), Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingInputInterface_eventOnFrameEnd_Parms, Proxy), Z_Construct_UClass_UCompositingInputInterfaceProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::NewProp_Proxy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingInputInterface, nullptr, "OnFrameEnd", nullptr, nullptr, sizeof(CompositingInputInterface_eventOnFrameEnd_Parms), Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingInputInterface);
	UClass* Z_Construct_UClass_UCompositingInputInterface_NoRegister()
	{
		return UCompositingInputInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingInputInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingInputInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingInputInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingInputInterface_GenerateInput, "GenerateInput" }, // 2285208208
		{ &Z_Construct_UFunction_UCompositingInputInterface_OnFrameBegin, "OnFrameBegin" }, // 2947564119
		{ &Z_Construct_UFunction_UCompositingInputInterface_OnFrameEnd, "OnFrameEnd" }, // 786041031
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingInputInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingInputInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICompositingInputInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingInputInterface_Statics::ClassParams = {
		&UCompositingInputInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingInputInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingInputInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingInputInterface()
	{
		if (!Z_Registration_Info_UClass_UCompositingInputInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingInputInterface.OuterSingleton, Z_Construct_UClass_UCompositingInputInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingInputInterface.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingInputInterface>()
	{
		return UCompositingInputInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingInputInterface);
	UCompositingInputInterface::~UCompositingInputInterface() {}
	static FName NAME_UCompositingInputInterface_GenerateInput = FName(TEXT("GenerateInput"));
	UTexture* ICompositingInputInterface::Execute_GenerateInput(UObject* O, UCompositingInputInterfaceProxy* Proxy)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCompositingInputInterface::StaticClass()));
		CompositingInputInterface_eventGenerateInput_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCompositingInputInterface_GenerateInput);
		if (Func)
		{
			Parms.Proxy=Proxy;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICompositingInputInterface*)(O->GetNativeInterfaceAddress(UCompositingInputInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GenerateInput_Implementation(Proxy);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UCompositingInputInterface_OnFrameBegin = FName(TEXT("OnFrameBegin"));
	void ICompositingInputInterface::Execute_OnFrameBegin(UObject* O, UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCompositingInputInterface::StaticClass()));
		CompositingInputInterface_eventOnFrameBegin_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCompositingInputInterface_OnFrameBegin);
		if (Func)
		{
			Parms.Proxy=Proxy;
			Parms.bCameraCutThisFrame=bCameraCutThisFrame;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICompositingInputInterface*)(O->GetNativeInterfaceAddress(UCompositingInputInterface::StaticClass())))
		{
			I->OnFrameBegin_Implementation(Proxy,bCameraCutThisFrame);
		}
	}
	static FName NAME_UCompositingInputInterface_OnFrameEnd = FName(TEXT("OnFrameEnd"));
	void ICompositingInputInterface::Execute_OnFrameEnd(UObject* O, UCompositingInputInterfaceProxy* Proxy)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UCompositingInputInterface::StaticClass()));
		CompositingInputInterface_eventOnFrameEnd_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UCompositingInputInterface_OnFrameEnd);
		if (Func)
		{
			Parms.Proxy=Proxy;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ICompositingInputInterface*)(O->GetNativeInterfaceAddress(UCompositingInputInterface::StaticClass())))
		{
			I->OnFrameEnd_Implementation(Proxy);
		}
	}
	void UCompositingInputInterfaceProxy::StaticRegisterNativesUCompositingInputInterfaceProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingInputInterfaceProxy);
	UClass* Z_Construct_UClass_UCompositingInputInterfaceProxy_NoRegister()
	{
		return UCompositingInputInterfaceProxy::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositingInput_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CompositingInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementInput,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementInputs.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::NewProp_CompositingInput_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementInputs.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::NewProp_CompositingInput = { "CompositingInput", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingInputInterfaceProxy, CompositingInput), Z_Construct_UClass_UCompositingInputInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::NewProp_CompositingInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::NewProp_CompositingInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::NewProp_CompositingInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingInputInterfaceProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::ClassParams = {
		&UCompositingInputInterfaceProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingInputInterfaceProxy()
	{
		if (!Z_Registration_Info_UClass_UCompositingInputInterfaceProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingInputInterfaceProxy.OuterSingleton, Z_Construct_UClass_UCompositingInputInterfaceProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingInputInterfaceProxy.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingInputInterfaceProxy>()
	{
		return UCompositingInputInterfaceProxy::StaticClass();
	}
	UCompositingInputInterfaceProxy::UCompositingInputInterfaceProxy() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingInputInterfaceProxy);
	UCompositingInputInterfaceProxy::~UCompositingInputInterfaceProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositingMediaInput, UCompositingMediaInput::StaticClass, TEXT("UCompositingMediaInput"), &Z_Registration_Info_UClass_UCompositingMediaInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingMediaInput), 809735653U) },
		{ Z_Construct_UClass_UMediaTextureCompositingInput, UMediaTextureCompositingInput::StaticClass, TEXT("UMediaTextureCompositingInput"), &Z_Registration_Info_UClass_UMediaTextureCompositingInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaTextureCompositingInput), 2986951146U) },
		{ Z_Construct_UClass_UCompositingInputInterface, UCompositingInputInterface::StaticClass, TEXT("UCompositingInputInterface"), &Z_Registration_Info_UClass_UCompositingInputInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingInputInterface), 502734225U) },
		{ Z_Construct_UClass_UCompositingInputInterfaceProxy, UCompositingInputInterfaceProxy::StaticClass, TEXT("UCompositingInputInterfaceProxy"), &Z_Registration_Info_UClass_UCompositingInputInterfaceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingInputInterfaceProxy), 2289712540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_200830969(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementInputs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
