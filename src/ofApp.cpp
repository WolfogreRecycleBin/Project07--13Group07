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
{    for(int i=0;i<20;i++){
      if(bubble[i].isLive==0){
         bubble[i].isLive=1;
         bubble[i].color.set(rand()%255,rand()%255,rand()%255);
         bubble[i].vx=0;bubble[i].vy=1;
         bubble[i].x=x; bubble[i].y=y;
         bubble[i].r=rand()%4+1;
         }
return;
}

}
//--------------------------------------------------------------
void updateBubble(void)
{

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
   for(int i=0;i<20;i++){
       float s=pow((pow(bubble[i].x-x,2)+pow(bubble[i].y-y,2)),0.5);
       if(s<=bubble[i].r);
       bubble[i].isLive==0;

   }



}
//--------------------------------------------------------------
void ofApp::setup(){
    bubble[0].isLive=1;
    bubble[0].x=bubble[0].y=100;
    bubble[0].r=50;
    bubble[0].color.set(250,0,0);
}

//--------------------------------------------------------------
void ofApp::update(){

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
