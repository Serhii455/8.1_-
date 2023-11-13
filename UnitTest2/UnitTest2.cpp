#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr_8.1_IT/8.1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            {
                char str[101] = "Hello !!! World !!!";

                int g = Count(str);

                Assert::AreEqual(g, 2);
            }
        }
    };
}
