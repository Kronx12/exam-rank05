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
    for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getName() == spell->getName())
            return ;
    vec.push_back(spell);
}

void Warlock::forgetSpell(std::string name) {
    for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getName() == name) {
            vec.erase(itr);
            return ;
        }
}

void Warlock::launchSpell(std::string name, ATarget &ref) {
for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getName() == name) {
            ref.getHitBySpell(*(*itr));
            return ;
        }
}

Warlock::~Warlock() {
    for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        delete *itr;
    std::cout << getName() << ": My job here is done!" << std::endl;
}