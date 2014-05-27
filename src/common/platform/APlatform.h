
#include <string>

namespace tradecoin { namespace common { namespace platform {
    class APlatform {
        public:
            APlatform(std::string const & name);
            virtual ~APlatform();

        public:
            virtual void handleResult() = 0;
            virtual void handleError() = 0;
    
        private:
            std::string name;
    };
}}}

