// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXAttribute() {}
// Cross Module References
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXAttributeNameConversions();
	DMXPROTOCOL_API UClass* Z_Construct_UClass_UDMXAttributeNameConversions_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttribute();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DMXProtocol();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXAttribute;
class UScriptStruct* FDMXAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXAttribute, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_DMXAttribute.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXAttribute>()
{
	return FDMXAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Keywords;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXAttribute_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Name of this Attribute, displayed on Attribute selectors */" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
		{ "ToolTip", "Name of this Attribute, displayed on Attribute selectors" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXAttribute, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/**\n\x09 * Keywords used when auto-mapping Fixture Functions from a GDTF file to\n\x09 * match Fixture Functions to existing Attributes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
		{ "ToolTip", "Keywords used when auto-mapping Fixture Functions from a GDTF file to\nmatch Fixture Functions to existing Attributes." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXAttribute, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Keywords_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewProp_Keywords,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXAttribute",
		sizeof(FDMXAttribute),
		alignof(FDMXAttribute),
		Z_Construct_UScriptStruct_FDMXAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXAttribute.InnerSingleton, Z_Construct_UScriptStruct_FDMXAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXAttribute.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXAttributeName;
class UScriptStruct* FDMXAttributeName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXAttributeName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXAttributeName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXAttributeName, (UObject*)Z_Construct_UPackage__Script_DMXProtocol(), TEXT("DMXAttributeName"));
	}
	return Z_Registration_Info_UScriptStruct_DMXAttributeName.OuterSingleton;
}
template<> DMXPROTOCOL_API UScriptStruct* StaticStruct<FDMXAttributeName>()
{
	return FDMXAttributeName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXAttributeName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXAttributeName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "DMX" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXAttributeName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** The Attribute Name */" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
		{ "ToolTip", "The Attribute Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXAttributeName, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXAttributeName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXAttributeName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
		nullptr,
		&NewStructOps,
		"DMXAttributeName",
		sizeof(FDMXAttributeName),
		alignof(FDMXAttributeName),
		Z_Construct_UScriptStruct_FDMXAttributeName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttributeName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXAttributeName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXAttributeName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXAttributeName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXAttributeName.InnerSingleton, Z_Construct_UScriptStruct_FDMXAttributeName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXAttributeName.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXAttributeNameConversions::execConv_DMXAttributeToName)
	{
		P_GET_STRUCT_REF(FDMXAttributeName,Z_Param_Out_InAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UDMXAttributeNameConversions::Conv_DMXAttributeToName(Z_Param_Out_InAttribute);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXAttributeNameConversions::execConv_DMXAttributeToString)
	{
		P_GET_STRUCT_REF(FDMXAttributeName,Z_Param_Out_InAttribute);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDMXAttributeNameConversions::Conv_DMXAttributeToString(Z_Param_Out_InAttribute);
		P_NATIVE_END;
	}
	void UDMXAttributeNameConversions::StaticRegisterNativesUDMXAttributeNameConversions()
	{
		UClass* Class = UDMXAttributeNameConversions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_DMXAttributeToName", &UDMXAttributeNameConversions::execConv_DMXAttributeToName },
			{ "Conv_DMXAttributeToString", &UDMXAttributeNameConversions::execConv_DMXAttributeToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics
	{
		struct DMXAttributeNameConversions_eventConv_DMXAttributeToName_Parms
		{
			FDMXAttributeName InAttribute;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttribute;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_InAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXAttributeNameConversions_eventConv_DMXAttributeToName_Parms, InAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_InAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_InAttribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXAttributeNameConversions_eventConv_DMXAttributeToName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_InAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToName (DMX Attribute)" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXAttributeNameConversions, nullptr, "Conv_DMXAttributeToName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::DMXAttributeNameConversions_eventConv_DMXAttributeToName_Parms), Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics
	{
		struct DMXAttributeNameConversions_eventConv_DMXAttributeToString_Parms
		{
			FDMXAttributeName InAttribute;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InAttribute;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_InAttribute_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_InAttribute = { "InAttribute", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXAttributeNameConversions_eventConv_DMXAttributeToString_Parms, InAttribute), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_InAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_InAttribute_MetaData)) }; // 2246266977
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXAttributeNameConversions_eventConv_DMXAttributeToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_InAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Utilities|DMX" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "ToString (DMX Attribute)" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXAttributeNameConversions, nullptr, "Conv_DMXAttributeToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::DMXAttributeNameConversions_eventConv_DMXAttributeToString_Parms), Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXAttributeNameConversions);
	UClass* Z_Construct_UClass_UDMXAttributeNameConversions_NoRegister()
	{
		return UDMXAttributeNameConversions::StaticClass();
	}
	struct Z_Construct_UClass_UDMXAttributeNameConversions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXAttributeNameConversions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXProtocol,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXAttributeNameConversions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToName, "Conv_DMXAttributeToName" }, // 3794088083
		{ &Z_Construct_UFunction_UDMXAttributeNameConversions_Conv_DMXAttributeToString, "Conv_DMXAttributeToString" }, // 4281763672
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXAttributeNameConversions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXAttribute.h" },
		{ "ModuleRelativePath", "Public/DMXAttribute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXAttributeNameConversions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXAttributeNameConversions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXAttributeNameConversions_Statics::ClassParams = {
		&UDMXAttributeNameConversions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDMXAttributeNameConversions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXAttributeNameConversions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXAttributeNameConversions()
	{
		if (!Z_Registration_Info_UClass_UDMXAttributeNameConversions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXAttributeNameConversions.OuterSingleton, Z_Construct_UClass_UDMXAttributeNameConversions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXAttributeNameConversions.OuterSingleton;
	}
	template<> DMXPROTOCOL_API UClass* StaticClass<UDMXAttributeNameConversions>()
	{
		return UDMXAttributeNameConversions::StaticClass();
	}
	UDMXAttributeNameConversions::UDMXAttributeNameConversions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXAttributeNameConversions);
	UDMXAttributeNameConversions::~UDMXAttributeNameConversions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics::ScriptStructInfo[] = {
		{ FDMXAttribute::StaticStruct, Z_Construct_UScriptStruct_FDMXAttribute_Statics::NewStructOps, TEXT("DMXAttribute"), &Z_Registration_Info_UScriptStruct_DMXAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXAttribute), 1330867488U) },
		{ FDMXAttributeName::StaticStruct, Z_Construct_UScriptStruct_FDMXAttributeName_Statics::NewStructOps, TEXT("DMXAttributeName"), &Z_Registration_Info_UScriptStruct_DMXAttributeName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXAttributeName), 2246266977U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXAttributeNameConversions, UDMXAttributeNameConversions::StaticClass, TEXT("UDMXAttributeNameConversions"), &Z_Registration_Info_UClass_UDMXAttributeNameConversions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXAttributeNameConversions), 1615863504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_4226746558(TEXT("/Script/DMXProtocol"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXProtocol_Source_DMXProtocol_Public_DMXAttribute_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
