// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOE/CustomizableObjectInstanceEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectInstanceEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassWrapperClass();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UUpdateClassWrapperClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	DEFINE_FUNCTION(UUpdateClassWrapperClass::execDelegatedCallback)
	{
		P_GET_OBJECT(UCustomizableObjectInstance,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelegatedCallback(Z_Param_Instance);
		P_NATIVE_END;
	}
	void UUpdateClassWrapperClass::StaticRegisterNativesUUpdateClassWrapperClass()
	{
		UClass* Class = UUpdateClassWrapperClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DelegatedCallback", &UUpdateClassWrapperClass::execDelegatedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics
	{
		struct UpdateClassWrapperClass_eventDelegatedCallback_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UpdateClassWrapperClass_eventDelegatedCallback_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Method to assign for the callback */" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectInstanceEditor.h" },
		{ "ToolTip", "Method to assign for the callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUpdateClassWrapperClass, nullptr, "DelegatedCallback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::UpdateClassWrapperClass_eventDelegatedCallback_Parms), Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUpdateClassWrapperClass);
	UClass* Z_Construct_UClass_UUpdateClassWrapperClass_NoRegister()
	{
		return UUpdateClassWrapperClass::StaticClass();
	}
	struct Z_Construct_UClass_UUpdateClassWrapperClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUpdateClassWrapperClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUpdateClassWrapperClass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUpdateClassWrapperClass_DelegatedCallback, "DelegatedCallback" }, // 2801589493
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUpdateClassWrapperClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Wrapper UObject class for the UCustomizableObjectInstance::FObjectInstanceUpdatedDelegate dynamic multicast delegate\n*/" },
		{ "IncludePath", "MuCOE/CustomizableObjectInstanceEditor.h" },
		{ "ModuleRelativePath", "Private/MuCOE/CustomizableObjectInstanceEditor.h" },
		{ "ToolTip", "Wrapper UObject class for the UCustomizableObjectInstance::FObjectInstanceUpdatedDelegate dynamic multicast delegate" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUpdateClassWrapperClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUpdateClassWrapperClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUpdateClassWrapperClass_Statics::ClassParams = {
		&UUpdateClassWrapperClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUpdateClassWrapperClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUpdateClassWrapperClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUpdateClassWrapperClass()
	{
		if (!Z_Registration_Info_UClass_UUpdateClassWrapperClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUpdateClassWrapperClass.OuterSingleton, Z_Construct_UClass_UUpdateClassWrapperClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUpdateClassWrapperClass.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UUpdateClassWrapperClass>()
	{
		return UUpdateClassWrapperClass::StaticClass();
	}
	UUpdateClassWrapperClass::UUpdateClassWrapperClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUpdateClassWrapperClass);
	UUpdateClassWrapperClass::~UUpdateClassWrapperClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceEditor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUpdateClassWrapperClass, UUpdateClassWrapperClass::StaticClass, TEXT("UUpdateClassWrapperClass"), &Z_Registration_Info_UClass_UUpdateClassWrapperClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUpdateClassWrapperClass), 2396429280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceEditor_h_2718684153(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Private_MuCOE_CustomizableObjectInstanceEditor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
