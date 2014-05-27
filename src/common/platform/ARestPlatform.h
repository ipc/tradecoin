
#ifndef TC_COMMON_PLATFORM_ARESTPLATFORM__
# define TC_COMMON_PLATFORM_ARESTPLATFORM__

# include "APlatform.h"

namespace tradecoin { namespace common { namespace platform {
    class ARestPlatform : public APlatform {
        public:
            ARestPlatform(std::string const & name, std::string const & base_url);
            virtual ~ARestPlatform();

        private:
            std::string base_url;
    };
}}}

#endif // TC_COMMON_PLATFORM_ARESTPLATFORM__

