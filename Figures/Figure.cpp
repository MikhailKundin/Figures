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
	Pen^ pen = gcnew Pen(color, width);								// �������� ����
	graph->DrawRectangle(pen, x-size/2, y-size/2, size, size);		// ��������� ������� ������
}

void Square::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// �������� �����
	graph->FillRectangle(brush, x-size/2, y-size/2, size, size);	// ��������� ����������� ������
}

void Triangle::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// �������� ����
	array<Point>^ arr = {											// ������ ������ ������������
		Point(x-size/2, y+size/2),
		Point(x+size/2, y+size/2),
		Point(x, y-size/2)
	};
	graph->DrawPolygon(pen, arr);									// ��������� ������� ������
}

void Triangle::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// �������� �����
	array<Point>^ arr = {											// ������ ������ ������������
		Point(x-size/2, y+size/2),
		Point(x+size/2, y+size/2),
		Point(x, y-size/2)
	};
	graph->FillPolygon(brush, arr);									// ��������� ����������� ������
}

void Rect::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// �������� ����
	graph->DrawRectangle(pen, x-size/2, y-size/4, size, size/2);	// ��������� ������� ������
}

void Rect::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// �������� �����
	graph->FillRectangle(brush, x-size/2, y-size/4, size, size/2);	// ��������� ����������� ������
}

void Circle::drawFigure(int x, int y, Graphics^ graph)
{
	Pen^ pen = gcnew Pen(color, width);								// �������� ����
	graph->DrawEllipse(pen, x-size/2, y-size/2, size, size);		// ��������� ������� ������
}

void Circle::fillFigure(int x, int y, Graphics^ graph)
{
	SolidBrush^ brush = gcnew SolidBrush(color);					// �������� �����
	graph->FillEllipse(brush, x-size/2, y-size/2, size, size);		// ��������� ����������� ������
}
