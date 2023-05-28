// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_CustomComputeKernel.h"
#include "IOptimusExecutionDomainProvider.h"
#include "OptimusBindingTypes.h"
#include "OptimusShaderText.h"
#include "OptimusValidatedName.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_CustomComputeKernel() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComputeKernelBase();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimus_ShaderBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusExecutionDomain();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBinding();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusParameterBindingArray();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusShaderText();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusValidatedName();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup;
class UScriptStruct* FOptimusSecondaryInputBindingsGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusSecondaryInputBindingsGroup"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusSecondaryInputBindingsGroup>()
{
	return FOptimusSecondaryInputBindingsGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusSecondaryInputBindingsGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName_MetaData[] = {
		{ "Category", "Group" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusSecondaryInputBindingsGroup, GroupName), Z_Construct_UScriptStruct_FOptimusValidatedName, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName_MetaData)) }; // 34316713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray_MetaData[] = {
		{ "AllowParameters", "" },
		{ "Category", "Group" },
		{ "DisplayName", "Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray = { "BindingArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusSecondaryInputBindingsGroup, BindingArray), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray_MetaData)) }; // 1675160349
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_GroupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewProp_BindingArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusSecondaryInputBindingsGroup",
		sizeof(FOptimusSecondaryInputBindingsGroup),
		alignof(FOptimusSecondaryInputBindingsGroup),
		Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.InnerSingleton, Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup.InnerSingleton;
	}
	void UOptimusNode_CustomComputeKernel::StaticRegisterNativesUOptimusNode_CustomComputeKernel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_CustomComputeKernel);
	UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel_NoRegister()
	{
		return UOptimusNode_CustomComputeKernel::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KernelName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KernelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionDomain_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionDomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBindingArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputBindingArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputBindingArray_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputBindingArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryInputBindingGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryInputBindingGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SecondaryInputBindingGroups;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderSource_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode_ComputeKernelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// FIXME: Use drop-down with a preset list + allow custom entry.\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "FIXME: Use drop-down with a preset list + allow custom entry." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, Category), METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Name of kernel. This is also used as the entry point function name in generated code. */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Name of kernel. This is also used as the entry point function name in generated code." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName = { "KernelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, KernelName), Z_Construct_UScriptStruct_FOptimusValidatedName, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName_MetaData)) }; // 34316713
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The execution domain that this kernel operates on. The size of the domain is governed by\n\x09 *  the component binding that flows into the primary input group of this kernel.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "The execution domain that this kernel operates on. The size of the domain is governed by\nthe component binding that flows into the primary input group of this kernel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain = { "ExecutionDomain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, ExecutionDomain), Z_Construct_UScriptStruct_FOptimusExecutionDomain, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain_MetaData)) }; // 2028006402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** \n\x09 * Number of threads in a thread group. \n\x09 * Thread groups have 3 dimensions. \n\x09 * It's better to have the total threads (X*Y*Z) be a value divisible by 32. \n\x09 */" },
		{ "Min", "1" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Number of threads in a thread group.\nThread groups have 3 dimensions.\nIt's better to have the total threads (X*Y*Z) be a value divisible by 32." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize = { "GroupSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, GroupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimus_ShaderBinding, METADATA_PARAMS(nullptr, 0) }; // 3546697573
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, Parameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_MetaData)) }; // 3546697573
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_Inner = { "InputBindings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(nullptr, 0) }; // 960590533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_MetaData[] = {
		{ "Comment", "/** Input bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Input bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings = { "InputBindings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, InputBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_MetaData)) }; // 960590533
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_Inner = { "OutputBindings", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusParameterBinding, METADATA_PARAMS(nullptr, 0) }; // 960590533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_MetaData[] = {
		{ "Comment", "/** Output bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Output bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings = { "OutputBindings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, OutputBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_MetaData)) }; // 960590533
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray_MetaData[] = {
		{ "AllowParameters", "" },
		{ "Category", "Primary Bindings" },
		{ "Comment", "/** Input bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DisplayName", "Input Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Input bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray = { "InputBindingArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, InputBindingArray), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray_MetaData)) }; // 1675160349
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray_MetaData[] = {
		{ "Category", "Primary Bindings" },
		{ "Comment", "/** Output bindings. Each one is a function that should be connected to an implementation in a data interface. */" },
		{ "DisplayName", "Output Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Output bindings. Each one is a function that should be connected to an implementation in a data interface." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray = { "OutputBindingArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, OutputBindingArray), Z_Construct_UScriptStruct_FOptimusParameterBindingArray, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray_MetaData)) }; // 1675160349
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_Inner = { "SecondaryInputBindingGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup, METADATA_PARAMS(nullptr, 0) }; // 2335167027
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_MetaData[] = {
		{ "Category", "Secondary Input Bindings Groups" },
		{ "Comment", "/** Secondary bindings.*/" },
		{ "DisplayName", "Secondary Input Bindings" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Secondary bindings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups = { "SecondaryInputBindingGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, SecondaryInputBindingGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_MetaData)) }; // 2335167027
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_Inner = { "AdditionalSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComputeSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** Additional source includes. */" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "Additional source includes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources = { "AdditionalSources", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, AdditionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource_MetaData[] = {
		{ "Category", "Source" },
		{ "Comment", "/** \n\x09 * The kernel source code. \n\x09 * If the code contains more than just the kernel entry function, then place the kernel entry function inside a KERNEL {} block.\n\x09 */" },
		{ "DisplayName", "Kernel Source" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_CustomComputeKernel.h" },
		{ "ToolTip", "The kernel source code.\nIf the code contains more than just the kernel entry function, then place the kernel entry function inside a KERNEL {} block." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource = { "ShaderSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_CustomComputeKernel, ShaderSource), Z_Construct_UScriptStruct_FOptimusShaderText, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource_MetaData)) }; // 1903269153
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_KernelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ExecutionDomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_GroupSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_InputBindingArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_OutputBindingArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_SecondaryInputBindingGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_AdditionalSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::NewProp_ShaderSource,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusShaderTextProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusShaderTextProvider), false },  // 2799927964
			{ Z_Construct_UClass_UOptimusParameterBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusParameterBindingProvider), false },  // 2207801996
			{ Z_Construct_UClass_UOptimusNodeAdderPinProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusNodeAdderPinProvider), false },  // 3916129673
			{ Z_Construct_UClass_UOptimusExecutionDomainProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_CustomComputeKernel, IOptimusExecutionDomainProvider), false },  // 2059535935
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_CustomComputeKernel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::ClassParams = {
		&UOptimusNode_CustomComputeKernel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_CustomComputeKernel()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.OuterSingleton, Z_Construct_UClass_UOptimusNode_CustomComputeKernel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_CustomComputeKernel>()
	{
		return UOptimusNode_CustomComputeKernel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_CustomComputeKernel);
	UOptimusNode_CustomComputeKernel::~UOptimusNode_CustomComputeKernel() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOptimusNode_CustomComputeKernel)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ScriptStructInfo[] = {
		{ FOptimusSecondaryInputBindingsGroup::StaticStruct, Z_Construct_UScriptStruct_FOptimusSecondaryInputBindingsGroup_Statics::NewStructOps, TEXT("OptimusSecondaryInputBindingsGroup"), &Z_Registration_Info_UScriptStruct_OptimusSecondaryInputBindingsGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusSecondaryInputBindingsGroup), 2335167027U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_CustomComputeKernel, UOptimusNode_CustomComputeKernel::StaticClass, TEXT("UOptimusNode_CustomComputeKernel"), &Z_Registration_Info_UClass_UOptimusNode_CustomComputeKernel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_CustomComputeKernel), 1137147700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_4237654100(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_CustomComputeKernel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
