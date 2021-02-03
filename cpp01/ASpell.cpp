#include "ASpell.hpp"

ASpell::ASpell(std::string pname, std::string peffects) : name(pname), effects(peffects) {}
ASpell::ASpell(const ASpell &other) : name(other.getName()), effects(other.getEffects()) {}
ASpell &ASpell::operator=(const ASpell &other) {
    this->name = other.getName();
    this->effects = other.getEffects();
    return (*this);
}

const std::string ASpell::getName() const { return (name); }
const std::string ASpell::getEffects() const { return (this->effects); }

void ASpell::setEffects(const std::string &peffects) { effects = peffects; }

void ASpell::launch(const ATarget &ref) const {
    ref.getHitBySpell(*this);
}

ASpell::~ASpell() {}