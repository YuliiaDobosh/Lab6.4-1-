#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab6.4(1)\Lab6.4(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest631
{
	TEST_CLASS(UnitTest631)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 0,1,2,0 };
			int d = FindNull(a, 4);
			Assert::AreEqual(2, d);

		}
	};
}
