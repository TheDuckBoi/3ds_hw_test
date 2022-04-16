#include "ui.h"

#include <console.h>
#include "ui/debug.h"

static void drawBorders() {
	fillRect(MAIN_SCREEN, 0, 0, BORDER_THICKNESS, SCREEN_HEIGHT, BORDER_COLOR);
	fillRect(MAIN_SCREEN, 0, 0, MAIN_SCREEN_WIDTH, BORDER_THICKNESS, BORDER_COLOR);
	fillRect(MAIN_SCREEN, MAIN_SCREEN_WIDTH - BORDER_THICKNESS, 0, BORDER_THICKNESS, SCREEN_HEIGHT, BORDER_COLOR);
	fillRect(MAIN_SCREEN, 0, SCREEN_HEIGHT - BORDER_THICKNESS, MAIN_SCREEN_WIDTH, BORDER_THICKNESS, BORDER_COLOR);
}

void initUI() {
	drawBorders();

	drawStringCenteredColor(MAIN_SCREEN, "3ds_hw_test by aspargas2 - commit " COMMIT, MAIN_SCREEN_WIDTH / 2, BORDER_THICKNESS + 2, COLOR_LIGHT_BLUE);
	//drawProgressBar(MAIN_SCREEN, 50, 50, 100, 10, 50, COLOR_GREEN, COLOR_GREY);
}