// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_Unreal/CMP302_UnrealGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMP302_UnrealGameMode() {}
// Cross Module References
	CMP302_UNREAL_API UClass* Z_Construct_UClass_ACMP302_UnrealGameMode_NoRegister();
	CMP302_UNREAL_API UClass* Z_Construct_UClass_ACMP302_UnrealGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CMP302_Unreal();
// End Cross Module References
	void ACMP302_UnrealGameMode::StaticRegisterNativesACMP302_UnrealGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACMP302_UnrealGameMode);
	UClass* Z_Construct_UClass_ACMP302_UnrealGameMode_NoRegister()
	{
		return ACMP302_UnrealGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACMP302_UnrealGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_Unreal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CMP302_UnrealGameMode.h" },
		{ "ModuleRelativePath", "CMP302_UnrealGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMP302_UnrealGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::ClassParams = {
		&ACMP302_UnrealGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMP302_UnrealGameMode()
	{
		if (!Z_Registration_Info_UClass_ACMP302_UnrealGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACMP302_UnrealGameMode.OuterSingleton, Z_Construct_UClass_ACMP302_UnrealGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACMP302_UnrealGameMode.OuterSingleton;
	}
	template<> CMP302_UNREAL_API UClass* StaticClass<ACMP302_UnrealGameMode>()
	{
		return ACMP302_UnrealGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMP302_UnrealGameMode);
	struct Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACMP302_UnrealGameMode, ACMP302_UnrealGameMode::StaticClass, TEXT("ACMP302_UnrealGameMode"), &Z_Registration_Info_UClass_ACMP302_UnrealGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACMP302_UnrealGameMode), 2568267955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealGameMode_h_2583931218(TEXT("/Script/CMP302_Unreal"),
		Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
