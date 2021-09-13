#include "Figure.h"

Figure::~Figure()
{
	
}

void Figure::setColor(const Color c)
{
	color = c;
}

const Color Figure::getColor()
{
	return color;
}

void Figure::setSize(const int s)
{
	if (size > 0) {
		size = s;
	}
}

const int Figure::getSize()
{
	return size;
}

void Figure::setWidth(const int w)
{
	if (width > 0) {
		width = w;
	}
}

const int Figure::getWidth()
{
	return width;
}

void Figure::setInfo(const Color c, const int s, const float w)
{
	color = c;
	if (size > 0) {
		size = s;
	}
	if (width > 0) {
		width = w;
	}
}

void Square::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// Создание пера
	graph->DrawRectangle(pen, x-size/2, y-size/2, size, size);		// Отрисовка контура фигуры
}

void Square::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// Создание кисти
	graph->FillRectangle(brush, x-size/2, y-size/2, size, size);	// Отрисовка закрашенной фигуры
}

void Triangle::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// Создание пера
	array<Point>^ arr = {											// Массив вершин треугольника
		Point(x-size/2, y+size/2),
		Point(x+size/2, y+size/2),
		Point(x, y-size/2)
	};
	graph->DrawPolygon(pen, arr);									// Отрисовка контура фигуры
}

void Triangle::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// Создание кисти
	array<Point>^ arr = {											// Массив вершин треугольника
		Point(x-size/2, y+size/2),
		Point(x+size/2, y+size/2),
		Point(x, y-size/2)
	};
	graph->FillPolygon(brush, arr);									// Отрисовка закрашенной фигуры
}

void Rect::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// Создание пера
	graph->DrawRectangle(pen, x-size/2, y-size/4, size, size/2);	// Отрисовка контура фигуры
}

void Rect::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// Создание кисти
	graph->FillRectangle(brush, x-size/2, y-size/4, size, size/2);	// Отрисовка закрашенной фигуры
}

void Circle::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// Создание пера
	graph->DrawEllipse(pen, x-size/2, y-size/2, size, size);		// Отрисовка контура фигуры
}

void Circle::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// Создание кисти
	graph->FillEllipse(brush, x-size/2, y-size/2, size, size);		// Отрисовка закрашенной фигуры
}
