#include "ATarget.hpp"

ATarget::ATarget(std::string ptype) : type(ptype) {}

ATarget::ATarget(const ATarget &other) : type(other.getType()) {}

ATarget &ATarget::operator=(const ATarget &other) {
    this->type = other.getType();
    return (*this);
}

void ATarget::getHitBySpell(const ASpell &ref) const {
    std::cout << getType() << " has been " << ref.getEffects() << "!" << std::endl;
}

ATarget::~ATarget() {}

const std::string &ATarget::getType() const {return type;}