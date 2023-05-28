// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Commands/InputChord.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputChord() {}
// Cross Module References
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputChord;
class UScriptStruct* FInputChord::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputChord.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputChord.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputChord, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("InputChord"));
	}
	return Z_Registration_Info_UScriptStruct_InputChord.OuterSingleton;
}
template<> SLATE_API UScriptStruct* StaticStruct<FInputChord>()
{
	return FInputChord::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputChord_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShift_MetaData[];
#endif
		static void NewProp_bShift_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShift;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCtrl_MetaData[];
#endif
		static void NewProp_bCtrl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCtrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlt_MetaData[];
#endif
		static void NewProp_bAlt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCmd_MetaData[];
#endif
		static void NewProp_bCmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCmd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An Input Chord is a key and the modifier keys that are to be held with it. */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "An Input Chord is a key and the modifier keys that are to be held with it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputChord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputChord>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** The Key is the core of the chord. */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "The Key is the core of the chord." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputChord, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the shift key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the shift key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bShift = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift = { "bShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the control key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the control key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bCtrl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl = { "bCtrl", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the alt key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the alt key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bAlt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt = { "bAlt", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_MetaData[] = {
		{ "Category", "Modifier" },
		{ "Comment", "/** Whether the command key is part of the chord.  */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/InputChord.h" },
		{ "ToolTip", "Whether the command key is part of the chord." },
	};
#endif
	void Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit(void* Obj)
	{
		((FInputChord*)Obj)->bCmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd = { "bCmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FInputChord), &Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bShift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCtrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bAlt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputChord_Statics::NewProp_bCmd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputChord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		&NewStructOps,
		"InputChord",
		sizeof(FInputChord),
		alignof(FInputChord),
		Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputChord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputChord()
	{
		if (!Z_Registration_Info_UScriptStruct_InputChord.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputChord.InnerSingleton, Z_Construct_UScriptStruct_FInputChord_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputChord.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics::ScriptStructInfo[] = {
		{ FInputChord::StaticStruct, Z_Construct_UScriptStruct_FInputChord_Statics::NewStructOps, TEXT("InputChord"), &Z_Registration_Info_UScriptStruct_InputChord, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputChord), 2392822822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_2083905560(TEXT("/Script/Slate"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_InputChord_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
