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
		complex operator+(double);
		complex & operator+=(const complex &);
		complex & operator+=(double);

	private:
		double _x;
		double _y;

		friend complex operator+(double x, const complex &);

		friend std::ostream & operator<<(std::ostream &, const complex &);
	};
}