// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionInput() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4f();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFunctionInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFunctionInputType;
	static UEnum* EFunctionInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFunctionInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFunctionInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFunctionInputType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFunctionInputType"));
		}
		return Z_Registration_Info_UEnum_EFunctionInputType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EFunctionInputType>()
	{
		return EFunctionInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EFunctionInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enumerators[] = {
		{ "FunctionInput_Scalar", (int64)FunctionInput_Scalar },
		{ "FunctionInput_Vector2", (int64)FunctionInput_Vector2 },
		{ "FunctionInput_Vector3", (int64)FunctionInput_Vector3 },
		{ "FunctionInput_Vector4", (int64)FunctionInput_Vector4 },
		{ "FunctionInput_Texture2D", (int64)FunctionInput_Texture2D },
		{ "FunctionInput_TextureCube", (int64)FunctionInput_TextureCube },
		{ "FunctionInput_Texture2DArray", (int64)FunctionInput_Texture2DArray },
		{ "FunctionInput_VolumeTexture", (int64)FunctionInput_VolumeTexture },
		{ "FunctionInput_StaticBool", (int64)FunctionInput_StaticBool },
		{ "FunctionInput_MaterialAttributes", (int64)FunctionInput_MaterialAttributes },
		{ "FunctionInput_TextureExternal", (int64)FunctionInput_TextureExternal },
		{ "FunctionInput_Bool", (int64)FunctionInput_Bool },
		{ "FunctionInput_Substrate", (int64)FunctionInput_Substrate },
		{ "FunctionInput_MAX", (int64)FunctionInput_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Supported input types */" },
		{ "FunctionInput_Bool.Name", "FunctionInput_Bool" },
		{ "FunctionInput_MaterialAttributes.Name", "FunctionInput_MaterialAttributes" },
		{ "FunctionInput_MAX.Name", "FunctionInput_MAX" },
		{ "FunctionInput_Scalar.Name", "FunctionInput_Scalar" },
		{ "FunctionInput_StaticBool.Name", "FunctionInput_StaticBool" },
		{ "FunctionInput_Substrate.Name", "FunctionInput_Substrate" },
		{ "FunctionInput_Texture2D.Name", "FunctionInput_Texture2D" },
		{ "FunctionInput_Texture2DArray.Name", "FunctionInput_Texture2DArray" },
		{ "FunctionInput_TextureCube.Name", "FunctionInput_TextureCube" },
		{ "FunctionInput_TextureExternal.Name", "FunctionInput_TextureExternal" },
		{ "FunctionInput_Vector2.Name", "FunctionInput_Vector2" },
		{ "FunctionInput_Vector3.Name", "FunctionInput_Vector3" },
		{ "FunctionInput_Vector4.Name", "FunctionInput_Vector4" },
		{ "FunctionInput_VolumeTexture.Name", "FunctionInput_VolumeTexture" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Supported input types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFunctionInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EFunctionInputType",
		"EFunctionInputType",
		Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFunctionInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EFunctionInputType()
	{
		if (!Z_Registration_Info_UEnum_EFunctionInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFunctionInputType.InnerSingleton, Z_Construct_UEnum_Engine_EFunctionInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFunctionInputType.InnerSingleton;
	}
	void UMaterialExpressionFunctionInput::StaticRegisterNativesUMaterialExpressionFunctionInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionFunctionInput);
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister()
	{
		return UMaterialExpressionFunctionInput::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Preview;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePreviewValueAsDefault_MetaData[];
#endif
		static void NewProp_bUsePreviewValueAsDefault_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePreviewValueAsDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompilingFunctionPreview_MetaData[];
#endif
		static void NewProp_bCompilingFunctionPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompilingFunctionPreview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "object Object" },
		{ "IncludePath", "Materials/MaterialExpressionFunctionInput.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview_MetaData[] = {
		{ "Comment", "/** Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Preview), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** The input's name, which will be drawn on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "The input's name, which will be drawn on the connector in function call expressions that use this function." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** The input's description, which will be used as a tooltip on the connector in function call expressions that use this function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "The input's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Description), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id_MetaData[] = {
		{ "Comment", "/** Id of this input, used to maintain references through name changes. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Id of this input, used to maintain references through name changes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** \n\x09 * Type of this input.  \n\x09 * Input code chunks will be cast to this type, and a compiler error will be emitted if the cast fails.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Type of this input.\nInput code chunks will be cast to this type, and a compiler error will be emitted if the cast fails." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputType), Z_Construct_UEnum_Engine_EFunctionInputType, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType_MetaData)) }; // 1826378195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** Value used to preview this input when editing the material function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "OverridingInputProperty", "Preview" },
		{ "ToolTip", "Value used to preview this input when editing the material function." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue = { "PreviewValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, PreviewValue), Z_Construct_UScriptStruct_FVector4f, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_MetaData[] = {
		{ "Category", "MaterialExpressionFunctionInput" },
		{ "Comment", "/** Whether to use the preview value or texture as the default value for this input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Whether to use the preview value or texture as the default value for this input." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_SetBit(void* Obj)
	{
		((UMaterialExpressionFunctionInput*)Obj)->bUsePreviewValueAsDefault = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault = { "bUsePreviewValueAsDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionFunctionInput), &Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Category", "MaterialExpression" },
		{ "Comment", "/** Controls where the input is displayed relative to the other inputs. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "Controls where the input is displayed relative to the other inputs." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_MetaData[] = {
		{ "Comment", "/** \n\x09 * true when this expression is being compiled in a function preview, \n\x09 * false when this expression is being compiled into a material that uses the function.\n\x09 * Only valid in Compile()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
		{ "ToolTip", "true when this expression is being compiled in a function preview,\nfalse when this expression is being compiled into a material that uses the function.\nOnly valid in Compile()" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_SetBit(void* Obj)
	{
		((UMaterialExpressionFunctionInput*)Obj)->bCompilingFunctionPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview = { "bCompilingFunctionPreview", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionFunctionInput), &Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Preview,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_PreviewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bUsePreviewValueAsDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_SortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::NewProp_bCompilingFunctionPreview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionFunctionInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::ClassParams = {
		&UMaterialExpressionFunctionInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.OuterSingleton, Z_Construct_UClass_UMaterialExpressionFunctionInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionFunctionInput.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionFunctionInput>()
	{
		return UMaterialExpressionFunctionInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionInput);
	UMaterialExpressionFunctionInput::~UMaterialExpressionFunctionInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::EnumInfo[] = {
		{ EFunctionInputType_StaticEnum, TEXT("EFunctionInputType"), &Z_Registration_Info_UEnum_EFunctionInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1826378195U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionFunctionInput, UMaterialExpressionFunctionInput::StaticClass, TEXT("UMaterialExpressionFunctionInput"), &Z_Registration_Info_UClass_UMaterialExpressionFunctionInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionFunctionInput), 3017705577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_2188564846(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionFunctionInput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
