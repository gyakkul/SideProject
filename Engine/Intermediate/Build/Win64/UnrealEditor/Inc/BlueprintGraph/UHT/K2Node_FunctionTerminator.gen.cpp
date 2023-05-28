// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_FunctionTerminator.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_FunctionTerminator() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EditablePinBase();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_FunctionTerminator_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_FunctionTerminator::StaticRegisterNativesUK2Node_FunctionTerminator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_FunctionTerminator);
	UClass* Z_Construct_UClass_UK2Node_FunctionTerminator_NoRegister()
	{
		return UK2Node_FunctionTerminator::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_FunctionTerminator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignatureClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SignatureClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SignatureName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SignatureName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_EditablePinBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_FunctionTerminator.h" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference_MetaData[] = {
		{ "Comment", "/** Reference to the function signature. This is only resolvable by default if this is an inherited function */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "ToolTip", "Reference to the function signature. This is only resolvable by default if this is an inherited function" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference = { "FunctionReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionTerminator, FunctionReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference_MetaData)) }; // 2112165407
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Function signature class. Replaced by the 'FunctionReference' property. */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "ToolTip", "(DEPRECATED) Function signature class. Replaced by the 'FunctionReference' property." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass = { "SignatureClass", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionTerminator, SignatureClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName_MetaData[] = {
		{ "Comment", "/** (DEPRECATED) Function signature name. Replaced by the 'FunctionReference' property. */" },
		{ "ModuleRelativePath", "Classes/K2Node_FunctionTerminator.h" },
		{ "ToolTip", "(DEPRECATED) Function signature name. Replaced by the 'FunctionReference' property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName = { "SignatureName", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_FunctionTerminator, SignatureName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_FunctionReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::NewProp_SignatureName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_FunctionTerminator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::ClassParams = {
		&UK2Node_FunctionTerminator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::PropPointers),
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_FunctionTerminator()
	{
		if (!Z_Registration_Info_UClass_UK2Node_FunctionTerminator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_FunctionTerminator.OuterSingleton, Z_Construct_UClass_UK2Node_FunctionTerminator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_FunctionTerminator.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_FunctionTerminator>()
	{
		return UK2Node_FunctionTerminator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_FunctionTerminator);
	UK2Node_FunctionTerminator::~UK2Node_FunctionTerminator() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UK2Node_FunctionTerminator)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionTerminator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionTerminator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_FunctionTerminator, UK2Node_FunctionTerminator::StaticClass, TEXT("UK2Node_FunctionTerminator"), &Z_Registration_Info_UClass_UK2Node_FunctionTerminator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_FunctionTerminator), 3531074755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionTerminator_h_1039686555(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionTerminator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_FunctionTerminator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
