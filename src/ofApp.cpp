#include "ofApp.h"
#define NUMMAX 20
#define LIFEMAX 1000
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
         bubble[i].vx=0;bubble[i].vy=1;
         bubble[i].x=x; bubble[i].y=y;
         bubble[i].r=rand()%4+1;
         bubble[i].vr=1;
         return;
         }
}

}
//--------------------------------------------------------------
void updateBubble(void)
{
for(int i=0;i<NUMMAX;i++)
   if(bubble[i].isLive==1 )
{
    if(bubble[i].r>=bubble[i].y||bubble[i].r>=bubble[i].x)
        {
            bubble[i].vx=0;
        bubble[i].vy=0;
        }
        if(bubble[i].life>=LIFEMAX)
    bubble[i].isLive=0;
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
