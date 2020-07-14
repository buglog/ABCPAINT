#include "Timeline.h"

void Timeline::setup()
{
	int increment = 7;
	for (int i = 0; i < 32; ++i)
	{
		cell.x = (float)(cellWidth * i);

		ofDrawRectangle(cell);
	}
}

void Timeline::update()
{
	Friend f;
	cell = {0.0f, (float)(f.height - cellHeight), (float)cellWidth, (float)cellHeight};
}

void Timeline::draw()
{
	ofColor line( 0,0,0 );

	ofColor fill;
	fill.setHsb( 0,255,130 );

	for ( int i = 0;i < nCells;++i ) 
	{
		cell.x = (float)(cellWidth * i);

		ofFill();
		ofSetColor({ 255,0,0 });
		ofDrawRectangle(cell);

		ofNoFill();
		ofSetColor({ 0,0,255 });
		ofSetLineWidth(3);
		ofDrawRectangle(cell);
	}

	cell.x = (float)(cellWidth * nCells);

	ofSetColor({ 255,255,0 });
	ofNoFill();
	ofDrawRectangle(cell);
}

void Timeline::addCell()
{
	// add a cell at the current cell when you press "n".
	// call this function in ABCPAINT::update().
	currentCell;
}

void Timeline::cycle(ofColor& c)
{
	char increment = 10;
	unsigned char i = c.getHue();
	c.setHue( i+increment );

	if (c.getSaturation() == 255) {
		c.setSaturation(100);
	}
	else {
		c.setSaturation(255);
	}
	
}