#include "moviebutton.h"
#include "graphics.h"
#include"config.h"
void MovieButton::update()
{
	
	
	if (pos_x < 0)
		pos_x = 0;
	if (pos_x > CANVAS_WIDTH)
		pos_x = CANVAS_WIDTH;
	if (pos_y < 0)
		pos_y = 0;
	if (pos_y > CANVAS_HEIGHT)
		pos_y = CANVAS_HEIGHT;

}


void MovieButton::draw(int a)
{
	
	if (a==2) {
		graphics::MouseState ms;       //draw the buttons on greyhound movie screen
		graphics::getMouseState(ms);
		graphics::Brush br;
		br.texture = std::string(ASSET_PATH) + "greyhound.png";
		graphics::drawRect(pos_x, 101, 200, 200, br);
	
		br.texture = std::string(ASSET_PATH) + "white_arrow_2.png";
		br.outline_color[0] = 0.0f;
		br.outline_color[1] = 0.0f;
		br.outline_color[2] = 0.0f;
		

		graphics::drawRect(40, CANVAS_HEIGHT/2, 100, 100, br);
		
		
		br.texture = std::string(ASSET_PATH) + "white_arrow_1.png";
		br.outline_color[0] = 0.0f;
		br.outline_color[1] = 0.0f;
		br.outline_color[2] = 0.0f;
		graphics::drawRect(CANVAS_WIDTH-40, CANVAS_HEIGHT / 2, 100, 100, br);
		char info[40];
		
		sprintf_s(info, "Press enter to start");
		br.fill_color[0] = 1.1f;
		br.fill_color[1] = 1.2f;
		br.fill_color[2]= 1.3f;
		br.texture = 1.0f;
		graphics::drawText(pos_x-80, 240, 40, "TITLE:Greyhound",br );
		graphics::drawText(pos_x - 80, 295, 40, "YEAR:2020", br);
		graphics::drawText(pos_x - 80, 350, 40, "GENRE:Drama", br);
		graphics::drawText(pos_x - 100, 400, 40, "Director:Aaron Schneider", br);
		graphics::drawText(pos_x - 220, 450, 40, "Protagonists:Tom Hanks,Stephen Graham", br);
		
		br.fill_color[0]=1.0f;
		graphics::drawText(40, 40, 40, "PICK YEAR:", br);
		graphics::drawText(40, 40+40, 40, "1999", br);
		graphics::drawText(40, 120, 40, "2020", br);
		graphics::drawText(40, 160, 40, "2000", br);
		graphics::drawText(CANVAS_WIDTH - 250, 40, 40, "PICK GENRE:", br);
	

		graphics::drawText(CANVAS_WIDTH - 200, 40 + 40, 40, "Comedy", br);
		graphics::drawText(CANVAS_WIDTH - 200, 120, 40, "Drama", br);
		graphics::drawText(CANVAS_WIDTH - 200, 160, 40, "Sci-Fi", br);
		
	}


	else if (a == 3) {
		graphics::MouseState ms;                        //draw buttons on matrix movie screen
		graphics::getMouseState(ms);
		graphics::Brush br;
		br.texture = std::string(ASSET_PATH) + "matrix_2.png";
		graphics::drawRect(pos_x, 101, 200, 200, br);
		
		br.texture = std::string(ASSET_PATH) + "white_arrow_2.png";
		br.outline_color[0] = 0.0f;
		br.outline_color[1] = 0.0f;
		br.outline_color[2] = 0.0f;
		

		graphics::drawRect(40, CANVAS_HEIGHT / 2, 100, 100, br);
		

		br.texture = std::string(ASSET_PATH) + "white_arrow_1.png";
		br.outline_color[0] = 0.0f;
		br.outline_color[1] = 0.0f;
		br.outline_color[2] = 0.0f;
		graphics::drawRect(CANVAS_WIDTH - 40, CANVAS_HEIGHT / 2, 100, 100, br);
		char info[40];

		sprintf_s(info, "Press enter to start");
		br.fill_color[0] = 1.1f;
		br.fill_color[1] = 1.2f;
		br.fill_color[2] = 1.3f;
		br.texture = 1.0f;
		graphics::drawText(pos_x - 80, 240, 40, "TITLE:Matrix", br);
		graphics::drawText(pos_x - 80, 295, 40, "YEAR:1999", br);
		graphics::drawText(pos_x - 80, 350, 40, "GENRE:Sci-Fi", br);
		graphics::drawText(pos_x - 100, 400, 40, "Director:The Wachowskis", br);
		graphics::drawText(pos_x - 400, 450, 40, "Protagonists:Keanu Reeves ,Carrie-Anne Moss,Laurence Fishburne", br);
		
		br.fill_color[0] = 1.0f;
		graphics::drawText(40, 40, 40, "PICK YEAR:", br);
		graphics::drawText(40, 40 + 40, 40, "1999", br);
		graphics::drawText(40, 120, 40, "2020", br);
		graphics::drawText(40, 160, 40, "2000", br);
		graphics::drawText(CANVAS_WIDTH - 250, 40, 40, "PICK GENRE:", br);
		

		graphics::drawText(CANVAS_WIDTH - 200, 40 + 40, 40, "Comedy", br);
		graphics::drawText(CANVAS_WIDTH - 200, 120, 40, "Drama", br);
		graphics::drawText(CANVAS_WIDTH - 200, 160, 40, "Sci-Fi", br);




	}
	else if (a == 4) {
	graphics::MouseState ms;             // draw buttons on snatch movie screen
	graphics::getMouseState(ms);
	graphics::Brush br;
	br.texture = std::string(ASSET_PATH) + "snatch.png";
	graphics::drawRect(pos_x, 101, 200, 200, br);

	br.texture = std::string(ASSET_PATH) + "white_arrow_2.png";
	br.outline_color[0] = 0.0f;
	br.outline_color[1] = 0.0f;
	br.outline_color[2] = 0.0f;
	

	graphics::drawRect(40, CANVAS_HEIGHT / 2, 100, 100, br);
	

	br.texture = std::string(ASSET_PATH) + "white_arrow_1.png";
	br.outline_color[0] = 0.0f;
	br.outline_color[1] = 0.0f;
	br.outline_color[2] = 0.0f;
	graphics::drawRect(CANVAS_WIDTH - 40, CANVAS_HEIGHT / 2, 100, 100, br);
	char info[40];

	sprintf_s(info, "Press enter to start");
	br.fill_color[0] = 1.1f;
	br.fill_color[1] = 1.2f;
	br.fill_color[2] = 1.3f;
	br.texture = 1.0f;
	graphics::drawText(pos_x - 80, 240, 40, "TITLE:Snatch", br);
	graphics::drawText(pos_x - 80, 295, 40, "YEAR:2000", br);
	graphics::drawText(pos_x - 80, 350, 40, "GENRE:Comedy", br);
	graphics::drawText(pos_x - 100, 400, 40, "Director:Guy Ritchie", br);
	graphics::drawText(pos_x - 400, 450, 40, "Protagonists:Brad Pitt,   Jason Statham,  Vinnie Jones", br);
	
	br.fill_color[0] = 1.0f;
	graphics::drawText(40, 40, 40, "PICK YEAR:", br);
	graphics::drawText(40, 40 + 40, 40, "1999", br);
	graphics::drawText(40, 120, 40, "2020", br);
	graphics::drawText(40, 160, 40, "2000", br);
	graphics::drawText(CANVAS_WIDTH - 250, 40, 40, "PICK GENRE:", br);
	

	graphics::drawText(CANVAS_WIDTH - 200, 40 + 40, 40, "Comedy", br);
	graphics::drawText(CANVAS_WIDTH - 200, 120, 40, "Drama", br);
	graphics::drawText(CANVAS_WIDTH - 200, 160, 40, "Sci-Fi", br);




	}


	
}

void MovieButton::init()
{
}



bool MovieButton::contains(float x, float y)
{
	return distance(x, y, getPosX(), getPosY())<100;
}
