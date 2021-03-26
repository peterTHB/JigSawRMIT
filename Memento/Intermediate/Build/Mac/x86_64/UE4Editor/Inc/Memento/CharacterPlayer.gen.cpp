// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Memento/CharacterPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPlayer() {}
// Cross Module References
	MEMENTO_API UClass* Z_Construct_UClass_ACharacterPlayer_NoRegister();
	MEMENTO_API UClass* Z_Construct_UClass_ACharacterPlayer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Memento();
// End Cross Module References
	void ACharacterPlayer::StaticRegisterNativesACharacterPlayer()
	{
	}
	UClass* Z_Construct_UClass_ACharacterPlayer_NoRegister()
	{
		return ACharacterPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Memento,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterPlayer.h" },
		{ "ModuleRelativePath", "CharacterPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPlayer_Statics::ClassParams = {
		&ACharacterPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterPlayer, 3767787319);
	template<> MEMENTO_API UClass* StaticClass<ACharacterPlayer>()
	{
		return ACharacterPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterPlayer(Z_Construct_UClass_ACharacterPlayer, &ACharacterPlayer::StaticClass, TEXT("/Script/Memento"), TEXT("ACharacterPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
