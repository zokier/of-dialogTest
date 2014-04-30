#include "ofMain.h"
#include "ofApp.h"

int main(int, char**){
    // setup the GL context
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofSetupOpenGL(240, 120, OF_WINDOW);

    // this kicks off the running of my app
    ofRunApp(new ofApp());
}
