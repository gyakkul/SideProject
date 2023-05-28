// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraDataChannel.h"
#include "../Classes/NiagaraDataSetCompiledData.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraLwcStructConverter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout;
class UScriptStruct* FNiagaraDataChannelGameDataLayout::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataChannelGameDataLayout"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataChannelGameDataLayout>()
{
	return FNiagaraDataChannelGameDataLayout::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariableIndices_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableIndices_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableIndices_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VariableIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LwcConverters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LwcConverters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LwcConverters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataChannelGameDataLayout>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_ValueProp = { "VariableIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_Key_KeyProp = { "VariableIndices_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_MetaData[] = {
		{ "Comment", "/** Map of all variables contained in this DataChannel data and the indices into data arrays for game data. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Map of all variables contained in this DataChannel data and the indices into data arrays for game data." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices = { "VariableIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataChannelGameDataLayout, VariableIndices), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_MetaData)) }; // 1114376608
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_Inner = { "LwcConverters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraLwcStructConverter, METADATA_PARAMS(nullptr, 0) }; // 90643616
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_MetaData[] = {
		{ "Comment", "/** Helpers for converting LWC types into Niagara simulation SWC types. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Helpers for converting LWC types into Niagara simulation SWC types." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters = { "LwcConverters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataChannelGameDataLayout, LwcConverters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_MetaData)) }; // 90643616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_VariableIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewProp_LwcConverters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataChannelGameDataLayout",
		sizeof(FNiagaraDataChannelGameDataLayout),
		alignof(FNiagaraDataChannelGameDataLayout),
		Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout.InnerSingleton;
	}
	void UNiagaraDataChannel::StaticRegisterNativesUNiagaraDataChannel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannel);
	UClass* Z_Construct_UClass_UNiagaraDataChannel_NoRegister()
	{
		return UNiagaraDataChannel::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChannelName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepPreviousFrameData_MetaData[];
#endif
		static void NewProp_bKeepPreviousFrameData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepPreviousFrameData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompiledDataGPU_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompiledDataGPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameDataLayout_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GameDataLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams[] = {
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelName_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelName = { "ChannelName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannel, ChannelName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** The variables that define the data contained in this Data Channel. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "The variables that define the data contained in this Data Channel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannel, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_MetaData[] = {
		{ "Category", "Data Channel" },
		{ "Comment", "/** If true, we keep our previous frame's data. Some users will prefer a frame of latency to tick dependency. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "If true, we keep our previous frame's data. Some users will prefer a frame of latency to tick dependency." },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_SetBit(void* Obj)
	{
		((UNiagaraDataChannel*)Obj)->bKeepPreviousFrameData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData = { "bKeepPreviousFrameData", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataChannel), &Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData_MetaData[] = {
		{ "Comment", "/**\n\x09""Data layout for payloads in Niagara datasets.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Data layout for payloads in Niagara datasets." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData = { "CompiledData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannel, CompiledData), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData_MetaData)) }; // 4253291051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU = { "CompiledDataGPU", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannel, CompiledDataGPU), Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU_MetaData)) }; // 4253291051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_GameDataLayout_MetaData[] = {
		{ "Comment", "/** Layout information for any data stored at the \"Game\" level. i.e. From game code/BP. AoS layout and LWC types. */" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "Layout information for any data stored at the \"Game\" level. i.e. From game code/BP. AoS layout and LWC types." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_GameDataLayout = { "GameDataLayout", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannel, GameDataLayout), Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_GameDataLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_GameDataLayout_MetaData)) }; // 3546743015
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_ChannelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_bKeepPreviousFrameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_CompiledDataGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannel_Statics::NewProp_GameDataLayout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannel_Statics::ClassParams = {
		&UNiagaraDataChannel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannel()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannel.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannel>()
	{
		return UNiagaraDataChannel::StaticClass();
	}
	UNiagaraDataChannel::UNiagaraDataChannel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannel);
	UNiagaraDataChannel::~UNiagaraDataChannel() {}
	DEFINE_FUNCTION(UNiagaraDataChannelLibrary::execGetNiagaraDataChannel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_Channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNiagaraDataChannelHandler**)Z_Param__Result=UNiagaraDataChannelLibrary::GetNiagaraDataChannel(Z_Param_WorldContextObject,Z_Param_Channel);
		P_NATIVE_END;
	}
	void UNiagaraDataChannelLibrary::StaticRegisterNativesUNiagaraDataChannelLibrary()
	{
		UClass* Class = UNiagaraDataChannelLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagaraDataChannel", &UNiagaraDataChannelLibrary::execGetNiagaraDataChannel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics
	{
		struct NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms
		{
			const UObject* WorldContextObject;
			FName Channel;
			UNiagaraDataChannelHandler* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Channel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, Channel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms, ReturnValue), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelLibrary, nullptr, "GetNiagaraDataChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::NiagaraDataChannelLibrary_eventGetNiagaraDataChannel_Parms), Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelLibrary);
	UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary_NoRegister()
	{
		return UNiagaraDataChannelLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelLibrary_GetNiagaraDataChannel, "GetNiagaraDataChannel" }, // 1031362531
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannel.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannel.h" },
		{ "ToolTip", "A C++ and Blueprint accessible library of utility functions for accessing Niagara DataChannel" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::ClassParams = {
		&UNiagaraDataChannelLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelLibrary.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelLibrary>()
	{
		return UNiagaraDataChannelLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelLibrary);
	UNiagaraDataChannelLibrary::~UNiagaraDataChannelLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraDataChannelGameDataLayout::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataChannelGameDataLayout_Statics::NewStructOps, TEXT("NiagaraDataChannelGameDataLayout"), &Z_Registration_Info_UScriptStruct_NiagaraDataChannelGameDataLayout, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataChannelGameDataLayout), 3546743015U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannel, UNiagaraDataChannel::StaticClass, TEXT("UNiagaraDataChannel"), &Z_Registration_Info_UClass_UNiagaraDataChannel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannel), 2682729061U) },
		{ Z_Construct_UClass_UNiagaraDataChannelLibrary, UNiagaraDataChannelLibrary::StaticClass, TEXT("UNiagaraDataChannelLibrary"), &Z_Registration_Info_UClass_UNiagaraDataChannelLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelLibrary), 1857611069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_3205800356(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDataChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
