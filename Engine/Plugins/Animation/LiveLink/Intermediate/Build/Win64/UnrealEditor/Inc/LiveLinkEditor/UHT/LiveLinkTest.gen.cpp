// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LiveLinkTest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkTest() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIVELINKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal();
	LIVELINKEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkBaseFrameData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal;
class UScriptStruct* FLiveLinkInnerTestInternal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal, (UObject*)Z_Construct_UPackage__Script_LiveLinkEditor(), TEXT("LiveLinkInnerTestInternal"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal.OuterSingleton;
}
template<> LIVELINKEDITOR_API UScriptStruct* StaticStruct<FLiveLinkInnerTestInternal>()
{
	return FLiveLinkInnerTestInternal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerSingleFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerSingleFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerSingleInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InnerSingleInt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerVectorDim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InnerVectorDim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerFloatDim_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerFloatDim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerIntDim_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InnerIntDim;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InnerIntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InnerIntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InnerIntArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkInnerTestInternal>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleFloat_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleFloat = { "InnerSingleFloat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInnerTestInternal, InnerSingleFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleInt_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleInt = { "InnerSingleInt", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInnerTestInternal, InnerSingleInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleInt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerVectorDim_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerVectorDim = { "InnerVectorDim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InnerVectorDim, FLiveLinkInnerTestInternal), nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInnerTestInternal, InnerVectorDim), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerVectorDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerVectorDim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerFloatDim_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerFloatDim = { "InnerFloatDim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InnerFloatDim, FLiveLinkInnerTestInternal), nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInnerTestInternal, InnerFloatDim), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerFloatDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerFloatDim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntDim_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntDim = { "InnerIntDim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(InnerIntDim, FLiveLinkInnerTestInternal), nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInnerTestInternal, InnerIntDim), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntDim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntDim_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray_Inner = { "InnerIntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray = { "InnerIntArray", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkInnerTestInternal, InnerIntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerSingleInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerVectorDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerFloatDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntDim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewProp_InnerIntArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkEditor,
		nullptr,
		&NewStructOps,
		"LiveLinkInnerTestInternal",
		sizeof(FLiveLinkInnerTestInternal),
		alignof(FLiveLinkInnerTestInternal),
		Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkTestFrameDataInternal>() == std::is_polymorphic<FLiveLinkBaseFrameData>(), "USTRUCT FLiveLinkTestFrameDataInternal cannot be polymorphic unless super FLiveLinkBaseFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal;
class UScriptStruct* FLiveLinkTestFrameDataInternal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal, (UObject*)Z_Construct_UPackage__Script_LiveLinkEditor(), TEXT("LiveLinkTestFrameDataInternal"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal.OuterSingleton;
}
template<> LIVELINKEDITOR_API UScriptStruct* StaticStruct<FLiveLinkTestFrameDataInternal>()
{
	return FLiveLinkTestFrameDataInternal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotInterpolated_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NotInterpolated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleFloat_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SingleFloat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleInt_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SingleInt;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StructArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StructArray;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatArray;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkTestFrameDataInternal>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_NotInterpolated_MetaData[] = {
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_NotInterpolated = { "NotInterpolated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, NotInterpolated), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_NotInterpolated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_NotInterpolated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleVector_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleVector = { "SingleVector", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, SingleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleStruct_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleStruct = { "SingleStruct", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, SingleStruct), Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleStruct_MetaData)) }; // 735668320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleFloat_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleFloat = { "SingleFloat", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, SingleFloat), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleFloat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleInt_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleInt = { "SingleInt", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, SingleInt), METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleInt_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray_Inner = { "VectorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray = { "VectorArray", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, VectorArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray_Inner = { "StructArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal, METADATA_PARAMS(nullptr, 0) }; // 735668320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray = { "StructArray", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, StructArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray_MetaData)) }; // 735668320
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray_Inner = { "FloatArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray = { "FloatArray", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, FloatArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray_Inner = { "IntArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/LiveLinkTest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray = { "IntArray", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkTestFrameDataInternal, IntArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_NotInterpolated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleFloat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_SingleInt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_VectorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_StructArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_FloatArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewProp_IntArray,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkEditor,
		Z_Construct_UScriptStruct_FLiveLinkBaseFrameData,
		&NewStructOps,
		"LiveLinkTestFrameDataInternal",
		sizeof(FLiveLinkTestFrameDataInternal),
		alignof(FLiveLinkTestFrameDataInternal),
		Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkTest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkTest_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkInnerTestInternal::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkInnerTestInternal_Statics::NewStructOps, TEXT("LiveLinkInnerTestInternal"), &Z_Registration_Info_UScriptStruct_LiveLinkInnerTestInternal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkInnerTestInternal), 735668320U) },
		{ FLiveLinkTestFrameDataInternal::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkTestFrameDataInternal_Statics::NewStructOps, TEXT("LiveLinkTestFrameDataInternal"), &Z_Registration_Info_UScriptStruct_LiveLinkTestFrameDataInternal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkTestFrameDataInternal), 2289244604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkTest_h_1766166304(TEXT("/Script/LiveLinkEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkTest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLinkEditor_Private_LiveLinkTest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
