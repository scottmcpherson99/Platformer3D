// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_ABaseCharacter();
	PLATFORMER3D_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBasicAttributeSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(ABaseCharacter::execStartCharacterDeath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCharacterDeath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetMaxMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetCurrentMana)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentMana();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetMaxHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execGetCurrentHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
		P_NATIVE_END;
	}
	static FName NAME_ABaseCharacter_BP_DoBasicAttack = FName(TEXT("BP_DoBasicAttack"));
	void ABaseCharacter::BP_DoBasicAttack()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_BP_DoBasicAttack),NULL);
	}
	static FName NAME_ABaseCharacter_BP_EventDeath = FName(TEXT("BP_EventDeath"));
	void ABaseCharacter::BP_EventDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_BP_EventDeath),NULL);
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentHealth", &ABaseCharacter::execGetCurrentHealth },
			{ "GetCurrentMana", &ABaseCharacter::execGetCurrentMana },
			{ "GetMaxHealth", &ABaseCharacter::execGetMaxHealth },
			{ "GetMaxMana", &ABaseCharacter::execGetMaxMana },
			{ "StartCharacterDeath", &ABaseCharacter::execStartCharacterDeath },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Attack\n// the basic attack logic\n" },
#endif
		{ "DisplayName", "Do Basic Attack" },
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Attack\n the basic attack logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "BP_DoBasicAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_BP_EventDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_BP_EventDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the basic attack logic\n" },
#endif
		{ "DisplayName", "Do Death Event" },
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the basic attack logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_BP_EventDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "BP_EventDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_BP_EventDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_BP_EventDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_BP_EventDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_BP_EventDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics
	{
		struct BaseCharacter_eventGetCurrentHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// getters for attributes from attribute set. Returns current value\n// get current health\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "getters for attributes from attribute set. Returns current value\nget current health" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::BaseCharacter_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::BaseCharacter_eventGetCurrentHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics
	{
		struct BaseCharacter_eventGetCurrentMana_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetCurrentMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// get current mana\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get current mana" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetCurrentMana", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::BaseCharacter_eventGetCurrentMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::BaseCharacter_eventGetCurrentMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetCurrentMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetCurrentMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics
	{
		struct BaseCharacter_eventGetMaxHealth_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// get max health\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get max health" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::BaseCharacter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::BaseCharacter_eventGetMaxHealth_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics
	{
		struct BaseCharacter_eventGetMaxMana_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventGetMaxMana_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// get max mana\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "get max mana" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "GetMaxMana", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::BaseCharacter_eventGetMaxMana_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::BaseCharacter_eventGetMaxMana_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ABaseCharacter_GetMaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_GetMaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Death\n// set the character to die\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Death\n set the character to die" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "StartCharacterDeath", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicAttributeSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BasicAttributeSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreparingToJump_MetaData[];
#endif
		static void NewProp_bPreparingToJump_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreparingToJump;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_BP_DoBasicAttack, "BP_DoBasicAttack" }, // 1923879687
		{ &Z_Construct_UFunction_ABaseCharacter_BP_EventDeath, "BP_EventDeath" }, // 4271029173
		{ &Z_Construct_UFunction_ABaseCharacter_GetCurrentHealth, "GetCurrentHealth" }, // 1356328081
		{ &Z_Construct_UFunction_ABaseCharacter_GetCurrentMana, "GetCurrentMana" }, // 2576175798
		{ &Z_Construct_UFunction_ABaseCharacter_GetMaxHealth, "GetMaxHealth" }, // 1080572027
		{ &Z_Construct_UFunction_ABaseCharacter_GetMaxMana, "GetMaxMana" }, // 2637075554
		{ &Z_Construct_UFunction_ABaseCharacter_StartCharacterDeath, "StartCharacterDeath" }, // 1167122322
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/Characters/BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Ability System Component. Required to use Gameplay Attributes and Gameplay Abilities. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability System Component. Required to use Gameplay Attributes and Gameplay Abilities." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AbilitySystemComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BasicAttributeSet_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GAS" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the basic attribuite set for the character\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
		{ "NativeConst", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the basic attribuite set for the character" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BasicAttributeSet = { "BasicAttributeSet", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, BasicAttributeSet), Z_Construct_UClass_UBasicAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BasicAttributeSet_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BasicAttributeSet_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpellRange_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// the spell range\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "the spell range" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpellRange = { "SpellRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, SpellRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpellRange_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpellRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump_MetaData[] = {
		{ "Category", "Jump" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//----------------------------------------------------------------------------------------------------- Attributes\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "----------------------------------------------------------------------------------------------------- Attributes" },
#endif
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->bPreparingToJump = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump = { "bPreparingToJump", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "Jump" },
		{ "ModuleRelativePath", "Public/Core/Characters/BaseCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((ABaseCharacter*)Obj)->bIsDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead_MetaData), Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_AbilitySystemComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BasicAttributeSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_SpellRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bPreparingToJump,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_bIsDead,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABaseCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(ABaseCharacter, IAbilitySystemInterface), false },  // 3195502011
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<ABaseCharacter>()
	{
		return ABaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
	ABaseCharacter::~ABaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_BaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_BaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 1873567899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_BaseCharacter_h_4241257200(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_BaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
