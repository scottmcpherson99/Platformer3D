// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/Enemy/BasicEnemy/BTService_SetFocusOnTarget.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_SetFocusOnTarget() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTService_SetFocusOnTarget();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTService_SetFocusOnTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void UBTService_SetFocusOnTarget::StaticRegisterNativesUBTService_SetFocusOnTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_SetFocusOnTarget);
	UClass* Z_Construct_UClass_UBTService_SetFocusOnTarget_NoRegister()
	{
		return UBTService_SetFocusOnTarget::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFocus_MetaData[];
#endif
		static void NewProp_bShouldFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFocus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusedActor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Characters/Enemy/BasicEnemy/BTService_SetFocusOnTarget.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTService_SetFocusOnTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Attributes\n// check if we should focus\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTService_SetFocusOnTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Attributes\n check if we should focus" },
#endif
	};
#endif
	void Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus_SetBit(void* Obj)
	{
		((UBTService_SetFocusOnTarget*)Obj)->bShouldFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus = { "bShouldFocus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBTService_SetFocusOnTarget), &Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus_MetaData), Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_FocusedActor_MetaData[] = {
		{ "Category", "Blackboard" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the focused actor\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTService_SetFocusOnTarget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the focused actor" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_FocusedActor = { "FocusedActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_SetFocusOnTarget, FocusedActor), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_FocusedActor_MetaData), Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_FocusedActor_MetaData) }; // 3137324432
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_bShouldFocus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::NewProp_FocusedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_SetFocusOnTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::ClassParams = {
		&UBTService_SetFocusOnTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTService_SetFocusOnTarget()
	{
		if (!Z_Registration_Info_UClass_UBTService_SetFocusOnTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_SetFocusOnTarget.OuterSingleton, Z_Construct_UClass_UBTService_SetFocusOnTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_SetFocusOnTarget.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UBTService_SetFocusOnTarget>()
	{
		return UBTService_SetFocusOnTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_SetFocusOnTarget);
	UBTService_SetFocusOnTarget::~UBTService_SetFocusOnTarget() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTService_SetFocusOnTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTService_SetFocusOnTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_SetFocusOnTarget, UBTService_SetFocusOnTarget::StaticClass, TEXT("UBTService_SetFocusOnTarget"), &Z_Registration_Info_UClass_UBTService_SetFocusOnTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_SetFocusOnTarget), 2185832539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTService_SetFocusOnTarget_h_3985114301(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTService_SetFocusOnTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTService_SetFocusOnTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
