// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/UI/Shared/BaseUserWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseUserWidget() {}
// Cross Module References
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBaseUserWidget();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(UBaseUserWidget::execSetNewButtonFocus)
	{
		P_GET_OBJECT(UButton,Z_Param_ButtonToFocus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewButtonFocus(Z_Param_ButtonToFocus);
		P_NATIVE_END;
	}
	void UBaseUserWidget::StaticRegisterNativesUBaseUserWidget()
	{
		UClass* Class = UBaseUserWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNewButtonFocus", &UBaseUserWidget::execSetNewButtonFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics
	{
		struct BaseUserWidget_eventSetNewButtonFocus_Parms
		{
			UButton* ButtonToFocus;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonToFocus_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonToFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::NewProp_ButtonToFocus_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::NewProp_ButtonToFocus = { "ButtonToFocus", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseUserWidget_eventSetNewButtonFocus_Parms, ButtonToFocus), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::NewProp_ButtonToFocus_MetaData), Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::NewProp_ButtonToFocus_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::NewProp_ButtonToFocus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// set the focus on the new button\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/Shared/BaseUserWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set the focus on the new button" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseUserWidget, nullptr, "SetNewButtonFocus", nullptr, nullptr, Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::BaseUserWidget_eventSetNewButtonFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::BaseUserWidget_eventSetNewButtonFocus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseUserWidget);
	UClass* Z_Construct_UClass_UBaseUserWidget_NoRegister()
	{
		return UBaseUserWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseUserWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseUserWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseUserWidget_SetNewButtonFocus, "SetNewButtonFocus" }, // 4246757691
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Shared/BaseUserWidget.h" },
		{ "ModuleRelativePath", "Public/UI/Shared/BaseUserWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseUserWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseUserWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams = {
		&UBaseUserWidget::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseUserWidget_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBaseUserWidget()
	{
		if (!Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton, Z_Construct_UClass_UBaseUserWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseUserWidget.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UBaseUserWidget>()
	{
		return UBaseUserWidget::StaticClass();
	}
	UBaseUserWidget::UBaseUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseUserWidget);
	UBaseUserWidget::~UBaseUserWidget() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_Shared_BaseUserWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_Shared_BaseUserWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseUserWidget, UBaseUserWidget::StaticClass, TEXT("UBaseUserWidget"), &Z_Registration_Info_UClass_UBaseUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseUserWidget), 294758223U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_Shared_BaseUserWidget_h_3013358912(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_Shared_BaseUserWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_Shared_BaseUserWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
