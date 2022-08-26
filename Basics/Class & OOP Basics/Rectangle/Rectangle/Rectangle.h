#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
	public:
		// No Arg Constructor
		Rectangle();

		// Paramterized Constructor
		Rectangle(double length, double width);

		double getLength() const;
		double getWidth() const;
		void setLength(double length);
		void setWidth(double width);
		double area() const;

	private:
		double length;
		double width;
};

#endif