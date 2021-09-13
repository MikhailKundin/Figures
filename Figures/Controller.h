#pragma once

#include <vector>

#include "Figure.h"

using namespace System::Drawing;

public enum class FigureType { Random, Square, Rect, Triangle, Circle, FIGURETYPE_SIZE }; // Перечисление типов фигуры

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

	void drawFigure(int x, int y, Graphics^ graph);		// Отрисовка фигуры

private:
	FigureType getRandomFigureType();					// Генератор случайного типа фигуры
	Color getRandomColor();								// генератор случайного цвета фигуры
	int getRandomSize();								// Генератор случайного размера фигуры
	int getRandomWidth();								// Генератор случайной толщины рамки фигуры

	Figure^ getFigure(FigureType type);					// Получение объекта фигуры

	FigureType type = FigureType::Random;				// Тип фигуры
	Color color = Color::White;							// Цвет фигуры
	int size = 0;										// Размер фигуры
	int width = 0;										// Толщина рамки фигуры
	bool fill = false;									// Должна ли фигура быть закрашена
};