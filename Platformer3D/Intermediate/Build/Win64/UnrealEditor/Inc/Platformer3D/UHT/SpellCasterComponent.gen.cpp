// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/AbilitySystem/SpellCasterComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpellCasterComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_USpellCasterComponent();
	PLATFORMER3D_API UClass* Z_Construct_UClass_USpellCasterComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(USpellCasterComponent::execBasicAttack)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpellRange);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SpellWidth);
		P_GET_STRUCT(FVector,Z_Param_StartPoint);
		P_GET_STRUCT(FVector,Z_Param_EndPoint);
		P_GET_OBJECT(UNiagaraSystem,Z_Param_NSBeam);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BasicAttack(Z_Param_SpellRange,Z_Param_SpellWidth,Z_Param_StartPoint,Z_Param_EndPoint,Z_Param_NSBeam);
		P_NATIVE_END;
	}
	void USpellCasterComponent::StaticRegisterNativesUSpellCasterComponent()
	{
		UClass* Class = USpellCasterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BasicAttack", &USpellCasterComponent::execBasicAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics
	{
		struct SpellCasterComponent_eventBasicAttack_Parms
		{
			float SpellRange;
			float SpellWidth;
			FVector StartPoint;
			FVector EndPoint;
			UNiagaraSystem* NSBeam;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellRange;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellWidth;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NSBeam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_SpellRange = { "SpellRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellCasterComponent_eventBasicAttack_Parms, SpellRange), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_SpellWidth = { "SpellWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellCasterComponent_eventBasicAttack_Parms, SpellWidth), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_StartPoint = { "StartPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellCasterComponent_eventBasicAttack_Parms, StartPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_EndPoint = { "EndPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellCasterComponent_eventBasicAttack_Parms, EndPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_NSBeam = { "NSBeam", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpellCasterComponent_eventBasicAttack_Parms, NSBeam), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_SpellRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_SpellWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_StartPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_EndPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::NewProp_NSBeam,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Spells" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Spells\n// cast a basic attack raytrace\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/AbilitySystem/SpellCasterComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Spells\n cast a basic attack raytrace" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpellCasterComponent, nullptr, "BasicAttack", nullptr, nullptr, Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::SpellCasterComponent_eventBasicAttack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::SpellCasterComponent_eventBasicAttack_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USpellCasterComponent_BasicAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpellCasterComponent_BasicAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpellCasterComponent);
	UClass* Z_Construct_UClass_USpellCasterComponent_NoRegister()
	{
		return USpellCasterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USpellCasterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpellCasterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellCasterComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USpellCasterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpellCasterComponent_BasicAttack, "BasicAttack" }, // 2687685575
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpellCasterComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpellCasterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Core/AbilitySystem/SpellCasterComponent.h" },
		{ "ModuleRelativePath", "Public/Core/AbilitySystem/SpellCasterComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpellCasterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpellCasterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpellCasterComponent_Statics::ClassParams = {
		&USpellCasterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpellCasterComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USpellCasterComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_USpellCasterComponent()
	{
		if (!Z_Registration_Info_UClass_USpellCasterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpellCasterComponent.OuterSingleton, Z_Construct_UClass_USpellCasterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpellCasterComponent.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<USpellCasterComponent>()
	{
		return USpellCasterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpellCasterComponent);
	USpellCasterComponent::~USpellCasterComponent() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpellCasterComponent, USpellCasterComponent::StaticClass, TEXT("USpellCasterComponent"), &Z_Registration_Info_UClass_USpellCasterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpellCasterComponent), 184449312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_2114209421(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_AbilitySystem_SpellCasterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
