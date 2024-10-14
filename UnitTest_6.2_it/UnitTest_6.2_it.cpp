#include "pch.h"
#include "CppUnitTest.h"
#include "../6.2it/6.2it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
				TEST_METHOD(TestCreate)
				{
					const int n = 5;
					int a[n];
					int Low = -10;
					int High = 10;

					Create(a, n, Low, High);

					for (int i = 0; i < n; i++) {
						Assert::IsTrue(a[i] >= Low && a[i] <= High, L"Element is out of range!");
					}
				}

				TEST_METHOD(TestSumOddIndices)
				{
					const int n = 5;
					int a[n] = { 1, 2, 3, 4, 5 };

					int result = SumOddIndices(a, n);
					Assert::AreEqual(6, result, L"Sum of elements with odd indices is incorrect!");
				}

				TEST_METHOD(TestModifyOddIndices)
				{
					const int n = 5;
					int a[n] = { 1, 2, 3, 4, 5 };

					ModifyOddIndices(a, n);

					Assert::AreEqual(3, a[1], L"Element at index 1 was not modified correctly");
					Assert::AreEqual(5, a[3], L"Element at index 3 was not modified correctly");

					Assert::AreEqual(1, a[0], L"Element at index 0 should remain unchanged");
					Assert::AreEqual(3, a[2], L"Element at index 2 should remain unchanged");
					Assert::AreEqual(5, a[4], L"Element at index 4 should remain unchanged");
				}
			};
		}
