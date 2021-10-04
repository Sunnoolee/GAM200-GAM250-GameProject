/*--------------------------------------------------------------
Copyright (C) 2021 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
File Name: Level1.cpp
Project: CS230
Author: Hyosang Jung
Creation date: 3/07/2021
-----------------------------------------------------------------*/
#include "../Engine/Engine.h"	//GetGameStateManage
#include"Level1.h"
#include"Hero.h"
//#include"Bunny.h"
//#include"Screens.h" //Screens::Level2
//#include"Hero.h" // add Hero
//#include"Ball.h" // add Ball
//#include"Bunny.h" //add bunny
//#include "Fonts.h" //Font1
//#include "Score.h" //score
//#include "Timer.h" //timer
//#include"TreeStump.h" //add TreeStump
//#include"../Engine/ShowCollision.h" //collision box
//#include"Gravity.h" //hero,ball gravity
//#include"Exit.h"
//#include"GameParticles.h"

Level1::Level1() : mainMenu(InputKey::Keyboard::Escape),
reload(InputKey::Keyboard::R), heroPtr(nullptr)
/*background(nullptr),
),bunnyPtr(nullptr)
gameObjectManager(nullptr)
lives(3)*/
{}

void Level1::Load()
{
	heroPtr = new Hero({ 0,0 });
	//bunnyPtr = new Bunny({ 0.5,0.5 });
	gameObjectManager.Add(heroPtr);
	//gameObjectManager.Add(bunnyPtr);

}
void Level1::Update(double dt)
{
	gameObjectManager.UpdateAll(dt);

#ifdef _DEBUG
	if (reload.IsKeyReleased() == true)
	{
		Engine::GetGameStateManager().ReloadState();
	}
#endif


}

void Level1::Unload()
{
	gameObjectManager.Unload();
	heroPtr = nullptr;
}

void Level1::Draw()
{

	//background.Draw(camera);
	//math::TransformMatrix cameraMatrix = camera.GetMatrix();
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	gameObjectManager.DrawAll();
	//math::ivec2 winSize = Engine::GetWindow().GetSize();
	
}