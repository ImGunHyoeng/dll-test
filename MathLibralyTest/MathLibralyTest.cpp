#include "pch.h"
#include "CppUnitTest.h"
#include "MathLibraly.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MathLibralyTest
{
	TEST_CLASS(MathLibralyTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(true, AlwaysTrue());
		}
		TEST_METHOD(TestTrigonometric)
		{
			Assert::AreEqual(3.141592f, GetPI());
		}
	};
}
