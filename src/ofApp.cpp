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

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
