#include "Warlock.hpp"

Warlock::Warlock(std::string pname, std::string ptitle) : name(pname), title(ptitle) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
    spells.clear();
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string Warlock::getName() const { return (name); }
const std::string Warlock::getTitle() const { return (title); }

void Warlock::setTitle(const std::string &ptitle) { title = ptitle; }

void Warlock::introduce() const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
    if (!spell)
        return;
    for (std::vector<ASpell *>::iterator itr = spells.begin(); itr != spells.end(); itr++)
        if ((*itr)->getName() == spell->getName())
            return;
    spells.push_back(spell->clone());
}

void Warlock::launchSpell(std::string spell, ATarget &ref) {
    for (std::vector<ASpell *>::iterator itr = spells.begin(); itr != spells.end(); itr++)
        if ((*itr)->getName() == spell)
            (*itr)->launch(ref);
}

void Warlock::forgetSpell(std::string spell) {
    for (std::vector<ASpell *>::iterator itr = spells.begin(); itr != spells.end(); itr++)
        if ((*itr)->getName() == spell)
        {
            spells.erase(itr);
            return ;
        }
}