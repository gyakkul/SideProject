// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIKDebugOption.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBIKDebugOption() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKDebugOption();
	UPackage* Z_Construct_UPackage__Script_FullBodyIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKDebugOption;
class UScriptStruct* FFBIKDebugOption::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKDebugOption.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKDebugOption.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKDebugOption, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKDebugOption"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKDebugOption.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKDebugOption>()
{
	return FFBIKDebugOption::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFBIKDebugOption_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugHierarchy_MetaData[];
#endif
		static void NewProp_bDrawDebugHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorAngularMotionStrength_MetaData[];
#endif
		static void NewProp_bColorAngularMotionStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorAngularMotionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorLinearMotionStrength_MetaData[];
#endif
		static void NewProp_bColorLinearMotionStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorLinearMotionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugAxes_MetaData[];
#endif
		static void NewProp_bDrawDebugAxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugAxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugEffector_MetaData[];
#endif
		static void NewProp_bDrawDebugEffector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugEffector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugConstraints_MetaData[];
#endif
		static void NewProp_bDrawDebugConstraints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugConstraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawWorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrawWorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKDebugOption>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy_SetBit(void* Obj)
	{
		((FFBIKDebugOption*)Obj)->bDrawDebugHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy = { "bDrawDebugHierarchy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKDebugOption), &Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "Comment", "// use red channel\n" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
		{ "ToolTip", "use red channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength_SetBit(void* Obj)
	{
		((FFBIKDebugOption*)Obj)->bColorAngularMotionStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength = { "bColorAngularMotionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKDebugOption), &Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "Comment", "// use green channel\n" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
		{ "ToolTip", "use green channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength_SetBit(void* Obj)
	{
		((FFBIKDebugOption*)Obj)->bColorLinearMotionStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength = { "bColorLinearMotionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKDebugOption), &Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes_SetBit(void* Obj)
	{
		((FFBIKDebugOption*)Obj)->bDrawDebugAxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes = { "bDrawDebugAxes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKDebugOption), &Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector_SetBit(void* Obj)
	{
		((FFBIKDebugOption*)Obj)->bDrawDebugEffector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector = { "bDrawDebugEffector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKDebugOption), &Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints_SetBit(void* Obj)
	{
		((FFBIKDebugOption*)Obj)->bDrawDebugConstraints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints = { "bDrawDebugConstraints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFBIKDebugOption), &Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawWorldOffset_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawWorldOffset = { "DrawWorldOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKDebugOption, DrawWorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawWorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawWorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawSize_MetaData[] = {
		{ "Category", "FFBIKDebugOption" },
		{ "ModuleRelativePath", "Public/FBIKDebugOption.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawSize = { "DrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKDebugOption, DrawSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorAngularMotionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bColorLinearMotionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugAxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugEffector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_bDrawDebugConstraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawWorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewProp_DrawSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"FBIKDebugOption",
		sizeof(FFBIKDebugOption),
		alignof(FFBIKDebugOption),
		Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBIKDebugOption()
	{
		if (!Z_Registration_Info_UScriptStruct_FBIKDebugOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKDebugOption.InnerSingleton, Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FBIKDebugOption.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKDebugOption_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKDebugOption_h_Statics::ScriptStructInfo[] = {
		{ FFBIKDebugOption::StaticStruct, Z_Construct_UScriptStruct_FFBIKDebugOption_Statics::NewStructOps, TEXT("FBIKDebugOption"), &Z_Registration_Info_UScriptStruct_FBIKDebugOption, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKDebugOption), 2858317537U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKDebugOption_h_832578080(TEXT("/Script/FullBodyIK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKDebugOption_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKDebugOption_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
