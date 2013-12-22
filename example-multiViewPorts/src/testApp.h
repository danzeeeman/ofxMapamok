#pragma once

#include "ofMain.h"

#include "ofxMapamok.h"

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    
    ofxMapaMok      mapamoko01;
    ofxMapaMok      mapamoko02;
    
    
    ofShader        shader;
    
    ofVideoGrabber      video;
    ofxSmartViewPort    videoViewPort;
    
    ofFbo           canvas;
    
    int             textWidth;
    int             textHeight;
    
    bool            bCanvasMode;
};
