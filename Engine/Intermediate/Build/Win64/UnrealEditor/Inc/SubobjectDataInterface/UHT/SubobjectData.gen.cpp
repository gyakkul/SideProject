// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubobjectData.h"
#include "SubobjectDataHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubobjectData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectData();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectDataHandle();
	UPackage* Z_Construct_UPackage__Script_SubobjectDataInterface();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubobjectData;
class UScriptStruct* FSubobjectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubobjectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubobjectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubobjectData, (UObject*)Z_Construct_UPackage__Script_SubobjectDataInterface(), TEXT("SubobjectData"));
	}
	return Z_Registration_Info_UScriptStruct_SubobjectData.OuterSingleton;
}
template<> SUBOBJECTDATAINTERFACE_API UScriptStruct* StaticStruct<FSubobjectData>()
{
	return FSubobjectData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubobjectData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeakObjectPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WeakObjectPtr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentObjectHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentObjectHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildrenHandles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenHandles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenHandles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* A struct that represents a single subobject. This can be anything, but are\n* most commonly components attached to an actor instance or blueprint. Keeps track\n* of the handles to its parent object and any child that it has.\n*\n* If you wish to modify a subobject, use the SubobjectDataSubsystem.\n*/" },
		{ "ModuleRelativePath", "Public/SubobjectData.h" },
		{ "ToolTip", "A struct that represents a single subobject. This can be anything, but are\nmost commonly components attached to an actor instance or blueprint. Keeps track\nof the handles to its parent object and any child that it has.\n\nIf you wish to modify a subobject, use the SubobjectDataSubsystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubobjectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubobjectData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_WeakObjectPtr_MetaData[] = {
		{ "Comment", "// Weak ptr to the object instance represented by this node (e.g. component template)\n" },
		{ "ModuleRelativePath", "Public/SubobjectData.h" },
		{ "ToolTip", "Weak ptr to the object instance represented by this node (e.g. component template)" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_WeakObjectPtr = { "WeakObjectPtr", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectData, WeakObjectPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_WeakObjectPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_WeakObjectPtr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_Handle_MetaData[] = {
		{ "Comment", "// Handle that will have a globally unique ID when it is constructed (i.e. when this is constructed)\n" },
		{ "ModuleRelativePath", "Public/SubobjectData.h" },
		{ "ToolTip", "Handle that will have a globally unique ID when it is constructed (i.e. when this is constructed)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectData, Handle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_Handle_MetaData)) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ParentObjectHandle_MetaData[] = {
		{ "Comment", "// Handle to this object's parent. If this is invalid, then it is the root subobject.\n" },
		{ "ModuleRelativePath", "Public/SubobjectData.h" },
		{ "ToolTip", "Handle to this object's parent. If this is invalid, then it is the root subobject." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ParentObjectHandle = { "ParentObjectHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectData, ParentObjectHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ParentObjectHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ParentObjectHandle_MetaData)) }; // 3209397774
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles_Inner = { "ChildrenHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles_MetaData[] = {
		{ "Comment", "// Set of child subobjects that use this subobject as a parent\n" },
		{ "ModuleRelativePath", "Public/SubobjectData.h" },
		{ "ToolTip", "Set of child subobjects that use this subobject as a parent" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles = { "ChildrenHandles", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubobjectData, ChildrenHandles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles_MetaData)) }; // 3209397774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubobjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_WeakObjectPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ParentObjectHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubobjectData_Statics::NewProp_ChildrenHandles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubobjectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectDataInterface,
		nullptr,
		&NewStructOps,
		"SubobjectData",
		sizeof(FSubobjectData),
		alignof(FSubobjectData),
		Z_Construct_UScriptStruct_FSubobjectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubobjectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubobjectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubobjectData()
	{
		if (!Z_Registration_Info_UScriptStruct_SubobjectData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubobjectData.InnerSingleton, Z_Construct_UScriptStruct_FSubobjectData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubobjectData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectData_h_Statics::ScriptStructInfo[] = {
		{ FSubobjectData::StaticStruct, Z_Construct_UScriptStruct_FSubobjectData_Statics::NewStructOps, TEXT("SubobjectData"), &Z_Registration_Info_UScriptStruct_SubobjectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubobjectData), 331944198U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectData_h_1917328326(TEXT("/Script/SubobjectDataInterface"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
