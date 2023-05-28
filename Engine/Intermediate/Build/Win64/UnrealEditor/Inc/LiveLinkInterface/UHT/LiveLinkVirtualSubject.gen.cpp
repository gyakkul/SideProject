// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkVirtualSubject.h"
#include "LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkVirtualSubject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkVirtualSubject::StaticRegisterNativesULiveLinkVirtualSubject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkVirtualSubject);
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubject_NoRegister()
	{
		return ULiveLinkVirtualSubject::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkVirtualSubject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTranslators_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FrameTranslators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameTranslators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameTranslators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRebroadcastSubject_MetaData[];
#endif
		static void NewProp_bRebroadcastSubject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebroadcastSubject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A Virtual subject is made up of one or more real subjects from a source\n" },
		{ "IncludePath", "LiveLinkVirtualSubject.h" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "A Virtual subject is made up of one or more real subjects from a source" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role_MetaData[] = {
		{ "Comment", "/** The role the subject was build with. */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "The role the subject was build with." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkVirtualSubject, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_Inner = { "Subjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) }; // 930695248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Names of the real subjects to combine into a virtual subject */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "Names of the real subjects to combine into a virtual subject" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects = { "Subjects", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkVirtualSubject, Subjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_MetaData)) }; // 930695248
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner = { "FrameTranslators", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators = { "FrameTranslators", nullptr, (EPropertyFlags)0x0024088000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkVirtualSubject, FrameTranslators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If enabled, rebroadcast this subject */" },
		{ "ModuleRelativePath", "Public/LiveLinkVirtualSubject.h" },
		{ "ToolTip", "If enabled, rebroadcast this subject" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_SetBit(void* Obj)
	{
		((ULiveLinkVirtualSubject*)Obj)->bRebroadcastSubject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject = { "bRebroadcastSubject", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkVirtualSubject), &Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_Subjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_FrameTranslators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::NewProp_bRebroadcastSubject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkVirtualSubject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams = {
		&ULiveLinkVirtualSubject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkVirtualSubject()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton, Z_Construct_UClass_ULiveLinkVirtualSubject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkVirtualSubject.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkVirtualSubject>()
	{
		return ULiveLinkVirtualSubject::StaticClass();
	}
	ULiveLinkVirtualSubject::ULiveLinkVirtualSubject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkVirtualSubject);
	ULiveLinkVirtualSubject::~ULiveLinkVirtualSubject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkVirtualSubject, ULiveLinkVirtualSubject::StaticClass, TEXT("ULiveLinkVirtualSubject"), &Z_Registration_Info_UClass_ULiveLinkVirtualSubject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkVirtualSubject), 36657163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_3473154274(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkVirtualSubject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
