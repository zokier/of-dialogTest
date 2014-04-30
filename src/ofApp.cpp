#include "ofApp.h"
#include "ofLog.h"
#include "ofSystemUtils.h"

//--------------------------------------------------------------
void ofApp::setup() {
    gui = new ofxUICanvas(ofGetWindowWidth(), ofGetWindowHeight());
    gui->loadSettings("guiSettings.xml");
    alertButton = gui->addButton("Alert", false);
    loadButton = gui->addButton("Load", false);
    saveButton = gui->addButton("Save", false);
    textBoxButton = gui->addButton("TextBox", false);
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
    ofxUIButton *button = (ofxUIButton *) e.widget;
    if (button->getValue()) {
        if (button == alertButton) {
            ofSystemAlertDialog("hello");
            ofLog() << "returned from alert";
        } else if (button == loadButton) {
            ofFileDialogResult res = ofSystemLoadDialog("title", false, ".");
            ofLog() << res.filePath << res.fileName << res.bSuccess;
        } else if (button == saveButton) {
            ofFileDialogResult res = ofSystemSaveDialog("name", "msg");
            ofLog() << res.filePath << res.fileName << res.bSuccess;
        } else if (button == textBoxButton) {
            ofLog() << ofSystemTextBoxDialog("question", "text");
        }
    }
}

