#pragma once

#include <vector>

#include "Figure.h"

using namespace System::Drawing;

public enum class FigureType { Random, Square, Rect, Triangle, Circle, FIGURETYPE_SIZE }; // ������������ ����� ������

ref class Controller
{
public:
	virtual ~Controller();

	void setFigureType(const FigureType t);
	const FigureType getFigureType();
	void setColor(const Color c);
	const Color getColor();
	void setSize(const int s);
	const int getSize();
	void setWidth(const int w);
	const int getWidth();
	void setFill(const bool f);
	const bool getFill();

	void drawFigure(int x, int y, Graphics^ graph);		// ��������� ������

private:
	FigureType getRandomFigureType();					// ��������� ���������� ���� ������
	Color getRandomColor();								// ��������� ���������� ����� ������
	int getRandomSize();								// ��������� ���������� ������� ������
	int getRandomWidth();								// ��������� ��������� ������� ����� ������

	Figure^ getFigure(FigureType type);					// ��������� ������� ������

	FigureType type = FigureType::Random;				// ��� ������
	Color color = Color::White;							// ���� ������
	int size = 0;										// ������ ������
	int width = 0;										// ������� ����� ������
	bool fill = false;									// ������ �� ������ ���� ���������
};