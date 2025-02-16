#include <iostream>
#include "defs.h"
#include <X11/Xlib.h>
#include "RGB.h"
using namespace std;
#ifndef TEXTAREA_H
#define TEXTAREA_H

class TextArea {
	private:
		Rectangle dimensions;
		string id;
		string text;
		RGB fill, border;
	
	public:
		TextArea(int x, int y, int width, int height, string id, string label);
		TextArea(Rectangle dimensions, string id, string label);
		TextArea();
		TextArea(const TextArea& original);
		void draw(Display *display, Window win, GC gc, int x, int y);
		const bool overlaps(TextArea ta) const;
		void print() const;
		void setFill(RGB colour);
		void setBorder(RGB colour);
};	

#endif