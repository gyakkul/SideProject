// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PinnedCommandListSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePinnedCommandListSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PINNEDCOMMANDLIST_API UClass* Z_Construct_UClass_UPinnedCommandListSettings();
	PINNEDCOMMANDLIST_API UClass* Z_Construct_UClass_UPinnedCommandListSettings_NoRegister();
	PINNEDCOMMANDLIST_API UEnum* Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType();
	PINNEDCOMMANDLIST_API UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListCommand();
	PINNEDCOMMANDLIST_API UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListContext();
	UPackage* Z_Construct_UPackage__Script_PinnedCommandList();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPinnedCommandListType;
	static UEnum* EPinnedCommandListType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPinnedCommandListType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPinnedCommandListType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType, (UObject*)Z_Construct_UPackage__Script_PinnedCommandList(), TEXT("EPinnedCommandListType"));
		}
		return Z_Registration_Info_UEnum_EPinnedCommandListType.OuterSingleton;
	}
	template<> PINNEDCOMMANDLIST_API UEnum* StaticEnum<EPinnedCommandListType>()
	{
		return EPinnedCommandListType_StaticEnum();
	}
	struct Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::Enumerators[] = {
		{ "EPinnedCommandListType::Command", (int64)EPinnedCommandListType::Command },
		{ "EPinnedCommandListType::CustomWidget", (int64)EPinnedCommandListType::CustomWidget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::Enum_MetaDataParams[] = {
		{ "Command.Comment", "/** A simple command */" },
		{ "Command.Name", "EPinnedCommandListType::Command" },
		{ "Command.ToolTip", "A simple command" },
		{ "CustomWidget.Comment", "/** A registered custom widget */" },
		{ "CustomWidget.Name", "EPinnedCommandListType::CustomWidget" },
		{ "CustomWidget.ToolTip", "A registered custom widget" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PinnedCommandList,
		nullptr,
		"EPinnedCommandListType",
		"EPinnedCommandListType",
		Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType()
	{
		if (!Z_Registration_Info_UEnum_EPinnedCommandListType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPinnedCommandListType.InnerSingleton, Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPinnedCommandListType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PinnedCommandListCommand;
class UScriptStruct* FPinnedCommandListCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PinnedCommandListCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PinnedCommandListCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinnedCommandListCommand, (UObject*)Z_Construct_UPackage__Script_PinnedCommandList(), TEXT("PinnedCommandListCommand"));
	}
	return Z_Registration_Info_UScriptStruct_PinnedCommandListCommand.OuterSingleton;
}
template<> PINNEDCOMMANDLIST_API UScriptStruct* StaticStruct<FPinnedCommandListCommand>()
{
	return FPinnedCommandListCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Binding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A command and its context */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "A command and its context" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinnedCommandListCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the command */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The name of the command" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinnedCommandListCommand, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding_MetaData[] = {
		{ "Comment", "/** The name of the command binding if this is a command */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The name of the command binding if this is a command" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinnedCommandListCommand, Binding), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** What type of command this is */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "What type of command this is" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinnedCommandListCommand, Type), Z_Construct_UEnum_PinnedCommandList_EPinnedCommandListType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_MetaData)) }; // 387341636
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PinnedCommandList,
		nullptr,
		&NewStructOps,
		"PinnedCommandListCommand",
		sizeof(FPinnedCommandListCommand),
		alignof(FPinnedCommandListCommand),
		Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_PinnedCommandListCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PinnedCommandListCommand.InnerSingleton, Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PinnedCommandListCommand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PinnedCommandListContext;
