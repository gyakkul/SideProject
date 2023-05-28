// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/EdGraphNode_Comment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_Comment() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment();
	UNREALED_API UClass* Z_Construct_UClass_UEdGraphNode_Comment_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ECommentBoxMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommentBoxMode;
	static UEnum* ECommentBoxMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommentBoxMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommentBoxMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ECommentBoxMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ECommentBoxMode"));
		}
		return Z_Registration_Info_UEnum_ECommentBoxMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ECommentBoxMode::Type>()
	{
		return ECommentBoxMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::Enumerators[] = {
		{ "ECommentBoxMode::GroupMovement", (int64)ECommentBoxMode::GroupMovement },
		{ "ECommentBoxMode::NoGroupMovement", (int64)ECommentBoxMode::NoGroupMovement },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::Enum_MetaDataParams[] = {
		{ "GroupMovement.Comment", "/** This comment box will move any fully contained nodes when it moves. */" },
		{ "GroupMovement.DisplayName", "Group Movement" },
		{ "GroupMovement.Name", "ECommentBoxMode::GroupMovement" },
		{ "GroupMovement.ToolTip", "This comment box will move any fully contained nodes when it moves." },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "NoGroupMovement.Comment", "/** This comment box has no effect on nodes contained inside it. */" },
		{ "NoGroupMovement.DisplayName", "Comment" },
		{ "NoGroupMovement.Name", "ECommentBoxMode::NoGroupMovement" },
		{ "NoGroupMovement.ToolTip", "This comment box has no effect on nodes contained inside it." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ECommentBoxMode",
		"ECommentBoxMode::Type",
		Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ECommentBoxMode()
	{
		if (!Z_Registration_Info_UEnum_ECommentBoxMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommentBoxMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ECommentBoxMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommentBoxMode.InnerSingleton;
	}
	void UEdGraphNode_Comment::StaticRegisterNativesUEdGraphNode_Comment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_Comment);
	UClass* Z_Construct_UClass_UEdGraphNode_Comment_NoRegister()
	{
		return UEdGraphNode_Comment::StaticClass();
	}
	struct Z_Construct_UClass_UEdGraphNode_Comment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MoveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommentDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CommentDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdGraphNode_Comment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdGraphNode_Comment.h" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor_MetaData[] = {
		{ "Category", "Comment" },
		{ "Comment", "/** Color to style comment with */" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Color to style comment with" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor = { "CommentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphNode_Comment, CommentColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Comment" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Size of the text in the comment box */" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Size of the text in the comment box" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphNode_Comment, FontSize), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData[] = {
		{ "Category", "Comment" },
		{ "Comment", "/** Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance). */" },
		{ "DisplayName", "Show Bubble When Zoomed" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Whether to show a zoom-invariant comment bubble when zoomed out (making the comment readable at any distance)." },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit(void* Obj)
	{
		((UEdGraphNode_Comment*)Obj)->bCommentBubbleVisible_InDetailsPanel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel = { "bCommentBubbleVisible_InDetailsPanel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphNode_Comment), &Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_MetaData[] = {
		{ "Category", "Comment" },
		{ "Comment", "/** Whether to use Comment Color to color the background of the comment bubble shown when zoomed out. */" },
		{ "DisplayName", "Color Bubble" },
		{ "EditCondition", "bCommentBubbleVisible_InDetailsPanel" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Whether to use Comment Color to color the background of the comment bubble shown when zoomed out." },
	};
#endif
	void Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_SetBit(void* Obj)
	{
		((UEdGraphNode_Comment*)Obj)->bColorCommentBubble = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble = { "bColorCommentBubble", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UEdGraphNode_Comment), &Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode_MetaData[] = {
		{ "Category", "Comment" },
		{ "Comment", "/** Whether the comment should move any fully enclosed nodes around when it is moved */" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "Whether the comment should move any fully enclosed nodes around when it is moved" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode = { "MoveMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphNode_Comment, MoveMode), Z_Construct_UEnum_UnrealEd_ECommentBoxMode, METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode_MetaData)) }; // 1890669503
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth_MetaData[] = {
		{ "Comment", "/** comment Depth */" },
		{ "ModuleRelativePath", "Public/EdGraphNode_Comment.h" },
		{ "ToolTip", "comment Depth" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth = { "CommentDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdGraphNode_Comment, CommentDepth), METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_Comment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bCommentBubbleVisible_InDetailsPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_bColorCommentBubble,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_MoveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_Comment_Statics::NewProp_CommentDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdGraphNode_Comment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_Comment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_Comment_Statics::ClassParams = {
		&UEdGraphNode_Comment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdGraphNode_Comment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEdGraphNode_Comment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_Comment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdGraphNode_Comment()
	{
		if (!Z_Registration_Info_UClass_UEdGraphNode_Comment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_Comment.OuterSingleton, Z_Construct_UClass_UEdGraphNode_Comment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdGraphNode_Comment.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEdGraphNode_Comment>()
	{
		return UEdGraphNode_Comment::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_Comment);
	UEdGraphNode_Comment::~UEdGraphNode_Comment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics::EnumInfo[] = {
		{ ECommentBoxMode_StaticEnum, TEXT("ECommentBoxMode"), &Z_Registration_Info_UEnum_ECommentBoxMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1890669503U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_Comment, UEdGraphNode_Comment::StaticClass, TEXT("UEdGraphNode_Comment"), &Z_Registration_Info_UClass_UEdGraphNode_Comment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_Comment), 2987579438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_4025373938(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EdGraphNode_Comment_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
