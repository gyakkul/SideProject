// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "View/MVVMViewClass.h"
#include "Bindings/MVVMCompiledBindingLibrary.h"
#include "Types/MVVMViewModelContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMViewClass() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass();
	MODELVIEWVIEWMODEL_API UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister();
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldId();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator();
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewModelContext();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator;
class UScriptStruct* FMVVMViewClass_SourceCreator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewClass_SourceCreator"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewClass_SourceCreator>()
{
	return FMVVMViewClass_SourceCreator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpectedSourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalViewModelInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalViewModelInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateInstance_MetaData[];
#endif
		static void NewProp_bCreateInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptional_MetaData[];
#endif
		static void NewProp_bOptional_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptional;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Shared data to find or create a ViewModel at runtime.\n */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Shared data to find or create a ViewModel at runtime." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewClass_SourceCreator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType_MetaData[] = {
		{ "Comment", "/** Class type to create a source at runtime. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Class type to create a source at runtime." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType = { "ExpectedSourceType", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, ExpectedSourceType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance_MetaData[] = {
		{ "Comment", "/** Info to find the ViewModel instance at runtime. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Info to find the ViewModel instance at runtime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance = { "GlobalViewModelInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, GlobalViewModelInstance), Z_Construct_UScriptStruct_FMVVMViewModelContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance_MetaData)) }; // 919489008
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * A resolvable path to retrieve the source instance at runtime.\n\x09 * It can be a path \"Property = Object.Function.Object\".\n\x09 * It can be a UFunction's name of a FProperty's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "A resolvable path to retrieve the source instance at runtime.\nIt can be a path \"Property = Object.Function.Object\".\nIt can be a UFunction's name of a FProperty's name." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath = { "FieldPath", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, FieldPath), Z_Construct_UScriptStruct_FMVVMVCompiledFieldPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath_MetaData)) }; // 1228609469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_SourceCreator, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_SetBit(void* Obj)
	{
		((FMVVMViewClass_SourceCreator*)Obj)->bCreateInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance = { "bCreateInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMVVMViewClass_SourceCreator), &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_SetBit(void* Obj)
	{
		((FMVVMViewClass_SourceCreator*)Obj)->bOptional = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional = { "bOptional", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMVVMViewClass_SourceCreator), &Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_ExpectedSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_GlobalViewModelInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_FieldPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bCreateInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewProp_bOptional,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewClass_SourceCreator",
		sizeof(FMVVMViewClass_SourceCreator),
		alignof(FMVVMViewClass_SourceCreator),
		Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding;
class UScriptStruct* FMVVMViewClass_CompiledBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMViewClass_CompiledBinding"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMViewClass_CompiledBinding>()
{
	return FMVVMViewClass_CompiledBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourcePropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Flags_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A compiled and shared binding for ViewModel<->View\n */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "A compiled and shared binding for ViewModel<->View" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMViewClass_CompiledBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, FieldId), Z_Construct_UScriptStruct_FMVVMVCompiledFieldId, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId_MetaData)) }; // 283122051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName = { "SourcePropertyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, SourcePropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, Binding), Z_Construct_UScriptStruct_FMVVMVCompiledBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding_MetaData)) }; // 303245884
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, ExecutionMode), Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_MetaData)) }; // 1749706235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMVVMViewClass_CompiledBinding, Flags), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_SourcePropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Binding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_ExecutionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewProp_Flags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMViewClass_CompiledBinding",
		sizeof(FMVVMViewClass_CompiledBinding),
		alignof(FMVVMViewClass_CompiledBinding),
		Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.InnerSingleton, Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding.InnerSingleton;
	}
	void UMVVMViewClass::StaticRegisterNativesUMVVMViewClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMViewClass);
	UClass* Z_Construct_UClass_UMVVMViewClass_NoRegister()
	{
		return UMVVMViewClass::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMViewClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceCreators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceCreators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceCreators;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompiledBindings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingLibrary_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingLibrary;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMViewClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Shared between every instances of the same View class.\n */" },
		{ "IncludePath", "View/MVVMViewClass.h" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Shared between every instances of the same View class." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_Inner = { "SourceCreators", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator, METADATA_PARAMS(nullptr, 0) }; // 872946577
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_MetaData[] = {
		{ "Comment", "/** Data to retrieve/create the sources (could be viewmodel, widget, ...). */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "Data to retrieve/create the sources (could be viewmodel, widget, ...)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators = { "SourceCreators", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewClass, SourceCreators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_MetaData)) }; // 872946577
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_Inner = { "CompiledBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding, METADATA_PARAMS(nullptr, 0) }; // 2792854651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_MetaData[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings = { "CompiledBindings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewClass, CompiledBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_MetaData)) }; // 2792854651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary_MetaData[] = {
		{ "Comment", "/** All the bindings shared between all the View instance. */" },
		{ "ModuleRelativePath", "Public/View/MVVMViewClass.h" },
		{ "ToolTip", "All the bindings shared between all the View instance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary = { "BindingLibrary", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMViewClass, BindingLibrary), Z_Construct_UScriptStruct_FMVVMCompiledBindingLibrary, METADATA_PARAMS(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary_MetaData)) }; // 2168120323
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_SourceCreators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_CompiledBindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMViewClass_Statics::NewProp_BindingLibrary,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMViewClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMViewClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMViewClass_Statics::ClassParams = {
		&UMVVMViewClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::PropPointers),
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMViewClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMViewClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMViewClass()
	{
		if (!Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton, Z_Construct_UClass_UMVVMViewClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMViewClass.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UClass* StaticClass<UMVVMViewClass>()
	{
		return UMVVMViewClass::StaticClass();
	}
	UMVVMViewClass::UMVVMViewClass(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMViewClass);
	UMVVMViewClass::~UMVVMViewClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ScriptStructInfo[] = {
		{ FMVVMViewClass_SourceCreator::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewClass_SourceCreator_Statics::NewStructOps, TEXT("MVVMViewClass_SourceCreator"), &Z_Registration_Info_UScriptStruct_MVVMViewClass_SourceCreator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewClass_SourceCreator), 872946577U) },
		{ FMVVMViewClass_CompiledBinding::StaticStruct, Z_Construct_UScriptStruct_FMVVMViewClass_CompiledBinding_Statics::NewStructOps, TEXT("MVVMViewClass_CompiledBinding"), &Z_Registration_Info_UScriptStruct_MVVMViewClass_CompiledBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMViewClass_CompiledBinding), 2792854651U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMViewClass, UMVVMViewClass::StaticClass, TEXT("UMVVMViewClass"), &Z_Registration_Info_UClass_UMVVMViewClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMViewClass), 1816453907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_4047253143(TEXT("/Script/ModelViewViewModel"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_View_MVVMViewClass_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
