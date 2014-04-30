#include "ofMain.h"
#include "ofApp.h"

int main(int, char**){
    // setup the GL context
    // can be OF_WINDOW or OF_FULLSCREEN
    // pass in width and height too:
    ofSetupOpenGL(1024, 768, OF_WINDOW);

    // this kicks off the running of my app
    ofRunApp(new ofApp());
}
