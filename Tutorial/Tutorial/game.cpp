#include "game.h"
#include "graphics.h"
#include "config.h"
void Game::updateStartScreen()
{
	if (graphics::getKeyState(graphics::SCANCODE_RETURN))     //if user presses enter, go to level screen
		status = STATUS_PLAYING;                              
	graphics::MouseState ms;
	graphics::getMouseState(ms);
	if (ms.button_left_pressed)                              // if user clicks, go to level screen
		status = STATUS_PLAYING;
}
void Game::updateLevelScreen()
{
	graphics::Brush br;
	if (!player_initialized && graphics::getGlobalTime() > 1000)
	{
		player = new MovieButton();          //if there is no moviebutton object , create new one
		player_initialized = true;
	}


	if (player)
		player->update();
	
	graphics::MouseState ms;
	graphics::getMouseState(ms);
	float mx = graphics::windowToCanvasX(ms.cur_pos_x);
	float my = graphics::windowToCanvasY(ms.cur_pos_y);
	


	
	
	
	
	
	if (ms.button_left_pressed && ms.cur_pos_x < 40 + 100 && ms.cur_pos_y>265 && ms.cur_pos_y < 340) // if user clicks on left arrow , go to previous movie page
		status = STATUS_SNATCH;
	
	if (ms.button_left_pressed && ms.cur_pos_x > 1100 && ms.cur_pos_y > 265 && ms.cur_pos_y < 340) // if  user clicks on right arrow , go to next movie page
		status = STATUS_MATRIX;
	
	if (graphics::getKeyState(graphics::SCANCODE_RIGHT))   //// if user presses right arrow , go to next movie page
		status = STATUS_MATRIX;
	
	if (graphics::getKeyState(graphics::SCANCODE_LEFT))//// if user presses  left arrow , go to previous movie page
		status = STATUS_SNATCH;

	if (ms.button_left_pressed && ms.cur_pos_x <= 120 && ms.cur_pos_y > 55 && ms.cur_pos_y < 97)// if user picks 1999 , go to matrix movie
		status = STATUS_MATRIX;
	if (ms.button_left_pressed && ms.cur_pos_x <= 120+3 && ms.cur_pos_y > 55+50 && ms.cur_pos_y < 97+47) // if user picks 2020 , go to greyhound movie
		status = STATUS_PLAYING;
	if (ms.button_left_pressed && ms.cur_pos_x <= 120+3 && ms.cur_pos_y > 55+50+50 && ms.cur_pos_y < 97+47+47)// if user picks 2000, go to snatch movie
		status = STATUS_SNATCH;
	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH-40 && ms.cur_pos_y > 59 && ms.cur_pos_y < 97)// if user picks comedy, go to snatch movie
		status = STATUS_SNATCH;
		

	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 55+50 && ms.cur_pos_y < 147)// if user picks drama, go to greyhound movie
		status = STATUS_PLAYING;
	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH-40 && ms.cur_pos_y > 55 + 50 + 50 && ms.cur_pos_y < 97 + 47 + 50)// if user picks sci-fi, go to matrix movie
		status = STATUS_MATRIX;
	 




	

	player->setHighlight(player->contains(mx, my));
	
}

