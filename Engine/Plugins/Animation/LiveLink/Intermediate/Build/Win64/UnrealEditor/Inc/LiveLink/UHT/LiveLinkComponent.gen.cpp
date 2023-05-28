// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkComponent.h"
#include "Roles/LiveLinkAnimationBlueprintStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimecode();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkComponent();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkComponent_NoRegister();
	LIVELINK_API UFunction* Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics
	{
		struct _Script_LiveLink_eventLiveLinkTickSignature_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LiveLink_eventLiveLinkTickSignature_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LiveLink, nullptr, "LiveLinkTickSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::_Script_LiveLink_eventLiveLinkTickSignature_Parms), Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLiveLinkTickSignature_DelegateWrapper(const FMulticastScriptDelegate& LiveLinkTickSignature, float DeltaTime)
{
	struct _Script_LiveLink_eventLiveLinkTickSignature_Parms
	{
		float DeltaTime;
	};
	_Script_LiveLink_eventLiveLinkTickSignature_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	LiveLinkTickSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULiveLinkComponent::execGetSubjectDataAtSceneTime)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubjectName);
		P_GET_STRUCT_REF(FTimecode,Z_Param_Out_SceneTime);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSubjectDataAtSceneTime(Z_Param_SubjectName,Z_Param_Out_SceneTime,Z_Param_Out_bSuccess,Z_Param_Out_SubjectFrameHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkComponent::execGetSubjectDataAtWorldTime)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubjectName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_WorldTime);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSubjectDataAtWorldTime(Z_Param_SubjectName,Z_Param_WorldTime,Z_Param_Out_bSuccess,Z_Param_Out_SubjectFrameHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkComponent::execGetSubjectData)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SubjectName);
		P_GET_UBOOL_REF(Z_Param_Out_bSuccess);
		P_GET_STRUCT_REF(FSubjectFrameHandle,Z_Param_Out_SubjectFrameHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSubjectData(Z_Param_SubjectName,Z_Param_Out_bSuccess,Z_Param_Out_SubjectFrameHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULiveLinkComponent::execGetAvailableSubjectNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_SubjectNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAvailableSubjectNames(Z_Param_Out_SubjectNames);
		P_NATIVE_END;
	}
	void ULiveLinkComponent::StaticRegisterNativesULiveLinkComponent()
	{
		UClass* Class = ULiveLinkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAvailableSubjectNames", &ULiveLinkComponent::execGetAvailableSubjectNames },
			{ "GetSubjectData", &ULiveLinkComponent::execGetSubjectData },
			{ "GetSubjectDataAtSceneTime", &ULiveLinkComponent::execGetSubjectDataAtSceneTime },
			{ "GetSubjectDataAtWorldTime", &ULiveLinkComponent::execGetSubjectDataAtWorldTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics
	{
		struct LiveLinkComponent_eventGetAvailableSubjectNames_Parms
		{
			TArray<FName> SubjectNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubjectNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames_Inner = { "SubjectNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames = { "SubjectNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetAvailableSubjectNames_Parms, SubjectNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::NewProp_SubjectNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetAvailableSubjectNames is deprecated, use GetLiveLinkEnabledSubjectNames." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetAvailableSubjectNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::LiveLinkComponent_eventGetAvailableSubjectNames_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics
	{
		struct LiveLinkComponent_eventGetSubjectData_Parms
		{
			FName SubjectName;
			bool bSuccess;
			FSubjectFrameHandle SubjectFrameHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectData_Parms, SubjectName), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LiveLinkComponent_eventGetSubjectData_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkComponent_eventGetSubjectData_Parms), &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectData_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) }; // 872459058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSubjectData is deprecated, EvaluateLiveLinkFrame." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetSubjectData", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::LiveLinkComponent_eventGetSubjectData_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics
	{
		struct FTimecode
		{
			int32 Hours;
			int32 Minutes;
			int32 Seconds;
			int32 Frames;
			bool bDropFrameFormat;
		};

		struct LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms
		{
			FName SubjectName;
			FTimecode SceneTime;
			bool bSuccess;
			FSubjectFrameHandle SubjectFrameHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneTime_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SceneTime;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms, SubjectName), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime = { "SceneTime", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms, SceneTime), Z_Construct_UScriptStruct_FTimecode, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms), &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) }; // 872459058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SceneTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSubjectDataAtSceneTime is deprecated, use EvaluateLiveLinkFrameAtSceneTime." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetSubjectDataAtSceneTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::LiveLinkComponent_eventGetSubjectDataAtSceneTime_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics
	{
		struct LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms
		{
			FName SubjectName;
			float WorldTime;
			bool bSuccess;
			FSubjectFrameHandle SubjectFrameHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldTime;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectFrameHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms, SubjectName), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime = { "WorldTime", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms, WorldTime), METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime_MetaData)) };
	void Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms), &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectFrameHandle = { "SubjectFrameHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms, SubjectFrameHandle), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(nullptr, 0) }; // 872459058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_WorldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::NewProp_SubjectFrameHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "LiveLink" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "GetSubjectDataAtWorldTime is deprecated, use EvaluateLiveLinkFrameAtWorldTime." },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULiveLinkComponent, nullptr, "GetSubjectDataAtWorldTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::LiveLinkComponent_eventGetSubjectDataAtWorldTime_Parms), Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkComponent);
	UClass* Z_Construct_UClass_ULiveLinkComponent_NoRegister()
	{
		return ULiveLinkComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLiveLinkUpdated_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLiveLinkUpdated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULiveLinkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetAvailableSubjectNames, "GetAvailableSubjectNames" }, // 3833184163
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectData, "GetSubjectData" }, // 3971843590
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtSceneTime, "GetSubjectDataAtSceneTime" }, // 3952572998
		{ &Z_Construct_UFunction_ULiveLinkComponent_GetSubjectDataAtWorldTime, "GetSubjectDataAtWorldTime" }, // 2978872740
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// An actor component to enable accessing LiveLink data in Blueprints. \n// Data can be accessed in Editor through the \"OnLiveLinkUpdated\" event.\n// Any Skeletal Mesh Components on the parent will be set to animate in editor causing their AnimBPs to run.\n" },
		{ "DisplayName", "LiveLink Skeletal Animation" },
		{ "IncludePath", "LiveLinkComponent.h" },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
		{ "ToolTip", "An actor component to enable accessing LiveLink data in Blueprints.\nData can be accessed in Editor through the \"OnLiveLinkUpdated\" event.\nAny Skeletal Mesh Components on the parent will be set to animate in editor causing their AnimBPs to run." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "// This Event is triggered any time new LiveLink data is available, including in the editor\n" },
		{ "ModuleRelativePath", "Public/LiveLinkComponent.h" },
		{ "ToolTip", "This Event is triggered any time new LiveLink data is available, including in the editor" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated = { "OnLiveLinkUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkComponent, OnLiveLinkUpdated), Z_Construct_UDelegateFunction_LiveLink_LiveLinkTickSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated_MetaData)) }; // 2699662729
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkComponent_Statics::NewProp_OnLiveLinkUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkComponent_Statics::ClassParams = {
		&ULiveLinkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULiveLinkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkComponent()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkComponent.OuterSingleton, Z_Construct_UClass_ULiveLinkComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkComponent.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkComponent>()
	{
		return ULiveLinkComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkComponent);
	ULiveLinkComponent::~ULiveLinkComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkComponent, ULiveLinkComponent::StaticClass, TEXT("ULiveLinkComponent"), &Z_Registration_Info_UClass_ULiveLinkComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkComponent), 4213615051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_3509526800(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
