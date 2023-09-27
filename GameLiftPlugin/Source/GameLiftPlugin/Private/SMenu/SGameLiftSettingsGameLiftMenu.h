// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

// Display GameLift introduction.
class SGameLiftSettingsGameLiftMenu : public SCompoundWidget
{
	SLATE_BEGIN_ARGS(SGameLiftSettingsGameLiftMenu) {}

	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);

private:
	TSharedRef<SWidget> MakeGameLiftIntroWidget() const;
	TSharedRef<SWidget> MakeGetStartedWidget() const;

	TSharedRef<SWidget> MakeSetUpAnywhereButtonSwicher() const;

private:
	TSharedPtr<SButton> SetUpAnywhereButton;
};
