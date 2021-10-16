/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: MainMenu.h
Project: BIT_SAVER
Author:
Creation date:
-----------------------------------------------------------------*/
#pragma once
#include <string>
#include "..\Engine\GameState\GameState.h" // BIT_SAVER::GameState
#include "..\Engine\GameObject\GameObjectManager.h" // gameobjectmanager
#include"..\Engine\Input\Input.h"  //input key
#include"..\..\Engine\Physics\Camera.h"
#include"../../Engine/Texture/Texture.h"
class Mainmenu : public GameState
{
public:

	Mainmenu();
	void Load() override;
	void Update(double dt) override;
	void Unload() override;
	void Draw() override;
	std::string GetName() override { return "Splash"; }
	Texture Logo;
	InputKey Level1;
	InputKey Level2;
private:
};

