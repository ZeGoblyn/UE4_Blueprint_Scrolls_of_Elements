// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scrolls_of_Elements/Public/CPP_AirDeadZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_AirDeadZone() {}
// Cross Module References
	SCROLLS_OF_ELEMENTS_API UClass* Z_Construct_UClass_ACPP_AirDeadZone_NoRegister();
	SCROLLS_OF_ELEMENTS_API UClass* Z_Construct_UClass_ACPP_AirDeadZone();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Scrolls_of_Elements();
// End Cross Module References
	void ACPP_AirDeadZone::StaticRegisterNativesACPP_AirDeadZone()
	{
	}
	UClass* Z_Construct_UClass_ACPP_AirDeadZone_NoRegister()
	{
		return ACPP_AirDeadZone::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_AirDeadZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_AirDeadZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Scrolls_of_Elements,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_AirDeadZone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_AirDeadZone.h" },
		{ "ModuleRelativePath", "Public/CPP_AirDeadZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_AirDeadZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_AirDeadZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_AirDeadZone_Statics::ClassParams = {
		&ACPP_AirDeadZone::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACPP_AirDeadZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_AirDeadZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_AirDeadZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_AirDeadZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_AirDeadZone, 1174094755);
	template<> SCROLLS_OF_ELEMENTS_API UClass* StaticClass<ACPP_AirDeadZone>()
	{
		return ACPP_AirDeadZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_AirDeadZone(Z_Construct_UClass_ACPP_AirDeadZone, &ACPP_AirDeadZone::StaticClass, TEXT("/Script/Scrolls_of_Elements"), TEXT("ACPP_AirDeadZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_AirDeadZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
