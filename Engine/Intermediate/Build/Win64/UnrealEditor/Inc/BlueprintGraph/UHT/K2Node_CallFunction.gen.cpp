// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_CallFunction.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CallFunction() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_CallFunction::StaticRegisterNativesUK2Node_CallFunction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CallFunction);
	UClass* Z_Construct_UClass_UK2Node_CallFunction_NoRegister()
	{
		return UK2Node_CallFunction::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CallFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPureFunc_MetaData[];
#endif
		static void NewProp_bIsPureFunc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPureFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConstFunc_MetaData[];
#endif
		static void NewProp_bIsConstFunc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConstFunc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWantsEnumToExecExpansion_MetaData[];
#endif
		static void NewProp_bWantsEnumToExecExpansion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsEnumToExecExpansion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInterfaceCall_MetaData[];
#endif
		static void NewProp_bIsInterfaceCall_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInterfaceCall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFinalFunction_MetaData[];
#endif
		static void NewProp_bIsFinalFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinalFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBeadFunction_MetaData[];
#endif
		static void NewProp_bIsBeadFunction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBeadFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallFunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CallFunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallFunctionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CallFunctionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CallFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CallFunction.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc_MetaData[] = {
		{ "Comment", "/** Indicates that this is a call to a pure function */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "Indicates that this is a call to a pure function" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc_SetBit(void* Obj)
	{
		((UK2Node_CallFunction*)Obj)->bIsPureFunc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc = { "bIsPureFunc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_CallFunction), &Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc_MetaData[] = {
		{ "Comment", "/** Indicates that this is a call to a const function */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "Indicates that this is a call to a const function" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc_SetBit(void* Obj)
	{
		((UK2Node_CallFunction*)Obj)->bIsConstFunc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc = { "bIsConstFunc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_CallFunction), &Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion_MetaData[] = {
		{ "Comment", "/** Indicates that during compile we want to create multiple exec pins from an enum param */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "Indicates that during compile we want to create multiple exec pins from an enum param" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion_SetBit(void* Obj)
	{
		((UK2Node_CallFunction*)Obj)->bWantsEnumToExecExpansion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion = { "bWantsEnumToExecExpansion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_CallFunction), &Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall_MetaData[] = {
		{ "Comment", "/** Indicates that this is a call to an interface function */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "Indicates that this is a call to an interface function" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall_SetBit(void* Obj)
	{
		((UK2Node_CallFunction*)Obj)->bIsInterfaceCall = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall = { "bIsInterfaceCall", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_CallFunction), &Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction_MetaData[] = {
		{ "Comment", "/** Indicates that this is a call to a final / superclass's function */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "Indicates that this is a call to a final / superclass's function" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction_SetBit(void* Obj)
	{
		((UK2Node_CallFunction*)Obj)->bIsFinalFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction = { "bIsFinalFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_CallFunction), &Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction_MetaData[] = {
		{ "Comment", "/** Indicates that this is a 'bead' function with no fixed location; it is drawn between the nodes that it is wired to */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "Indicates that this is a 'bead' function with no fixed location; it is drawn between the nodes that it is wired to" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction_SetBit(void* Obj)
	{
		((UK2Node_CallFunction*)Obj)->bIsBeadFunction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction = { "bIsBeadFunction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UK2Node_CallFunction), &Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_FunctionReference_MetaData[] = {
		{ "Comment", "/** The function to call */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "The function to call" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_FunctionReference = { "FunctionReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CallFunction, FunctionReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_FunctionReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_FunctionReference_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionName_MetaData[] = {
		{ "Comment", "/** The name of the function to call */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "The name of the function to call" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionName = { "CallFunctionName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CallFunction, CallFunctionName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionClass_MetaData[] = {
		{ "Comment", "/** The class that the function is from. */" },
		{ "ModuleRelativePath", "Classes/K2Node_CallFunction.h" },
		{ "ToolTip", "The class that the function is from." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionClass = { "CallFunctionClass", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CallFunction, CallFunctionClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CallFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsPureFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsConstFunc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bWantsEnumToExecExpansion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsInterfaceCall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsFinalFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_bIsBeadFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_FunctionReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CallFunction_Statics::NewProp_CallFunctionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CallFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CallFunction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CallFunction_Statics::ClassParams = {
		&UK2Node_CallFunction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CallFunction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CallFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CallFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CallFunction()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CallFunction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CallFunction.OuterSingleton, Z_Construct_UClass_UK2Node_CallFunction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CallFunction.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CallFunction>()
	{
		return UK2Node_CallFunction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CallFunction);
	UK2Node_CallFunction::~UK2Node_CallFunction() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_CallFunction)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CallFunction, UK2Node_CallFunction::StaticClass, TEXT("UK2Node_CallFunction"), &Z_Registration_Info_UClass_UK2Node_CallFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CallFunction), 3514897257U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_2199027359(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CallFunction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
