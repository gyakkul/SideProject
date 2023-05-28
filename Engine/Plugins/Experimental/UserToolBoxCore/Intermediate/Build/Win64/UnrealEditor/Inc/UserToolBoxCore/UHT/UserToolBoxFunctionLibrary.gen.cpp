// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/UserToolBoxFunctionLibrary.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserToolBoxFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxFunctionLibrary();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxFunctionLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUserToolBoxFunctionLibrary::execGetBrushByStyleAndId)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_StyleName);
		P_GET_PROPERTY(FNameProperty,Z_Param_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=UUserToolBoxFunctionLibrary::GetBrushByStyleAndId(Z_Param_StyleName,Z_Param_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserToolBoxFunctionLibrary::execGetAllSlateStyle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=UUserToolBoxFunctionLibrary::GetAllSlateStyle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUserToolBoxFunctionLibrary::execGetBrushById)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSlateBrush*)Z_Param__Result=UUserToolBoxFunctionLibrary::GetBrushById(Z_Param_Name);
		P_NATIVE_END;
	}
	void UUserToolBoxFunctionLibrary::StaticRegisterNativesUUserToolBoxFunctionLibrary()
	{
		UClass* Class = UUserToolBoxFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllSlateStyle", &UUserToolBoxFunctionLibrary::execGetAllSlateStyle },
			{ "GetBrushById", &UUserToolBoxFunctionLibrary::execGetBrushById },
			{ "GetBrushByStyleAndId", &UUserToolBoxFunctionLibrary::execGetBrushByStyleAndId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics
	{
		struct UserToolBoxFunctionLibrary_eventGetAllSlateStyle_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolBoxFunctionLibrary_eventGetAllSlateStyle_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Toolbox Library" },
		{ "ModuleRelativePath", "Private/UserToolBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolBoxFunctionLibrary, nullptr, "GetAllSlateStyle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::UserToolBoxFunctionLibrary_eventGetAllSlateStyle_Parms), Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics
	{
		struct UserToolBoxFunctionLibrary_eventGetBrushById_Parms
		{
			FString Name;
			FSlateBrush ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolBoxFunctionLibrary_eventGetBrushById_Parms, Name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolBoxFunctionLibrary_eventGetBrushById_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_ReturnValue_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Toolbox Library" },
		{ "ModuleRelativePath", "Private/UserToolBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolBoxFunctionLibrary, nullptr, "GetBrushById", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::UserToolBoxFunctionLibrary_eventGetBrushById_Parms), Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics
	{
		struct UserToolBoxFunctionLibrary_eventGetBrushByStyleAndId_Parms
		{
			FName StyleName;
			FName Id;
			FSlateBrush ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_StyleName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_StyleName = { "StyleName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolBoxFunctionLibrary_eventGetBrushByStyleAndId_Parms, StyleName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolBoxFunctionLibrary_eventGetBrushByStyleAndId_Parms, Id), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UserToolBoxFunctionLibrary_eventGetBrushByStyleAndId_Parms, ReturnValue), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_ReturnValue_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_StyleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Toolbox Library" },
		{ "ModuleRelativePath", "Private/UserToolBoxFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserToolBoxFunctionLibrary, nullptr, "GetBrushByStyleAndId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::UserToolBoxFunctionLibrary_eventGetBrushByStyleAndId_Parms), Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserToolBoxFunctionLibrary);
	UClass* Z_Construct_UClass_UUserToolBoxFunctionLibrary_NoRegister()
	{
		return UUserToolBoxFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetAllSlateStyle, "GetAllSlateStyle" }, // 1789738547
		{ &Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushById, "GetBrushById" }, // 3334215390
		{ &Z_Construct_UFunction_UUserToolBoxFunctionLibrary_GetBrushByStyleAndId, "GetBrushByStyleAndId" }, // 3123309707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UserToolBoxFunctionLibrary.h" },
		{ "ModuleRelativePath", "Private/UserToolBoxFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserToolBoxFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::ClassParams = {
		&UUserToolBoxFunctionLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserToolBoxFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UUserToolBoxFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserToolBoxFunctionLibrary.OuterSingleton, Z_Construct_UClass_UUserToolBoxFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserToolBoxFunctionLibrary.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUserToolBoxFunctionLibrary>()
	{
		return UUserToolBoxFunctionLibrary::StaticClass();
	}
	UUserToolBoxFunctionLibrary::UUserToolBoxFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserToolBoxFunctionLibrary);
	UUserToolBoxFunctionLibrary::~UUserToolBoxFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Private_UserToolBoxFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Private_UserToolBoxFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUserToolBoxFunctionLibrary, UUserToolBoxFunctionLibrary::StaticClass, TEXT("UUserToolBoxFunctionLibrary"), &Z_Registration_Info_UClass_UUserToolBoxFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserToolBoxFunctionLibrary), 2814391588U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Private_UserToolBoxFunctionLibrary_h_2404213014(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Private_UserToolBoxFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Private_UserToolBoxFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
