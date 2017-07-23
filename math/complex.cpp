#include "complex.h"
#include <ostream>

namespace math
{
	complex::complex(double x, double y) : _x(x), _y(y)
	{
	}

	complex::complex(const complex & z) : _x(z._x), _y(z._y)
	{
	}

	complex::~complex()
	{
	}

	complex & complex::operator=(const complex & z)
	{
		if (this != &z)
		{
			_x = z._x;
			_y = z._y;
		}

		return *this;
	}

	double complex::x() const
	{
		return _x;
	}

	double complex::y() const
	{
		return _y;
	}

	complex complex::operator+(const complex & z)
	{
		return complex(_x + z._x, _y + z._y);
	}

	complex & complex::operator+=(const complex & z)
	{
		_x += z._x;
		_y += z._x;

		return *this;
	}

	complex complex::operator-(const complex & z)
	{
		return complex(_x - z._x, _y - z._y);
	}

	complex & complex::operator-=(const complex & z)
	{
		_x -= z._x;
		_y -= z._x;

		return *this;
	}

	std::ostream & operator<<(std::ostream & out, const complex & z)
	{
		return out << "(" << z._x << ", " << z._y << ")";
	}
}