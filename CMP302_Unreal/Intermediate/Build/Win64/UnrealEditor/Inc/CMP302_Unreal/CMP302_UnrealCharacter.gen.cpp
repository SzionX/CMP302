// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP302_Unreal/CMP302_UnrealCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCMP302_UnrealCharacter() {}
// Cross Module References
	CMP302_UNREAL_API UFunction* Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CMP302_Unreal();
	CMP302_UNREAL_API UClass* Z_Construct_UClass_ACMP302_UnrealCharacter_NoRegister();
	CMP302_UNREAL_API UClass* Z_Construct_UClass_ACMP302_UnrealCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CMP302_Unreal, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ACMP302_UnrealCharacter::execCloudburst)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cloudburst();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACMP302_UnrealCharacter::execUpdraft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Updraft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACMP302_UnrealCharacter::execTailwind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tailwind();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACMP302_UnrealCharacter::execDrift)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Drift();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACMP302_UnrealCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACMP302_UnrealCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Val);
		P_NATIVE_END;
	}
	void ACMP302_UnrealCharacter::StaticRegisterNativesACMP302_UnrealCharacter()
	{
		UClass* Class = ACMP302_UnrealCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Cloudburst", &ACMP302_UnrealCharacter::execCloudburst },
			{ "Drift", &ACMP302_UnrealCharacter::execDrift },
			{ "MoveForward", &ACMP302_UnrealCharacter::execMoveForward },
			{ "MoveRight", &ACMP302_UnrealCharacter::execMoveRight },
			{ "Tailwind", &ACMP302_UnrealCharacter::execTailwind },
			{ "Updraft", &ACMP302_UnrealCharacter::execUpdraft },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMP302_UnrealCharacter, nullptr, "Cloudburst", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "Comment", "//Abilities\n" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "Abilities" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMP302_UnrealCharacter, nullptr, "Drift", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics
	{
		struct CMP302_UnrealCharacter_eventMoveForward_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CMP302_UnrealCharacter_eventMoveForward_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "Comment", "//Movement functions\n" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "Movement functions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMP302_UnrealCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::CMP302_UnrealCharacter_eventMoveForward_Parms), Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics
	{
		struct CMP302_UnrealCharacter_eventMoveRight_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CMP302_UnrealCharacter_eventMoveRight_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMP302_UnrealCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::CMP302_UnrealCharacter_eventMoveRight_Parms), Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMP302_UnrealCharacter, nullptr, "Tailwind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACMP302_UnrealCharacter, nullptr, "Updraft", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACMP302_UnrealCharacter);
	UClass* Z_Construct_UClass_ACMP302_UnrealCharacter_NoRegister()
	{
		return ACMP302_UnrealCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACMP302_UnrealCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CMP302_Unreal,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACMP302_UnrealCharacter_Cloudburst, "Cloudburst" }, // 1585742489
		{ &Z_Construct_UFunction_ACMP302_UnrealCharacter_Drift, "Drift" }, // 2251723656
		{ &Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveForward, "MoveForward" }, // 1700020474
		{ &Z_Construct_UFunction_ACMP302_UnrealCharacter_MoveRight, "MoveRight" }, // 3470989025
		{ &Z_Construct_UFunction_ACMP302_UnrealCharacter_Tailwind, "Tailwind" }, // 387756945
		{ &Z_Construct_UFunction_ACMP302_UnrealCharacter_Updraft, "Updraft" }, // 156639758
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CMP302_UnrealCharacter.h" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMP302_UnrealCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMP302_UnrealCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMP302_UnrealCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "CMP302_UnrealCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACMP302_UnrealCharacter, OnUseItem), Z_Construct_UDelegateFunction_CMP302_Unreal_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 1732176401
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::NewProp_OnUseItem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACMP302_UnrealCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::ClassParams = {
		&ACMP302_UnrealCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACMP302_UnrealCharacter()
	{
		if (!Z_Registration_Info_UClass_ACMP302_UnrealCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACMP302_UnrealCharacter.OuterSingleton, Z_Construct_UClass_ACMP302_UnrealCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACMP302_UnrealCharacter.OuterSingleton;
	}
	template<> CMP302_UNREAL_API UClass* StaticClass<ACMP302_UnrealCharacter>()
	{
		return ACMP302_UnrealCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACMP302_UnrealCharacter);
	struct Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACMP302_UnrealCharacter, ACMP302_UnrealCharacter::StaticClass, TEXT("ACMP302_UnrealCharacter"), &Z_Registration_Info_UClass_ACMP302_UnrealCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACMP302_UnrealCharacter), 2963450387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_433464844(TEXT("/Script/CMP302_Unreal"),
		Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CMP302_Unreal_Source_CMP302_Unreal_CMP302_UnrealCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
