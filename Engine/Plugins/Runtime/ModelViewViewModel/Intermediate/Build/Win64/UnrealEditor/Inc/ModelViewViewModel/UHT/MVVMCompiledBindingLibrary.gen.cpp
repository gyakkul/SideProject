// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bindings/MVVMCompiledBindingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMCompiledBindingLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UFunction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldId();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFields();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMVCompiledFields;
class UScriptStruct* FMVVMVCompiledFields::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledFields.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMVCompiledFields.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledFields, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMVCompiledFields"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMVCompiledFields.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMVCompiledFields>()
{
	return FMVVMVCompiledFields::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassOrScriptStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ClassOrScriptStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryStartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_LibraryStartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfProperties_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_NumberOfProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_NumberOfFunctions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFieldIds_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_NumberOfFieldIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** The info to fetch a list of FProperty or UFunction from a Class that will be needed by bindings. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "The info to fetch a list of FProperty or UFunction from a Class that will be needed by bindings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMVCompiledFields>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_ClassOrScriptStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_ClassOrScriptStruct = { "ClassOrScriptStruct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFields, ClassOrScriptStruct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_ClassOrScriptStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_ClassOrScriptStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_LibraryStartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_LibraryStartIndex = { "LibraryStartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFields, LibraryStartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_LibraryStartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_LibraryStartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfProperties = { "NumberOfProperties", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFields, NumberOfProperties), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFunctions = { "NumberOfFunctions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFields, NumberOfFunctions), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFunctions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFieldIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFieldIds = { "NumberOfFieldIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFields, NumberOfFieldIds), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFieldIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFieldIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_ClassOrScriptStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_LibraryStartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewProp_NumberOfFieldIds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMVCompiledFields",
		sizeof(FMVVMVCompiledFields),
		alignof(FMVVMVCompiledFields),
		Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFields()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledFields.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMVCompiledFields.InnerSingleton, Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMVCompiledFields.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath;
class UScriptStruct* FMVVMVCompiledFieldPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMVCompiledFieldPath"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMVCompiledFieldPath>()
{
	return FMVVMVCompiledFieldPath::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_StartIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Num;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindingLibraryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledBindingLibraryId;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains the info to evaluate a path for a specific library. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Contains the info to evaluate a path for a specific library." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMVCompiledFieldPath>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_StartIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_StartIndex = { "StartIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFieldPath, StartIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_StartIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_StartIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_Num_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFieldPath, Num), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_Num_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_CompiledBindingLibraryId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_CompiledBindingLibraryId = { "CompiledBindingLibraryId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFieldPath, CompiledBindingLibraryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_CompiledBindingLibraryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_CompiledBindingLibraryId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_StartIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_Num,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewProp_CompiledBindingLibraryId,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMVCompiledFieldPath",
		sizeof(FMVVMVCompiledFieldPath),
		alignof(FMVVMVCompiledFieldPath),
		Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath.InnerSingleton, Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId;
class UScriptStruct* FMVVMVCompiledFieldId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMVCompiledFieldId"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMVCompiledFieldId>()
{
	return FMVVMVCompiledFieldId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldIdIndex_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_FieldIdIndex;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindingLibraryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledBindingLibraryId;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains the FieldId index. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Contains the FieldId index." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMVCompiledFieldId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_FieldIdIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_FieldIdIndex = { "FieldIdIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFieldId, FieldIdIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_FieldIdIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_FieldIdIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_CompiledBindingLibraryId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_CompiledBindingLibraryId = { "CompiledBindingLibraryId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledFieldId, CompiledBindingLibraryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_CompiledBindingLibraryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_CompiledBindingLibraryId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_FieldIdIndex,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewProp_CompiledBindingLibraryId,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMVCompiledFieldId",
		sizeof(FMVVMVCompiledFieldId),
		alignof(FMVVMVCompiledFieldId),
		Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldId()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId.InnerSingleton, Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex;
class UScriptStruct* FMVVMCompiledLoadedPropertyOrFunctionIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMCompiledLoadedPropertyOrFunctionIndex"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMCompiledLoadedPropertyOrFunctionIndex>()
{
	return FMVVMCompiledLoadedPropertyOrFunctionIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsObjectProperty_MetaData[];
#endif
		static void NewProp_bIsObjectProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsObjectProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsScriptStructProperty_MetaData[];
#endif
		static void NewProp_bIsScriptStructProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScriptStructProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsProperty_MetaData[];
#endif
		static void NewProp_bIsProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMCompiledLoadedPropertyOrFunctionIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMCompiledLoadedPropertyOrFunctionIndex, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty_MetaData[] = {
		{ "Comment", "/** Is the property or the return property of the UFunction is a FObjectPropertyBase */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Is the property or the return property of the UFunction is a FObjectPropertyBase" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty_SetBit(void* Obj)
	{
		((FMVVMCompiledLoadedPropertyOrFunctionIndex*)Obj)->bIsObjectProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty = { "bIsObjectProperty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex), &Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty_MetaData[] = {
		{ "Comment", "/** Is the property or the return property of the UFunction is a FStructProperty */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Is the property or the return property of the UFunction is a FStructProperty" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty_SetBit(void* Obj)
	{
		((FMVVMCompiledLoadedPropertyOrFunctionIndex*)Obj)->bIsScriptStructProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty = { "bIsScriptStructProperty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex), &Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty_MetaData[] = {
		{ "Comment", "/** Is the index in LoadedProperties or the index is in LoadedFunctions. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Is the index in LoadedProperties or the index is in LoadedFunctions." },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty_SetBit(void* Obj)
	{
		((FMVVMCompiledLoadedPropertyOrFunctionIndex*)Obj)->bIsProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty = { "bIsProperty", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex), &Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsObjectProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsScriptStructProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewProp_bIsProperty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMCompiledLoadedPropertyOrFunctionIndex",
		sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex),
		alignof(FMVVMCompiledLoadedPropertyOrFunctionIndex),
		Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex.InnerSingleton, Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding;
class UScriptStruct* FMVVMVCompiledBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMVCompiledBinding, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMVCompiledBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMVCompiledBinding>()
{
	return FMVVMVCompiledBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationFieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionFunctionFieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionFunctionFieldPath;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindingLibraryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledBindingLibraryId;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Contains a single combination to execute a binding for a specific library. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Contains a single combination to execute a binding for a specific library." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMVCompiledBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_SourceFieldPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_SourceFieldPath = { "SourceFieldPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledBinding, SourceFieldPath), Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_SourceFieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_SourceFieldPath_MetaData)) }; // 1228609469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_DestinationFieldPath_MetaData[] = {
		{ "Comment", "// todo: make this an array to support multiple input to conversion functions\n" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "todo: make this an array to support multiple input to conversion functions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_DestinationFieldPath = { "DestinationFieldPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledBinding, DestinationFieldPath), Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_DestinationFieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_DestinationFieldPath_MetaData)) }; // 1228609469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_ConversionFunctionFieldPath_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_ConversionFunctionFieldPath = { "ConversionFunctionFieldPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledBinding, ConversionFunctionFieldPath), Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_ConversionFunctionFieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_ConversionFunctionFieldPath_MetaData)) }; // 1228609469
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_CompiledBindingLibraryId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_CompiledBindingLibraryId = { "CompiledBindingLibraryId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMVCompiledBinding, CompiledBindingLibraryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_CompiledBindingLibraryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_CompiledBindingLibraryId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_SourceFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_DestinationFieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_ConversionFunctionFieldPath,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewProp_CompiledBindingLibraryId,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMVCompiledBinding",
		sizeof(FMVVMVCompiledBinding),
		alignof(FMVVMVCompiledBinding),
		Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding.InnerSingleton, Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary;
class UScriptStruct* FMVVMCompiledBindingLibrary::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMCompiledBindingLibrary"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMCompiledBindingLibrary>()
{
	return FMVVMCompiledBindingLibrary::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LoadedFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldPaths;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindingLibraryId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledBindingLibraryId;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompiledFields;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompiledFieldNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledFieldNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompiledFieldNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Library of all the compiled bindings. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Library of all the compiled bindings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMCompiledBindingLibrary>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions_Inner = { "LoadedFunctions", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFunction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions = { "LoadedFunctions", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMCompiledBindingLibrary, LoadedFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths_Inner = { "FieldPaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex, METADATA_PARAMS(nullptr, 0) }; // 2255861254
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths = { "FieldPaths", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMCompiledBindingLibrary, FieldPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths_MetaData)) }; // 2255861254
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledBindingLibraryId_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledBindingLibraryId = { "CompiledBindingLibraryId", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMCompiledBindingLibrary, CompiledBindingLibraryId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledBindingLibraryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledBindingLibraryId_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields_Inner = { "CompiledFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMVCompiledFields, METADATA_PARAMS(nullptr, 0) }; // 1079669130
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields_MetaData[] = {
		{ "Comment", "/** Only needed for loading the FProperty/UFunction. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Only needed for loading the FProperty/UFunction." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields = { "CompiledFields", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMCompiledBindingLibrary, CompiledFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields_MetaData)) }; // 1079669130
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames_Inner = { "CompiledFieldNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames_MetaData[] = {
		{ "Comment", "/** Only needed for loading the FProperty/UFunction. */" },
		{ "ModuleRelativePath", "Public/Bindings/MVVMCompiledBindingLibrary.h" },
		{ "ToolTip", "Only needed for loading the FProperty/UFunction." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames = { "CompiledFieldNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMCompiledBindingLibrary, CompiledFieldNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_LoadedFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_FieldPaths,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledBindingLibraryId,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFields,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewProp_CompiledFieldNames,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMCompiledBindingLibrary",
		sizeof(FMVVMCompiledBindingLibrary),
		alignof(FMVVMCompiledBindingLibrary),
		Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary.InnerSingleton, Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMVVMVCompiledFields::StaticStruct, Z_Construct_UScriptStruct_FMVVMVCompiledFields_Statics::NewStructOps, TEXT("MVVMVCompiledFields"), &Z_Registration_Info_UScriptStruct_MVVMVCompiledFields, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMVCompiledFields), 1079669130U) },
		{ FMVVMVCompiledFieldPath::StaticStruct, Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath_Statics::NewStructOps, TEXT("MVVMVCompiledFieldPath"), &Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMVCompiledFieldPath), 1228609469U) },
		{ FMVVMVCompiledFieldId::StaticStruct, Z_Construct_UScriptStruct_FMVVMVCompiledFieldId_Statics::NewStructOps, TEXT("MVVMVCompiledFieldId"), &Z_Registration_Info_UScriptStruct_MVVMVCompiledFieldId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMVCompiledFieldId), 283122051U) },
		{ FMVVMCompiledLoadedPropertyOrFunctionIndex::StaticStruct, Z_Construct_UScriptStruct_FMVVMCompiledLoadedPropertyOrFunctionIndex_Statics::NewStructOps, TEXT("MVVMCompiledLoadedPropertyOrFunctionIndex"), &Z_Registration_Info_UScriptStruct_MVVMCompiledLoadedPropertyOrFunctionIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex), 2255861254U) },
		{ FMVVMVCompiledBinding::StaticStruct, Z_Construct_UScriptStruct_FMVVMVCompiledBinding_Statics::NewStructOps, TEXT("MVVMVCompiledBinding"), &Z_Registration_Info_UScriptStruct_MVVMVCompiledBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMVCompiledBinding), 303245884U) },
		{ FMVVMCompiledBindingLibrary::StaticStruct, Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary_Statics::NewStructOps, TEXT("MVVMCompiledBindingLibrary"), &Z_Registration_Info_UScriptStruct_MVVMCompiledBindingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMCompiledBindingLibrary), 2168120323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h_3290775102(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Bindings_MVVMCompiledBindingLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
