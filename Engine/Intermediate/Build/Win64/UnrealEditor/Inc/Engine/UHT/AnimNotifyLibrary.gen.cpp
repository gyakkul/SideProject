// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyLibrary.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotifyLibrary::execNotifyStateReachedEnd)
	{
		P_GET_STRUCT_REF(FAnimNotifyEventReference,Z_Param_Out_EventReference);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimNotifyLibrary::NotifyStateReachedEnd(Z_Param_Out_EventReference);
		P_NATIVE_END;
	}
	void UAnimNotifyLibrary::StaticRegisterNativesUAnimNotifyLibrary()
	{
		UClass* Class = UAnimNotifyLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifyStateReachedEnd", &UAnimNotifyLibrary::execNotifyStateReachedEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics
	{
		struct AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms
		{
			FAnimNotifyEventReference EventReference;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference_MetaData)) }; // 1168965002
	void Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms), &Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_EventReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utilities|Animation|Notifies" },
		{ "Comment", "/** Get whether the notify state reached the end (was not cancelled)\n\x09*\n\x09* @param EventReference\x09\x09The event to inspect\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Get whether the notify state reached the end (was not cancelled)\n\n@param EventReference         The event to inspect" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyLibrary, nullptr, "NotifyStateReachedEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::AnimNotifyLibrary_eventNotifyStateReachedEnd_Parms), Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyLibrary);
	UClass* Z_Construct_UClass_UAnimNotifyLibrary_NoRegister()
	{
		return UAnimNotifyLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyLibrary_NotifyStateReachedEnd, "NotifyStateReachedEnd" }, // 685030711
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\x09""A library of commonly used functionality for Notifies, exposed to blueprint.\n*/" },
		{ "IncludePath", "Animation/AnimNotifyLibrary.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimNotifyLibrary.h" },
		{ "ScriptName", "UAnimNotifyLibrary" },
		{ "ToolTip", "A library of commonly used functionality for Notifies, exposed to blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyLibrary_Statics::ClassParams = {
		&UAnimNotifyLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton, Z_Construct_UClass_UAnimNotifyLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyLibrary>()
	{
		return UAnimNotifyLibrary::StaticClass();
	}
	UAnimNotifyLibrary::UAnimNotifyLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyLibrary);
	UAnimNotifyLibrary::~UAnimNotifyLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyLibrary, UAnimNotifyLibrary::StaticClass, TEXT("UAnimNotifyLibrary"), &Z_Registration_Info_UClass_UAnimNotifyLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyLibrary), 2937853502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_3886353922(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimNotifyLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
