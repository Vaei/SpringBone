// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpringBone/Public/AnimNode_LimitedSpringBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LimitedSpringBone() {}
// Cross Module References
	SPRINGBONE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone();
	UPackage* Z_Construct_UPackage__Script_SpringBone();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SpringBone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SPRINGBONE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLimits();
// End Cross Module References
class UScriptStruct* FAnimNode_LimitedSpringBone::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPRINGBONE_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone, Z_Construct_UPackage__Script_SpringBone(), TEXT("AnimNode_LimitedSpringBone"), sizeof(FAnimNode_LimitedSpringBone), Get_Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Hash());
	}
	return Singleton;
}
template<> SPRINGBONE_API UScriptStruct* StaticStruct<FAnimNode_LimitedSpringBone>()
{
	return FAnimNode_LimitedSpringBone::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_LimitedSpringBone(FAnimNode_LimitedSpringBone::StaticStruct, TEXT("/Script/SpringBone"), TEXT("AnimNode_LimitedSpringBone"), false, nullptr, nullptr);
static struct FScriptStruct_SpringBone_StaticRegisterNativesFAnimNode_LimitedSpringBone
{
	FScriptStruct_SpringBone_StaticRegisterNativesFAnimNode_LimitedSpringBone()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_LimitedSpringBone")),new UScriptStruct::TCppStructOps<FAnimNode_LimitedSpringBone>);
	}
} ScriptStruct_SpringBone_StaticRegisterNativesFAnimNode_LimitedSpringBone;
	struct Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTranslationLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxTranslationLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTranslationLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinTranslationLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitMaxTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitMaxTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LimitMinTranslation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LimitMinTranslation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSimulateInComponentSpace_MetaData[];
#endif
		static void NewProp_bSimulateInComponentSpace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSimulateInComponentSpace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n *  With added ability to limit individual translation axis\n */" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone.\nWith added ability to limit individual translation axis" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LimitedSpringBone>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MaxTranslationLimits_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MaxTranslationLimits = { "MaxTranslationLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LimitedSpringBone, MaxTranslationLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MaxTranslationLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MaxTranslationLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MinTranslationLimits_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MinTranslationLimits = { "MinTranslationLimits", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LimitedSpringBone, MinTranslationLimits), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MinTranslationLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MinTranslationLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMaxTranslation_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMaxTranslation = { "LimitMaxTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LimitedSpringBone, LimitMaxTranslation), Z_Construct_UScriptStruct_FAnimLimits, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMaxTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMaxTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMinTranslation_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMinTranslation = { "LimitMinTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_LimitedSpringBone, LimitMinTranslation), Z_Construct_UScriptStruct_FAnimLimits, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMinTranslation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMinTranslation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace_MetaData[] = {
		{ "Category", "Spring" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace_SetBit(void* Obj)
	{
		((FAnimNode_LimitedSpringBone*)Obj)->bSimulateInComponentSpace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace = { "bSimulateInComponentSpace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_LimitedSpringBone), &Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MaxTranslationLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_MinTranslationLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMaxTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_LimitMinTranslation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::NewProp_bSimulateInComponentSpace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpringBone,
		Z_Construct_UScriptStruct_FAnimNode_SpringBone,
		&NewStructOps,
		"AnimNode_LimitedSpringBone",
		sizeof(FAnimNode_LimitedSpringBone),
		alignof(FAnimNode_LimitedSpringBone),
		Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpringBone();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_LimitedSpringBone"), sizeof(FAnimNode_LimitedSpringBone), Get_Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_LimitedSpringBone_Hash() { return 534201159U; }
class UScriptStruct* FAnimLimits::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPRINGBONE_API uint32 Get_Z_Construct_UScriptStruct_FAnimLimits_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimLimits, Z_Construct_UPackage__Script_SpringBone(), TEXT("AnimLimits"), sizeof(FAnimLimits), Get_Z_Construct_UScriptStruct_FAnimLimits_Hash());
	}
	return Singleton;
}
template<> SPRINGBONE_API UScriptStruct* StaticStruct<FAnimLimits>()
{
	return FAnimLimits::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimLimits(FAnimLimits::StaticStruct, TEXT("/Script/SpringBone"), TEXT("AnimLimits"), false, nullptr, nullptr);
static struct FScriptStruct_SpringBone_StaticRegisterNativesFAnimLimits
{
	FScriptStruct_SpringBone_StaticRegisterNativesFAnimLimits()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimLimits")),new UScriptStruct::TCppStructOps<FAnimLimits>);
	}
} ScriptStruct_SpringBone_StaticRegisterNativesFAnimLimits;
	struct Z_Construct_UScriptStruct_FAnimLimits_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bZ_MetaData[];
#endif
		static void NewProp_bZ_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bY_MetaData[];
#endif
		static void NewProp_bY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bX_MetaData[];
#endif
		static void NewProp_bX_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimLimits_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimLimits>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_SetBit(void* Obj)
	{
		((FAnimLimits*)Obj)->bZ = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ = { "bZ", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLimits), &Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_SetBit(void* Obj)
	{
		((FAnimLimits*)Obj)->bY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY = { "bY", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLimits), &Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNode_LimitedSpringBone.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_SetBit(void* Obj)
	{
		((FAnimLimits*)Obj)->bX = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX = { "bX", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimLimits), &Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimLimits_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimLimits_Statics::NewProp_bX,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimLimits_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SpringBone,
		nullptr,
		&NewStructOps,
		"AnimLimits",
		sizeof(FAnimLimits),
		alignof(FAnimLimits),
		Z_Construct_UScriptStruct_FAnimLimits_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimLimits_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimLimits_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimLimits()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimLimits_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SpringBone();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimLimits"), sizeof(FAnimLimits), Get_Z_Construct_UScriptStruct_FAnimLimits_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimLimits_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimLimits_Hash() { return 1692446905U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
