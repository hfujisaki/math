#include "stdafx.h"
#include "complex.h"
#include "CppUnitTest.h"

using namespace math;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace mathTest
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			complex a(1, 2);
			complex b(2, 4);

			complex c = a + b;

			Assert::AreEqual(a.x() + b.x(), c.x());
			Assert::AreEqual(a.y() + b.y(), c.y());

			complex d = a + 5;

			Assert::AreEqual(d.x(), a.x() + 5);
		}

		TEST_METHOD(TestMethod2)
		{
			double ax = 1;
			double ay = 2;

			double bx = 2;
			double by = 4;

			complex a(ax, ay);
			complex b(bx, by);

			a += b;

			Assert::AreEqual(ax + bx, a.x());
			Assert::AreEqual(ay + by, a.y());

			b += bx;

			Assert::AreEqual(bx + bx, b.x());
		}
	};
}