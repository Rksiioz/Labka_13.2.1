#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 13.2.1/Laba 13.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = -5;
			int b = -1;
			int c = -2;
			int result = MAX(a, b, c);
			int expectedNumber = -6;
			Assert::AreEqual(expectedNumber, -6);

		}
	};
}
