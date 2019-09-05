// Copyright (c) 2019 Drowning Dragons Limited. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SpringBoneEditor : ModuleRules
{
    public SpringBoneEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "SpringBone"
        });

        PrivateDependencyModuleNames.AddRange(new string[] {
            "AnimGraph",
            "BlueprintGraph",
        });

    }
}