class UScriptStruct* FPinnedCommandListContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PinnedCommandListContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PinnedCommandListContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPinnedCommandListContext, (UObject*)Z_Construct_UPackage__Script_PinnedCommandList(), TEXT("PinnedCommandListContext"));
	}
	return Z_Registration_Info_UScriptStruct_PinnedCommandListContext.OuterSingleton;
}
template<> PINNEDCOMMANDLIST_API UScriptStruct* StaticStruct<FPinnedCommandListContext>()
{
	return FPinnedCommandListContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A pinned command list context, allowing us to persist a set of pinned commands */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "A pinned command list context, allowing us to persist a set of pinned commands" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPinnedCommandListContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** The name of the context that this command list is displayed within */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The name of the context that this command list is displayed within" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinnedCommandListContext, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPinnedCommandListCommand, METADATA_PARAMS(nullptr, 0) }; // 2294587064
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_MetaData[] = {
		{ "Comment", "/** The commands to display */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "The commands to display" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPinnedCommandListContext, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_MetaData)) }; // 2294587064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewProp_Commands,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PinnedCommandList,
		nullptr,
		&NewStructOps,
		"PinnedCommandListContext",
		sizeof(FPinnedCommandListContext),
		alignof(FPinnedCommandListContext),
		Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPinnedCommandListContext()
	{
		if (!Z_Registration_Info_UScriptStruct_PinnedCommandListContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PinnedCommandListContext.InnerSingleton, Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PinnedCommandListContext.InnerSingleton;
	}
	void UPinnedCommandListSettings::StaticRegisterNativesUPinnedCommandListSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPinnedCommandListSettings);
	UClass* Z_Construct_UClass_UPinnedCommandListSettings_NoRegister()
	{
		return UPinnedCommandListSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPinnedCommandListSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Contexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Contexts;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPinnedCommandListSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PinnedCommandList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPinnedCommandListSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A persistent set of pinned commands */" },
		{ "IncludePath", "PinnedCommandListSettings.h" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "A persistent set of pinned commands" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_Inner = { "Contexts", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPinnedCommandListContext, METADATA_PARAMS(nullptr, 0) }; // 2735545961
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_MetaData[] = {
		{ "Comment", "/** Persistent pinned command contexts */" },
		{ "ModuleRelativePath", "Private/PinnedCommandListSettings.h" },
		{ "ToolTip", "Persistent pinned command contexts" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPinnedCommandListSettings, Contexts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_MetaData)) }; // 2735545961
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPinnedCommandListSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPinnedCommandListSettings_Statics::NewProp_Contexts,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPinnedCommandListSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPinnedCommandListSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPinnedCommandListSettings_Statics::ClassParams = {
		&UPinnedCommandListSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPinnedCommandListSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPinnedCommandListSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPinnedCommandListSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPinnedCommandListSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPinnedCommandListSettings()
	{
		if (!Z_Registration_Info_UClass_UPinnedCommandListSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPinnedCommandListSettings.OuterSingleton, Z_Construct_UClass_UPinnedCommandListSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPinnedCommandListSettings.OuterSingleton;
	}
	template<> PINNEDCOMMANDLIST_API UClass* StaticClass<UPinnedCommandListSettings>()
	{
		return UPinnedCommandListSettings::StaticClass();
	}
	UPinnedCommandListSettings::UPinnedCommandListSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPinnedCommandListSettings);
	UPinnedCommandListSettings::~UPinnedCommandListSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::EnumInfo[] = {
		{ EPinnedCommandListType_StaticEnum, TEXT("EPinnedCommandListType"), &Z_Registration_Info_UEnum_EPinnedCommandListType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 387341636U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::ScriptStructInfo[] = {
		{ FPinnedCommandListCommand::StaticStruct, Z_Construct_UScriptStruct_FPinnedCommandListCommand_Statics::NewStructOps, TEXT("PinnedCommandListCommand"), &Z_Registration_Info_UScriptStruct_PinnedCommandListCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPinnedCommandListCommand), 2294587064U) },
		{ FPinnedCommandListContext::StaticStruct, Z_Construct_UScriptStruct_FPinnedCommandListContext_Statics::NewStructOps, TEXT("PinnedCommandListContext"), &Z_Registration_Info_UScriptStruct_PinnedCommandListContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPinnedCommandListContext), 2735545961U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPinnedCommandListSettings, UPinnedCommandListSettings::StaticClass, TEXT("UPinnedCommandListSettings"), &Z_Registration_Info_UClass_UPinnedCommandListSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPinnedCommandListSettings), 1232252136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_3087240354(TEXT("/Script/PinnedCommandList"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PinnedCommandList_Private_PinnedCommandListSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
