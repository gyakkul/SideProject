// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/NamedSlot.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedSlot() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNamedSlot::StaticRegisterNativesUNamedSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedSlot);
	UClass* Z_Construct_UClass_UNamedSlot_NoRegister()
	{
		return UNamedSlot::StaticClass();
	}
	struct Z_Construct_UClass_UNamedSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeOnInstanceOnly_MetaData[];
#endif
		static void NewProp_bExposeOnInstanceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeOnInstanceOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SlotGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows you to expose an external slot for your user widget.  When others reuse your user control, \n * they can put whatever they want in this named slot.\n */" },
		{ "IncludePath", "Components/NamedSlot.h" },
		{ "ModuleRelativePath", "Public/Components/NamedSlot.h" },
		{ "ToolTip", "Allows you to expose an external slot for your user widget.  When others reuse your user control,\nthey can put whatever they want in this named slot." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly_MetaData[] = {
		{ "Category", "Exposing" },
		{ "Comment", "/**\n\x09 * Named slots exposed on the instance only follow a slightly different set of rules.  For example, they can contain\n\x09 * some content that the user can replace after dropping it into their tree.  However, these slots can not be inherited\n\x09 * to be filled in by a subclass.  So if you want this named slot to be extensible in a subclass of this widget, you\n\x09 * should set or leave this value as false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/NamedSlot.h" },
		{ "ToolTip", "Named slots exposed on the instance only follow a slightly different set of rules.  For example, they can contain\nsome content that the user can replace after dropping it into their tree.  However, these slots can not be inherited\nto be filled in by a subclass.  So if you want this named slot to be extensible in a subclass of this widget, you\nshould set or leave this value as false." },
	};
#endif
	void Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly_SetBit(void* Obj)
	{
		((UNamedSlot*)Obj)->bExposeOnInstanceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly = { "bExposeOnInstanceOnly", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNamedSlot), &Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedSlot_Statics::NewProp_SlotGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/NamedSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedSlot_Statics::NewProp_SlotGuid = { "SlotGuid", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNamedSlot, SlotGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNamedSlot_Statics::NewProp_SlotGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlot_Statics::NewProp_SlotGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNamedSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedSlot_Statics::NewProp_bExposeOnInstanceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedSlot_Statics::NewProp_SlotGuid,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedSlot_Statics::ClassParams = {
		&UNamedSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UNamedSlot_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlot_Statics::PropPointers), 0),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedSlot()
	{
		if (!Z_Registration_Info_UClass_UNamedSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedSlot.OuterSingleton, Z_Construct_UClass_UNamedSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNamedSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UNamedSlot>()
	{
		return UNamedSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedSlot);
	UNamedSlot::~UNamedSlot() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNamedSlot)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNamedSlot, UNamedSlot::StaticClass, TEXT("UNamedSlot"), &Z_Registration_Info_UClass_UNamedSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedSlot), 3238214553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_1389429084(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NamedSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
