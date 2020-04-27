#include "stdafx.h"
#include "Startmenu.h"
#include "Map.h"
#include <iostream>

Startmenu::Startmenu()
{
	// texts for signup window
	if (!font.loadFromFile("arial.ttf"))
	{
		std::cout << "You suck";
	}
	userNameText.setPosition(440, 260);
	userNameText.setFillColor(Color::Black);
	userNameText.setFont(font);
	userNameText.setCharacterSize(60);
	userNameText.setStyle(sf::Text::Bold);

	passwordText.setPosition(430, 465);
	passwordText.setFillColor(Color::Yellow);
	passwordText.setFont(font);
	passwordText.setCharacterSize(60);
	passwordText.setStyle(sf::Text::Bold);

	// main menu sprites
	welcomeScreenTexture.loadFromFile("Welcome.png");
	welcomeScreenSprite.setTexture(welcomeScreenTexture);

	StartgameTexture.loadFromFile("start.png");
	Startgame.setTexture(StartgameTexture);

	SignupTexture.loadFromFile("Signup.png");
	Signup.setTexture(SignupTexture);

	SettingsTexture.loadFromFile("Settings.png");
	Settings.setTexture(SettingsTexture);

	TheHallOfFameTexture.loadFromFile("TheHallOfFame.png");
	TheHallOfFame.setTexture(TheHallOfFameTexture);

	AchievementsTexture.loadFromFile("Achievements.png");
	Achievements.setTexture(AchievementsTexture);

	InstructionsTexture.loadFromFile("Instructions.png");
	Instructions.setTexture(InstructionsTexture);

	ExitTexture.loadFromFile("Exit.png");
	Exit.setTexture(ExitTexture);

	// sign up textures and sprites
	userNameTexture.loadFromFile("userName.png");
	userName.setTexture(userNameTexture);


	passWordTexture.loadFromFile("PW.png");
	passWord.setTexture(passWordTexture);

	templateTexture.loadFromFile("template.png");
	userNametemplate.setTexture(templateTexture);
	passwordtemplate.setTexture(templateTexture);

	playTexture.loadFromFile("play.png");
	play.setTexture(playTexture);

	playOnTexture.loadFromFile("playOn.png");
	PlayOn.setTexture(playOnTexture);


	backTexture.loadFromFile("back.png");
	back.setTexture(backTexture);


	//instructions
	rulesTexture.loadFromFile("rules.png");
	rulesSprite.setTexture(rulesTexture);
	rulesSprite.setScale(0.4, 0.6);

	// SignUp
	SettingTexture.loadFromFile("Setting.png");
	Setting.setTexture(SettingTexture);

	soundTexture.loadFromFile("sound.png");
	soundSprite.setTexture(soundTexture);

	onTexture.loadFromFile("on.png");
	on.setTexture(onTexture);

	soundOnTexture.loadFromFile("soundOn.png");
	soundOn.setTexture(soundOnTexture);

	offTexture.loadFromFile("off.png");
	off.setTexture(offTexture);

	soundOffTexture.loadFromFile("soundOff.png");
	soundOff.setTexture(soundOffTexture);

	themeTexture.loadFromFile("theme.png");
	theme.setTexture(themeTexture);

	watermelonTexture.loadFromFile("watermelon.png");
	watermelon.setTexture(watermelonTexture);
	pacTexture.loadFromFile("pac.png");
	Pac.setTexture(pacTexture);
	pacColorTexture.loadFromFile("pacmanColor.png");
	pacColor.setTexture(pacColorTexture);
	bluePacTexture.loadFromFile("PacBlue.png");
	bluePac.setTexture(bluePacTexture);
	orangePacTexture.loadFromFile("PacOrange.png");
	orangePac.setTexture(orangePacTexture);
	yellowPacTexture.loadFromFile("PacYellow.png");
	yellowPac.setTexture(yellowPacTexture);
	pinkPacTexture.loadFromFile("PacPink.png");
	pinkPac.setTexture(pinkPacTexture);
	backTexture.loadFromFile("back.png");
	back.setTexture(backTexture);
	okTexture.loadFromFile("OK.png");
	OK.setTexture(okTexture);


	this->Position();
}
void Startmenu::Position()
{
	welcomeScreenSprite.setPosition(150, 0);
	Startgame.setPosition(293.5, 250);
	Signup.setPosition(280, 350);
	Settings.setPosition(280, 450);
	//TheHallOfFame.setPosition(240, 550);
	//Achievements.setPosition(230, 650);
	Instructions.setPosition(240, 550);
	Exit.setPosition(255.5, 650);

	// signup 
	userName.setPosition(70, 250);
	userName.setScale(0.45, 0.45);

	userNametemplate.setPosition(420, 265);
	userNametemplate.setScale(0.5, 0.5);

	passWord.setPosition(70, 450);
	passWord.setScale(0.5, 0.5);

	passwordtemplate.setPosition(420, 470);
	passwordtemplate.setScale(0.5, 0.5);

	play.setPosition(570, 695);
	play.setScale(0.5, 0.5);

	play.setPosition(570, 695);
	play.setScale(0.5, 0.5);

	back.setPosition(30, 595);
	back.setScale(0.5, 0.5);
	// instructions
	rulesSprite.setPosition(40, 150);

	//Setting
	Setting.setPosition(280, 0);
	soundSprite.setPosition(40, 180);
	soundSprite.setScale(0.5, 0.5);

	on.setPosition(290, 130);
	on.setScale(0.5, 0.5);

	soundOn.setPosition(440, 130);
	soundOn.setScale(0.2, 0.2);

	off.setPosition(290, 220);
	off.setScale(0.5, 0.5);

	soundOff.setPosition(440, 220);
	soundOff.setScale(0.5, 0.5);

	theme.setPosition(20, 350);
	theme.setScale(0.5, 0.5);

	watermelon.setPosition(300, 330);
	watermelon.setScale(0.2, 0.2);

	Pac.setPosition(500, 365);
	Pac.setScale(0.2, 0.2);

	pacColor.setPosition(10, 500);
	pacColor.setScale(0.4, 0.4);

	bluePac.setPosition(350, 520);
	bluePac.setScale(0.4, 0.4);

	orangePac.setPosition(400, 520);
	orangePac.setScale(0.4, 0.4);

	yellowPac.setPosition(450, 520);
	yellowPac.setScale(0.4, 0.4);

	pinkPac.setPosition(500, 520);
	pinkPac.setScale(0.4, 0.4);

	back.setPosition(20, 690);
	back.setScale(0.5, 0.5);

	OK.setPosition(430, 690);
	OK.setScale(0.5, 0.5);
}
void Startmenu::draw(RenderWindow& window, int state)
{
	if (state == 1) {
		window.draw(Startgame);
		window.draw(welcomeScreenSprite);
		window.draw(Signup);
		window.draw(Settings);
		//window.draw(TheHallOfFame);
		//window.draw(Achievements);
		window.draw(Instructions);
		window.draw(Exit);
	}
	else if (state == 3)
	{
		window.draw(rulesSprite);
		window.draw(back);


	}
	else if (state == 4)
	{
		window.draw(Setting);
		window.draw(soundSprite);
		window.draw(on);
		window.draw(soundOn);
		window.draw(off);
		window.draw(soundOff);
		window.draw(theme);
		window.draw(watermelon);
		window.draw(Pac);
		window.draw(pacColor);
		window.draw(bluePac);
		window.draw(orangePac);
		window.draw(yellowPac);
		window.draw(pinkPac);
		window.draw(back);
		//	window.draw(OK); 
	}
	else if (state == 5) {
		window.draw(userName);
		window.draw(passWord);
		window.draw(userNametemplate);
		window.draw(passwordtemplate);
		window.draw(play);
		window.draw(back);

		window.draw(userNameText);
		window.draw(passwordText);
	}
}

