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
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__displayText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__displayText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayer_Statics::NewProp__displayText_MetaData[] = {
		{ "Category", "CharacterPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CharacterPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterPlayer_Statics::NewProp__displayText = { "_displayText", nullptr, (EPropertyFlags)0x00100000000a0809, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACharacterPlayer, _displayText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACharacterPlayer_Statics::NewProp__displayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayer_Statics::NewProp__displayText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayer_Statics::NewProp__displayText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPlayer_Statics::ClassParams = {
		&ACharacterPlayer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayer_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACharacterPlayer, 155131857);
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
