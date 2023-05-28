// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNamedVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedFloat;
class UScriptStruct* FNamedFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedFloat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedFloat"));
	}
	return Z_Registration_Info_UScriptStruct_NamedFloat.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedFloat>()
{
	return FNamedFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named float */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedFloat, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Float" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedFloat, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedFloat_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedFloat",
		sizeof(FNamedFloat),
		alignof(FNamedFloat),
		Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedFloat.InnerSingleton, Z_Construct_UScriptStruct_FNamedFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedVector;
class UScriptStruct* FNamedVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedVector, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedVector"));
	}
	return Z_Registration_Info_UScriptStruct_NamedVector.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedVector>()
{
	return FNamedVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named float */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named float" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Vector" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedVector, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Vector" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedVector, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedVector_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedVector",
		sizeof(FNamedVector),
		alignof(FNamedVector),
		Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedVector()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedVector.InnerSingleton, Z_Construct_UScriptStruct_FNamedVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedColor;
class UScriptStruct* FNamedColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedColor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedColor"));
	}
	return Z_Registration_Info_UScriptStruct_NamedColor.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedColor>()
{
	return FNamedColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named color */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named color" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedColor, Value), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Color" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedColor, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedColor_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedColor",
		sizeof(FNamedColor),
		alignof(FNamedColor),
		Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedColor()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedColor.InnerSingleton, Z_Construct_UScriptStruct_FNamedColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedTransform;
class UScriptStruct* FNamedTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedTransform, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NamedTransform"));
	}
	return Z_Registration_Info_UScriptStruct_NamedTransform.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNamedTransform>()
{
	return FNamedTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A named transform */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A named transform" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Transform" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedTransform, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedTransform_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"NamedTransform",
		sizeof(FNamedTransform),
		alignof(FNamedTransform),
		Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedTransform.InnerSingleton, Z_Construct_UScriptStruct_FNamedTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocalSpacePose;
class UScriptStruct* FLocalSpacePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocalSpacePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocalSpacePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocalSpacePose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LocalSpacePose"));
	}
	return Z_Registration_Info_UScriptStruct_LocalSpacePose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLocalSpacePose>()
{
	return FLocalSpacePose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocalSpacePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A pose in local space (i.e. each transform is relative to its parent) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A pose in local space (i.e. each transform is relative to its parent)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocalSpacePose>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocalSpacePose, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocalSpacePose, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewProp_Names,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocalSpacePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LocalSpacePose",
		sizeof(FLocalSpacePose),
		alignof(FLocalSpacePose),
		Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocalSpacePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocalSpacePose()
	{
		if (!Z_Registration_Info_UScriptStruct_LocalSpacePose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocalSpacePose.InnerSingleton, Z_Construct_UScriptStruct_FLocalSpacePose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocalSpacePose.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSpacePose;
class UScriptStruct* FComponentSpacePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSpacePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSpacePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSpacePose"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSpacePose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentSpacePose>()
{
	return FComponentSpacePose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentSpacePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Names_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Names_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Names;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A pose in component space (i.e. each transform is relative to the component's transform) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
		{ "ToolTip", "A pose in component space (i.e. each transform is relative to the component's transform)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSpacePose>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Transforms" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentSpacePose, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_Inner = { "Names", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_MetaData[] = {
		{ "Category", "Names" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names = { "Names", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentSpacePose, Names), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewProp_Names,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSpacePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ComponentSpacePose",
		sizeof(FComponentSpacePose),
		alignof(FComponentSpacePose),
		Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePose()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentSpacePose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSpacePose.InnerSingleton, Z_Construct_UScriptStruct_FComponentSpacePose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentSpacePose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics::ScriptStructInfo[] = {
		{ FNamedFloat::StaticStruct, Z_Construct_UScriptStruct_FNamedFloat_Statics::NewStructOps, TEXT("NamedFloat"), &Z_Registration_Info_UScriptStruct_NamedFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedFloat), 2540087487U) },
		{ FNamedVector::StaticStruct, Z_Construct_UScriptStruct_FNamedVector_Statics::NewStructOps, TEXT("NamedVector"), &Z_Registration_Info_UScriptStruct_NamedVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedVector), 3903548831U) },
		{ FNamedColor::StaticStruct, Z_Construct_UScriptStruct_FNamedColor_Statics::NewStructOps, TEXT("NamedColor"), &Z_Registration_Info_UScriptStruct_NamedColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedColor), 2408461163U) },
		{ FNamedTransform::StaticStruct, Z_Construct_UScriptStruct_FNamedTransform_Statics::NewStructOps, TEXT("NamedTransform"), &Z_Registration_Info_UScriptStruct_NamedTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedTransform), 3669691309U) },
		{ FLocalSpacePose::StaticStruct, Z_Construct_UScriptStruct_FLocalSpacePose_Statics::NewStructOps, TEXT("LocalSpacePose"), &Z_Registration_Info_UScriptStruct_LocalSpacePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocalSpacePose), 2191557106U) },
		{ FComponentSpacePose::StaticStruct, Z_Construct_UScriptStruct_FComponentSpacePose_Statics::NewStructOps, TEXT("ComponentSpacePose"), &Z_Registration_Info_UScriptStruct_ComponentSpacePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSpacePose), 672325120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_3986905027(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