void Startmenu::handleEvent(RenderWindow& window, int& state, Clock& timer, pac& pacman, Map &map)
{

	if (state == 1) {

		if (Mouse::isButtonPressed(Mouse::Left) && Startgame.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
		{
			state = 2;
			timer.restart();
		}
		if (Mouse::isButtonPressed(Mouse::Left) && Signup.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
		{
			state = 5;
		}
		if (Mouse::isButtonPressed(Mouse::Left) && Settings.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
		{
			state = 4;
		}
		if (Mouse::isButtonPressed(Mouse::Left) && Instructions.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
		{
			state = 3;
		}
		if (Mouse::isButtonPressed(Mouse::Left) && Exit.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window)))) {
			window.close();
		}
	}
	if (state == 4 || state == 5 || state== 3)
	{
		if (Mouse::isButtonPressed(Mouse::Left) && back.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
		{
			state = 1;
		}

		if (state == 5) {
			if (Mouse::isButtonPressed(Mouse::Left) && play.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
			{
				state = 2;
			}
		}
		else if (state == 4) {
			if (Mouse::isButtonPressed(Mouse::Left) && pinkPac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
			{
				state = 2;
				pacman.setColor("Pink");
			}
			if (Mouse::isButtonPressed(Mouse::Left) && orangePac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
			{
				state = 2;
				pacman.setColor("Orange");
			}
			if (Mouse::isButtonPressed(Mouse::Left) && bluePac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))
			{
				state = 2;
				pacman.setColor("Blue");

			}
			if (Mouse::isButtonPressed(Mouse::Left) && yellowPac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))) || (Mouse::isButtonPressed(Mouse::Left) && (Pac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))))
			{
				state = 2;
				pacman.setColor("Yellow");

			}
			if (Mouse::isButtonPressed(Mouse::Left) && watermelon.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))) || (Mouse::isButtonPressed(Mouse::Left) && (Pac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))))
			{
				state = 2;
				pacman.setColor("melonTheme");
				map.changeDot("melonTheme");
			}
			if (Mouse::isButtonPressed(Mouse::Left) && Pac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))) || (Mouse::isButtonPressed(Mouse::Left) && (Pac.getGlobalBounds().contains(Vector2f(Mouse::getPosition(window))))))
			{
				state = 2;
				pacman.setColor("Yellow");
				map.changeDot("Pac");
			}

		}
		
		

	}
	

}