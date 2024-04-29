// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/AbilitySystem/Calculations/GEC_Regen.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGEC_Regen() {}
// Cross Module References
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayModMagnitudeCalculation();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UGEC_Regen();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UGEC_Regen_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void UGEC_Regen::StaticRegisterNativesUGEC_Regen()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGEC_Regen);
	UClass* Z_Construct_UClass_UGEC_Regen_NoRegister()
	{
		return UGEC_Regen::StaticClass();
	}
	struct Z_Construct_UClass_UGEC_Regen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGEC_Regen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModMagnitudeCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGEC_Regen_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGEC_Regen_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/AbilitySystem/Calculations/GEC_Regen.h" },
		{ "ModuleRelativePath", "Public/Core/AbilitySystem/Calculations/GEC_Regen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGEC_Regen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGEC_Regen>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGEC_Regen_Statics::ClassParams = {
		&UGEC_Regen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGEC_Regen_Statics::Class_MetaDataParams), Z_Construct_UClass_UGEC_Regen_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGEC_Regen()
	{
		if (!Z_Registration_Info_UClass_UGEC_Regen.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGEC_Regen.OuterSingleton, Z_Construct_UClass_UGEC_Regen_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGEC_Regen.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UGEC_Regen>()
	{
		return UGEC_Regen::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGEC_Regen);
	UGEC_Regen::~UGEC_Regen() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_Calculations_GEC_Regen_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_Calculations_GEC_Regen_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGEC_Regen, UGEC_Regen::StaticClass, TEXT("UGEC_Regen"), &Z_Registration_Info_UClass_UGEC_Regen, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGEC_Regen), 1269509832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_Calculations_GEC_Regen_h_3194950753(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_Calculations_GEC_Regen_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_Calculations_GEC_Regen_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
