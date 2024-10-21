#pragma once
#include "widget.h"
#include "config.h"

class MovieButton :public Widget
{
float speed = 10.0f;
float x;
float y;
float m_color[3];
bool m_highlighted;
float pos_x = CANVAS_WIDTH / 2, pos_y = CANVAS_HEIGHT / 2;
float height = 1.0f;
public:
	void update() override ;
	void draw(int a) override;
	void init() override;
	float getPosY() { return pos_x; }
	float getPosX() { return pos_y; }
	void setPosX(float x) {  pos_x=x; }
	void setPosY(float y) { pos_y = y; }
	void setHighlight(bool h) { m_highlighted = h; }
	
	bool contains(float x, float y);
};