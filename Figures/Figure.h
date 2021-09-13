#pragma once

using namespace System::Drawing;

ref class Figure // Абстрактный класс, который описывает все фигуры
{
public:
	virtual ~Figure();

	// x - Центр фигуры по оси X
	// y - Центр фигуры по оси Y
	// graph - Указатель на поле, в котором рисуется фигура
	virtual void drawFigure(int x, int y, Graphics^ graph) = 0; // Нарисовать назакрашенную фигуру
	virtual void fillFigure(int x, int y, Graphics^ graph) = 0; // Нарисовать закрашенную фигуру

	void setColor(const Color c);
	const Color getColor();
	void setSize(const int s);
	const int getSize();
	void setWidth(const int w);
	const int getWidth();
	void setInfo(const Color c, const int s, const float w);

protected:
	Color color = Color::Black;	// Цвет фигуры
	int size = 50;				// Максимальное расстояние между двумя противоположными точками на контуре фигуры
	int width = 3;				// Толщина контура
};

ref class Square : public Figure	// Квадрат
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};

ref class Triangle : public Figure	// Треугольник
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};

ref class Rect : public Figure		// Прямоугольник
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};

ref class Circle : public Figure	// Круг
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};
