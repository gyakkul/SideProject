// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionComment() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionComment::StaticRegisterNativesUMaterialExpressionComment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionComment);
	UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister()
	{
		return UMaterialExpressionComment::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionComment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CommentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData[];
#endif
		static void NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible_InDetailsPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bColorCommentBubble_MetaData[];
#endif
		static void NewProp_bColorCommentBubble_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bColorCommentBubble;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGroupMode_MetaData[];
#endif
		static void NewProp_bGroupMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGroupMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionComment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionComment.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, SizeX), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, SizeY), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, Text), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Color to style comment with */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Color to style comment with" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor = { "CommentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the text in the comment box */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Size of the text in the comment box" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionComment, FontSize), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance). */" },
		{ "DisplayName", "Show Bubble When Zoomed" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance)." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj)
	{
		((UMaterialExpressionComment*)Obj)->bCommentBubbleVisible_InDetailsPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel = { "bCommentBubbleVisible_InDetailsPanel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionComment), &Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Whether to use Comment Color to color the background of the comment bubble shown when zoomed out. */" },
		{ "DisplayName", "Color Bubble" },
		{ "EditCondition", "bCommentBubbleVisible_InDetailsPanel" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Whether to use Comment Color to color the background of the comment bubble shown when zoomed out." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_SetBit(void* Obj)
	{
		((UMaterialExpressionComment*)Obj)->bColorCommentBubble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble = { "bColorCommentBubble", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionComment), &Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_MetaData[] = {
		{ "Category", "MaterialExpressionComment" },
		{ "Comment", "/** Whether the comment should move any fully enclosed nodes around when it is moved */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionComment.h" },
		{ "ToolTip", "Whether the comment should move any fully enclosed nodes around when it is moved" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_SetBit(void* Obj)
	{
		((UMaterialExpressionComment*)Obj)->bGroupMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode = { "bGroupMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionComment), &Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_CommentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bColorCommentBubble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionComment_Statics::NewProp_bGroupMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionComment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionComment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionComment_Statics::ClassParams = {
		&UMaterialExpressionComment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionComment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionComment()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionComment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionComment.OuterSingleton, Z_Construct_UClass_UMaterialExpressionComment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionComment.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionComment>()
	{
		return UMaterialExpressionComment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionComment);
	UMaterialExpressionComment::~UMaterialExpressionComment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionComment, UMaterialExpressionComment::StaticClass, TEXT("UMaterialExpressionComment"), &Z_Registration_Info_UClass_UMaterialExpressionComment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionComment), 3085715931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_3915766112(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionComment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
