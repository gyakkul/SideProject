// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Note.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNote() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ANote();
	ENGINE_API UClass* Z_Construct_UClass_ANote_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ANote::StaticRegisterNativesANote()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANote);
	UClass* Z_Construct_UClass_ANote_NoRegister()
	{
		return ANote::StaticClass();
	}
	struct Z_Construct_UClass_ANote_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANote_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "Engine/Note.h" },
		{ "ModuleRelativePath", "Classes/Engine/Note.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANote_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Note" },
		{ "ModuleRelativePath", "Classes/Engine/Note.h" },
		{ "MultiLine", "true" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ANote_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANote, Text), METADATA_PARAMS(Z_Construct_UClass_ANote_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANote_Statics::NewProp_Text_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANote_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Note.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANote_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANote, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANote_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANote_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANote_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to arrow visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Note.h" },
		{ "ToolTip", "Reference to arrow visualization component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANote_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANote, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANote_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANote_Statics::NewProp_ArrowComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANote_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANote_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANote_Statics::NewProp_ArrowComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANote>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANote_Statics::ClassParams = {
		&ANote::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ANote_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ANote_Statics::PropPointers), 0),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANote()
	{
		if (!Z_Registration_Info_UClass_ANote.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANote.OuterSingleton, Z_Construct_UClass_ANote_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANote.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ANote>()
	{
		return ANote::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANote);
	ANote::~ANote() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANote, ANote::StaticClass, TEXT("ANote"), &Z_Registration_Info_UClass_ANote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANote), 340784556U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h_2645629260(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Note_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
