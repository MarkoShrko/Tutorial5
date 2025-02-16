#include <iostream>
using namespace std;
#include "RGB.h"

RGB::RGB(int red, int green, int blue) {
	this->r = red;
	this->g = green;
	this->b = blue;
}
RGB::RGB() {
	this->r = 0;
	this->g = 0;
	this->b = 0;
}
RGB::RGB(CuColour colour) {
    setColour(colour);
}
		
int RGB::getR() const{ return this->r; }
int RGB::getG() const{ return this->g; }
int RGB::getB() const{ return this->b; }

CuColour RGB::getColour() 
{ 
	CuColour colour = (((r << 8) | g) << 8) | b;
	return colour;
}

void RGB::setR(int r){ 

if(r>255) {
	r = 255;
}
else if(r<0) {
	r = 0;
}
else {
	this->r = r;
}
}

void RGB::setG(int g){
	if(g>255) {
		g = 255;
	}
	else if(g<0) {
		g = 0;
	}
	else {
		this->g = g; 
	}
}
void RGB::setB(int b){
	if(b>255) {
		b = 255;
	}
	else if(b<0) {
		b = 0;
	}
	else {
		this->b = b; 
	}
}
void RGB::setColour(CuColour colour) {
	this->b = colour & 0x0000ff;
	colour = colour >> 8;
	this->g = colour & 0x0000ff;
	colour = colour >> 8;
	this->r = colour & 0x0000ff;
}

const RGB RGB::WHITE() {
	RGB white(255,255,255);
	return white;
}

const RGB RGB::BLACK() {
	RGB black(0,0,0);
	return black;
}

const RGB RGB::RED() {
	RGB red(255,0,0);
	return red;
}

const RGB RGB::GREEN() {
	RGB green(0,255,0);
	return green;
}

const RGB RGB::BLUE() {
	RGB blue(0,0,255);
	return blue;
}