#include "ofMain.h"
#include "ABCPAINT.h"
#include "friend.h"


//========================================================================




Friend f;

int main( ){
	ofSetupOpenGL(f.width,f.height,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ABCPAINT());

}

