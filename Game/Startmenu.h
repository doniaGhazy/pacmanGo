#ifndef Startmenu_H
#define Startmenu_H

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include "Map.h"
#include "pac.h"

using namespace sf;
class Startmenu
{
public:
	Startmenu();
	void Position();
	void draw(RenderWindow&, int);
	void handleEvent(RenderWindow&, int&, Clock&, pac&, Map& map);
	Font font;
	Sprite rulesSprite;
	Texture rulesTexture;
	Texture soundTexture;
	Sprite soundSprite;
	Sprite Setting;
	Texture SettingTexture;
	Sprite on;
	Texture onTexture;
	Sprite off;
	Texture offTexture;
	Sprite soundOn;
	Texture soundOnTexture;
	Sprite soundOff;
	Texture soundOffTexture;
	Sprite theme;
	Texture themeTexture;
	Sprite watermelon;
	Texture watermelonTexture;
	Sprite Pac;
	Texture pacTexture;
	Sprite pacColor;
	Texture pacColorTexture;
	Sprite pinkPac;
	Texture pinkPacTexture;
	Sprite bluePac;
	Texture bluePacTexture;
	Sprite orangePac;
	Texture orangePacTexture;
	Sprite yellowPac;
	Texture yellowPacTexture;
	Sprite back;
	Texture backTexture;
	Sprite userName;
	Texture userNameTexture;
	Sprite passWord;
	Texture passWordTexture;
	Sprite userNametemplate;
	Sprite passwordtemplate;
	Texture templateTexture;
	Sprite play;
	Texture playTexture;
	Text userNameText;
	Text passwordText;
	std::string colour;
	Sprite Settings;
	Texture SettingsTexture;
	Sprite OK;
	Texture okTexture;
	Sprite PlayOn;
	Texture playOnTexture;

private:
	Sprite Startgame;
	Sprite welcomeScreenSprite;
	Sprite Signup;
	Sprite TheHallOfFame;
	Sprite Achievements;
	Sprite Instructions;
	Sprite Exit;
	Texture StartgameTexture;
	Texture SignupTexture;
	Texture TheHallOfFameTexture;
	Texture AchievementsTexture;
	Texture InstructionsTexture;
	Texture ExitTexture;
	Texture welcomeScreenTexture;
};
#endif // !Map_H
