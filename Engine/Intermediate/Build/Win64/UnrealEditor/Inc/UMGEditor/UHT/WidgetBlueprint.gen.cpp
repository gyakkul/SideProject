// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/WidgetBlueprint.h"
#include "Animation/WidgetAnimationBinding.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprint() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EBindingKind();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetTickFrequency();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint();
	UMGEDITOR_API UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister();
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode();
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction();
	UMGEDITOR_API UEnum* Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateEditorBinding();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPath();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPathSegment();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED();
	UNREALED_API UClass* Z_Construct_UClass_UBaseWidgetBlueprint();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment;
class UScriptStruct* FEditorPropertyPathSegment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorPropertyPathSegment, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EditorPropertyPathSegment"));
	}
	return Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FEditorPropertyPathSegment>()
{
	return FEditorPropertyPathSegment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MemberName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsProperty_MetaData[];
#endif
		static void NewProp_IsProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorPropertyPathSegment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** The owner of the path segment (ie. What class or structure was this property from) */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The owner of the path segment (ie. What class or structure was this property from)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorPropertyPathSegment, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName_MetaData[] = {
		{ "Comment", "/** The member name in the structure this segment represents. */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The member name in the structure this segment represents." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorPropertyPathSegment, MemberName), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * The member guid in this structure this segment represents.  If this is valid it should \n\x09 * be used instead of Name to get the true name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The member guid in this structure this segment represents.  If this is valid it should\nbe used instead of Name to get the true name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorPropertyPathSegment, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_MetaData[] = {
		{ "Comment", "/** true if property, false if function */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "true if property, false if function" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_SetBit(void* Obj)
	{
		((FEditorPropertyPathSegment*)Obj)->IsProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty = { "IsProperty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorPropertyPathSegment), &Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_MemberGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewProp_IsProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"EditorPropertyPathSegment",
		sizeof(FEditorPropertyPathSegment),
		alignof(FEditorPropertyPathSegment),
		Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPathSegment()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment.InnerSingleton, Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorPropertyPath;
class UScriptStruct* FEditorPropertyPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorPropertyPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorPropertyPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorPropertyPath, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EditorPropertyPath"));
	}
	return Z_Registration_Info_UScriptStruct_EditorPropertyPath.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FEditorPropertyPath>()
{
	return FEditorPropertyPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorPropertyPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorPropertyPath>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FEditorPropertyPathSegment, METADATA_PARAMS(nullptr, 0) }; // 4236544359
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_MetaData[] = {
		{ "Comment", "/** The path of properties. */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The path of properties." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorPropertyPath, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_MetaData)) }; // 4236544359
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewProp_Segments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"EditorPropertyPath",
		sizeof(FEditorPropertyPath),
		alignof(FEditorPropertyPath),
		Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorPropertyPath()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorPropertyPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorPropertyPath.InnerSingleton, Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorPropertyPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DelegateEditorBinding;
class UScriptStruct* FDelegateEditorBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DelegateEditorBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DelegateEditorBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateEditorBinding, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("DelegateEditorBinding"));
	}
	return Z_Registration_Info_UScriptStruct_DelegateEditorBinding.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FDelegateEditorBinding>()
{
	return FDelegateEditorBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateEditorBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Comment", "/** The member widget the binding is on, must be a direct variable of the UUserWidget. */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The member widget the binding is on, must be a direct variable of the UUserWidget." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The property on the ObjectName that we are binding to. */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The property on the ObjectName that we are binding to." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "/** The function that was generated to return the SourceProperty */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The function that was generated to return the SourceProperty" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty_MetaData[] = {
		{ "Comment", "/** The property we are bindings to directly on the source object. */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The property we are bindings to directly on the source object." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty = { "SourceProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, SourceProperty), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, SourcePath), Z_Construct_UScriptStruct_FEditorPropertyPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath_MetaData)) }; // 4142421051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "Comment", "/** If it's an actual Function Graph in the blueprint that we're bound to, there's a GUID we can use to lookup that function, to deal with renames better.  This is that GUID. */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "If it's an actual Function Graph in the blueprint that we're bound to, there's a GUID we can use to lookup that function, to deal with renames better.  This is that GUID." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateEditorBinding, Kind), Z_Construct_UEnum_UMG_EBindingKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_MetaData)) }; // 3494567057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourceProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_MemberGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewProp_Kind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"DelegateEditorBinding",
		sizeof(FDelegateEditorBinding),
		alignof(FDelegateEditorBinding),
		Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateEditorBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_DelegateEditorBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DelegateEditorBinding.InnerSingleton, Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DelegateEditorBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED;
class UScriptStruct* FWidgetAnimation_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("WidgetAnimation_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FWidgetAnimation_DEPRECATED>()
{
	return FWidgetAnimation_DEPRECATED::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovieScene;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct used only for loading old animations */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "Struct used only for loading old animations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAnimation_DEPRECATED>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetAnimation_DEPRECATED, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_Inner = { "AnimationBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWidgetAnimationBinding, METADATA_PARAMS(nullptr, 0) }; // 656858518
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings = { "AnimationBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetAnimation_DEPRECATED, AnimationBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_MetaData)) }; // 656858518
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_MovieScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewProp_AnimationBindings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"WidgetAnimation_DEPRECATED",
		sizeof(FWidgetAnimation_DEPRECATED),
		alignof(FWidgetAnimation_DEPRECATED),
		Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation;
	static UEnum* EWidgetSupportsDynamicCreation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EWidgetSupportsDynamicCreation"));
		}
		return Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation.OuterSingleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetSupportsDynamicCreation>()
	{
		return EWidgetSupportsDynamicCreation_StaticEnum();
	}
	struct Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::Enumerators[] = {
		{ "EWidgetSupportsDynamicCreation::Default", (int64)EWidgetSupportsDynamicCreation::Default },
		{ "EWidgetSupportsDynamicCreation::Yes", (int64)EWidgetSupportsDynamicCreation::Yes },
		{ "EWidgetSupportsDynamicCreation::No", (int64)EWidgetSupportsDynamicCreation::No },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EWidgetSupportsDynamicCreation::Default" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "No.Name", "EWidgetSupportsDynamicCreation::No" },
		{ "Yes.Name", "EWidgetSupportsDynamicCreation::Yes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		"EWidgetSupportsDynamicCreation",
		"EWidgetSupportsDynamicCreation",
		Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation()
	{
		if (!Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation.InnerSingleton, Z_Construct_UEnum_UMGEditor_EWidgetSupportsDynamicCreation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode;
	static UEnum* EThumbnailPreviewSizeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EThumbnailPreviewSizeMode"));
		}
		return Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode.OuterSingleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EThumbnailPreviewSizeMode>()
	{
		return EThumbnailPreviewSizeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::Enumerators[] = {
		{ "EThumbnailPreviewSizeMode::MatchDesignerMode", (int64)EThumbnailPreviewSizeMode::MatchDesignerMode },
		{ "EThumbnailPreviewSizeMode::FillScreen", (int64)EThumbnailPreviewSizeMode::FillScreen },
		{ "EThumbnailPreviewSizeMode::Custom", (int64)EThumbnailPreviewSizeMode::Custom },
		{ "EThumbnailPreviewSizeMode::Desired", (int64)EThumbnailPreviewSizeMode::Desired },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Name", "EThumbnailPreviewSizeMode::Custom" },
		{ "Desired.Name", "EThumbnailPreviewSizeMode::Desired" },
		{ "FillScreen.Name", "EThumbnailPreviewSizeMode::FillScreen" },
		{ "MatchDesignerMode.Name", "EThumbnailPreviewSizeMode::MatchDesignerMode" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		"EThumbnailPreviewSizeMode",
		"EThumbnailPreviewSizeMode",
		Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode()
	{
		if (!Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode.InnerSingleton, Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction;
	static UEnum* EWidgetCompileTimeTickPrediction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("EWidgetCompileTimeTickPrediction"));
		}
		return Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction.OuterSingleton;
	}
	template<> UMGEDITOR_API UEnum* StaticEnum<EWidgetCompileTimeTickPrediction>()
	{
		return EWidgetCompileTimeTickPrediction_StaticEnum();
	}
	struct Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::Enumerators[] = {
		{ "EWidgetCompileTimeTickPrediction::WontTick", (int64)EWidgetCompileTimeTickPrediction::WontTick },
		{ "EWidgetCompileTimeTickPrediction::OnDemand", (int64)EWidgetCompileTimeTickPrediction::OnDemand },
		{ "EWidgetCompileTimeTickPrediction::WillTick", (int64)EWidgetCompileTimeTickPrediction::WillTick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * This represents the tickability of a widget computed at compile time\n * It is designed as a hint so the runtime can determine if ticking needs to be enabled\n * A lot of widgets set to WillTick means you might have a performance problem\n */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "OnDemand.Comment", "/** This widget is set to auto tick and we detect animations, latent actions but not script or native tick methods*/" },
		{ "OnDemand.Name", "EWidgetCompileTimeTickPrediction::OnDemand" },
		{ "OnDemand.ToolTip", "This widget is set to auto tick and we detect animations, latent actions but not script or native tick methods" },
		{ "ToolTip", "This represents the tickability of a widget computed at compile time\nIt is designed as a hint so the runtime can determine if ticking needs to be enabled\nA lot of widgets set to WillTick means you might have a performance problem" },
		{ "WillTick.Comment", "/** This widget has an implemented script tick or native tick */" },
		{ "WillTick.Name", "EWidgetCompileTimeTickPrediction::WillTick" },
		{ "WillTick.ToolTip", "This widget has an implemented script tick or native tick" },
		{ "WontTick.Comment", "/** The widget is manually set to never tick or we dont detect any animations, latent actions, and/or script or possible native tick methods */" },
		{ "WontTick.Name", "EWidgetCompileTimeTickPrediction::WontTick" },
		{ "WontTick.ToolTip", "The widget is manually set to never tick or we dont detect any animations, latent actions, and/or script or possible native tick methods" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		"EWidgetCompileTimeTickPrediction",
		"EWidgetCompileTimeTickPrediction",
		Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction()
	{
		if (!Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction.InnerSingleton, Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction.InnerSingleton;
	}
	void UWidgetBlueprint::StaticRegisterNativesUWidgetBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprint);
	UClass* Z_Construct_UClass_UWidgetBlueprint_NoRegister()
	{
		return UWidgetBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationData;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PaletteCategory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PaletteCategory;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickFrequency_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickFrequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TickPrediction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickPrediction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TickPrediction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TickPredictionReason_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TickPredictionReason;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PropertyBindings;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ThumbnailSizeMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailSizeMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ThumbnailSizeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailCustomSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ThumbnailCustomSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseWidgetBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * The widget blueprint enables extending UUserWidget the user extensible UWidget.\n */" },
		{ "IncludePath", "WidgetBlueprint.h" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The widget blueprint enables extending UUserWidget the user extensible UWidget." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDelegateEditorBinding, METADATA_PARAMS(nullptr, 0) }; // 1734226259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_MetaData)) }; // 1734226259
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_Inner = { "AnimationData", nullptr, (EPropertyFlags)0x0000008820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED, METADATA_PARAMS(nullptr, 0) }; // 2951657420
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010008820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, AnimationData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_MetaData)) }; // 2951657420
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_MetaData[] = {
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory_MetaData[] = {
		{ "Comment", "/**\n\x09 * Don't directly modify this property to change the palette category.  The actual value is stored \n\x09 * in the CDO of the UUserWidget, but a copy is stored here so that it's available in the serialized \n\x09 * Tag data in the asset header for access in the FAssetData.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "Don't directly modify this property to change the palette category.  The actual value is stored\nin the CDO of the UUserWidget, but a copy is stored here so that it's available in the serialized\nTag data in the asset header for access in the FAssetData." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory = { "PaletteCategory", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, PaletteCategory), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_MetaData[] = {
		{ "Comment", "/**\n\x09 * The desired tick frequency set by the user on the UserWidget's CDO.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The desired tick frequency set by the user on the UserWidget's CDO." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency = { "TickFrequency", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, TickFrequency), Z_Construct_UEnum_UMG_EWidgetTickFrequency, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_MetaData)) }; // 2187635387
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_MetaData[] = {
		{ "Comment", "/**\n\x09 * The computed frequency that the widget will need to be ticked at.  You can find the reasons for\n\x09 * this decision by looking at TickPredictionReason.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The computed frequency that the widget will need to be ticked at.  You can find the reasons for\nthis decision by looking at TickPredictionReason." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction = { "TickPrediction", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, TickPrediction), Z_Construct_UEnum_UMGEditor_EWidgetCompileTimeTickPrediction, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_MetaData)) }; // 562443517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason_MetaData[] = {
		{ "Comment", "/**\n\x09 * The reasons we may need to tick this widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The reasons we may need to tick this widget." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason = { "TickPredictionReason", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, TickPredictionReason), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "Comment", "/**\n\x09 * The total number of property bindings.  Consider this as a performance warning.\n\x09 */" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
		{ "ToolTip", "The total number of property bindings.  Consider this as a performance warning." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, PropertyBindings), METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode_MetaData[] = {
		{ "Category", "ThumbnailSettings" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode = { "ThumbnailSizeMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, ThumbnailSizeMode), Z_Construct_UEnum_UMGEditor_EThumbnailPreviewSizeMode, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode_MetaData)) }; // 2766661444
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailCustomSize_MetaData[] = {
		{ "Category", "ThumbnailSettings" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailCustomSize = { "ThumbnailCustomSize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, ThumbnailCustomSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailCustomSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailCustomSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Category", "ThumbnailSettings" },
		{ "ModuleRelativePath", "Public/WidgetBlueprint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprint, ThumbnailImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetBlueprint_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_AnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_Animations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PaletteCategory,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPrediction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_TickPredictionReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_PropertyBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailSizeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailCustomSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprint_Statics::NewProp_ThumbnailImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprint_Statics::ClassParams = {
		&UWidgetBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetBlueprint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprint()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprint.OuterSingleton, Z_Construct_UClass_UWidgetBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprint.OuterSingleton;
	}
	template<> UMGEDITOR_API UClass* StaticClass<UWidgetBlueprint>()
	{
		return UWidgetBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprint);
	UWidgetBlueprint::~UWidgetBlueprint() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprint)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::EnumInfo[] = {
		{ EWidgetSupportsDynamicCreation_StaticEnum, TEXT("EWidgetSupportsDynamicCreation"), &Z_Registration_Info_UEnum_EWidgetSupportsDynamicCreation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2551274376U) },
		{ EThumbnailPreviewSizeMode_StaticEnum, TEXT("EThumbnailPreviewSizeMode"), &Z_Registration_Info_UEnum_EThumbnailPreviewSizeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2766661444U) },
		{ EWidgetCompileTimeTickPrediction_StaticEnum, TEXT("EWidgetCompileTimeTickPrediction"), &Z_Registration_Info_UEnum_EWidgetCompileTimeTickPrediction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 562443517U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::ScriptStructInfo[] = {
		{ FEditorPropertyPathSegment::StaticStruct, Z_Construct_UScriptStruct_FEditorPropertyPathSegment_Statics::NewStructOps, TEXT("EditorPropertyPathSegment"), &Z_Registration_Info_UScriptStruct_EditorPropertyPathSegment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorPropertyPathSegment), 4236544359U) },
		{ FEditorPropertyPath::StaticStruct, Z_Construct_UScriptStruct_FEditorPropertyPath_Statics::NewStructOps, TEXT("EditorPropertyPath"), &Z_Registration_Info_UScriptStruct_EditorPropertyPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorPropertyPath), 4142421051U) },
		{ FDelegateEditorBinding::StaticStruct, Z_Construct_UScriptStruct_FDelegateEditorBinding_Statics::NewStructOps, TEXT("DelegateEditorBinding"), &Z_Registration_Info_UScriptStruct_DelegateEditorBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDelegateEditorBinding), 1734226259U) },
		{ FWidgetAnimation_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FWidgetAnimation_DEPRECATED_Statics::NewStructOps, TEXT("WidgetAnimation_DEPRECATED"), &Z_Registration_Info_UScriptStruct_WidgetAnimation_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetAnimation_DEPRECATED), 2951657420U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprint, UWidgetBlueprint::StaticClass, TEXT("UWidgetBlueprint"), &Z_Registration_Info_UClass_UWidgetBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprint), 3394195304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_3931060938(TEXT("/Script/UMGEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Public_WidgetBlueprint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
