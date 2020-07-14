#pragma once
#include "ofMain.h"
#include "friend.h"






class Cell {
public:
	ofImage img;
	ofColor c;
private:
	unsigned int exposures = 1;
};

class Timeline
{
public:
	void setup();
	void update();
	void draw();
	void addCell();
private:
	void cycle(ofColor& c);
public:
	int currentCell = 0;
	int nCells = 5;
	static constexpr unsigned char maxCells = 256;
	int cellHeight = 32;
	int cellWidth = 32;
	int minCellWidth = 10, maxCellWidth = 32;
	int nFrames = 0;
private:
	ofRectangle cell;
	std::vector<Cell> cells;
	unsigned char xsheet[maxCells];
};