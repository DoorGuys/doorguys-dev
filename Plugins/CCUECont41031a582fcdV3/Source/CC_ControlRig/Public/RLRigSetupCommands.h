// Copyright 2024 The Reallusion Authors. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "RLRigSetupStyle.h"

class FRLRigSetupCommands : public TCommands<FRLRigSetupCommands>
{
public:

	FRLRigSetupCommands()
		: TCommands<FRLRigSetupCommands>(TEXT("CC_ControlRig"), NSLOCTEXT("Contexts", "CC_ControlRig", "CC_ControlRig Plugin"), NAME_None, FRLRigSetupStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
