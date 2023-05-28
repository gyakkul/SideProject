// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DropTimecode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropTimecode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	LINEARTIMECODE_API UScriptStruct* Z_Construct_UScriptStruct_FDropTimecode();
	UPackage* Z_Construct_UPackage__Script_LinearTimecode();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DropTimecode;
class UScriptStruct* FDropTimecode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DropTimecode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DropTimecode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDropTimecode, (UObject*)Z_Construct_UPackage__Script_LinearTimecode(), TEXT("DropTimecode"));
	}
	return Z_Registration_Info_UScriptStruct_DropTimecode.OuterSingleton;
}
template<> LINEARTIMECODE_API UScriptStruct* StaticStruct<FDropTimecode>()
{
	return FDropTimecode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDropTimecode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timecode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Timecode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorFraming_MetaData[];
#endif
		static void NewProp_bColorFraming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorFraming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRunningForward_MetaData[];
#endif
		static void NewProp_bRunningForward_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunningForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewFrame_MetaData[];
#endif
		static void NewProp_bNewFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTimecode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Hold a frame of a Linear Timecode Frame */" },
		{ "ModuleRelativePath", "Public/DropTimecode.h" },
		{ "ToolTip", "Hold a frame of a Linear Timecode Frame" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDropTimecode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDropTimecode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_Timecode_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Decoded Timecode */" },
		{ "ModuleRelativePath", "Public/DropTimecode.h" },
		{ "ToolTip", "Decoded Timecode" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_Timecode = { "Timecode", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDropTimecode, Timecode), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_Timecode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_Timecode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Guess at incoming frame rate */" },
		{ "ModuleRelativePath", "Public/DropTimecode.h" },
		{ "ToolTip", "Guess at incoming frame rate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDropTimecode, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Sync is in phase with color burst */" },
		{ "ModuleRelativePath", "Public/DropTimecode.h" },
		{ "ToolTip", "Sync is in phase with color burst" },
	};
#endif
	void Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming_SetBit(void* Obj)
	{
		((FDropTimecode*)Obj)->bColorFraming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming = { "bColorFraming", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDropTimecode), &Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** When timecode is reading forward */" },
		{ "ModuleRelativePath", "Public/DropTimecode.h" },
		{ "ToolTip", "When timecode is reading forward" },
	};
#endif
	void Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward_SetBit(void* Obj)
	{
		((FDropTimecode*)Obj)->bRunningForward = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward = { "bRunningForward", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDropTimecode), &Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/** Is a new timecode frame */" },
		{ "ModuleRelativePath", "Public/DropTimecode.h" },
		{ "ToolTip", "Is a new timecode frame" },
	};
#endif
	void Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame_SetBit(void* Obj)
	{
		((FDropTimecode*)Obj)->bNewFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame = { "bNewFrame", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDropTimecode), &Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDropTimecode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_Timecode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bColorFraming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bRunningForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDropTimecode_Statics::NewProp_bNewFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDropTimecode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LinearTimecode,
		nullptr,
		&NewStructOps,
		"DropTimecode",
		sizeof(FDropTimecode),
		alignof(FDropTimecode),
		Z_Construct_UScriptStruct_FDropTimecode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDropTimecode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDropTimecode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDropTimecode()
	{
		if (!Z_Registration_Info_UScriptStruct_DropTimecode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DropTimecode.InnerSingleton, Z_Construct_UScriptStruct_FDropTimecode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DropTimecode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_DropTimecode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_DropTimecode_h_Statics::ScriptStructInfo[] = {
		{ FDropTimecode::StaticStruct, Z_Construct_UScriptStruct_FDropTimecode_Statics::NewStructOps, TEXT("DropTimecode"), &Z_Registration_Info_UScriptStruct_DropTimecode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDropTimecode), 3188645423U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_DropTimecode_h_3041564046(TEXT("/Script/LinearTimecode"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_DropTimecode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_LinearTimecode_Source_LinearTimecode_Public_DropTimecode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
