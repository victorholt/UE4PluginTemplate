// MyPlugin Build File.

namespace UnrealBuildTool.Rules
{
    public class MyPlugin : ModuleRules
    {
        public MyPlugin(TargetInfo Target)
        {
            PrivateIncludePaths.Add("MyPlugin/Private");

            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    "CoreUObject",
                    "Engine",
                    "RenderCore",
                    "ShaderCore",
                    "RHI"
                }
            );
        }
    }
}
