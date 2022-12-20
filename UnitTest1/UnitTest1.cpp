#include "pch.h"
#include "CppUnitTest.h"
#include "../PR10.2/PR10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = { "Hell o      wor l   d" };
			int len = strlen(str);
			int* arr = new int[len];
			int count = MaxCount(str, arr, len);
			Assert::AreEqual(count, 6);
		}
	};
}
