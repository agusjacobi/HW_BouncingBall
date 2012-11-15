#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    size = 15;
    ofSetCircleResolution(100);//cantidad de triangulos xa dibujar el circulo
    
    ofBackground(0);
    ofSetFrameRate(60);
    
    ofSetVerticalSync(true);//sincroniza los ejes verticales de las lineas que corren en la computaodra formando las imagenes.
    
    xPos = 100;
    yPos = 0;
    ySpeed = 3;
    xSpeed = 8;

}

//--------------------------------------------------------------
void testApp::update(){
    yPos += ySpeed;
    xPos += xSpeed;
    
    if (xPos>=ofGetWidth() || xPos<=0) {
        xSpeed = xSpeed*-1;
    }
    
    if (yPos>=ofGetHeight() || yPos<=0) {
        ySpeed = ySpeed*-1;
    }
   

}

//--------------------------------------------------------------
void testApp::draw(){
    ofCircle(xPos, yPos, size);
    ofSetColor(230, 140, 240);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}