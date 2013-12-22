#include "ofMain.h"
#include "testApp.h"
#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){

    ofAppGLFWWindow window;
	window.setNumSamples(8);
    window.setMultiDisplayFullscreen(true);
    window.setAlphaBits(8);
    window.setColorBits(8, 8, 8);
    
	ofSetupOpenGL(&window, 640*2 +2,768, OF_WINDOW);			// <-------- setup the GL context


	ofRunApp( new testApp());

}
