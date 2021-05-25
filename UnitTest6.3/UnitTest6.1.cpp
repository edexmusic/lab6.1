#include "pch.h"
#include "CppUnitTest.h"
#include "../Array.h"
#include "../Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array Test = Array(50);
			for (int i = 0; i < 50; i++)
			        Test[i] = 0;
			Test[5] = 50;

			Assert::AreEqual(Test.Max(), 50.);
		}
	};
}
