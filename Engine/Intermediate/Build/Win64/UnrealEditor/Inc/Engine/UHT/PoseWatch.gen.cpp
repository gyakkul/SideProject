// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseWatch() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3d();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchElement();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchElement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchPoseElement();
	ENGINE_API UClass* Z_Construct_UClass_UPoseWatchPoseElement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UPoseWatchFolder::StaticRegisterNativesUPoseWatchFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchFolder);
	UClass* Z_Construct_UClass_UPoseWatchFolder_NoRegister()
	{
		return UPoseWatchFolder::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatchFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatchFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchFolder, Label), METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchFolder, Parent), Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UPoseWatchFolder*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatchFolder), &Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UPoseWatchFolder*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatchFolder), &Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchFolder_Statics::NewProp_bIsExpanded,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatchFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchFolder_Statics::ClassParams = {
		&UPoseWatchFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatchFolder()
	{
		if (!Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton, Z_Construct_UClass_UPoseWatchFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseWatchFolder.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseWatchFolder>()
	{
		return UPoseWatchFolder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchFolder);
	UPoseWatchFolder::~UPoseWatchFolder() {}
	void UPoseWatchElement::StaticRegisterNativesUPoseWatchElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchElement);
	UClass* Z_Construct_UClass_UPoseWatchElement_NoRegister()
	{
		return UPoseWatchElement::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatchElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasColor_MetaData[];
#endif
		static void NewProp_bHasColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatchElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "// If true will draw the node to the view port.\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true will draw the node to the view port." },
	};
#endif
	void Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UPoseWatchElement*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatchElement), &Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_SetBit(void* Obj)
	{
		((UPoseWatchElement*)Obj)->bHasColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor = { "bHasColor", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatchElement), &Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchElement, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchElement, Label), METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchElement, IconName), METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchElement, Parent), Z_Construct_UClass_UPoseWatch_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_bHasColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_IconName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchElement_Statics::NewProp_Parent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatchElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchElement_Statics::ClassParams = {
		&UPoseWatchElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatchElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatchElement()
	{
		if (!Z_Registration_Info_UClass_UPoseWatchElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchElement.OuterSingleton, Z_Construct_UClass_UPoseWatchElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseWatchElement.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseWatchElement>()
	{
		return UPoseWatchElement::StaticClass();
	}
	UPoseWatchElement::UPoseWatchElement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchElement);
	void UPoseWatchPoseElement::StaticRegisterNativesUPoseWatchPoseElement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatchPoseElement);
	UClass* Z_Construct_UClass_UPoseWatchPoseElement_NoRegister()
	{
		return UPoseWatchPoseElement::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatchPoseElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertViewportMask_MetaData[];
#endif
		static void NewProp_bInvertViewportMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertViewportMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendScaleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScaleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatchPoseElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPoseWatchElement,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchPoseElement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Optionally select a Blend Mask to control which bones on the skeleton are rendered. Any non-zero entries are rendered. */" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Optionally select a Blend Mask to control which bones on the skeleton are rendered. Any non-zero entries are rendered." },
		{ "UseAsBlendMask", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask = { "ViewportMask", nullptr, (EPropertyFlags)0x0014000800000041, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchPoseElement, ViewportMask), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Invert which bones are rendered when using a viewport mask */" },
		{ "EditCondition", "ViewportMask != nullptr" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Invert which bones are rendered when using a viewport mask" },
	};
#endif
	void Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_SetBit(void* Obj)
	{
		((UPoseWatchPoseElement*)Obj)->bInvertViewportMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask = { "bInvertViewportMask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatchPoseElement), &Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold_MetaData[] = {
		{ "Category", "Default" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The threshold which each bone's blend scale much surpass to be rendered using the viewport mask */" },
		{ "EditCondition", "ViewportMask != nullptr" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "The threshold which each bone's blend scale much surpass to be rendered using the viewport mask" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold = { "BlendScaleThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchPoseElement, BlendScaleThreshold), METADATA_PARAMS(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Offset the rendering of the bones in the viewport. */" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "Offset the rendering of the bones in the viewport." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset = { "ViewportOffset", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatchPoseElement, ViewportOffset), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_bInvertViewportMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_BlendScaleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatchPoseElement_Statics::NewProp_ViewportOffset,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatchPoseElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatchPoseElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatchPoseElement_Statics::ClassParams = {
		&UPoseWatchPoseElement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatchPoseElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatchPoseElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatchPoseElement()
	{
		if (!Z_Registration_Info_UClass_UPoseWatchPoseElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatchPoseElement.OuterSingleton, Z_Construct_UClass_UPoseWatchPoseElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseWatchPoseElement.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseWatchPoseElement>()
	{
		return UPoseWatchPoseElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatchPoseElement);
	UPoseWatchPoseElement::~UPoseWatchPoseElement() {}
	void UPoseWatch::StaticRegisterNativesUPoseWatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseWatch);
	UClass* Z_Construct_UClass_UPoseWatch_NoRegister()
	{
		return UPoseWatch::StaticClass();
	}
	struct Z_Construct_UClass_UPoseWatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportMask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertViewportMask_MetaData[];
#endif
		static void NewProp_bInvertViewportMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertViewportMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendScaleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendScaleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportOffset;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteOnDeselection_MetaData[];
#endif
		static void NewProp_bDeleteOnDeselection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteOnDeselection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNodeEnabled_MetaData[];
#endif
		static void NewProp_bIsNodeEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNodeEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsExpanded_MetaData[];
#endif
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_IconName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseWatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/PoseWatch.h" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, Node), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask = { "ViewportMask", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, ViewportMask_DEPRECATED), Z_Construct_UClass_UBlendProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bInvertViewportMask_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask = { "bInvertViewportMask", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold = { "BlendScaleThreshold", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, BlendScaleThreshold_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset = { "ViewportOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, ViewportOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector3d, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPoseWatchElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bDeleteOnDeselection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection = { "bDeleteOnDeselection", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "// If true will draw the pose to the viewport\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true will draw the pose to the viewport" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_MetaData[] = {
		{ "Comment", "// If true, the node is able to be drawn to the view port.\n" },
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
		{ "ToolTip", "If true, the node is able to be drawn to the view port." },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bIsNodeEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled = { "bIsNodeEnabled", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	void Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UPoseWatch*)Obj)->bIsExpanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPoseWatch), &Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, Color_DEPRECATED), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, Label), METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName = { "IconName", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, IconName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/PoseWatch.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPoseWatch, Parent), Z_Construct_UClass_UPoseWatchFolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoseWatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bInvertViewportMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_BlendScaleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_ViewportOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Elements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bDeleteOnDeselection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsNodeEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_bIsExpanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_IconName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoseWatch_Statics::NewProp_Parent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseWatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseWatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseWatch_Statics::ClassParams = {
		&UPoseWatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPoseWatch_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::PropPointers), 0),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseWatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseWatch()
	{
		if (!Z_Registration_Info_UClass_UPoseWatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseWatch.OuterSingleton, Z_Construct_UClass_UPoseWatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseWatch.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPoseWatch>()
	{
		return UPoseWatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseWatch);
	UPoseWatch::~UPoseWatch() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPoseWatch)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseWatchFolder, UPoseWatchFolder::StaticClass, TEXT("UPoseWatchFolder"), &Z_Registration_Info_UClass_UPoseWatchFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchFolder), 2618924841U) },
		{ Z_Construct_UClass_UPoseWatchElement, UPoseWatchElement::StaticClass, TEXT("UPoseWatchElement"), &Z_Registration_Info_UClass_UPoseWatchElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchElement), 1364690669U) },
		{ Z_Construct_UClass_UPoseWatchPoseElement, UPoseWatchPoseElement::StaticClass, TEXT("UPoseWatchPoseElement"), &Z_Registration_Info_UClass_UPoseWatchPoseElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatchPoseElement), 1747512901U) },
		{ Z_Construct_UClass_UPoseWatch, UPoseWatch::StaticClass, TEXT("UPoseWatch"), &Z_Registration_Info_UClass_UPoseWatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseWatch), 2067180481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_3749157250(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PoseWatch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