void Game::updateMatrixScreen()
{
	graphics::Brush br;
	if (!player_initialized && graphics::getGlobalTime() > 1000)
	{
		player = new MovieButton();
		player_initialized = true;
	}


	if (player)
		player->update();

	graphics::MouseState ms;
	graphics::getMouseState(ms);

	if (ms.button_left_pressed && ms.cur_pos_x < 40 + 100 && ms.cur_pos_y>265 && ms.cur_pos_y < 340)  //if user presses enter, go to level screen
		status = STATUS_PLAYING;

	if (ms.button_left_pressed && ms.cur_pos_x > 1100 && ms.cur_pos_y > 265 && ms.cur_pos_y < 340)   // if  user clicks on right arrow , go to next movie page
		status = STATUS_SNATCH;

	if (graphics::getKeyState(graphics::SCANCODE_RIGHT))   //// if user presses right arrow , go to next movie page
		status = STATUS_SNATCH;

	if (graphics::getKeyState(graphics::SCANCODE_LEFT))//// if user presses left arrow , go to previous movie page
		status = STATUS_PLAYING;

	if (ms.button_left_pressed && ms.cur_pos_x <= 120 && ms.cur_pos_y > 55 && ms.cur_pos_y < 97)
		status = STATUS_MATRIX;
	if (ms.button_left_pressed && ms.cur_pos_x <= 120 + 3 && ms.cur_pos_y > 55 + 50 && ms.cur_pos_y < 97 + 47)
		status = STATUS_PLAYING;
	if (ms.button_left_pressed && ms.cur_pos_x <= 120 + 3 && ms.cur_pos_y > 55 + 50 + 50 && ms.cur_pos_y < 97 + 47 + 47)
		status = STATUS_SNATCH;
	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 59 && ms.cur_pos_y < 97)
		status = STATUS_SNATCH;


	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 55 + 50 && ms.cur_pos_y < 147)
		status = STATUS_PLAYING;
	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 55 + 50 + 50 && ms.cur_pos_y < 97 + 47 + 50)
		status = STATUS_MATRIX;





	float mx = window2canvasX(ms.cur_pos_x);
	float my = window2canvasY(ms.cur_pos_y);
	player->setHighlight(player->contains(mx, my));

}
void Game::updateSnatchScreen()
{
	graphics::Brush br;
	if (!player_initialized && graphics::getGlobalTime() > 1000)
	{
		player = new MovieButton();
		player_initialized = true;
	}


	if (player)
		player->update();

	graphics::MouseState ms;
	graphics::getMouseState(ms);

	if (ms.button_left_pressed && ms.cur_pos_x < 40 + 100 && ms.cur_pos_y>265 && ms.cur_pos_y < 340)
		status = STATUS_MATRIX;

	if (ms.button_left_pressed && ms.cur_pos_x > 1100 && ms.cur_pos_y > 265 && ms.cur_pos_y < 340)
		status = STATUS_PLAYING;

	if (graphics::getKeyState(graphics::SCANCODE_RIGHT))
		status = STATUS_PLAYING;

	if (graphics::getKeyState(graphics::SCANCODE_LEFT))
		status = STATUS_MATRIX;

	if (ms.button_left_pressed && ms.cur_pos_x <= 120 && ms.cur_pos_y > 55 && ms.cur_pos_y < 97)
		status = STATUS_MATRIX;
	if (ms.button_left_pressed && ms.cur_pos_x <= 120 + 3 && ms.cur_pos_y > 55 + 50 && ms.cur_pos_y < 97 + 47)
		status = STATUS_PLAYING;
	if (ms.button_left_pressed && ms.cur_pos_x <= 120 + 3 && ms.cur_pos_y > 55 + 50 + 50 && ms.cur_pos_y < 97 + 47 + 47)
		status = STATUS_SNATCH;
	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 59 && ms.cur_pos_y < 97)
		status = STATUS_SNATCH;


	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 55 + 50 && ms.cur_pos_y < 147)
		status = STATUS_PLAYING;
	if (ms.button_left_pressed && ms.cur_pos_x >= CANVAS_WIDTH - 40 && ms.cur_pos_y > 55 + 50 + 50 && ms.cur_pos_y < 97 + 47 + 50)
		status = STATUS_MATRIX;





	float mx = window2canvasX(ms.cur_pos_x);
	float my = window2canvasY(ms.cur_pos_y);
	player->setHighlight(player->contains(mx, my));

}




