// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Collectables/CollectableBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollectableBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PLATFORMER3D_API UClass* Z_Construct_UClass_ACollectableBase();
	PLATFORMER3D_API UClass* Z_Construct_UClass_ACollectableBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void ACollectableBase::StaticRegisterNativesACollectableBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACollectableBase);
	UClass* Z_Construct_UClass_ACollectableBase_NoRegister()
	{
		return ACollectableBase::StaticClass();
	}
	struct Z_Construct_UClass_ACollectableBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollectableBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollectableBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Collectables/CollectableBase.h" },
		{ "ModuleRelativePath", "Public/Core/Collectables/CollectableBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollectableBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollectableBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACollectableBase_Statics::ClassParams = {
		&ACollectableBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACollectableBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACollectableBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACollectableBase()
	{
		if (!Z_Registration_Info_UClass_ACollectableBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACollectableBase.OuterSingleton, Z_Construct_UClass_ACollectableBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACollectableBase.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<ACollectableBase>()
	{
		return ACollectableBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollectableBase);
	ACollectableBase::~ACollectableBase() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Collectables_CollectableBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Collectables_CollectableBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACollectableBase, ACollectableBase::StaticClass, TEXT("ACollectableBase"), &Z_Registration_Info_UClass_ACollectableBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACollectableBase), 806623405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Collectables_CollectableBase_h_2034351803(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Collectables_CollectableBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Collectables_CollectableBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
