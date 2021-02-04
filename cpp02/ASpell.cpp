#include "ASpell.hpp"

ASpell::ASpell(std::string pname, std::string peffects) : name(pname), effects(peffects) {}
ASpell::ASpell(const ASpell &other) : name(other.name), effects(other.effects) {}

ASpell &ASpell::operator=(const ASpell &other) {
    name = other.getName();
    effects = other.getEffects();
    return (*this);
}

const std::string &ASpell::getName() const { return (name); }
const std::string &ASpell::getEffects() const { return (effects); }

void ASpell::launch(const ATarget &ref) {
    ref.getHitBySpell(*this);
}

ASpell::~ASpell() {}