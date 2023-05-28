// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorDialogLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorDialogLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAppMsgType();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAppReturnType();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorDialogLibrary();
	EDITORSCRIPTINGUTILITIES_API UClass* Z_Construct_UClass_UEditorDialogLibrary_NoRegister();
	EDITORSCRIPTINGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EditorScriptingUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions;
class UScriptStruct* FEditorDialogLibraryObjectDetailsViewOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions, (UObject*)Z_Construct_UPackage__Script_EditorScriptingUtilities(), TEXT("EditorDialogLibraryObjectDetailsViewOptions"));
	}
	return Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions.OuterSingleton;
}
template<> EDITORSCRIPTINGUTILITIES_API UScriptStruct* StaticStruct<FEditorDialogLibraryObjectDetailsViewOptions>()
{
	return FEditorDialogLibraryObjectDetailsViewOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowObjectName_MetaData[];
#endif
		static void NewProp_bShowObjectName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSearch_MetaData[];
#endif
		static void NewProp_bAllowSearch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSearch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueColumnWidthRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ValueColumnWidthRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEditorDialogLibraryObjectDetailsViewOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName_MetaData[] = {
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName_SetBit(void* Obj)
	{
		((FEditorDialogLibraryObjectDetailsViewOptions*)Obj)->bShowObjectName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName = { "bShowObjectName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorDialogLibraryObjectDetailsViewOptions), &Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch_MetaData[] = {
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch_SetBit(void* Obj)
	{
		((FEditorDialogLibraryObjectDetailsViewOptions*)Obj)->bAllowSearch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch = { "bAllowSearch", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEditorDialogLibraryObjectDetailsViewOptions), &Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinWidth_MetaData[] = {
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "Comment", "/** The minimum dialog width. If zero, default to the medium window width defined by the Editor style. */" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "The minimum dialog width. If zero, default to the medium window width defined by the Editor style." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinWidth = { "MinWidth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorDialogLibraryObjectDetailsViewOptions, MinWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinHeight_MetaData[] = {
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "Comment", "/** The minimum dialog height. If zero, default to the medium window height defined by the Editor style. */" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "The minimum dialog height. If zero, default to the medium window height defined by the Editor style." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorDialogLibraryObjectDetailsViewOptions, MinHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_ValueColumnWidthRatio_MetaData[] = {
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "Comment", "/** The column size proportion, between 0 and 1, used to display the property value. The remaining of the horizontal space will be used to display the property name. */" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "The column size proportion, between 0 and 1, used to display the property value. The remaining of the horizontal space will be used to display the property name." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_ValueColumnWidthRatio = { "ValueColumnWidthRatio", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEditorDialogLibraryObjectDetailsViewOptions, ValueColumnWidthRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_ValueColumnWidthRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_ValueColumnWidthRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bShowObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_bAllowSearch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_MinHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewProp_ValueColumnWidthRatio,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
		nullptr,
		&NewStructOps,
		"EditorDialogLibraryObjectDetailsViewOptions",
		sizeof(FEditorDialogLibraryObjectDetailsViewOptions),
		alignof(FEditorDialogLibraryObjectDetailsViewOptions),
		Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions.InnerSingleton, Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditorDialogLibrary::execShowObjectsDetailsView)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_InOutObjects);
		P_GET_STRUCT_REF(FEditorDialogLibraryObjectDetailsViewOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorDialogLibrary::ShowObjectsDetailsView(Z_Param_Out_Title,Z_Param_Out_InOutObjects,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDialogLibrary::execShowObjectDetailsView)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
		P_GET_OBJECT(UObject,Z_Param_InOutObject);
		P_GET_STRUCT_REF(FEditorDialogLibraryObjectDetailsViewOptions,Z_Param_Out_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorDialogLibrary::ShowObjectDetailsView(Z_Param_Out_Title,Z_Param_InOutObject,Z_Param_Out_Options);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDialogLibrary::execShowSuppressableWarningDialog)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Message);
		P_GET_PROPERTY(FStrProperty,Z_Param_InIniSettingName);
		P_GET_PROPERTY(FStrProperty,Z_Param_InIniSettingFileNameOverride);
		P_GET_UBOOL(Z_Param_bDefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorDialogLibrary::ShowSuppressableWarningDialog(Z_Param_Out_Title,Z_Param_Out_Message,Z_Param_InIniSettingName,Z_Param_InIniSettingFileNameOverride,Z_Param_bDefaultValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorDialogLibrary::execShowMessage)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Title);
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Message);
		P_GET_PROPERTY(FByteProperty,Z_Param_MessageType);
		P_GET_PROPERTY(FByteProperty,Z_Param_DefaultValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EAppReturnType::Type>*)Z_Param__Result=UEditorDialogLibrary::ShowMessage(Z_Param_Out_Title,Z_Param_Out_Message,EAppMsgType::Type(Z_Param_MessageType),EAppReturnType::Type(Z_Param_DefaultValue));
		P_NATIVE_END;
	}
	void UEditorDialogLibrary::StaticRegisterNativesUEditorDialogLibrary()
	{
		UClass* Class = UEditorDialogLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowMessage", &UEditorDialogLibrary::execShowMessage },
			{ "ShowObjectDetailsView", &UEditorDialogLibrary::execShowObjectDetailsView },
			{ "ShowObjectsDetailsView", &UEditorDialogLibrary::execShowObjectsDetailsView },
			{ "ShowSuppressableWarningDialog", &UEditorDialogLibrary::execShowSuppressableWarningDialog },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics
	{
		struct EditorDialogLibrary_eventShowMessage_Parms
		{
			FText Title;
			FText Message;
			TEnumAsByte<EAppMsgType::Type> MessageType;
			TEnumAsByte<EAppReturnType::Type> DefaultValue;
			TEnumAsByte<EAppReturnType::Type> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowMessage_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowMessage_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowMessage_Parms, MessageType), Z_Construct_UEnum_CoreUObject_EAppMsgType, METADATA_PARAMS(nullptr, 0) }; // 560831581
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowMessage_Parms, DefaultValue), Z_Construct_UEnum_CoreUObject_EAppReturnType, METADATA_PARAMS(nullptr, 0) }; // 2973043059
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowMessage_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EAppReturnType, METADATA_PARAMS(nullptr, 0) }; // 2973043059
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Message Dialog" },
		{ "Comment", "/**\n\x09 * Open a modal message box dialog with the given message. If running in \"-unattended\" mode it will immediately \n\x09 * return the value specified by DefaultValue. If not running in \"-unattended\" mode then it will block execution\n\x09 * until the user makes a decision, at which point their decision will be returned.\n\x09 * @param Title \x09\x09The title of the created dialog window\n\x09 * @param Message \x09\x09Text of the message to show\n\x09 * @param MessageType \x09Specifies which buttons the dialog should have\n\x09 * @param DefaultValue \x09If the application is Unattended, the function will log and return DefaultValue\n\x09 * @return The result of the users decision, or DefaultValue if running in unattended mode.\n\x09*/" },
		{ "CPP_Default_DefaultValue", "Type::No" },
		{ "DisplayName", "Show Message Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "Open a modal message box dialog with the given message. If running in \"-unattended\" mode it will immediately\nreturn the value specified by DefaultValue. If not running in \"-unattended\" mode then it will block execution\nuntil the user makes a decision, at which point their decision will be returned.\n@param Title                 The title of the created dialog window\n@param Message               Text of the message to show\n@param MessageType   Specifies which buttons the dialog should have\n@param DefaultValue  If the application is Unattended, the function will log and return DefaultValue\n@return The result of the users decision, or DefaultValue if running in unattended mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDialogLibrary, nullptr, "ShowMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::EditorDialogLibrary_eventShowMessage_Parms), Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics
	{
		struct EditorDialogLibrary_eventShowObjectDetailsView_Parms
		{
			FText Title;
			UObject* InOutObject;
			FEditorDialogLibraryObjectDetailsViewOptions Options;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowObjectDetailsView_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_InOutObject = { "InOutObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowObjectDetailsView_Parms, InOutObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowObjectDetailsView_Parms, Options), Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Options_MetaData)) }; // 3882145483
	void Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorDialogLibrary_eventShowObjectDetailsView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorDialogLibrary_eventShowObjectDetailsView_Parms), &Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_InOutObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Object Dialog" },
		{ "Comment", "/**\n\x09 * Open a modal message box dialog containing a details view for inspecting / modifying a UObject. \n\x09 * @param Title \x09\x09The title of the created dialog window\n\x09 * @param InOutObject \x09Object instance of ClassOfObject which is supposed to be viewed\n\x09 * @param Options \x09\x09Optional settings to customize the look of the details view\n\x09 * @return The result of the users decision, true=Ok, false=Cancel, or false if running in unattended mode.\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "DisplayName", "Show Object Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "Open a modal message box dialog containing a details view for inspecting / modifying a UObject.\n@param Title                 The title of the created dialog window\n@param InOutObject   Object instance of ClassOfObject which is supposed to be viewed\n@param Options               Optional settings to customize the look of the details view\n@return The result of the users decision, true=Ok, false=Cancel, or false if running in unattended mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDialogLibrary, nullptr, "ShowObjectDetailsView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::EditorDialogLibrary_eventShowObjectDetailsView_Parms), Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics
	{
		struct EditorDialogLibrary_eventShowObjectsDetailsView_Parms
		{
			FText Title;
			TArray<UObject*> InOutObjects;
			FEditorDialogLibraryObjectDetailsViewOptions Options;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InOutObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InOutObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InOutObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Options;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowObjectsDetailsView_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Title_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects_Inner = { "InOutObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects = { "InOutObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowObjectsDetailsView_Parms, InOutObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Options_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowObjectsDetailsView_Parms, Options), Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Options_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Options_MetaData)) }; // 3882145483
	void Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorDialogLibrary_eventShowObjectsDetailsView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorDialogLibrary_eventShowObjectsDetailsView_Parms), &Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_InOutObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_Options,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Objects Dialog" },
		{ "Comment", "/**\n\x09 * Open a modal message box dialog containing a details view for inspecting / modifying multiples UObjects. \n\x09 * @param Title \x09\x09The title of the created dialog window\n\x09 * @param InOutObjects \x09""Array of object instances which are supposed to be viewed\n\x09 * @param Options \x09\x09Optional settings to customize the look of the details view\n\x09 * @return The result of the users decision, true=Ok, false=Cancel, or false if running in unattended mode.\n\x09*/" },
		{ "CPP_Default_Options", "()" },
		{ "DisplayName", "Show Objects Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "Open a modal message box dialog containing a details view for inspecting / modifying multiples UObjects.\n@param Title                 The title of the created dialog window\n@param InOutObjects  Array of object instances which are supposed to be viewed\n@param Options               Optional settings to customize the look of the details view\n@return The result of the users decision, true=Ok, false=Cancel, or false if running in unattended mode." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDialogLibrary, nullptr, "ShowObjectsDetailsView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::EditorDialogLibrary_eventShowObjectsDetailsView_Parms), Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics
	{
		struct EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms
		{
			FText Title;
			FText Message;
			FString InIniSettingName;
			FString InIniSettingFileNameOverride;
			bool bDefaultValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIniSettingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InIniSettingName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIniSettingFileNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InIniSettingFileNameOverride;
		static void NewProp_bDefaultValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms, Title), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms, Message), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Message_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingName = { "InIniSettingName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms, InIniSettingName), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingFileNameOverride_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingFileNameOverride = { "InIniSettingFileNameOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms, InIniSettingFileNameOverride), METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingFileNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingFileNameOverride_MetaData)) };
	void Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_bDefaultValue_SetBit(void* Obj)
	{
		((EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms*)Obj)->bDefaultValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_bDefaultValue = { "bDefaultValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms), &Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_bDefaultValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms), &Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_InIniSettingFileNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_bDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Supressable Warning Dialog" },
		{ "Comment", "/**\n\x09* Open a modal suppressable warning window, if suppressed will return the default value\n\x09* @param Title\x09\x09\x09\x09\x09\x09\x09The title of the created dialog window\n\x09* @param Message \x09\x09\x09\x09\x09\x09Text of the message to show\n\x09* @param InIniSettingName\x09\x09\x09\x09The name of the entry in the INI where the state of the \"Disable this warning\" check box is stored\n\x09* @param InIniSettingFileNameOverride\x09The name of the INI where the state of the InIniSettingName flag is stored (defaults to GEditorPerProjectIni)\n\x09* @param bDefaultValue \x09\x09\x09\x09\x09If the warning is suppressed, the function will log and return DefaultValue\n\x09* @return The result of the users decision, or DefaultValue if suppressed.\n\x09*/" },
		{ "CPP_Default_bDefaultValue", "true" },
		{ "CPP_Default_InIniSettingFileNameOverride", "" },
		{ "DisplayName", "Show Suppressable Warning Dialog" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ToolTip", "Open a modal suppressable warning window, if suppressed will return the default value\n@param Title                                                  The title of the created dialog window\n@param Message                                                Text of the message to show\n@param InIniSettingName                               The name of the entry in the INI where the state of the \"Disable this warning\" check box is stored\n@param InIniSettingFileNameOverride   The name of the INI where the state of the InIniSettingName flag is stored (defaults to GEditorPerProjectIni)\n@param bDefaultValue                                  If the warning is suppressed, the function will log and return DefaultValue\n@return The result of the users decision, or DefaultValue if suppressed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorDialogLibrary, nullptr, "ShowSuppressableWarningDialog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::EditorDialogLibrary_eventShowSuppressableWarningDialog_Parms), Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorDialogLibrary);
	UClass* Z_Construct_UClass_UEditorDialogLibrary_NoRegister()
	{
		return UEditorDialogLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorDialogLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorDialogLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorScriptingUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorDialogLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorDialogLibrary_ShowMessage, "ShowMessage" }, // 2199382785
		{ &Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectDetailsView, "ShowObjectDetailsView" }, // 644503826
		{ &Z_Construct_UFunction_UEditorDialogLibrary_ShowObjectsDetailsView, "ShowObjectsDetailsView" }, // 1515637814
		{ &Z_Construct_UFunction_UEditorDialogLibrary_ShowSuppressableWarningDialog, "ShowSuppressableWarningDialog" }, // 3126044911
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorDialogLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Utility class to create simple pop-up dialogs to notify the user of task completion, \n * or to ask them to make simple Yes/No/Retry/Cancel type decisions.\n */" },
		{ "IncludePath", "EditorDialogLibrary.h" },
		{ "ModuleRelativePath", "Public/EditorDialogLibrary.h" },
		{ "ScriptName", "EditorDialog" },
		{ "ToolTip", "Utility class to create simple pop-up dialogs to notify the user of task completion,\nor to ask them to make simple Yes/No/Retry/Cancel type decisions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorDialogLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorDialogLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorDialogLibrary_Statics::ClassParams = {
		&UEditorDialogLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorDialogLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorDialogLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorDialogLibrary()
	{
		if (!Z_Registration_Info_UClass_UEditorDialogLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorDialogLibrary.OuterSingleton, Z_Construct_UClass_UEditorDialogLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorDialogLibrary.OuterSingleton;
	}
	template<> EDITORSCRIPTINGUTILITIES_API UClass* StaticClass<UEditorDialogLibrary>()
	{
		return UEditorDialogLibrary::StaticClass();
	}
	UEditorDialogLibrary::UEditorDialogLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorDialogLibrary);
	UEditorDialogLibrary::~UEditorDialogLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics::ScriptStructInfo[] = {
		{ FEditorDialogLibraryObjectDetailsViewOptions::StaticStruct, Z_Construct_UScriptStruct_FEditorDialogLibraryObjectDetailsViewOptions_Statics::NewStructOps, TEXT("EditorDialogLibraryObjectDetailsViewOptions"), &Z_Registration_Info_UScriptStruct_EditorDialogLibraryObjectDetailsViewOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEditorDialogLibraryObjectDetailsViewOptions), 3882145483U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorDialogLibrary, UEditorDialogLibrary::StaticClass, TEXT("UEditorDialogLibrary"), &Z_Registration_Info_UClass_UEditorDialogLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorDialogLibrary), 758120244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_2260492151(TEXT("/Script/EditorScriptingUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EditorScriptingUtilities_Source_EditorScriptingUtilities_Public_EditorDialogLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
