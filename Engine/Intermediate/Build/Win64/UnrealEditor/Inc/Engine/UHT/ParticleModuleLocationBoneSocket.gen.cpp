// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBoneSocket.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationBoneSocket() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationBoneSocketSource;
	static UEnum* ELocationBoneSocketSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocationBoneSocketSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocationBoneSocketSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSource"));
		}
		return Z_Registration_Info_UEnum_ELocationBoneSocketSource.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELocationBoneSocketSource>()
	{
		return ELocationBoneSocketSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enumerators[] = {
		{ "BONESOCKETSOURCE_Bones", (int64)BONESOCKETSOURCE_Bones },
		{ "BONESOCKETSOURCE_Sockets", (int64)BONESOCKETSOURCE_Sockets },
		{ "BONESOCKETSOURCE_MAX", (int64)BONESOCKETSOURCE_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enum_MetaDataParams[] = {
		{ "BONESOCKETSOURCE_Bones.Name", "BONESOCKETSOURCE_Bones" },
		{ "BONESOCKETSOURCE_MAX.Name", "BONESOCKETSOURCE_MAX" },
		{ "BONESOCKETSOURCE_Sockets.Name", "BONESOCKETSOURCE_Sockets" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELocationBoneSocketSource",
		"ELocationBoneSocketSource",
		Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource()
	{
		if (!Z_Registration_Info_UEnum_ELocationBoneSocketSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationBoneSocketSource.InnerSingleton, Z_Construct_UEnum_Engine_ELocationBoneSocketSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocationBoneSocketSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod;
	static UEnum* ELocationBoneSocketSelectionMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSelectionMethod"));
		}
		return Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ELocationBoneSocketSelectionMethod>()
	{
		return ELocationBoneSocketSelectionMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enumerators[] = {
		{ "BONESOCKETSEL_Sequential", (int64)BONESOCKETSEL_Sequential },
		{ "BONESOCKETSEL_Random", (int64)BONESOCKETSEL_Random },
		{ "BONESOCKETSEL_MAX", (int64)BONESOCKETSEL_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enum_MetaDataParams[] = {
		{ "BONESOCKETSEL_MAX.Name", "BONESOCKETSEL_MAX" },
		{ "BONESOCKETSEL_Random.Name", "BONESOCKETSEL_Random" },
		{ "BONESOCKETSEL_Sequential.Name", "BONESOCKETSEL_Sequential" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ELocationBoneSocketSelectionMethod",
		"ELocationBoneSocketSelectionMethod",
		Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod()
	{
		if (!Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.InnerSingleton, Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo;
class UScriptStruct* FLocationBoneSocketInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationBoneSocketInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("LocationBoneSocketInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLocationBoneSocketInfo>()
{
	return FLocationBoneSocketInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationBoneSocketInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName_MetaData[] = {
		{ "Category", "LocationBoneSocketInfo" },
		{ "Comment", "/** The name of the bone/socket on the skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name of the bone/socket on the skeletal mesh" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName = { "BoneSocketName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocationBoneSocketInfo, BoneSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "LocationBoneSocketInfo" },
		{ "Comment", "/** The offset from the bone/socket to use */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The offset from the bone/socket to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLocationBoneSocketInfo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_BoneSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewProp_Offset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LocationBoneSocketInfo",
		sizeof(FLocationBoneSocketInfo),
		alignof(FLocationBoneSocketInfo),
		Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.InnerSingleton, Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo.InnerSingleton;
	}
	void UParticleModuleLocationBoneSocket::StaticRegisterNativesUParticleModuleLocationBoneSocket()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationBoneSocket);
	UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister()
	{
		return UParticleModuleLocationBoneSocket::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UniversalOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[];
#endif
		static void NewProp_bUpdatePositionEachFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[];
#endif
		static void NewProp_bOrientMeshEmitters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[];
#endif
		static void NewProp_bInheritBoneVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPreSelectedIndices_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPreSelectedIndices;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorSkelMesh;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Bone/Socket Location" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/**\n\x09 *\x09Whether the module uses Bones or Sockets for locations.\n\x09 *\n\x09 *\x09""BONESOCKETSOURCE_Bones\x09\x09- Use Bones as the source locations.\n\x09 *\x09""BONESOCKETSOURCE_Sockets\x09- Use Sockets as the source locations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "Whether the module uses Bones or Sockets for locations.\n\nBONESOCKETSOURCE_Bones          - Use Bones as the source locations.\nBONESOCKETSOURCE_Sockets        - Use Sockets as the source locations." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceType), Z_Construct_UEnum_Engine_ELocationBoneSocketSource, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType_MetaData)) }; // 4022932479
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** An offset to apply to each bone/socket */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "An offset to apply to each bone/socket" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset = { "UniversalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_Inner = { "SourceLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLocationBoneSocketInfo, METADATA_PARAMS(nullptr, 0) }; // 673705090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations = { "SourceLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_MetaData)) }; // 673705090
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/**\n\x09 *\x09The method by which to select the bone/socket to spawn at.\n\x09 *\n\x09 *\x09SEL_Sequential\x09\x09\x09- loop through the bone/socket array in order\n\x09 *\x09SEL_Random\x09\x09\x09\x09- randomly select a bone/socket from the array\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The method by which to select the bone/socket to spawn at.\n\nSEL_Sequential                  - loop through the bone/socket array in order\nSEL_Random                              - randomly select a bone/socket from the array" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod = { "SelectionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SelectionMethod), Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod_MetaData)) }; // 1894625126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** If true, update the particle locations each frame with that of the bone/socket */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, update the particle locations each frame with that of the bone/socket" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_SetBit(void* Obj)
	{
		((UParticleModuleLocationBoneSocket*)Obj)->bUpdatePositionEachFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame = { "bUpdatePositionEachFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_MetaData[] = {
		{ "Comment", "/** If true, rotate mesh emitter meshes to orient w/ the socket. Currently does nothing. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the socket. Currently does nothing." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_SetBit(void* Obj)
	{
		((UParticleModuleLocationBoneSocket*)Obj)->bOrientMeshEmitters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters = { "bOrientMeshEmitters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** If true, particles inherit the associated bone velocity when spawned */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationBoneSocket*)Obj)->bInheritBoneVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity = { "bInheritBoneVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationBoneSocket), &Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** A scale on how much of the bone's velocity a particle will inherit. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale = { "InheritVelocityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, InheritVelocityScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/**\n\x09 *\x09The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName = { "SkelMeshActorParamName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SkelMeshActorParamName), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** \n\x09When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is.\n\x09Too low and the randomness of selection may suffer, too high and memory will be wasted.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is.\nToo low and the randomness of selection may suffer, too high and memory will be wasted." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices = { "NumPreSelectedIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, NumPreSelectedIndices), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh_MetaData[] = {
		{ "Category", "BoneSocket" },
		{ "Comment", "/** The name of the skeletal mesh to use in the editor */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
		{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh = { "EditorSkelMesh", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_UniversalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SourceLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SelectionMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bUpdatePositionEachFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bOrientMeshEmitters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_bInheritBoneVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_InheritVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_SkelMeshActorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_NumPreSelectedIndices,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationBoneSocket>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::ClassParams = {
		&UParticleModuleLocationBoneSocket::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationBoneSocket_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationBoneSocket>()
	{
		return UParticleModuleLocationBoneSocket::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationBoneSocket);
	UParticleModuleLocationBoneSocket::~UParticleModuleLocationBoneSocket() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::EnumInfo[] = {
		{ ELocationBoneSocketSource_StaticEnum, TEXT("ELocationBoneSocketSource"), &Z_Registration_Info_UEnum_ELocationBoneSocketSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4022932479U) },
		{ ELocationBoneSocketSelectionMethod_StaticEnum, TEXT("ELocationBoneSocketSelectionMethod"), &Z_Registration_Info_UEnum_ELocationBoneSocketSelectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1894625126U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ScriptStructInfo[] = {
		{ FLocationBoneSocketInfo::StaticStruct, Z_Construct_UScriptStruct_FLocationBoneSocketInfo_Statics::NewStructOps, TEXT("LocationBoneSocketInfo"), &Z_Registration_Info_UScriptStruct_LocationBoneSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLocationBoneSocketInfo), 673705090U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationBoneSocket, UParticleModuleLocationBoneSocket::StaticClass, TEXT("UParticleModuleLocationBoneSocket"), &Z_Registration_Info_UClass_UParticleModuleLocationBoneSocket, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationBoneSocket), 215791497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_2795624455(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationBoneSocket_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
