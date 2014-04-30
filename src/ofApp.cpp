#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
    gui = new ofxUICanvas(ofGetWindowWidth(), ofGetWindowHeight());
    gui->loadSettings("guiSettings.xml");
    ofAddListener(gui->newGUIEvent, this, &ofApp::guiEvent);
}

//--------------------------------------------------------------
void ofApp::update() {
}

//--------------------------------------------------------------
void ofApp::draw() {
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {
    gui->setDimensions(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) { 
}

void ofApp::exit() {
    gui->saveSettings("guiSettings.xml");
    delete gui;
}

void ofApp::guiEvent(ofxUIEventArgs &e) {
}

