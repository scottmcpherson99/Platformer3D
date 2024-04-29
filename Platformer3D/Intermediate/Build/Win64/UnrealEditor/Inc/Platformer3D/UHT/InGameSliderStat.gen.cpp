// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/UI/InGame/InGameSliderStat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameSliderStat() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBaseUserWidget();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UInGameSliderStat();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UInGameSliderStat_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(UInGameSliderStat::execGetPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameSliderStat::execUpdatePercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePercentage(Z_Param_Percentage);
		P_NATIVE_END;
	}
	void UInGameSliderStat::StaticRegisterNativesUInGameSliderStat()
	{
		UClass* Class = UInGameSliderStat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPercentage", &UInGameSliderStat::execGetPercentage },
			{ "UpdatePercentage", &UInGameSliderStat::execUpdatePercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics
	{
		struct InGameSliderStat_eventGetPercentage_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameSliderStat_eventGetPercentage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProgressBar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// get the percentage\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/InGameSliderStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get the percentage" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameSliderStat, nullptr, "GetPercentage", nullptr, nullptr, Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::InGameSliderStat_eventGetPercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::InGameSliderStat_eventGetPercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInGameSliderStat_GetPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameSliderStat_GetPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics
	{
		struct InGameSliderStat_eventUpdatePercentage_Parms
		{
			float Percentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameSliderStat_eventUpdatePercentage_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProgressBar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Updates\n// update the percentage value\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/InGameSliderStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Updates\n update the percentage value" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameSliderStat, nullptr, "UpdatePercentage", nullptr, nullptr, Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::InGameSliderStat_eventUpdatePercentage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::InGameSliderStat_eventUpdatePercentage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameSliderStat);
	UClass* Z_Construct_UClass_UInGameSliderStat_NoRegister()
	{
		return UInGameSliderStat::StaticClass();
	}
	struct Z_Construct_UClass_UInGameSliderStat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProgressBarMain_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProgressBarMain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarFillColour_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarFillColour;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameSliderStat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameSliderStat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameSliderStat_GetPercentage, "GetPercentage" }, // 3823369787
		{ &Z_Construct_UFunction_UInGameSliderStat_UpdatePercentage, "UpdatePercentage" }, // 3770151988
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameSliderStat_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/InGame/InGameSliderStat.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/InGameSliderStat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_ProgressBarMain_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Components\n// the main progress bar\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/InGameSliderStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Components\n the main progress bar" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_ProgressBarMain = { "ProgressBarMain", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInGameSliderStat, ProgressBarMain), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_ProgressBarMain_MetaData), Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_ProgressBarMain_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_BarFillColour_MetaData[] = {
		{ "Category", "ProgressBar" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/InGameSliderStat.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Attributes" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_BarFillColour = { "BarFillColour", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInGameSliderStat, BarFillColour), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_BarFillColour_MetaData), Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_BarFillColour_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameSliderStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_ProgressBarMain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameSliderStat_Statics::NewProp_BarFillColour,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameSliderStat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameSliderStat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameSliderStat_Statics::ClassParams = {
		&UInGameSliderStat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameSliderStat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::Class_MetaDataParams), Z_Construct_UClass_UInGameSliderStat_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameSliderStat_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInGameSliderStat()
	{
		if (!Z_Registration_Info_UClass_UInGameSliderStat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameSliderStat.OuterSingleton, Z_Construct_UClass_UInGameSliderStat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInGameSliderStat.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UInGameSliderStat>()
	{
		return UInGameSliderStat::StaticClass();
	}
	UInGameSliderStat::UInGameSliderStat(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameSliderStat);
	UInGameSliderStat::~UInGameSliderStat() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameSliderStat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameSliderStat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInGameSliderStat, UInGameSliderStat::StaticClass, TEXT("UInGameSliderStat"), &Z_Registration_Info_UClass_UInGameSliderStat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameSliderStat), 2881771104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameSliderStat_h_2423027912(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameSliderStat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameSliderStat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
