// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/CurveEditorCopyBuffer.h"
#include "CurveDataAbstraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEditorCopyBuffer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorCopyableCurveKeys();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorCopyableCurveKeys_NoRegister();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorCopyBuffer();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorCopyBuffer_NoRegister();
	CURVEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FKeyAttributes();
	CURVEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FKeyPosition();
	UPackage* Z_Construct_UPackage__Script_CurveEditor();
// End Cross Module References
	void UCurveEditorCopyableCurveKeys::StaticRegisterNativesUCurveEditorCopyableCurveKeys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorCopyableCurveKeys);
	UClass* Z_Construct_UClass_UCurveEditorCopyableCurveKeys_NoRegister()
	{
		return UCurveEditorCopyableCurveKeys::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyPositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyPositions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyAttributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ShortDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LongDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntentionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IntentionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LongIntentionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LongIntentionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CurveEditorCopyBuffer.h" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions_Inner = { "KeyPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeyPosition, METADATA_PARAMS(nullptr, 0) }; // 4065569267
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions_MetaData[] = {
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions = { "KeyPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyableCurveKeys, KeyPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions_MetaData)) }; // 4065569267
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes_Inner = { "KeyAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeyAttributes, METADATA_PARAMS(nullptr, 0) }; // 3979061704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes = { "KeyAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyableCurveKeys, KeyAttributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes_MetaData)) }; // 3979061704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_ShortDisplayName_MetaData[] = {
		{ "Comment", "/** This curve's short display name. Used in situations where other mechanisms provide enough context about what the curve is (such as \"X\") */" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
		{ "ToolTip", "This curve's short display name. Used in situations where other mechanisms provide enough context about what the curve is (such as \"X\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_ShortDisplayName = { "ShortDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyableCurveKeys, ShortDisplayName), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_ShortDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_ShortDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongDisplayName_MetaData[] = {
		{ "Comment", "/** This curve's long display name. Used in situations where the UI doesn't provide enough context about what the curve is otherwise (such as \"Floor.Transform.X\") */" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
		{ "ToolTip", "This curve's long display name. Used in situations where the UI doesn't provide enough context about what the curve is otherwise (such as \"Floor.Transform.X\")" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongDisplayName = { "LongDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyableCurveKeys, LongDisplayName), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_IntentionName_MetaData[] = {
		{ "Comment", "/** This curve's short intention (such as Transform.X or Scale.X). Used internally to match up curves when saving/restoring curves between different objects. */" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
		{ "ToolTip", "This curve's short intention (such as Transform.X or Scale.X). Used internally to match up curves when saving/restoring curves between different objects." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_IntentionName = { "IntentionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyableCurveKeys, IntentionName), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_IntentionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_IntentionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongIntentionName_MetaData[] = {
		{ "Comment", "/** \n\x09* This curve's long intention (such as foot_fk_l.Transform.X or foot_fk_r.Scale.X). Used internally to match up curves when saving/restoring curves between different objects.\n\x09* Long intention names have priority in copy/paste over short intention names, but we fall back to short intention if it's unclear what the user is trying to do.\n\x09*/" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
		{ "ToolTip", "This curve's long intention (such as foot_fk_l.Transform.X or foot_fk_r.Scale.X). Used internally to match up curves when saving/restoring curves between different objects.\nLong intention names have priority in copy/paste over short intention names, but we fall back to short intention if it's unclear what the user is trying to do." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongIntentionName = { "LongIntentionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyableCurveKeys, LongIntentionName), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongIntentionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongIntentionName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyPositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_KeyAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_ShortDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_IntentionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::NewProp_LongIntentionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorCopyableCurveKeys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::ClassParams = {
		&UCurveEditorCopyableCurveKeys::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorCopyableCurveKeys()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorCopyableCurveKeys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorCopyableCurveKeys.OuterSingleton, Z_Construct_UClass_UCurveEditorCopyableCurveKeys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorCopyableCurveKeys.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorCopyableCurveKeys>()
	{
		return UCurveEditorCopyableCurveKeys::StaticClass();
	}
	UCurveEditorCopyableCurveKeys::UCurveEditorCopyableCurveKeys(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorCopyableCurveKeys);
	UCurveEditorCopyableCurveKeys::~UCurveEditorCopyableCurveKeys() {}
	void UCurveEditorCopyBuffer::StaticRegisterNativesUCurveEditorCopyBuffer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEditorCopyBuffer);
	UClass* Z_Construct_UClass_UCurveEditorCopyBuffer_NoRegister()
	{
		return UCurveEditorCopyBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEditorCopyBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsolutePosition_MetaData[];
#endif
		static void NewProp_bAbsolutePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsolutePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CurveEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CurveEditorCopyBuffer.h" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCurveEditorCopyableCurveKeys_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyBuffer, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_TimeOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_TimeOffset = { "TimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEditorCopyBuffer, TimeOffset), METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_TimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_TimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition_MetaData[] = {
		{ "ModuleRelativePath", "Private/CurveEditorCopyBuffer.h" },
	};
#endif
	void Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition_SetBit(void* Obj)
	{
		((UCurveEditorCopyBuffer*)Obj)->bAbsolutePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition = { "bAbsolutePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveEditorCopyBuffer), &Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_Curves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_TimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::NewProp_bAbsolutePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEditorCopyBuffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::ClassParams = {
		&UCurveEditorCopyBuffer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEditorCopyBuffer()
	{
		if (!Z_Registration_Info_UClass_UCurveEditorCopyBuffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEditorCopyBuffer.OuterSingleton, Z_Construct_UClass_UCurveEditorCopyBuffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEditorCopyBuffer.OuterSingleton;
	}
	template<> CURVEEDITOR_API UClass* StaticClass<UCurveEditorCopyBuffer>()
	{
		return UCurveEditorCopyBuffer::StaticClass();
	}
	UCurveEditorCopyBuffer::UCurveEditorCopyBuffer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEditorCopyBuffer);
	UCurveEditorCopyBuffer::~UCurveEditorCopyBuffer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_CurveEditorCopyBuffer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_CurveEditorCopyBuffer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEditorCopyableCurveKeys, UCurveEditorCopyableCurveKeys::StaticClass, TEXT("UCurveEditorCopyableCurveKeys"), &Z_Registration_Info_UClass_UCurveEditorCopyableCurveKeys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorCopyableCurveKeys), 2971899737U) },
		{ Z_Construct_UClass_UCurveEditorCopyBuffer, UCurveEditorCopyBuffer::StaticClass, TEXT("UCurveEditorCopyBuffer"), &Z_Registration_Info_UClass_UCurveEditorCopyBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEditorCopyBuffer), 1285961746U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_CurveEditorCopyBuffer_h_4241790842(TEXT("/Script/CurveEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_CurveEditorCopyBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_CurveEditor_Private_CurveEditorCopyBuffer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
