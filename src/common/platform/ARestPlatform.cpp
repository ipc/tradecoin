
#include "ARestPlatform.h"

using namespace tradecoin::common::platform;

ARestPlatform::ARestPlatform(std::string const & name, std::string const & base_url):
    APlatform(name),
    base_url(base_url)
{}

ARestPlatform::~ARestPlatform() {}


