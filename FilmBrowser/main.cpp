#include "sgg/graphics.h"
#include "defines.h"
#include <string>
#include "gui.h"

using namespace graphics;

void draw() {

	Gui* mygui = Gui::getInstance();

	mygui->draw(); // Calls draw function from gui 
}

void update(float ms) {
	Gui* mygui = Gui::getInstance();

	mygui->update(); // Calls update function from gui 
}

int main(int argc, char** argv) {
	createWindow(1024, 668, "Film Browser"); // Creates window

	Gui* gui = Gui::getInstance();

	setCanvasSize(CANVAS_WIDTH, CANVAS_HEIGHT);
	setCanvasScaleMode(CANVAS_SCALE_FIT); // Window costumization

	setDrawFunction(draw); // Sets draw() as main draw function
	setUpdateFunction(update); // Sets update() as main update function

	startMessageLoop(); // Starts main game loop
	Gui::releaseInstance();

	return 0;
}