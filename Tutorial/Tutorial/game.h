#pragma once

#include "moviebutton.h"
class Game {

	typedef enum { STATUS_START, STATUS_PLAYING,STATUS_MATRIX,STATUS_SNATCH }status_t;
	MovieButton* player = nullptr;
	bool player_initialized = false;
	bool debug_mode = false;
	status_t status = STATUS_START;
	void updateStartScreen();
	void updateLevelScreen();
	void drawStartScreen();
	void drawLevelScreen();
	void updateMatrixScreen();
	void drawMatrixScreen();
	void updateSnatchScreen();
	void drawSnatchScreen();
	unsigned int window_width = WINDOW_WIDTH;
	unsigned int window_height = WINDOW_HEIGHT;

public:
	void setDebugMode(bool d) { debug_mode = d; }
	void update();
	void draw();
	void init();
	unsigned int getWindowWidth() {
		return window_width;
}
	unsigned int getWindowHeight() {
		return window_height;
	}
	float window2canvasX(float x);
	float window2canvasY(float y);

	void setWindowDimensions(unsigned int w, unsigned int h) { window_width = w; window_height = h; }
	Game();
	~Game();
};