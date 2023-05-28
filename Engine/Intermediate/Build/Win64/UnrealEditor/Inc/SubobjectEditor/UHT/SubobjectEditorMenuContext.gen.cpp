// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubobjectEditorMenuContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubobjectEditorMenuContext() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SUBOBJECTEDITOR_API UClass* Z_Construct_UClass_USubobjectEditorMenuContext();
	SUBOBJECTEDITOR_API UClass* Z_Construct_UClass_USubobjectEditorMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SubobjectEditor();
// End Cross Module References
	DEFINE_FUNCTION(USubobjectEditorMenuContext::execGetSelectedObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedObjects();
		P_NATIVE_END;
	}
	void USubobjectEditorMenuContext::StaticRegisterNativesUSubobjectEditorMenuContext()
	{
		UClass* Class = USubobjectEditorMenuContext::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedObjects", &USubobjectEditorMenuContext::execGetSelectedObjects },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics
	{
		struct SubobjectEditorMenuContext_eventGetSelectedObjects_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectEditorMenuContext_eventGetSelectedObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/SubobjectEditorMenuContext.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectEditorMenuContext, nullptr, "GetSelectedObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::SubobjectEditorMenuContext_eventGetSelectedObjects_Parms), Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubobjectEditorMenuContext);
	UClass* Z_Construct_UClass_USubobjectEditorMenuContext_NoRegister()
	{
		return USubobjectEditorMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_USubobjectEditorMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubobjectEditorMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubobjectEditorMenuContext_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubobjectEditorMenuContext_GetSelectedObjects, "GetSelectedObjects" }, // 4117018355
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobjectEditorMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubobjectEditorMenuContext.h" },
		{ "ModuleRelativePath", "Public/SubobjectEditorMenuContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubobjectEditorMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubobjectEditorMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubobjectEditorMenuContext_Statics::ClassParams = {
		&USubobjectEditorMenuContext::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubobjectEditorMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubobjectEditorMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubobjectEditorMenuContext()
	{
		if (!Z_Registration_Info_UClass_USubobjectEditorMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubobjectEditorMenuContext.OuterSingleton, Z_Construct_UClass_USubobjectEditorMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubobjectEditorMenuContext.OuterSingleton;
	}
	template<> SUBOBJECTEDITOR_API UClass* StaticClass<USubobjectEditorMenuContext>()
	{
		return USubobjectEditorMenuContext::StaticClass();
	}
	USubobjectEditorMenuContext::USubobjectEditorMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubobjectEditorMenuContext);
	USubobjectEditorMenuContext::~USubobjectEditorMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectEditor_Public_SubobjectEditorMenuContext_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectEditor_Public_SubobjectEditorMenuContext_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubobjectEditorMenuContext, USubobjectEditorMenuContext::StaticClass, TEXT("USubobjectEditorMenuContext"), &Z_Registration_Info_UClass_USubobjectEditorMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubobjectEditorMenuContext), 2083165165U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectEditor_Public_SubobjectEditorMenuContext_h_2406400249(TEXT("/Script/SubobjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectEditor_Public_SubobjectEditorMenuContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectEditor_Public_SubobjectEditorMenuContext_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
