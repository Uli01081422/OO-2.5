#include "pch.h"
#include "CppUnitTest.h"
#include "../OOП 2.5/Complex.h"
#include "../OOП 2.5/Complex.cpp"
#include "../OOП 2.5/Pair.h"
#include "../OOП 2.5/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex i;
			Pair  h1(2), h2(2);

			Assert::AreEqual(i.Minus(h1, h2), 2);

		}
	};
}
