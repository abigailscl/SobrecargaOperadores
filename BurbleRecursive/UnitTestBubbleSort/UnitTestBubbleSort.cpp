#include "pch.h"
#include "CppUnitTest.h"
#include "..\BurbleRecursive\Sort.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestBubbleSort
{
	TEST_CLASS(UnitTestBubbleSort)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Sort<int> sort;
			int* arr = new int[5];
			*arr = 5;
			*(arr + 1) = 7;
			*(arr + 2) = 2;
			*(arr + 3) = 8;
			*(arr + 4) = 1;

			int* result = new int[5];

			*result = 1;
			*(result + 1) = 2;
			*(result + 2) = 5;
			*(result + 3) = 7;
			*(result + 4) = 8;
			sort.bubbleSort(arr, 5);
			for (size_t i = 0; i < 5; i++)
			{
				Assert::AreEqual(*(result + i), *(arr + i));
			}
		}
	};
}
