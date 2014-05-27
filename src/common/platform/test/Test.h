
#ifndef TC_COMMON_PLATFORM_TEST_TEST__
# define TC_COMMON_PLATFORM_TEST_TEST__
 
#include "common/platform/ARestPlatform.h"

namespace tradecoin { namespace common { namespace platform { namespace test {
    class Test : public ARestPlatform {
        public:
            Test();

            void handleResult() override {};
            void handleError() override {};

        private:
            static const std::string s_name;
            static const std::string s_base_url;
    };
}}}}

#endif // TC_COMMON_PLATFORM_TEST_TEST__

