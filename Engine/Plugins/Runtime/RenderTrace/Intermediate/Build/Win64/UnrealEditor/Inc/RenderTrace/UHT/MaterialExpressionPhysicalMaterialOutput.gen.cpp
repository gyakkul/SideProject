// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Materials/MaterialExpressionPhysicalMaterialOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionPhysicalMaterialOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	RENDERTRACE_API UClass* Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput();
	RENDERTRACE_API UClass* Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_NoRegister();
	RENDERTRACE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput();
	UPackage* Z_Construct_UPackage__Script_RenderTrace();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput;
class UScriptStruct* FPhysicalMaterialTraceInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput, (UObject*)Z_Construct_UPackage__Script_RenderTrace(), TEXT("PhysicalMaterialTraceInput"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput.OuterSingleton;
}
template<> RENDERTRACE_API UScriptStruct* StaticStruct<FPhysicalMaterialTraceInput>()
{
	return FPhysicalMaterialTraceInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure linking a material expression input with a physical material. For use by UMaterialExpressionPhysicalMaterialOutput. */" },
		{ "ModuleRelativePath", "Private/Materials/MaterialExpressionPhysicalMaterialOutput.h" },
		{ "ToolTip", "Structure linking a material expression input with a physical material. For use by UMaterialExpressionPhysicalMaterialOutput." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalMaterialTraceInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "Private/Materials/MaterialExpressionPhysicalMaterialOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicalMaterialTraceInput, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Private/Materials/MaterialExpressionPhysicalMaterialOutput.h" },
		{ "RequiredInput", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicalMaterialTraceInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderTrace,
		nullptr,
		&NewStructOps,
		"PhysicalMaterialTraceInput",
		sizeof(FPhysicalMaterialTraceInput),
		alignof(FPhysicalMaterialTraceInput),
		Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput.InnerSingleton;
	}
	void UMaterialExpressionPhysicalMaterialOutput::StaticRegisterNativesUMaterialExpressionPhysicalMaterialOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionPhysicalMaterialOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_NoRegister()
	{
		return UMaterialExpressionPhysicalMaterialOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderTrace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Custom output node to write out physical material weights.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionPhysicalMaterialOutput.h" },
		{ "ModuleRelativePath", "Private/Materials/MaterialExpressionPhysicalMaterialOutput.h" },
		{ "ToolTip", "Custom output node to write out physical material weights." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput, METADATA_PARAMS(nullptr, 0) }; // 394243118
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Array of physical material inputs. */" },
		{ "ModuleRelativePath", "Private/Materials/MaterialExpressionPhysicalMaterialOutput.h" },
		{ "ToolTip", "Array of physical material inputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionPhysicalMaterialOutput, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs_MetaData)) }; // 394243118
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionPhysicalMaterialOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::ClassParams = {
		&UMaterialExpressionPhysicalMaterialOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionPhysicalMaterialOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionPhysicalMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionPhysicalMaterialOutput.OuterSingleton;
	}
	template<> RENDERTRACE_API UClass* StaticClass<UMaterialExpressionPhysicalMaterialOutput>()
	{
		return UMaterialExpressionPhysicalMaterialOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionPhysicalMaterialOutput);
	UMaterialExpressionPhysicalMaterialOutput::~UMaterialExpressionPhysicalMaterialOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics::ScriptStructInfo[] = {
		{ FPhysicalMaterialTraceInput::StaticStruct, Z_Construct_UScriptStruct_FPhysicalMaterialTraceInput_Statics::NewStructOps, TEXT("PhysicalMaterialTraceInput"), &Z_Registration_Info_UScriptStruct_PhysicalMaterialTraceInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalMaterialTraceInput), 394243118U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionPhysicalMaterialOutput, UMaterialExpressionPhysicalMaterialOutput::StaticClass, TEXT("UMaterialExpressionPhysicalMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionPhysicalMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionPhysicalMaterialOutput), 389355405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_182156663(TEXT("/Script/RenderTrace"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RenderTrace_Source_Private_Materials_MaterialExpressionPhysicalMaterialOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
