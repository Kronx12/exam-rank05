#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *target) {
    for (std::vector<ATarget *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getType() == target->getType())
            return ;
    std::cout << target->getType();
    vec.push_back(target);
}

void TargetGenerator::forgetTargetType(const std::string &type) {
    for (std::vector<ATarget *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getType() == type) {
            vec.erase(itr);
            return ;
        }
}

ATarget *TargetGenerator::createTarget(std::string const &type) {
    for (std::vector<ATarget *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getType() == type)
            return ((*itr)->clone());
    return (NULL);
}
        
TargetGenerator::~TargetGenerator() {
    vec.clear();
}
