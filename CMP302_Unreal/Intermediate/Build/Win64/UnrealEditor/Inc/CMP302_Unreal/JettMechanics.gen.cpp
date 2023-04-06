// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_Unreal/JettMechanics.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJettMechanics() {}
// Cross Module References
	CMP302_UNREAL_API UClass* Z_Construct_UClass_AJettMechanics_NoRegister();
	CMP302_UNREAL_API UClass* Z_Construct_UClass_AJettMechanics();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CMP302_Unreal();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AJettMechanics::StaticRegisterNativesAJettMechanics()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJettMechanics);
	UClass* Z_Construct_UClass_AJettMechanics_NoRegister()
	{
		return AJettMechanics::StaticClass();
	}
	struct Z_Construct_UClass_AJettMechanics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJettMechanics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_Unreal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJettMechanics_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "JettMechanics.h" },
		{ "ModuleRelativePath", "JettMechanics.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJettMechanics_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JettMechanics.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJettMechanics_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJettMechanics, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJettMechanics_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJettMechanics_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJettMechanics_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "JettMechanics.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AJettMechanics_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AJettMechanics, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AJettMechanics_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AJettMechanics_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AJettMechanics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJettMechanics_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AJettMechanics_Statics::NewProp_FirstPersonCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJettMechanics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJettMechanics>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJettMechanics_Statics::ClassParams = {
		&AJettMechanics::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AJettMechanics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AJettMechanics_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AJettMechanics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AJettMechanics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AJettMechanics()
	{
		if (!Z_Registration_Info_UClass_AJettMechanics.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJettMechanics.OuterSingleton, Z_Construct_UClass_AJettMechanics_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJettMechanics.OuterSingleton;
	}
	template<> CMP302_UNREAL_API UClass* StaticClass<AJettMechanics>()
	{
		return AJettMechanics::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJettMechanics);
	struct Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_JettMechanics_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_JettMechanics_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJettMechanics, AJettMechanics::StaticClass, TEXT("AJettMechanics"), &Z_Registration_Info_UClass_AJettMechanics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJettMechanics), 89123414U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_JettMechanics_h_3389823728(TEXT("/Script/CMP302_Unreal"),
		Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_JettMechanics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_JettMechanics_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
