#pragma once

#include <ostream>

namespace math
{
	class complex
	{
	public:
		complex(double x, double y);
		complex(const complex &); // copy constructor

		~complex();

		complex & operator=(const complex &); // copy assignment operator

		double x() const;
		double y() const;

		complex operator+(const complex &);
		complex & operator+=(const complex &);

		complex operator-(const complex &);
		complex & operator-=(const complex &);

	private:
		double _x;
		double _y;

		friend std::ostream & operator<<(std::ostream &, const complex &);
	};
}