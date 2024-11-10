#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\den4i\source\repos\lab3\ConsoleApplication1\ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		void TestMultiplicationWithParameters(int n, int x, double expected)
		{
			double actual = calculateMultiplication(n, x);
			Assert::AreEqual(expected, actual);
		}

		void TestAdditionWithParameters(int n, int x, double expected)
		{
			double actual = calculateAddition(n, x);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(Multiplication_WithN3AndX6_ShouldReturn8640)
		{
			TestMultiplicationWithParameters(3, 6, 8640.0);
		}

		TEST_METHOD(Multiplication_WithN2AndX4_ShouldReturn576)
		{
			TestMultiplicationWithParameters(2, 4, 12);
		}

		TEST_METHOD(Addtition_WithN3AndXneg3_ShouldReturn86)
		{
			TestAdditionWithParameters(3, -3, 86);
		}

		TEST_METHOD(Addtition_WithN10AndXneg5_ShouldReturn1210)
		{
			TestAdditionWithParameters(10, -5, 1210);
		}
	};
}