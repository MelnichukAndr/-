#include "pch.h"
#include "CppUnitTest.h"
#include "funcs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab10
{
	TEST_CLASS(Lab10)
	{
	public:

		TEST_METHOD(MinIntLargeNull)
		{
			int a = 10;
			int b = 15;
			Assert::AreEqual(min<int>(a, b), a);
		}
		TEST_METHOD(MinIntLessNull)
		{
			int a = -10;
			int b = -15;
			Assert::AreEqual(min<int>(a, b), b);
		}
		TEST_METHOD(MinIntAll)
		{
			int a = 10;
			int b = -15;
			Assert::AreEqual(min<int>(a, b), b);
		}

		TEST_METHOD(MinCharLargeNull)
		{
			char a = 10;
			char b = 15;
			Assert::AreEqual(min<char>(a, b), a);
		}
		TEST_METHOD(MinCharLessNull)
		{
			char a = -10;
			char b = -15;
			Assert::AreEqual(min<char>(a, b), b);
		}
		TEST_METHOD(MinCharAll)
		{
			char a = 10;
			char b = -15;
			Assert::AreEqual(min<char>(a, b), b);
		}

		TEST_METHOD(SortInt)
		{
			int a[] = { -1, 5, -2, 0, 3, 1, 2, 4 };
			int b[] = { -2, -1, 0, 1, 2, 3, 4, 5 };
			sort<int>(a, 8);
			for (int i = 0; i < 8; i++)
				Assert::AreEqual(a[i], b[i]);
		}
		TEST_METHOD(SortChar)
		{
			char a[] = { 'f', 'b', 'a', 'e', 'd', 'c' };
			char b[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
			sort<char>(a, 6);
			for (int i = 0; i < 6; i++)
				Assert::AreEqual(a[i], b[i]);
		}

		TEST_METHOD(SumInt)
		{
			int a[] = { 20, 30, 50 };
			int b = 100;
			Assert::AreEqual(sum<int>(a, 3), b);
		}
		TEST_METHOD(SumChar)
		{
			char a[] = { 20, 30, 50 };
			char b = 100;
			Assert::AreEqual(sum<char>(a, 3), b);
		}
	};
}
