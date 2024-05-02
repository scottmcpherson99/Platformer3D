// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/Enemy/BasicEnemy/BTTasks/BTTask_BasicAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_BasicAttack() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTTask_BasicAttack();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTTask_BasicAttack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void UBTTask_BasicAttack::StaticRegisterNativesUBTTask_BasicAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_BasicAttack);
	UClass* Z_Construct_UClass_UBTTask_BasicAttack_NoRegister()
	{
		return UBTTask_BasicAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_BasicAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackAbility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AttackAbility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_BasicAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BasicAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BasicAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Characters/Enemy/BasicEnemy/BTTasks/BTTask_BasicAttack.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTTasks/BTTask_BasicAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_BasicAttack_Statics::NewProp_AttackAbility_MetaData[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Attributes\n// the attack ability\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTTasks/BTTask_BasicAttack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Attributes\n the attack ability" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBTTask_BasicAttack_Statics::NewProp_AttackAbility = { "AttackAbility", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_BasicAttack, AttackAbility), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BasicAttack_Statics::NewProp_AttackAbility_MetaData), Z_Construct_UClass_UBTTask_BasicAttack_Statics::NewProp_AttackAbility_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_BasicAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_BasicAttack_Statics::NewProp_AttackAbility,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_BasicAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_BasicAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_BasicAttack_Statics::ClassParams = {
		&UBTTask_BasicAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_BasicAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BasicAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BasicAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_BasicAttack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_BasicAttack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_BasicAttack()
	{
		if (!Z_Registration_Info_UClass_UBTTask_BasicAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_BasicAttack.OuterSingleton, Z_Construct_UClass_UBTTask_BasicAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_BasicAttack.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UBTTask_BasicAttack>()
	{
		return UBTTask_BasicAttack::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_BasicAttack);
	UBTTask_BasicAttack::~UBTTask_BasicAttack() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTasks_BTTask_BasicAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTasks_BTTask_BasicAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_BasicAttack, UBTTask_BasicAttack::StaticClass, TEXT("UBTTask_BasicAttack"), &Z_Registration_Info_UClass_UBTTask_BasicAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_BasicAttack), 1572372586U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTasks_BTTask_BasicAttack_h_4033141020(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTasks_BTTask_BasicAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTasks_BTTask_BasicAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
