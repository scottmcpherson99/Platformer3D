// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/UI/InGame/AbilitySlot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilitySlot() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UAbilitySlot();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UAbilitySlot_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(UAbilitySlot::execUpdateIconImageOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIconImageOpacity(Z_Param_NewOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAbilitySlot::execUpdateAbilityIcon)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_UpdatedIcon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAbilityIcon(Z_Param_UpdatedIcon);
		P_NATIVE_END;
	}
	void UAbilitySlot::StaticRegisterNativesUAbilitySlot()
	{
		UClass* Class = UAbilitySlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAbilityIcon", &UAbilitySlot::execUpdateAbilityIcon },
			{ "UpdateIconImageOpacity", &UAbilitySlot::execUpdateIconImageOpacity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics
	{
		struct AbilitySlot_eventUpdateAbilityIcon_Parms
		{
			UTexture2D* UpdatedIcon;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdatedIcon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::NewProp_UpdatedIcon = { "UpdatedIcon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySlot_eventUpdateAbilityIcon_Parms, UpdatedIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::NewProp_UpdatedIcon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Icon Image\n// update the image icon shown\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/AbilitySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Icon Image\n update the image icon shown" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySlot, nullptr, "UpdateAbilityIcon", nullptr, nullptr, Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::AbilitySlot_eventUpdateAbilityIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::AbilitySlot_eventUpdateAbilityIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics
	{
		struct AbilitySlot_eventUpdateIconImageOpacity_Parms
		{
			float NewOpacity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::NewProp_NewOpacity = { "NewOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AbilitySlot_eventUpdateIconImageOpacity_Parms, NewOpacity), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::NewProp_NewOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Icon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// update opacity of image to  the cooldown time\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/AbilitySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "update opacity of image to  the cooldown time" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilitySlot, nullptr, "UpdateIconImageOpacity", nullptr, nullptr, Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::AbilitySlot_eventUpdateIconImageOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::AbilitySlot_eventUpdateIconImageOpacity_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAbilitySlot);
	UClass* Z_Construct_UClass_UAbilitySlot_NoRegister()
	{
		return UAbilitySlot::StaticClass();
	}
	struct Z_Construct_UClass_UAbilitySlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IconImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilityTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilityTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilitySlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilitySlot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilitySlot_UpdateAbilityIcon, "UpdateAbilityIcon" }, // 2287294771
		{ &Z_Construct_UFunction_UAbilitySlot_UpdateIconImageOpacity, "UpdateIconImageOpacity" }, // 1115022588
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlot_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/InGame/AbilitySlot.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/AbilitySlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlot_Statics::NewProp_IconImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Components\n// image icon\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/AbilitySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Components\n image icon" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySlot_Statics::NewProp_IconImage = { "IconImage", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySlot, IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::NewProp_IconImage_MetaData), Z_Construct_UClass_UAbilitySlot_Statics::NewProp_IconImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilitySlot_Statics::NewProp_AbilityTexture_MetaData[] = {
		{ "Category", "Images" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the ability image texture\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/AbilitySlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the ability image texture" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAbilitySlot_Statics::NewProp_AbilityTexture = { "AbilityTexture", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAbilitySlot, AbilityTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::NewProp_AbilityTexture_MetaData), Z_Construct_UClass_UAbilitySlot_Statics::NewProp_AbilityTexture_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAbilitySlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlot_Statics::NewProp_IconImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAbilitySlot_Statics::NewProp_AbilityTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilitySlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilitySlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAbilitySlot_Statics::ClassParams = {
		&UAbilitySlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAbilitySlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::Class_MetaDataParams), Z_Construct_UClass_UAbilitySlot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAbilitySlot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAbilitySlot()
	{
		if (!Z_Registration_Info_UClass_UAbilitySlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAbilitySlot.OuterSingleton, Z_Construct_UClass_UAbilitySlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAbilitySlot.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UAbilitySlot>()
	{
		return UAbilitySlot::StaticClass();
	}
	UAbilitySlot::UAbilitySlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilitySlot);
	UAbilitySlot::~UAbilitySlot() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_AbilitySlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_AbilitySlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAbilitySlot, UAbilitySlot::StaticClass, TEXT("UAbilitySlot"), &Z_Registration_Info_UClass_UAbilitySlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAbilitySlot), 1051353031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_AbilitySlot_h_1107226218(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_AbilitySlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_AbilitySlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
