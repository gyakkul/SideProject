// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemberReference() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MemberReference;
class UScriptStruct* FMemberReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MemberReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MemberReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMemberReference, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MemberReference"));
	}
	return Z_Registration_Info_UScriptStruct_MemberReference.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMemberReference>()
{
	return FMemberReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMemberReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MemberParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberScope_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MemberScope;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MemberName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemberGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MemberGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelfContext_MetaData[];
#endif
		static void NewProp_bSelfContext_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWasDeprecated_MetaData[];
#endif
		static void NewProp_bWasDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasDeprecated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// @TODO: this can encapsulate globally defined fields as well (like with native \n//        delegate signatures); consider renaming to FFieldReference\n" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "@TODO: this can encapsulate globally defined fields as well (like with native\n       delegate signatures); consider renaming to FFieldReference" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMemberReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMemberReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent_MetaData[] = {
		{ "Comment", "/** \n\x09 * Most often the Class that this member is defined in. Could be a UPackage \n\x09 * if it is a native delegate signature function (declared globally). Should \n\x09 * be NULL if bSelfContext is true.  \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Most often the Class that this member is defined in. Could be a UPackage\nif it is a native delegate signature function (declared globally). Should\nbe NULL if bSelfContext is true." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent = { "MemberParent", nullptr, (EPropertyFlags)0x0024080001000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMemberReference, MemberParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope = { "MemberScope", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMemberReference, MemberScope), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName_MetaData[] = {
		{ "Comment", "/** Name of variable */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Name of variable" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName = { "MemberName", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMemberReference, MemberName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid_MetaData[] = {
		{ "Comment", "/** The Guid of the variable */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "The Guid of the variable" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid = { "MemberGuid", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMemberReference, MemberGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_MetaData[] = {
		{ "Comment", "/** Whether or not this should be a \"self\" context */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Whether or not this should be a \"self\" context" },
	};
#endif
	void Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit(void* Obj)
	{
		((FMemberReference*)Obj)->bSelfContext = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext = { "bSelfContext", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMemberReference), &Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_MetaData[] = {
		{ "Comment", "/** Whether or not this property has been deprecated */" },
		{ "ModuleRelativePath", "Classes/Engine/MemberReference.h" },
		{ "ToolTip", "Whether or not this property has been deprecated" },
	};
#endif
	void Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit(void* Obj)
	{
		((FMemberReference*)Obj)->bWasDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated = { "bWasDeprecated", nullptr, (EPropertyFlags)0x0020080001000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMemberReference), &Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberScope,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_MemberGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bSelfContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMemberReference_Statics::NewProp_bWasDeprecated,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMemberReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MemberReference",
		sizeof(FMemberReference),
		alignof(FMemberReference),
		Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMemberReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMemberReference()
	{
		if (!Z_Registration_Info_UScriptStruct_MemberReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MemberReference.InnerSingleton, Z_Construct_UScriptStruct_FMemberReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MemberReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics::ScriptStructInfo[] = {
		{ FMemberReference::StaticStruct, Z_Construct_UScriptStruct_FMemberReference_Statics::NewStructOps, TEXT("MemberReference"), &Z_Registration_Info_UScriptStruct_MemberReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMemberReference), 2112165407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_2756437160(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MemberReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
