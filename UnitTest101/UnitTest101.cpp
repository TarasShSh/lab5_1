#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_1/lab51.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest101
{
	TEST_CLASS(UnitTest101)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int v;
			v = g(0, 0);
			Assert::AreEqual(v, 0);
		}
	};
}
