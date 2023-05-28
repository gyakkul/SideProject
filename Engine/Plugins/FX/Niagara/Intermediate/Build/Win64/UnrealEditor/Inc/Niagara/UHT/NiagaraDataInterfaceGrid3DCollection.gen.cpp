// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceGrid3DCollection.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceGrid3DCollection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVolumeTexture_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTextureSize(Z_Param_Component,Z_Param_Out_SizeX,Z_Param_Out_SizeY,Z_Param_Out_SizeZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawTextureSize(Z_Param_Component,Z_Param_Out_SizeX,Z_Param_Out_SizeY,Z_Param_Out_SizeZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_OBJECT(UVolumeTexture,Z_Param_Dest);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TilesX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TilesY);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TileZ);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FillRawVolumeTexture(Z_Param_Component,Z_Param_Dest,Z_Param_Out_TilesX,Z_Param_Out_TilesY,Z_Param_Out_TileZ);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_Component);
		P_GET_OBJECT(UVolumeTexture,Z_Param_dest);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttributeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FillVolumeTexture(Z_Param_Component,Z_Param_dest,Z_Param_AttributeIndex);
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceGrid3DCollection::StaticRegisterNativesUNiagaraDataInterfaceGrid3DCollection()
	{
		UClass* Class = UNiagaraDataInterfaceGrid3DCollection::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FillRawVolumeTexture", &UNiagaraDataInterfaceGrid3DCollection::execFillRawVolumeTexture },
			{ "FillVolumeTexture", &UNiagaraDataInterfaceGrid3DCollection::execFillVolumeTexture },
			{ "GetRawTextureSize", &UNiagaraDataInterfaceGrid3DCollection::execGetRawTextureSize },
			{ "GetTextureSize", &UNiagaraDataInterfaceGrid3DCollection::execGetTextureSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms
		{
			const UNiagaraComponent* Component;
			UVolumeTexture* Dest;
			int32 TilesX;
			int32 TilesY;
			int32 TileZ;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dest;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TilesY;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TileZ;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, Dest), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesX = { "TilesX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TilesX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesY = { "TilesY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TilesY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TileZ = { "TileZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms, TileZ), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_Dest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TilesY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_TileZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by object user variables on the emitter to specify render targets to fill with data." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "FillRawVolumeTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::NiagaraDataInterfaceGrid3DCollection_eventFillRawVolumeTexture_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms
		{
			const UNiagaraComponent* Component;
			UVolumeTexture* dest;
			int32 AttributeIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dest;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AttributeIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_dest = { "dest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, dest), Z_Construct_UClass_UVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_AttributeIndex = { "AttributeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms, AttributeIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_dest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_AttributeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "// Fills a texture render target 2d with the current data from the simulation\n// #todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara\n// #todo(dmp): reimplement for 3d\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been replaced by object user variables on the emitter to specify render targets to fill with data." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Fills a texture render target 2d with the current data from the simulation\n#todo(dmp): this will eventually go away when we formalize how data makes it out of Niagara\n#todo(dmp): reimplement for 3d" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "FillVolumeTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::NiagaraDataInterfaceGrid3DCollection_eventFillVolumeTexture_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms
		{
			const UNiagaraComponent* Component;
			int32 SizeX;
			int32 SizeY;
			int32 SizeZ;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms, SizeZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NewProp_SizeZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "GetRawTextureSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::NiagaraDataInterfaceGrid3DCollection_eventGetRawTextureSize_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics
	{
		struct NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms
		{
			const UNiagaraComponent* Component;
			int32 SizeX;
			int32 SizeY;
			int32 SizeZ;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeY;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SizeZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, Component), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeZ = { "SizeZ", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms, SizeZ), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NewProp_SizeZ,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, nullptr, "GetTextureSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::NiagaraDataInterfaceGrid3DCollection_eventGetTextureSize_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceGrid3DCollection);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_NoRegister()
	{
		return UNiagaraDataInterfaceGrid3DCollection::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetUserParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderTargetUserParameter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideBufferFormat_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideBufferFormat_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrideBufferFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideFormat_MetaData[];
#endif
		static void NewProp_bOverrideFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideFormat;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewGrid_MetaData[];
#endif
		static void NewProp_bPreviewGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PreviewAttribute;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterfaceGrid3D,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillRawVolumeTexture, "FillRawVolumeTexture" }, // 2196969247
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_FillVolumeTexture, "FillVolumeTexture" }, // 3168847158
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetRawTextureSize, "GetRawTextureSize" }, // 2646485259
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceGrid3DCollection_GetTextureSize, "GetTextureSize" }, // 1794492620
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Grid" },
		{ "DisplayName", "Grid3D Collection" },
		{ "IncludePath", "NiagaraDataInterfaceGrid3DCollection.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "// Number of attributes stored on the grid\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Number of attributes stored on the grid" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes = { "NumAttributes", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, NumAttributes), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** Reference to a user parameter if we're reading one. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "Reference to a user parameter if we're reading one." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter = { "RenderTargetUserParameter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter_MetaData)) }; // 1724214256
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_MetaData[] = {
		{ "Category", "Grid" },
		{ "Comment", "/** When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision. */" },
		{ "EditCondition", "bOverrideFormat" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "When enabled overrides the format used to store data inside the grid, otherwise uses the project default setting.  Lower bit depth formats will save memory and performance at the cost of precision." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat = { "OverrideBufferFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat), Z_Construct_UEnum_Niagara_ENiagaraGpuBufferFormat, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_MetaData)) }; // 2870428067
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_MetaData[] = {
		{ "Category", "Grid" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid3DCollection*)Obj)->bOverrideFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat = { "bOverrideFormat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraDataInterfaceGrid3DCollection), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_MetaData[] = {
		{ "Category", "Grid" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceGrid3DCollection*)Obj)->bPreviewGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid = { "bPreviewGrid", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraDataInterfaceGrid3DCollection), &Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute_MetaData[] = {
		{ "Category", "Grid" },
		{ "EditCondition", "bPreviewGrid" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceGrid3DCollection.h" },
		{ "ToolTip", "When enabled allows you to preview the grid in a debug display" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute = { "PreviewAttribute", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceGrid3DCollection, PreviewAttribute), METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_NumAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_RenderTargetUserParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_OverrideBufferFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bOverrideFormat,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_bPreviewGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::NewProp_PreviewAttribute,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceGrid3DCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams = {
		&UNiagaraDataInterfaceGrid3DCollection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceGrid3DCollection>()
	{
		return UNiagaraDataInterfaceGrid3DCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceGrid3DCollection);
	UNiagaraDataInterfaceGrid3DCollection::~UNiagaraDataInterfaceGrid3DCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceGrid3DCollection, UNiagaraDataInterfaceGrid3DCollection::StaticClass, TEXT("UNiagaraDataInterfaceGrid3DCollection"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceGrid3DCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceGrid3DCollection), 2369516042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_2099945634(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceGrid3DCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
