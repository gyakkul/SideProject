// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundscapeColorPoint.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundscapeColorPoint() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointComponent();
	SOUNDSCAPE_API UClass* Z_Construct_UClass_USoundscapeColorPointComponent_NoRegister();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPoint();
	SOUNDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray();
	UPackage* Z_Construct_UPackage__Script_Soundscape();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorPoint;
class UScriptStruct* FSoundscapeColorPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorPoint, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorPoint"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorPoint.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorPoint>()
{
	return FSoundscapeColorPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "Category", "Soundscape|ColorPoint" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapeColorPoint, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_ColorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_ColorPoint_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Soundscape|ColorPoint" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapeColorPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_ColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorPoint",
		sizeof(FSoundscapeColorPoint),
		alignof(FSoundscapeColorPoint),
		Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorPoint.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray;
class UScriptStruct* FSoundscapeColorPointVectorArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray, (UObject*)Z_Construct_UPackage__Script_Soundscape(), TEXT("SoundscapeColorPointVectorArray"));
	}
	return Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray.OuterSingleton;
}
template<> SOUNDSCAPE_API UScriptStruct* StaticStruct<FSoundscapeColorPointVectorArray>()
{
	return FSoundscapeColorPointVectorArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Locations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundscapeColorPointVectorArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "Category", "Soundscape|ColorPoint" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapeColorPointVectorArray, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_ColorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_ColorPoint_MetaData)) }; // 1225434376
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations_MetaData[] = {
		{ "Category", "Soundscape|ColorPoint" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSoundscapeColorPointVectorArray, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_ColorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewProp_Locations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
		nullptr,
		&NewStructOps,
		"SoundscapeColorPointVectorArray",
		sizeof(FSoundscapeColorPointVectorArray),
		alignof(FSoundscapeColorPointVectorArray),
		Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray()
	{
		if (!Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray.InnerSingleton, Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray.InnerSingleton;
	}
	void USoundscapeColorPointComponent::StaticRegisterNativesUSoundscapeColorPointComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundscapeColorPointComponent);
	UClass* Z_Construct_UClass_USoundscapeColorPointComponent_NoRegister()
	{
		return USoundscapeColorPointComponent::StaticClass();
	}
	struct Z_Construct_UClass_USoundscapeColorPointComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundscapeColorPointComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Soundscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Soundscape" },
		{ "IncludePath", "SoundscapeColorPoint.h" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundscapeColorPointComponent_Statics::NewProp_ColorPoint_MetaData[] = {
		{ "Categories", "Soundscape" },
		{ "Category", "Soundscape|ColorPoint" },
		{ "Comment", "// This Component's Soundscape Pigment value\n" },
		{ "ModuleRelativePath", "Public/SoundscapeColorPoint.h" },
		{ "ToolTip", "This Component's Soundscape Pigment value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundscapeColorPointComponent_Statics::NewProp_ColorPoint = { "ColorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundscapeColorPointComponent, ColorPoint), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USoundscapeColorPointComponent_Statics::NewProp_ColorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointComponent_Statics::NewProp_ColorPoint_MetaData)) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundscapeColorPointComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundscapeColorPointComponent_Statics::NewProp_ColorPoint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundscapeColorPointComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundscapeColorPointComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundscapeColorPointComponent_Statics::ClassParams = {
		&USoundscapeColorPointComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundscapeColorPointComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USoundscapeColorPointComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundscapeColorPointComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundscapeColorPointComponent()
	{
		if (!Z_Registration_Info_UClass_USoundscapeColorPointComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundscapeColorPointComponent.OuterSingleton, Z_Construct_UClass_USoundscapeColorPointComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundscapeColorPointComponent.OuterSingleton;
	}
	template<> SOUNDSCAPE_API UClass* StaticClass<USoundscapeColorPointComponent>()
	{
		return USoundscapeColorPointComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundscapeColorPointComponent);
	USoundscapeColorPointComponent::~USoundscapeColorPointComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics::ScriptStructInfo[] = {
		{ FSoundscapeColorPoint::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorPoint_Statics::NewStructOps, TEXT("SoundscapeColorPoint"), &Z_Registration_Info_UScriptStruct_SoundscapeColorPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorPoint), 876371544U) },
		{ FSoundscapeColorPointVectorArray::StaticStruct, Z_Construct_UScriptStruct_FSoundscapeColorPointVectorArray_Statics::NewStructOps, TEXT("SoundscapeColorPointVectorArray"), &Z_Registration_Info_UScriptStruct_SoundscapeColorPointVectorArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSoundscapeColorPointVectorArray), 116028693U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundscapeColorPointComponent, USoundscapeColorPointComponent::StaticClass, TEXT("USoundscapeColorPointComponent"), &Z_Registration_Info_UClass_USoundscapeColorPointComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundscapeColorPointComponent), 1148509705U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_831168710(TEXT("/Script/Soundscape"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Soundscape_Source_SoundScape_Public_SoundscapeColorPoint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
