// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeFunctionRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeFunctionRef() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef;
class UScriptStruct* FAnimNodeFunctionRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeFunctionRef, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNodeFunctionRef"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNodeFunctionRef>()
{
	return FAnimNodeFunctionRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_Class;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Cached function name/ptr that is resolved at init time\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "Cached function name/ptr that is resolved at init time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNodeFunctionRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "// The name of the class to call the function with. If this is NAME_None, we assume this is a 'thiscall', if it is valid then we assume (and verify) we should call the function on a function library CDO.\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "The name of the class to call the function with. If this is NAME_None, we assume this is a 'thiscall', if it is valid then we assume (and verify) we should call the function on a function library CDO." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeFunctionRef, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "// The name of the function to call\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "The name of the function to call" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeFunctionRef, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "// The class to use to call the function with, recovered by looking for a class of name FunctionName\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The class to use to call the function with, recovered by looking for a class of name FunctionName" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeFunctionRef, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "// The function to call, recovered by looking for a function of name FunctionName\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeFunctionRef.h" },
		{ "ToolTip", "The function to call, recovered by looking for a function of name FunctionName" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNodeFunctionRef, Function), Z_Construct_UClass_UFunction, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewProp_Function,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNodeFunctionRef",
		sizeof(FAnimNodeFunctionRef),
		alignof(FAnimNodeFunctionRef),
		Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.InnerSingleton, Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics::ScriptStructInfo[] = {
		{ FAnimNodeFunctionRef::StaticStruct, Z_Construct_UScriptStruct_FAnimNodeFunctionRef_Statics::NewStructOps, TEXT("AnimNodeFunctionRef"), &Z_Registration_Info_UScriptStruct_AnimNodeFunctionRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNodeFunctionRef), 258600643U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_3198239271(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeFunctionRef_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
