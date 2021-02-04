#include "Warlock.hpp"

Warlock::Warlock(std::string pname, std::string ptitle) : name(pname), title(ptitle) {
    std::cout << pname << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const { return(this->name); }
const std::string &Warlock::getTitle() const { return(this->title); }

void Warlock::setTitle(std::string ptitle) { this->title = ptitle; }

void Warlock::introduce() const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << ";" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    spell_book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string name) {
    spell_book.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget &ref) {
    ASpell *s = spell_book.createSpell(name);
    ref.getHitBySpell(*s);
    delete s;
}

Warlock::~Warlock() {
    std::cout << getName() << ": My job here is done!" << std::endl;
}