// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeCustomHlsl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeCustomHlsl() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeCustomHlsl();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeCustomHlsl_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeCustomHlsl::StaticRegisterNativesUNiagaraNodeCustomHlsl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeCustomHlsl);
	UClass* Z_Construct_UClass_UNiagaraNodeCustomHlsl_NoRegister()
	{
		return UNiagaraNodeCustomHlsl::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptUsage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptUsage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomHlsl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomHlsl;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AbsoluteIncludeFilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteIncludeFilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AbsoluteIncludeFilePaths;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VirtualIncludeFilePaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualIncludeFilePaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VirtualIncludeFilePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsShaderCodeShown_MetaData[];
#endif
		static void NewProp_bIsShaderCodeShown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsShaderCodeShown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeFunctionCall,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeCustomHlsl.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeCustomHlsl.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeCustomHlsl.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage = { "ScriptUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeCustomHlsl, ScriptUsage), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage_MetaData)) }; // 2772325717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_CustomHlsl_MetaData[] = {
		{ "Category", "HLSL" },
		{ "ModuleRelativePath", "Public/NiagaraNodeCustomHlsl.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_CustomHlsl = { "CustomHlsl", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeCustomHlsl, CustomHlsl), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_CustomHlsl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_CustomHlsl_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths_Inner = { "AbsoluteIncludeFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths_MetaData[] = {
		{ "Category", "HLSL" },
		{ "Comment", "// Links to hlsl files that will be included by the translator. These external files are not watched by the engine, so changes to them do not automatically trigger a recompile of Niagara scripts.\n" },
		{ "ModuleRelativePath", "Public/NiagaraNodeCustomHlsl.h" },
		{ "ToolTip", "Links to hlsl files that will be included by the translator. These external files are not watched by the engine, so changes to them do not automatically trigger a recompile of Niagara scripts." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths = { "AbsoluteIncludeFilePaths", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeCustomHlsl, AbsoluteIncludeFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths_Inner = { "VirtualIncludeFilePaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths_MetaData[] = {
		{ "Category", "HLSL" },
		{ "Comment", "// Links to hlsl files that will be included by the translator. These paths are resolved with the virtual shader paths registered in the engine.\n// For example, /Plugin/FX/Niagara maps to /Engine/Plugins/FX/Niagara/Shaders. Custom mappings can be added via AddShaderSourceDirectoryMapping().\n" },
		{ "ModuleRelativePath", "Public/NiagaraNodeCustomHlsl.h" },
		{ "ToolTip", "Links to hlsl files that will be included by the translator. These paths are resolved with the virtual shader paths registered in the engine.\nFor example, /Plugin/FX/Niagara maps to /Engine/Plugins/FX/Niagara/Shaders. Custom mappings can be added via AddShaderSourceDirectoryMapping()." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths = { "VirtualIncludeFilePaths", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeCustomHlsl, VirtualIncludeFilePaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown_MetaData[] = {
		{ "Comment", "// Is the shader code UI shown?\n" },
		{ "ModuleRelativePath", "Public/NiagaraNodeCustomHlsl.h" },
		{ "ToolTip", "Is the shader code UI shown?" },
	};
#endif
	void Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown_SetBit(void* Obj)
	{
		((UNiagaraNodeCustomHlsl*)Obj)->bIsShaderCodeShown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown = { "bIsShaderCodeShown", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraNodeCustomHlsl), &Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_ScriptUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_CustomHlsl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_AbsoluteIncludeFilePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_VirtualIncludeFilePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::NewProp_bIsShaderCodeShown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeCustomHlsl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::ClassParams = {
		&UNiagaraNodeCustomHlsl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeCustomHlsl()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeCustomHlsl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeCustomHlsl.OuterSingleton, Z_Construct_UClass_UNiagaraNodeCustomHlsl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeCustomHlsl.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeCustomHlsl>()
	{
		return UNiagaraNodeCustomHlsl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeCustomHlsl);
	UNiagaraNodeCustomHlsl::~UNiagaraNodeCustomHlsl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeCustomHlsl, UNiagaraNodeCustomHlsl::StaticClass, TEXT("UNiagaraNodeCustomHlsl"), &Z_Registration_Info_UClass_UNiagaraNodeCustomHlsl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeCustomHlsl), 4265370344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_1186102379(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeCustomHlsl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
