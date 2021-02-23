// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scrolls_of_Elements/Public/CPP_CharacterMovements.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_CharacterMovements() {}
// Cross Module References
	SCROLLS_OF_ELEMENTS_API UClass* Z_Construct_UClass_ACPP_CharacterMovements_NoRegister();
	SCROLLS_OF_ELEMENTS_API UClass* Z_Construct_UClass_ACPP_CharacterMovements();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Scrolls_of_Elements();
// End Cross Module References
	void ACPP_CharacterMovements::StaticRegisterNativesACPP_CharacterMovements()
	{
	}
	UClass* Z_Construct_UClass_ACPP_CharacterMovements_NoRegister()
	{
		return ACPP_CharacterMovements::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_CharacterMovements_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_CharacterMovements_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Scrolls_of_Elements,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_CharacterMovements_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_CharacterMovements.h" },
		{ "ModuleRelativePath", "Public/CPP_CharacterMovements.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_CharacterMovements_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_CharacterMovements>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_CharacterMovements_Statics::ClassParams = {
		&ACPP_CharacterMovements::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_ACPP_CharacterMovements_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_CharacterMovements_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_CharacterMovements()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_CharacterMovements_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_CharacterMovements, 1952699880);
	template<> SCROLLS_OF_ELEMENTS_API UClass* StaticClass<ACPP_CharacterMovements>()
	{
		return ACPP_CharacterMovements::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_CharacterMovements(Z_Construct_UClass_ACPP_CharacterMovements, &ACPP_CharacterMovements::StaticClass, TEXT("/Script/Scrolls_of_Elements"), TEXT("ACPP_CharacterMovements"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_CharacterMovements);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
