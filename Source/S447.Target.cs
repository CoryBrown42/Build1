// AFO Studio   *****    Cory Brown

using UnrealBuildTool;
using System.Collections.Generic;

public class S447Target : TargetRules
{
	public S447Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "S447" } );
	}
}
