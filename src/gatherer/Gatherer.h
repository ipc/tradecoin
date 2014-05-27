
#ifndef TC_GATHERER_GATHERER__
# define TC_GATHERER_GATHERER__

#include "common/platform/test/Test.h"

namespace tradecoin { namespace gatherer {
    class Gatherer {
        public:
            Gatherer();
        
        private:
            common::platform::test::Test t;
    };
}}

#endif // TC_GATHERER_GATHERER__

