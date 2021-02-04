#include "ATarget.hpp"

ATarget::ATarget(std::string ptype) : type(ptype) {}
ATarget::ATarget(const ATarget &other) : type(other.type) {}

ATarget &ATarget::operator=(const ATarget &other) {
    type = other.getType();
    return (*this);
}

const std::string &ATarget::getType() const { return (type); }

void ATarget::getHitBySpell(const ASpell &ref) const {
    std::cout << getType() << "\n";
    std::cout << getType() << " has been " << ref.getEffects() << "!" << std::endl;
}

ATarget::~ATarget() {}