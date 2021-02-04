#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <vector>
#include "ATarget.hpp"

class TargetGenerator {
    private:
        TargetGenerator(const TargetGenerator &other);
        TargetGenerator &operator=(const TargetGenerator &other);
        std::vector<ATarget *> vec;

    public:
        TargetGenerator();

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);

        ~TargetGenerator();
};

#endif