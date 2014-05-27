
#include "Test.h"

using namespace tradecoin::common::platform::test;

const std::string Test::s_name = "testname";
const std::string Test::s_base_url = "testbaseurl";

Test::Test():
    ARestPlatform(Test::s_name, Test::s_base_url)
{}


