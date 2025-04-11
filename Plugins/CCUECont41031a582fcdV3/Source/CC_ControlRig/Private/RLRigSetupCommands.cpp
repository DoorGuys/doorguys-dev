// Copyright 2024 The Reallusion Authors. All Rights Reserved.

#include "RLRigSetupCommands.h"

#define LOCTEXT_NAMESPACE "FRLRigSetupModule"

void FRLRigSetupCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "CC_ControlRig", "Execute CC ControlRig action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
