#include <iostream>
#include "defs.h"
using namespace std;
#ifndef RGB_H
#define RGB_H

class RGB {
	private:
		int r;
		int g;
		int b;
	
	public:
		RGB(int red, int green, int blue);
		RGB();
		RGB(CuColour colour);
		int getR() const;
		int getG() const;
		int getB() const;
		CuColour getColour();
		void setR(int r);
		void setG(int g);
		void setB(int b);
		void setColour(CuColour colour);
		const static RGB WHITE();
		const static RGB BLACK();
		const static RGB RED();
		const static RGB GREEN();
		const static RGB BLUE();
};

#endif