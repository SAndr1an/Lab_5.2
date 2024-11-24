#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.2/Lab_5.2.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double eps = 1e-6;
			double expected = exp(pow(1.0, 2.0));

			int n = 0;
			double s = 0;

			S(x, eps, n, s);

			Assert::AreEqual(expected, s, 1e-6);
		}
	};
}
