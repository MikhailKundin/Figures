#include "Controller.h"

#include <random>

Controller::~Controller()
{
	
}

void Controller::setFigureType(const FigureType t)
{
	type = t;
}

const FigureType Controller::getFigureType()
{
	return type;
}

void Controller::setColor(const Color c)
{
	color = c;
}

const Color Controller::getColor()
{
	return color;
}

void Controller::setSize(const int s)
{
	if (s >= 0) {
		size = s;
	}
}

const int Controller::getSize()
{
	return size;
}

void Controller::setWidth(const int w)
{
	if (w >= 0) {
		width = w;
	}
}

const int Controller::getWidth()
{
	return width;
}

void Controller::setFill(const bool f)
{
	fill = f;
}

const bool Controller::getFill()
{
	return fill;
}

void Controller::drawFigure(int x, int y, Graphics^ graph)
{
	// Генерация случайных занчений для параметров фигуры, если это необходимо
	FigureType selectedType = type == FigureType::Random ? getRandomFigureType() : type;
	Color selectedColor = color == Color::White ? getRandomColor() : color;
	int selectedSize = size == 0 ? getRandomSize() : size;
	int selectedWidth = width == 0 ? getRandomWidth() : width;

	Figure^ figure = getFigure(selectedType);						// Получение указателя на фигуру
	figure->setInfo(selectedColor, selectedSize, selectedWidth);	// Занесение параметров фигуры
	if (fill) {
		figure->fillFigure(x, y, graph);							// Отрисовка контура фигуры
	}
	else {
		figure->drawFigure(x, y, graph);							// отрисовка закрашенной фигуры
	}
}

FigureType Controller::getRandomFigureType()
{
	std::mt19937 r{std::random_device()()};
	std::uniform_int_distribution<int> d(1, static_cast<int>(FigureType::FIGURETYPE_SIZE)-1);
	return static_cast<FigureType>(d(r));
}

Color Controller::getRandomColor()
{
	std::mt19937 r{std::random_device()()};
	std::uniform_int_distribution<int> d(20, 200);
	return Color::FromArgb(255, d(r), d(r), d(r));
}

int Controller::getRandomSize()
{
	std::mt19937 r{std::random_device()()};
	std::uniform_int_distribution<int> d(10, 100);
	return d(r);
}

int Controller::getRandomWidth()
{
	std::mt19937 r{std::random_device()()};
	std::uniform_int_distribution<int> d(1, 10);
	return d(r);
}

Figure^ Controller::getFigure(FigureType type)
{
	switch (type) {
	case FigureType::Square:
		return gcnew Square();
	case FigureType::Rect:
		return gcnew Rect();
	case FigureType::Triangle:
		return gcnew Triangle();
	case FigureType::Circle:
		return gcnew Circle();
	default:
		return nullptr;
	}
}
