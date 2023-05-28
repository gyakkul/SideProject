// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXOptionalTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXOptionalTypes() {}
// Cross Module References
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalBool();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalFloat();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalGuid();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalInt32();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalString();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalTransform();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalVector2D();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalBool;
class UScriptStruct* FDMXOptionalBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalBool, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalBool"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalBool.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalBool>()
{
	return FDMXOptionalBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////\n// Wrappers for TOptional<Types> common to DMX related formats such as GDTF and MVR.\n" },
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
		{ "ToolTip", "Wrappers for TOptional<Types> common to DMX related formats such as GDTF and MVR." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalBool>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalBool",
		sizeof(FDMXOptionalBool),
		alignof(FDMXOptionalBool),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalBool()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalBool.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalBool.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalInt32;
class UScriptStruct* FDMXOptionalInt32::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalInt32.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalInt32.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalInt32, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalInt32"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalInt32.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalInt32>()
{
	return FDMXOptionalInt32::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalInt32>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalInt32",
		sizeof(FDMXOptionalInt32),
		alignof(FDMXOptionalInt32),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalInt32()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalInt32.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalInt32.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalInt32.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalFloat;
class UScriptStruct* FDMXOptionalFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalFloat, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalFloat"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalFloat.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalFloat>()
{
	return FDMXOptionalFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalFloat>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalFloat",
		sizeof(FDMXOptionalFloat),
		alignof(FDMXOptionalFloat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalFloat.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalFloat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalGuid;
class UScriptStruct* FDMXOptionalGuid::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalGuid.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalGuid.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalGuid, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalGuid"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalGuid.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalGuid>()
{
	return FDMXOptionalGuid::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalGuid>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalGuid",
		sizeof(FDMXOptionalGuid),
		alignof(FDMXOptionalGuid),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalGuid()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalGuid.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalGuid.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalGuid.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalVector2D;
class UScriptStruct* FDMXOptionalVector2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalVector2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalVector2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalVector2D, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalVector2D"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalVector2D.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalVector2D>()
{
	return FDMXOptionalVector2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalVector2D>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalVector2D",
		sizeof(FDMXOptionalVector2D),
		alignof(FDMXOptionalVector2D),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalVector2D()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalVector2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalVector2D.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalVector2D.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalTransform;
class UScriptStruct* FDMXOptionalTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalTransform, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalTransform"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalTransform.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalTransform>()
{
	return FDMXOptionalTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalTransform>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalTransform",
		sizeof(FDMXOptionalTransform),
		alignof(FDMXOptionalTransform),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalTransform.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931;
class UScriptStruct* FDMXOptionalColorCIE1931::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalColorCIE1931"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalColorCIE1931>()
{
	return FDMXOptionalColorCIE1931::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalColorCIE1931>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalColorCIE1931",
		sizeof(FDMXOptionalColorCIE1931),
		alignof(FDMXOptionalColorCIE1931),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXOptionalString;
class UScriptStruct* FDMXOptionalString::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXOptionalString.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXOptionalString.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXOptionalString, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXOptionalString"));
	}
	return Z_Registration_Info_UScriptStruct_DMXOptionalString.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXOptionalString>()
{
	return FDMXOptionalString::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXOptionalString_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXOptionalString_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DMXOptionalTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXOptionalString_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXOptionalString>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXOptionalString_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXOptionalString",
		sizeof(FDMXOptionalString),
		alignof(FDMXOptionalString),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXOptionalString_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXOptionalString_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalString()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXOptionalString.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXOptionalString.InnerSingleton, Z_Construct_UScriptStruct_FDMXOptionalString_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXOptionalString.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXOptionalTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXOptionalTypes_h_Statics::ScriptStructInfo[] = {
		{ FDMXOptionalBool::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalBool_Statics::NewStructOps, TEXT("DMXOptionalBool"), &Z_Registration_Info_UScriptStruct_DMXOptionalBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalBool), 3290348763U) },
		{ FDMXOptionalInt32::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalInt32_Statics::NewStructOps, TEXT("DMXOptionalInt32"), &Z_Registration_Info_UScriptStruct_DMXOptionalInt32, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalInt32), 227657722U) },
		{ FDMXOptionalFloat::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalFloat_Statics::NewStructOps, TEXT("DMXOptionalFloat"), &Z_Registration_Info_UScriptStruct_DMXOptionalFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalFloat), 2203316103U) },
		{ FDMXOptionalGuid::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalGuid_Statics::NewStructOps, TEXT("DMXOptionalGuid"), &Z_Registration_Info_UScriptStruct_DMXOptionalGuid, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalGuid), 3917036461U) },
		{ FDMXOptionalVector2D::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalVector2D_Statics::NewStructOps, TEXT("DMXOptionalVector2D"), &Z_Registration_Info_UScriptStruct_DMXOptionalVector2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalVector2D), 486301203U) },
		{ FDMXOptionalTransform::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalTransform_Statics::NewStructOps, TEXT("DMXOptionalTransform"), &Z_Registration_Info_UScriptStruct_DMXOptionalTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalTransform), 897329876U) },
		{ FDMXOptionalColorCIE1931::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalColorCIE1931_Statics::NewStructOps, TEXT("DMXOptionalColorCIE1931"), &Z_Registration_Info_UScriptStruct_DMXOptionalColorCIE1931, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalColorCIE1931), 2391551759U) },
		{ FDMXOptionalString::StaticStruct, Z_Construct_UScriptStruct_FDMXOptionalString_Statics::NewStructOps, TEXT("DMXOptionalString"), &Z_Registration_Info_UScriptStruct_DMXOptionalString, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXOptionalString), 1641884156U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXOptionalTypes_h_3641446179(TEXT("/Script/DMXRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXOptionalTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_DMXOptionalTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
