// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSocket() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USkeletalMeshSocket::execInitializeSocketFromLocation)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_STRUCT(FVector,Z_Param_WorldNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeSocketFromLocation(Z_Param_SkelComp,Z_Param_WorldLocation,Z_Param_WorldNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMeshSocket::execGetSocketLocation)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SkelComp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSocketLocation(Z_Param_SkelComp);
		P_NATIVE_END;
	}
	void USkeletalMeshSocket::StaticRegisterNativesUSkeletalMeshSocket()
	{
		UClass* Class = USkeletalMeshSocket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSocketLocation", &USkeletalMeshSocket::execGetSocketLocation },
			{ "InitializeSocketFromLocation", &USkeletalMeshSocket::execInitializeSocketFromLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics
	{
		struct SkeletalMeshSocket_eventGetSocketLocation_Parms
		{
			const USkeletalMeshComponent* SkelComp;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_SkelComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, nullptr, "GetSocketLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::SkeletalMeshSocket_eventGetSocketLocation_Parms), Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics
	{
		struct SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms
		{
			const USkeletalMeshComponent* SkelComp;
			FVector WorldLocation;
			FVector WorldNormal;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkelComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp = { "SkelComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldNormal = { "WorldNormal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_SkelComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::NewProp_WorldNormal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|SkeletalMesh" },
		{ "Comment", "/** Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, nullptr, "InitializeSocketFromLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms), Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshSocket);
	UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister()
	{
		return USkeletalMeshSocket::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceAlwaysAnimated_MetaData[];
#endif
		static void NewProp_bForceAlwaysAnimated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAlwaysAnimated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMeshSocket_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation, "GetSocketLocation" }, // 2499962047
		{ &Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation, "InitializeSocketFromLocation" }, // 2265484157
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Actor" },
		{ "IncludePath", "Engine/SkeletalMeshSocket.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "Comment", "/** \n\x09 *\x09""Defines a named attachment location on the USkeletalMesh. \n\x09 *\x09These are set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent.\n\x09 *\x09The Outer of a SkeletalMeshSocket should always be the USkeletalMesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "Defines a named attachment location on the USkeletalMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent.\nThe Outer of a SkeletalMeshSocket should always be the USkeletalMesh." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, SocketName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, BoneName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation = { "RelativeLocation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale = { "RelativeScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData[] = {
		{ "Category", "Socket Parameters" },
		{ "Comment", "/** If true then the hierarchy of bones this socket is attached to will always be \n\x09    evaluated, even if it had previously been removed due to the current lod setting */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
		{ "ToolTip", "If true then the hierarchy of bones this socket is attached to will always be\n          evaluated, even if it had previously been removed due to the current lod setting" },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit(void* Obj)
	{
		((USkeletalMeshSocket*)Obj)->bForceAlwaysAnimated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated = { "bForceAlwaysAnimated", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkeletalMeshSocket), &Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_SocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_RelativeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSocket_Statics::NewProp_bForceAlwaysAnimated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshSocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshSocket_Statics::ClassParams = {
		&USkeletalMeshSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshSocket()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshSocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshSocket.OuterSingleton, Z_Construct_UClass_USkeletalMeshSocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshSocket.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshSocket>()
	{
		return USkeletalMeshSocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSocket);
	USkeletalMeshSocket::~USkeletalMeshSocket() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshSocket)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshSocket, USkeletalMeshSocket::StaticClass, TEXT("USkeletalMeshSocket"), &Z_Registration_Info_UClass_USkeletalMeshSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshSocket), 2864084964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_2006687934(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSocket_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
