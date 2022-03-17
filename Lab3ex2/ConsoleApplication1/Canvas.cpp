#include "Canvas.h";


Canvas::Canvas(int width, int height)
{
	this->width = width;
	this->heigth = height;
	this->canvas = new char*[width];
	for (int i = 0; i < width; i++)
		this->canvas[i] = new char[height];
}
void Canvas::Print()
{
	for (int i = 0; i < this->width; i++)
		for (int i = 0; i < this->heigth; i++)
			return;

}

