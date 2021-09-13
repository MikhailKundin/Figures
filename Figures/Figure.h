#pragma once

using namespace System::Drawing;

ref class Figure // ����������� �����, ������� ��������� ��� ������
{
public:
	virtual ~Figure();

	// x - ����� ������ �� ��� X
	// y - ����� ������ �� ��� Y
	// graph - ��������� �� ����, � ������� �������� ������
	virtual void drawFigure(int x, int y, Graphics^ graph) = 0; // ���������� ������������� ������
	virtual void fillFigure(int x, int y, Graphics^ graph) = 0; // ���������� ����������� ������

	void setColor(const Color c);
	const Color getColor();
	void setSize(const int s);
	const int getSize();
	void setWidth(const int w);
	const int getWidth();
	void setInfo(const Color c, const int s, const float w);

protected:
	Color color = Color::Black;	// ���� ������
	int size = 50;				// ������������ ���������� ����� ����� ���������������� ������� �� ������� ������
	int width = 3;				// ������� �������
};

ref class Square : public Figure	// �������
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};

ref class Triangle : public Figure	// �����������
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};

ref class Rect : public Figure		// �������������
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};

ref class Circle : public Figure	// ����
{
public:
	virtual void drawFigure(int x, int y, Graphics^ graph) override;
	virtual void fillFigure(int x, int y, Graphics^ graph) override;
};
