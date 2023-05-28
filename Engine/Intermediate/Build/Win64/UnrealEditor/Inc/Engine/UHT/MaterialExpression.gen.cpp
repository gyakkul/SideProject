// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpression() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialExpressionCollection();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UScriptStruct_FExpressionInput_Statics
	{
		struct FExpressionInput
		{
			TObjectPtr<UMaterialExpression> Expression;
			int32 OutputIndex;
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//@warning: FExpressionInput is mirrored in MaterialShared.h and manually \"subclassed\" in Material.h (FMaterialInput)\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "@warning: FExpressionInput is mirrored in MaterialShared.h and manually \"subclassed\" in Material.h (FMaterialInput)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression_MetaData[] = {
		{ "Comment", "/** UMaterial expression that this input is connected to, or NULL if not connected. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "UMaterial expression that this input is connected to, or NULL if not connected." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex_MetaData[] = {
		{ "Comment", "/** Index into Expression's outputs array that this input is connected to. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, OutputIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Comment", "/** \n\x09 * optional FName of the input.  \n\x09 * Note that this is the only member which is not derived from the output currently connected. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "optional FName of the input.\nNote that this is the only member which is not derived from the output currently connected." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, InputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, MaskR), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, MaskG), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, MaskB), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionInput, MaskA), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_OutputIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionInput_Statics::NewProp_MaskA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"ExpressionInput",
		sizeof(FExpressionInput),
		alignof(FExpressionInput),
		Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics
	{
		struct FExpressionInput
		{
			TObjectPtr<UMaterialExpression> Expression;
			int32 OutputIndex;
			FName InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
		};

		struct FMaterialAttributesInput : public FExpressionInput
		{
			int32 PropertyConnectedBitmask;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyConnectedBitmask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyConnectedBitmask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask = { "PropertyConnectedBitmask", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialAttributesInput, PropertyConnectedBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::NewProp_PropertyConnectedBitmask,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FExpressionInput,
		nullptr,
		"MaterialAttributesInput",
		sizeof(FMaterialAttributesInput),
		alignof(FMaterialAttributesInput),
		Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialAttributesInput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	struct Z_Construct_UScriptStruct_FExpressionOutput_Statics
	{
		struct FExpressionOutput
		{
			FName OutputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
		};

#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskG;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaskA;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that represents an expression's output. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Struct that represents an expression's output." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionOutput, OutputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionOutput, Mask), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskR), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskG), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskB), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskA), METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_OutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_Mask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskR,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskG,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionOutput_Statics::NewProp_MaskA,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		nullptr,
		"ExpressionOutput",
		sizeof(FExpressionOutput),
		alignof(FExpressionOutput),
		Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000008),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput()
	{
		static UScriptStruct* ReturnStruct = nullptr;
		if (!ReturnStruct)
		{
			UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExpressionOutput_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExpressionExecOutput;
class UScriptStruct* FExpressionExecOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExpressionExecOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExpressionExecOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExpressionExecOutput, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExpressionExecOutput"));
	}
	return Z_Registration_Info_UScriptStruct_ExpressionExecOutput.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExpressionExecOutput>()
{
	return FExpressionExecOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FExpressionExecOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExpressionExecOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FExpressionExecOutput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewProp_Expression,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExpressionExecOutput",
		sizeof(FExpressionExecOutput),
		alignof(FExpressionExecOutput),
		Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionExecOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_ExpressionExecOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExpressionExecOutput.InnerSingleton, Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ExpressionExecOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialExpressionCollection;
class UScriptStruct* FMaterialExpressionCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialExpressionCollection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialExpressionCollection"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialExpressionCollection>()
{
	return FMaterialExpressionCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Expressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorComments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorComments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorComments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecBegin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExpressionExecBegin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExpressionExecEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialExpressionCollection>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_MetaData[] = {
		{ "Comment", "/** Array of material expressions, excluding Comments.  Used by the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Array of material expressions, excluding Comments.  Used by the material editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialExpressionCollection, Expressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_Inner = { "EditorComments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_MetaData[] = {
		{ "Comment", "/** Array of comments associated with this material; viewed in the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Array of comments associated with this material; viewed in the material editor." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments = { "EditorComments", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialExpressionCollection, EditorComments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin_MetaData[] = {
		{ "Comment", "/** The execution begin expression, if material is using an exec wire */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The execution begin expression, if material is using an exec wire" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin = { "ExpressionExecBegin", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialExpressionCollection, ExpressionExecBegin), Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd = { "ExpressionExecEnd", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialExpressionCollection, ExpressionExecEnd), Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_Expressions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_EditorComments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecBegin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewProp_ExpressionExecEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialExpressionCollection",
		sizeof(FMaterialExpressionCollection),
		alignof(FMaterialExpressionCollection),
		Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialExpressionCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.InnerSingleton, Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialExpressionCollection.InnerSingleton;
	}
	void UMaterialExpression::StaticRegisterNativesUMaterialExpression()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpression);
	UClass* Z_Construct_UClass_UMaterialExpression_NoRegister()
	{
		return UMaterialExpression::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GraphNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubgraphExpression_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SubgraphExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialExpressionGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Function;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRealtimePreview_MetaData[];
#endif
		static void NewProp_bRealtimePreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRealtimePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedToUpdatePreview_MetaData[];
#endif
		static void NewProp_bNeedToUpdatePreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedToUpdatePreview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsParameterExpression_MetaData[];
#endif
		static void NewProp_bIsParameterExpression_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsParameterExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[];
#endif
		static void NewProp_bCommentBubbleVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputNameOnPin_MetaData[];
#endif
		static void NewProp_bShowOutputNameOnPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputNameOnPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMaskColorsOnPin_MetaData[];
#endif
		static void NewProp_bShowMaskColorsOnPin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMaskColorsOnPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidePreviewWindow_MetaData[];
#endif
		static void NewProp_bHidePreviewWindow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePreviewWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[];
#endif
		static void NewProp_bCollapsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShaderInputData_MetaData[];
#endif
		static void NewProp_bShaderInputData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShaderInputData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowInputs_MetaData[];
#endif
		static void NewProp_bShowInputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowOutputs_MetaData[];
#endif
		static void NewProp_bShowOutputs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowOutputs;
		static const UECodeGen_Private::FTextPropertyParams NewProp_MenuCategories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuCategories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MenuCategories;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpression.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX_MetaData[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX = { "MaterialExpressionEditorX", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY_MetaData[] = {
		{ "Category", "MaterialEditing" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY = { "MaterialExpressionEditorY", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode_MetaData[] = {
		{ "Comment", "/** Expression's Graph representation */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Expression's Graph representation" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode = { "GraphNode", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression_MetaData[] = {
		{ "Comment", "/** If exists, expresssion containing this expression within its subgraph. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If exists, expresssion containing this expression within its subgraph." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression = { "SubgraphExpression", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, SubgraphExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid_MetaData[] = {
		{ "Comment", "/** GUID to uniquely identify this node, to help the tutorials out */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "GUID to uniquely identify this node, to help the tutorials out" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid = { "MaterialExpressionGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material_MetaData[] = {
		{ "Comment", "/** \n\x09 * The material that this expression is currently being compiled in.  \n\x09 * This is not necessarily the object which owns this expression, for example a preview material compiling a material function's expressions.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The material that this expression is currently being compiled in.\nThis is not necessarily the object which owns this expression, for example a preview material compiling a material function's expressions." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function_MetaData[] = {
		{ "Comment", "/** \n\x09 * The material function that this expression is being used with, if any.\n\x09 * This will be NULL if the expression belongs to a function that is currently being edited, \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The material function that this expression is being used with, if any.\nThis will be NULL if the expression belongs to a function that is currently being edited," },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, Function), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "Comment", "/** A description that level designers can add (shows in the material editor UI). */" },
		{ "DisplayAfter", "SortPriority" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "A description that level designers can add (shows in the material editor UI)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, Desc), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_MetaData[] = {
		{ "Comment", "/** Set to true by RecursiveUpdateRealtimePreview() if the expression's preview needs to be updated in realtime in the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Set to true by RecursiveUpdateRealtimePreview() if the expression's preview needs to be updated in realtime in the material editor." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bRealtimePreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview = { "bRealtimePreview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_MetaData[] = {
		{ "Comment", "/** If true, we should update the preview next render. This is set when changing bRealtimePreview. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, we should update the preview next render. This is set when changing bRealtimePreview." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bNeedToUpdatePreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview = { "bNeedToUpdatePreview", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_MetaData[] = {
		{ "Comment", "/** Indicates that this is a 'parameter' type of expression and should always be loaded (ie not cooked away) because we might want the default parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Indicates that this is a 'parameter' type of expression and should always be loaded (ie not cooked away) because we might want the default parameter." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bIsParameterExpression = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression = { "bIsParameterExpression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_MetaData[] = {
		{ "Comment", "/** If true, the comment bubble will be visible in the graph editor */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, the comment bubble will be visible in the graph editor" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bCommentBubbleVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible = { "bCommentBubbleVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_MetaData[] = {
		{ "Comment", "/** If true, use the output name as the label for the pin */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, use the output name as the label for the pin" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowOutputNameOnPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin = { "bShowOutputNameOnPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_MetaData[] = {
		{ "Comment", "/** If true, changes the pin color to match the output mask */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, changes the pin color to match the output mask" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowMaskColorsOnPin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin = { "bShowMaskColorsOnPin", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_MetaData[] = {
		{ "Comment", "/** If true, do not render the preview window for the expression */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, do not render the preview window for the expression" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bHidePreviewWindow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow = { "bHidePreviewWindow", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_MetaData[] = {
		{ "Comment", "/** If true, show a collapsed version of the node */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "If true, show a collapsed version of the node" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bCollapsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed = { "bCollapsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_MetaData[] = {
		{ "Comment", "/** Whether the node represents an input to the shader or not.  Used to color the node's background. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether the node represents an input to the shader or not.  Used to color the node's background." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShaderInputData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData = { "bShaderInputData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_MetaData[] = {
		{ "Comment", "/** Whether to draw the expression's inputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether to draw the expression's inputs." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowInputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs = { "bShowInputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_MetaData[] = {
		{ "Comment", "/** Whether to draw the expression's outputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Whether to draw the expression's outputs." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_SetBit(void* Obj)
	{
		((UMaterialExpression*)Obj)->bShowOutputs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs = { "bShowOutputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpression), &Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_Inner = { "MenuCategories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_MetaData[] = {
		{ "Comment", "/** Localized categories to sort this expression into... */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "Localized categories to sort this expression into..." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories = { "MenuCategories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, MenuCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_MetaData[] = {
		{ "Comment", "/** The expression's outputs, which are set in default properties by derived classes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
		{ "ToolTip", "The expression's outputs, which are set in default properties by derived classes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpression, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionEditorY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_GraphNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_SubgraphExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MaterialExpressionGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Function,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bRealtimePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bNeedToUpdatePreview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bIsParameterExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCommentBubbleVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputNameOnPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowMaskColorsOnPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bHidePreviewWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bCollapsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShaderInputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_bShowOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_MenuCategories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpression_Statics::NewProp_Outputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpression>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpression_Statics::ClassParams = {
		&UMaterialExpression::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::PropPointers),
		0,
		0x001000B1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpression()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpression.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpression.OuterSingleton, Z_Construct_UClass_UMaterialExpression_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpression.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpression>()
	{
		return UMaterialExpression::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpression);
	UMaterialExpression::~UMaterialExpression() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpression)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ScriptStructInfo[] = {
		{ FExpressionExecOutput::StaticStruct, Z_Construct_UScriptStruct_FExpressionExecOutput_Statics::NewStructOps, TEXT("ExpressionExecOutput"), &Z_Registration_Info_UScriptStruct_ExpressionExecOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExpressionExecOutput), 2208491086U) },
		{ FMaterialExpressionCollection::StaticStruct, Z_Construct_UScriptStruct_FMaterialExpressionCollection_Statics::NewStructOps, TEXT("MaterialExpressionCollection"), &Z_Registration_Info_UScriptStruct_MaterialExpressionCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialExpressionCollection), 2934744199U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpression, UMaterialExpression::StaticClass, TEXT("UMaterialExpression"), &Z_Registration_Info_UClass_UMaterialExpression, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpression), 2326054404U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_2761510430(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpression_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
