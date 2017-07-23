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
		}

		TEST_METHOD(TestMethod2)
		{
			complex a(1, 2);
			complex b(2, 4);

			complex c = a - b;

			Assert::AreEqual(a.x() - b.x(), c.x());
			Assert::AreEqual(a.y() - b.y(), c.y());
		}
	};
}