void Game::drawStartScreen()
{
	graphics::Brush br;                                      //draw the start screen
	char info[40];
	
	sprintf_s(info, "Press enter to start");
	graphics::drawText(CANVAS_WIDTH/2, CANVAS_HEIGHT/2, 30, info, br);
	
	graphics::MouseState ms;
	graphics::getMouseState(ms);
	graphics::drawDisk(graphics::windowToCanvasX(ms.cur_pos_x), graphics::windowToCanvasY( ms.cur_pos_y),10,br);
	float mx = graphics::windowToCanvasX(ms.cur_pos_x);
	float my = graphics::windowToCanvasY(ms.cur_pos_y);
	

}
void Game::drawLevelScreen()
{
	
	graphics::Brush br;              //draw the greyhound movie screen
	
	
	graphics::MouseState ms;
	graphics::getMouseState(ms);
	
	br.fill_color[0] = 0.0f;
	br.fill_color[1] = 0.0f;
	br.fill_color[2] = 0.0f;
	
	br.outline_opacity = 0.0f;

	//draw background
	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, CANVAS_WIDTH, CANVAS_WIDTH, br);

	//draw player
	if (player)
		player->draw(2);
	

	br.fill_color[0] = 1.0f;


	br.outline_opacity = 1.0f;

	
	graphics::drawDisk(window2canvasX(ms.cur_pos_x), window2canvasY(ms.cur_pos_y), 10, br);
	

}

void Game::drawMatrixScreen()
{
	graphics::Brush br;


	graphics::MouseState ms;
	graphics::getMouseState(ms);
	
	float mx = window2canvasX(ms.cur_pos_x);
	float my = window2canvasY(ms.cur_pos_y);

	
	br.fill_color[0] = 0.0f;
	br.fill_color[1] = 0.0f;
	br.fill_color[2] = 0.0f;

	br.outline_opacity = 0.0f;

	//draw background
	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, CANVAS_WIDTH, CANVAS_WIDTH, br);

	//draw player
	if (player)
		player->draw(3);


	br.fill_color[0] = 1.0f;


	br.outline_opacity = 1.0f;

	
	 graphics::drawDisk(window2canvasX(ms.cur_pos_x), window2canvasY(ms.cur_pos_y), 10, br);
	

}


void Game::drawSnatchScreen()
{
	graphics::Brush br;                 //draw the snatch movie screen


	graphics::MouseState ms;
	graphics::getMouseState(ms);

	float mx = window2canvasX(ms.cur_pos_x);
	float my = window2canvasY(ms.cur_pos_y);

	
	br.fill_color[0] = 0.0f;
	br.fill_color[1] = 0.0f;
	br.fill_color[2] = 0.0f;

	br.outline_opacity = 0.0f;

	//draw background
	graphics::drawRect(CANVAS_WIDTH / 2, CANVAS_HEIGHT / 2, CANVAS_WIDTH, CANVAS_WIDTH, br);

	//draw player
	if (player)
		player->draw(4);
	

	br.fill_color[0] = 1.0f;


	br.outline_opacity = 1.0f;

	
	graphics::drawDisk(window2canvasX(ms.cur_pos_x), window2canvasY(ms.cur_pos_y), 10, br);


}
void Game::update()
{
	if (status == STATUS_START) {
		updateStartScreen();
	
	
	}
	else if(status==STATUS_PLAYING) {
		updateLevelScreen();
	}
	else if (status == STATUS_MATRIX) {
		updateMatrixScreen();
	}
	else if (status==STATUS_SNATCH){
		updateSnatchScreen();
	}

}

void Game::draw()
{
	if (status == STATUS_START) {
		drawStartScreen();


	}
	else if (status == STATUS_PLAYING) {
		drawLevelScreen();
	}
	else if (status == STATUS_MATRIX) {
		drawMatrixScreen();
	}
	else if (status == STATUS_SNATCH) {
		drawSnatchScreen();
	}

}


void Game::init()
{
	graphics::setFont(std::string(ASSET_PATH)+"bitstream.otf");
	graphics::playMusic(std::string(ASSET_PATH) + "electric.mp3",0.5f,true,4000);// put music
	graphics::preloadBitmaps(ASSET_PATH);

}

float Game::window2canvasX(float x)
{
	return x * CANVAS_WIDTH / (float)window_width;
}

float Game::window2canvasY(float y)
{
	return y * CANVAS_HEIGHT / (float)window_height;
}

Game::Game()
{
}

Game::~Game()
{
	if (player) {
		delete player;
	}

}
