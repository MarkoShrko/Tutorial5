#include <iomanip>
#include <iostream>
#include <X11/Xlib.h>
#include "TextArea.h"
#include "RGB.h"

using namespace std;

TextArea::TextArea(int x, int y, int width, int height, string id, string label) {
	this->dimensions = {x, y, width, height};
	this->id = id;
	this->text = label;
	this->fill = RGB::WHITE();
	this->border = RGB::BLACK();
}

TextArea::TextArea(Rectangle dimensions, string id, string label) {
	this->dimensions = dimensions;
	this->id = id;
	this->text = label;
	this->fill = RGB::WHITE();
	this->border = RGB::BLACK();
}

TextArea::TextArea() {
	this->dimensions = {0, 0, 100, 100};
	this->id = "Default Name";
	this->text = "Default Text";
	this->fill = RGB::WHITE();
	this->border = RGB::BLACK();
}

TextArea::TextArea(const TextArea& original) {
	this->dimensions = original.dimensions;
	this->id = original.id;
	this->text = "DUPLICATE";
	this->fill = original.fill;
	this->border = original.border;
}

const bool TextArea::overlaps(TextArea ta) const{
	return this->dimensions.overlaps(ta.dimensions);
}

void TextArea::print() const{
	cout << "TextArea id:	 		" << this->id << endl;
	cout << "Prefered Location: 	" << this->dimensions.x << ", " << this->dimensions.y << endl;
	cout << "Size: 					" << this->dimensions.width << ", " << this->dimensions.height << endl;
	cout << "Text: 					" << this->text << endl;
}

void TextArea::setFill(RGB colour) {
	this->fill = colour;
}

void TextArea::setBorder(RGB colour) {
	this->border = colour;
}

string TextArea::getId() { return id; }