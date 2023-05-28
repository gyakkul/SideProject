// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMExecuteContext() {}
// Cross Module References
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSlice();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMSlice;
class UScriptStruct* FRigVMSlice::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMSlice.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMSlice.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMSlice, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMSlice"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMSlice.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMSlice>()
{
	return FRigVMSlice::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMSlice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMSlice_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMSlice_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMSlice>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMSlice_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMSlice",
		sizeof(FRigVMSlice),
		alignof(FRigVMSlice),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMSlice_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMSlice_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMSlice()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMSlice.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMSlice.InnerSingleton, Z_Construct_UScriptStruct_FRigVMSlice_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMSlice.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings;
class UScriptStruct* FRigVMRuntimeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRuntimeSettings, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMRuntimeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMRuntimeSettings>()
{
	return FRigVMRuntimeSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumArraySize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaximumArraySize;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableProfiling_MetaData[];
#endif
		static void NewProp_bEnableProfiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableProfiling;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMRuntimeSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize_MetaData[] = {
		{ "Category", "VM" },
		{ "Comment", "/**\n\x09 * The largest allowed size for arrays within the Control Rig VM.\n\x09 * Accessing or creating larger arrays will cause runtime errors in the rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "The largest allowed size for arrays within the Control Rig VM.\nAccessing or creating larger arrays will cause runtime errors in the rig." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize = { "MaximumArraySize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMRuntimeSettings, MaximumArraySize), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_MetaData[] = {
		{ "Category", "VM" },
		{ "Comment", "// When enabled records the timing of each instruction / node\n// on each node and within the execution stack window.\n// Keep in mind when looking at nodes in a function the duration\n// represents the accumulated duration of all invocations\n// of the function currently running.\n" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "When enabled records the timing of each instruction / node\non each node and within the execution stack window.\nKeep in mind when looking at nodes in a function the duration\nrepresents the accumulated duration of all invocations\nof the function currently running." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_SetBit(void* Obj)
	{
		((FRigVMRuntimeSettings*)Obj)->bEnableProfiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling = { "bEnableProfiling", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigVMRuntimeSettings), &Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_MaximumArraySize,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewProp_bEnableProfiling,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMRuntimeSettings",
		sizeof(FRigVMRuntimeSettings),
		alignof(FRigVMRuntimeSettings),
		Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExecuteContext;
class UScriptStruct* FRigVMExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExecuteContext.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExecuteContext>()
{
	return FRigVMExecuteContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The execute context is used for mutable nodes to\n * indicate execution order.\n */" },
		{ "DisplayName", "Execute Context" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "The execute context is used for mutable nodes to\nindicate execution order." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExecuteContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMExecuteContext",
		sizeof(FRigVMExecuteContext),
		alignof(FRigVMExecuteContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMExecuteContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMExecuteContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext;
class UScriptStruct* FRigVMExtendedExecuteContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMExtendedExecuteContext"));
	}
	return Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMExtendedExecuteContext>()
{
	return FRigVMExtendedExecuteContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * The execute context is used for mutable nodes to\n * indicate execution order.\n */" },
		{ "ModuleRelativePath", "Public/RigVMCore/RigVMExecuteContext.h" },
		{ "ToolTip", "The execute context is used for mutable nodes to\nindicate execution order." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMExtendedExecuteContext>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		nullptr,
		&NewStructOps,
		"RigVMExtendedExecuteContext",
		sizeof(FRigVMExtendedExecuteContext),
		alignof(FRigVMExtendedExecuteContext),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.InnerSingleton, Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics::ScriptStructInfo[] = {
		{ FRigVMSlice::StaticStruct, Z_Construct_UScriptStruct_FRigVMSlice_Statics::NewStructOps, TEXT("RigVMSlice"), &Z_Registration_Info_UScriptStruct_RigVMSlice, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMSlice), 2591005851U) },
		{ FRigVMRuntimeSettings::StaticStruct, Z_Construct_UScriptStruct_FRigVMRuntimeSettings_Statics::NewStructOps, TEXT("RigVMRuntimeSettings"), &Z_Registration_Info_UScriptStruct_RigVMRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMRuntimeSettings), 2495750411U) },
		{ FRigVMExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FRigVMExecuteContext_Statics::NewStructOps, TEXT("RigVMExecuteContext"), &Z_Registration_Info_UScriptStruct_RigVMExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExecuteContext), 322465941U) },
		{ FRigVMExtendedExecuteContext::StaticStruct, Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext_Statics::NewStructOps, TEXT("RigVMExtendedExecuteContext"), &Z_Registration_Info_UScriptStruct_RigVMExtendedExecuteContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMExtendedExecuteContext), 1462714042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExecuteContext_h_2183989932(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMCore_RigVMExecuteContext_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
