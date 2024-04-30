// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/Enemy/BasicEnemy/BTTask_Wander.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Wander() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTTask_Wander();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTTask_Wander_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void UBTTask_Wander::StaticRegisterNativesUBTTask_Wander()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Wander);
	UClass* Z_Construct_UClass_UBTTask_Wander_NoRegister()
	{
		return UBTTask_Wander::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Wander_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SearchRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Wander_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wander_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wander_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Characters/Enemy/BasicEnemy/BTTask_Wander.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTTask_Wander.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Wander_Statics::NewProp_SearchRadius_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Attributes\n// update the search radius\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/BTTask_Wander.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Attributes\n update the search radius" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_Wander_Statics::NewProp_SearchRadius = { "SearchRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTTask_Wander, SearchRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wander_Statics::NewProp_SearchRadius_MetaData), Z_Construct_UClass_UBTTask_Wander_Statics::NewProp_SearchRadius_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_Wander_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_Wander_Statics::NewProp_SearchRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Wander_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Wander>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Wander_Statics::ClassParams = {
		&UBTTask_Wander::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_Wander_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wander_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wander_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTTask_Wander_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Wander_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTTask_Wander()
	{
		if (!Z_Registration_Info_UClass_UBTTask_Wander.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Wander.OuterSingleton, Z_Construct_UClass_UBTTask_Wander_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_Wander.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UBTTask_Wander>()
	{
		return UBTTask_Wander::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Wander);
	UBTTask_Wander::~UBTTask_Wander() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTask_Wander_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTask_Wander_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Wander, UBTTask_Wander::StaticClass, TEXT("UBTTask_Wander"), &Z_Registration_Info_UClass_UBTTask_Wander, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Wander), 304800479U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTask_Wander_h_1543924146(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTask_Wander_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_BTTask_Wander_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
