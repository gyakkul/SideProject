// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenuSection.h"
#include "ToolMenuContext.h"
#include "ToolMenuEntry.h"
#include "ToolMenuMisc.h"
#include "ToolMenuOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenuSection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuContext();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuEntry();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuInsert();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuOwner();
	TOOLMENUS_API UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection();
	UPackage* Z_Construct_UPackage__Script_ToolMenus();
// End Cross Module References
	struct ToolMenuSectionDynamic_eventConstructSections_Parms
	{
		UToolMenu* Menu;
		FToolMenuContext Context;
	};
	static FName NAME_UToolMenuSectionDynamic_ConstructSections = FName(TEXT("ConstructSections"));
	void UToolMenuSectionDynamic::ConstructSections(UToolMenu* Menu, FToolMenuContext const& Context)
	{
		ToolMenuSectionDynamic_eventConstructSections_Parms Parms;
		Parms.Menu=Menu;
		Parms.Context=Context;
		ProcessEvent(FindFunctionChecked(NAME_UToolMenuSectionDynamic_ConstructSections),&Parms);
	}
	void UToolMenuSectionDynamic::StaticRegisterNativesUToolMenuSectionDynamic()
	{
	}
	struct Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Menu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuSectionDynamic_eventConstructSections_Parms, Menu), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ToolMenuSectionDynamic_eventConstructSections_Parms, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context_MetaData)) }; // 3730854037
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Menu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UToolMenuSectionDynamic, nullptr, "ConstructSections", nullptr, nullptr, sizeof(ToolMenuSectionDynamic_eventConstructSections_Parms), Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuSectionDynamic);
	UClass* Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister()
	{
		return UToolMenuSectionDynamic::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuSectionDynamic_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuSectionDynamic_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UToolMenuSectionDynamic_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UToolMenuSectionDynamic_ConstructSections, "ConstructSections" }, // 449035193
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuSectionDynamic_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ToolMenuSection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuSectionDynamic_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuSectionDynamic>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuSectionDynamic_Statics::ClassParams = {
		&UToolMenuSectionDynamic::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuSectionDynamic_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuSectionDynamic_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuSectionDynamic()
	{
		if (!Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton, Z_Construct_UClass_UToolMenuSectionDynamic_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuSectionDynamic.OuterSingleton;
	}
	template<> TOOLMENUS_API UClass* StaticClass<UToolMenuSectionDynamic>()
	{
		return UToolMenuSectionDynamic::StaticClass();
	}
	UToolMenuSectionDynamic::UToolMenuSectionDynamic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuSectionDynamic);
	UToolMenuSectionDynamic::~UToolMenuSectionDynamic() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ToolMenuSection;
class UScriptStruct* FToolMenuSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ToolMenuSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ToolMenuSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FToolMenuSection, (UObject*)Z_Construct_UPackage__Script_ToolMenus(), TEXT("ToolMenuSection"));
	}
	return Z_Registration_Info_UScriptStruct_ToolMenuSection.OuterSingleton;
}
template<> TOOLMENUS_API UScriptStruct* StaticStruct<FToolMenuSection>()
{
	return FToolMenuSection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FToolMenuSection_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Blocks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InsertPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InsertPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolMenuSectionDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolMenuSectionDynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToolMenuSection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuSection, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuSection, Owner), Z_Construct_UScriptStruct_FToolMenuOwner, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner_MetaData)) }; // 4112241390
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_Inner = { "Blocks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FToolMenuEntry, METADATA_PARAMS(nullptr, 0) }; // 109855856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks = { "Blocks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuSection, Blocks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_MetaData)) }; // 109855856
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition = { "InsertPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuSection, InsertPosition), Z_Construct_UScriptStruct_FToolMenuInsert, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition_MetaData)) }; // 4236208575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuSection, Context), Z_Construct_UScriptStruct_FToolMenuContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context_MetaData)) }; // 3730854037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic_MetaData[] = {
		{ "Category", "Tool Menus" },
		{ "ModuleRelativePath", "Public/ToolMenuSection.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic = { "ToolMenuSectionDynamic", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FToolMenuSection, ToolMenuSectionDynamic), Z_Construct_UClass_UToolMenuSectionDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Blocks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_InsertPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewProp_ToolMenuSectionDynamic,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToolMenuSection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenus,
		nullptr,
		&NewStructOps,
		"ToolMenuSection",
		sizeof(FToolMenuSection),
		alignof(FToolMenuSection),
		Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToolMenuSection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToolMenuSection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToolMenuSection()
	{
		if (!Z_Registration_Info_UScriptStruct_ToolMenuSection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ToolMenuSection.InnerSingleton, Z_Construct_UScriptStruct_FToolMenuSection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ToolMenuSection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ScriptStructInfo[] = {
		{ FToolMenuSection::StaticStruct, Z_Construct_UScriptStruct_FToolMenuSection_Statics::NewStructOps, TEXT("ToolMenuSection"), &Z_Registration_Info_UScriptStruct_ToolMenuSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FToolMenuSection), 1014327715U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuSectionDynamic, UToolMenuSectionDynamic::StaticClass, TEXT("UToolMenuSectionDynamic"), &Z_Registration_Info_UClass_UToolMenuSectionDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuSectionDynamic), 3710509702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_1929592641(TEXT("/Script/ToolMenus"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolMenus_Public_ToolMenuSection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
