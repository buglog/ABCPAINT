#include "ABCPAINT.h"

//--------------------------------------------------------------
void ABCPAINT::setup(){
	webcam.setup(f.width,f.height);

	gui.setup();
	gui.add(snap.setup("snap"));
}

//--------------------------------------------------------------
void ABCPAINT::update(){
	webcam.update();
	timeline.update();
}

//--------------------------------------------------------------
void ABCPAINT::draw(){
	webcam.draw(0, 0);
	timeline.draw();

	gui.draw();
}

//--------------------------------------------------------------
void ABCPAINT::keyPressed(int key){


}
//--------------------------------------------------------------
void ABCPAINT::keyReleased(int key){

}

//--------------------------------------------------------------
void ABCPAINT::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ABCPAINT::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ABCPAINT::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ABCPAINT::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ABCPAINT::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ABCPAINT::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ABCPAINT::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ABCPAINT::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ABCPAINT::dragEvent(ofDragInfo dragInfo){ 

}
