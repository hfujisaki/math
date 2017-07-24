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

	complex complex::operator+(double x)
	{
		return complex(_x + x, _y);
	}

	complex & complex::operator+=(const complex & z)
	{
		_x += z._x;
		_y += z._y;

		return *this;
	}

	complex & complex::operator+=(double x)
	{
		_x += x;

		return *this;
	}

	complex operator+(double x, const complex & z)
	{
		return complex(x + z._x, z._y);
	}

	std::ostream & operator<<(std::ostream & out, const complex & z)
	{
		return out << "(" << z._x << ", " << z._y << ")";
	}
}