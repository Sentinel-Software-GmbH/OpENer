#include "CppUTest/CommandLineTestRunner.h"

IMPORT_TEST_GROUP(RandomClass);
IMPORT_TEST_GROUP(XorShiftRandom);

int main(int argc, char** argv)
{
  /* These checks are here to make sure assertions outside test runs don't crash */
  CHECK(true);
  LONGS_EQUAL(1, 1);

  return CommandLineTestRunner::RunAllTests(argc, argv);
}
