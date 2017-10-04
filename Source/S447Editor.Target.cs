// AFO Studio   *****    Cory Brown

using UnrealBuildTool;
using System.Collections.Generic;

public class S447EditorTarget : TargetRules
{
	public S447EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "S447" } );
	}
}
