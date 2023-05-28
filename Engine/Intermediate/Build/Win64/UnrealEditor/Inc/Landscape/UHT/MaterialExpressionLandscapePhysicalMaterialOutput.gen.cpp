// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapePhysicalMaterialOutput() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionCustomOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialInput();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicalMaterialInput;
class UScriptStruct* FPhysicalMaterialInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialInput, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("PhysicalMaterialInput"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FPhysicalMaterialInput>()
{
	return FPhysicalMaterialInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure linking a material expression input with a physical material. For use by UMaterialExpressionLandscapePhysicalMaterialOutput. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ToolTip", "Structure linking a material expression input with a physical material. For use by UMaterialExpressionLandscapePhysicalMaterialOutput." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalMaterialInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicalMaterialInput, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "RequiredInput", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPhysicalMaterialInput, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_PhysicalMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"PhysicalMaterialInput",
		sizeof(FPhysicalMaterialInput),
		alignof(FPhysicalMaterialInput),
		Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalMaterialInput()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.InnerSingleton, Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicalMaterialInput.InnerSingleton;
	}
	void UMaterialExpressionLandscapePhysicalMaterialOutput::StaticRegisterNativesUMaterialExpressionLandscapePhysicalMaterialOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapePhysicalMaterialOutput);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_NoRegister()
	{
		return UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics
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
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionCustomOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Custom output node to write out physical material weights.\n * This can be used to generate the dominant physical material for each point on a landscape.\n * Note that the use of a material output node to generate this information is optional and when a node of this type is not present we fall back on a CPU path which analyzes landscape layer data.\n */" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ToolTip", "Custom output node to write out physical material weights.\nThis can be used to generate the dominant physical material for each point on a landscape.\nNote that the use of a material output node to generate this information is optional and when a node of this type is not present we fall back on a CPU path which analyzes landscape layer data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalMaterialInput, METADATA_PARAMS(nullptr, 0) }; // 3434484804
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Array of physical material inputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapePhysicalMaterialOutput.h" },
		{ "ToolTip", "Array of physical material inputs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapePhysicalMaterialOutput, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_MetaData)) }; // 3434484804
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::NewProp_Inputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapePhysicalMaterialOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::ClassParams = {
		&UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapePhysicalMaterialOutput>()
	{
		return UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapePhysicalMaterialOutput);
	UMaterialExpressionLandscapePhysicalMaterialOutput::~UMaterialExpressionLandscapePhysicalMaterialOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ScriptStructInfo[] = {
		{ FPhysicalMaterialInput::StaticStruct, Z_Construct_UScriptStruct_FPhysicalMaterialInput_Statics::NewStructOps, TEXT("PhysicalMaterialInput"), &Z_Registration_Info_UScriptStruct_PhysicalMaterialInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicalMaterialInput), 3434484804U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput, UMaterialExpressionLandscapePhysicalMaterialOutput::StaticClass, TEXT("UMaterialExpressionLandscapePhysicalMaterialOutput"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapePhysicalMaterialOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapePhysicalMaterialOutput), 171319752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_3177228301(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapePhysicalMaterialOutput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
