// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMP302_Unreal_init() {}
	CMP302_UNREAL_API UFunction* Z_Construct_UDelegateFunction_CMP302_Unreal_OnPickUp__DelegateSignature();
	CMP302_UNREAL_API UFunction* Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CMP302_Unreal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CMP302_Unreal()
	{
		if (!Z_Registration_Info_UPackage__Script_CMP302_Unreal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CMP302_Unreal_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CMP302_Unreal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x73C11E9D,
				0x11CC68CC,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CMP302_Unreal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CMP302_Unreal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CMP302_Unreal(Z_Construct_UPackage__Script_CMP302_Unreal, TEXT("/Script/CMP302_Unreal"), Z_Registration_Info_UPackage__Script_CMP302_Unreal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x73C11E9D, 0x11CC68CC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
