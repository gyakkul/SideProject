// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkinnedAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkinnedAsset() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USkinnedAsset::execFindSocketInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBoneIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketInfo(Z_Param_InSocketName,Z_Param_Out_OutTransform,Z_Param_Out_OutBoneIndex,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkinnedAsset::execFindSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	void USkinnedAsset::StaticRegisterNativesUSkinnedAsset()
	{
		UClass* Class = USkinnedAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSocket", &USkinnedAsset::execFindSocket },
			{ "FindSocketInfo", &USkinnedAsset::execFindSocketInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics
	{
		struct SkinnedAsset_eventFindSocket_Parms
		{
			FName InSocketName;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Find a socket object in this SkeletalMesh by name.\n\x09 * Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAsset.h" },
		{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedAsset, nullptr, "FindSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::SkinnedAsset_eventFindSocket_Parms), Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedAsset_FindSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedAsset_FindSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics
	{
		struct SkinnedAsset_eventFindSocketInfo_Parms
		{
			FName InSocketName;
			FTransform OutTransform;
			int32 OutBoneIndex;
			int32 OutIndex;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutBoneIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutBoneIndex = { "OutBoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, OutBoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SkinnedAsset_eventFindSocketInfo_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_OutIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09 * Find a socket object and associated info in this SkeletalMesh by name.\n\x09 * Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 * Also returns the index for the socket allowing for future fast access via GetSocketByIndex()\n\x09 * Also returns the socket transform and the bone index (if any)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAsset.h" },
		{ "ToolTip", "Find a socket object and associated info in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()\nAlso returns the socket transform and the bone index (if any)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkinnedAsset, nullptr, "FindSocketInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::SkinnedAsset_eventFindSocketInfo_Parms), Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkinnedAsset_FindSocketInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USkinnedAsset_FindSocketInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkinnedAsset);
	UClass* Z_Construct_UClass_USkinnedAsset_NoRegister()
	{
		return USkinnedAsset::StaticClass();
	}
	struct Z_Construct_UClass_USkinnedAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkinnedAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkinnedAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkinnedAsset_FindSocket, "FindSocket" }, // 3962026634
		{ &Z_Construct_UFunction_USkinnedAsset_FindSocketInfo, "FindSocketInfo" }, // 1935661416
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkinnedAsset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/SkinnedAsset.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkinnedAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkinnedAsset_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_AsyncCompilation_NoRegister, (int32)VTABLE_OFFSET(USkinnedAsset, IInterface_AsyncCompilation), false },  // 30865164
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkinnedAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkinnedAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkinnedAsset_Statics::ClassParams = {
		&USkinnedAsset::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USkinnedAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkinnedAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkinnedAsset()
	{
		if (!Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton, Z_Construct_UClass_USkinnedAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkinnedAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkinnedAsset>()
	{
		return USkinnedAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkinnedAsset);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkinnedAsset, USkinnedAsset::StaticClass, TEXT("USkinnedAsset"), &Z_Registration_Info_UClass_USkinnedAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkinnedAsset), 3794503705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_224761455(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkinnedAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
