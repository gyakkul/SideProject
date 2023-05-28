// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMModel/RigVMVariableDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMVariableDescription() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	RIGVMDEVELOPER_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription();
	UPackage* Z_Construct_UPackage__Script_RigVMDeveloper();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription;
class UScriptStruct* FRigVMGraphVariableDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription, (UObject*)Z_Construct_UPackage__Script_RigVMDeveloper(), TEXT("RigVMGraphVariableDescription"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription.OuterSingleton;
}
template<> RIGVMDEVELOPER_API UScriptStruct* StaticStruct<FRigVMGraphVariableDescription>()
{
	return FRigVMGraphVariableDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CPPType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CPPTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CPPTypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The variable description is used to convey information\n * about unique variables within a Graph. Multiple Variable\n * Nodes can share the same variable description.\n */" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMVariableDescription.h" },
		{ "ToolTip", "The variable description is used to convey information\nabout unique variables within a Graph. Multiple Variable\nNodes can share the same variable description." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMGraphVariableDescription>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "RigVMGraphVariableDescription" },
		{ "Comment", "// The name of the variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMVariableDescription.h" },
		{ "ToolTip", "The name of the variable" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphVariableDescription, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPType_MetaData[] = {
		{ "Category", "RigVMGraphVariableDescription" },
		{ "Comment", "// The C++ data type of the variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMVariableDescription.h" },
		{ "ToolTip", "The C++ data type of the variable" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPType = { "CPPType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphVariableDescription, CPPType), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPTypeObject_MetaData[] = {
		{ "Category", "RigVMGraphVariableDescription" },
		{ "Comment", "// The Struct of the C++ data type of the variable (or nullptr)\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMVariableDescription.h" },
		{ "ToolTip", "The Struct of the C++ data type of the variable (or nullptr)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPTypeObject = { "CPPTypeObject", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphVariableDescription, CPPTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPTypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "RigVMGraphVariableDescription" },
		{ "Comment", "// The default value of the variable\n" },
		{ "ModuleRelativePath", "Public/RigVMModel/RigVMVariableDescription.h" },
		{ "ToolTip", "The default value of the variable" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMGraphVariableDescription, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_CPPTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVMDeveloper,
		nullptr,
		&NewStructOps,
		"RigVMGraphVariableDescription",
		sizeof(FRigVMGraphVariableDescription),
		alignof(FRigVMGraphVariableDescription),
		Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMGraphVariableDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription.InnerSingleton, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMVariableDescription_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMVariableDescription_h_Statics::ScriptStructInfo[] = {
		{ FRigVMGraphVariableDescription::StaticStruct, Z_Construct_UScriptStruct_FRigVMGraphVariableDescription_Statics::NewStructOps, TEXT("RigVMGraphVariableDescription"), &Z_Registration_Info_UScriptStruct_RigVMGraphVariableDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMGraphVariableDescription), 2726194744U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMVariableDescription_h_2462908519(TEXT("/Script/RigVMDeveloper"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMVariableDescription_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_RigVMDeveloper_Public_RigVMModel_RigVMVariableDescription_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
