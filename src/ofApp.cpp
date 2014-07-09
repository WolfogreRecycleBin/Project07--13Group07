#include "ofApp.h"
#define NUMMAX 30
#define LIFEMAX 200
struct Bubble
{
	int isLive=0;
	int life;
	float x,y;
	float vx,vy;
	float r;
	float vr;
	ofColor color;
};
Bubble bubble[NUMMAX];
//--------------------------------------------------------------
void creatBubble(int x,int y)
{    for(int i=0;i<NUMMAX;i++){
      if(bubble[i].isLive==0){
         bubble[i].isLive=1;
         bubble[i].color.set(rand()%255,rand()%255,rand()%255);
         bubble[i].vx=0;bubble[i].vy=5;
         bubble[i].x=x; bubble[i].y=y;
         bubble[i].r=rand()%4+1;
         bubble[i].vr=0.8;
         bubble[i].life=0;
         return;
         }
}

}
//--------------------------------------------------------------
void updateBubble(void)
{
for(int i=0;i<NUMMAX;i++){
   if(bubble[i].isLive==1 )
{
    if(bubble[i].r>=bubble[i].y){
        {
            bubble[i].vx=0;
        bubble[i].vy=0;
        }
        if(bubble[i].life>=LIFEMAX)
    bubble[i].isLive=0;
    }

    else {
            bubble[i].vx=ofRandom(-5,5);
            bubble[i].x=bubble[i].x-bubble[i].vx;
    bubble[i].y=bubble[i].y-bubble[i].vy;
    bubble[i].r=bubble[i].r+bubble[i].vr;
    }
    bubble[i].life++;
}
}

}
//--------------------------------------------------------------
void drawBubble(void)
{
    for (int i=0;i<NUMMAX;i++)
    {
    	if(bubble[i].isLive)
    	{

    		int tempr=bubble[i].r;
    		int r=bubble[i].color.r;
    		int g=bubble[i].color.g;
    		int b=bubble[i].color.b;
    		while(tempr>0)
    		{
    			ofSetColor(r,g,b);
    			ofCircle(bubble[i].x,bubble[i].y,tempr);
    			tempr--;
    			if(r<253)r+=3;
    			if(g<253)g+=3;
    			if(b<253)b+=3;
    		}
    	}

    }

}
//--------------------------------------------------------------
void killBubble(int x,int y)
{
   for(int i=0;i<NUMMAX;i++){
       float s=pow((pow(bubble[i].x-x,2)+pow(bubble[i].y-y,2)),0.5);
       if(s<=bubble[i].r)bubble[i].isLive=0;

   }



}
//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(255,255,255);
}

//--------------------------------------------------------------
void ofApp::update(){
    updateBubble();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0,0,0);
    ofDrawBitmapString("DESIGNED BY", 10, 15);
    ofDrawBitmapString("Vivia", 10, 30);
    ofDrawBitmapString("Tomorrow", 10, 45);
    ofDrawBitmapString("Wolfogre", 10, 60);
    drawBubble();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if(button==0) creatBubble(x,y);
    if(button==2) killBubble(x,y);

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
