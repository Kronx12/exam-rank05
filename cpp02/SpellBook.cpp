#include "SpellBook.hpp"

SpellBook::SpellBook() {}

void SpellBook::learnSpell(ASpell *spell) {
    for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getName() == spell->getName())
            return ;
    vec.push_back(spell);
}

void SpellBook::forgetSpell(const std::string &name) {
    for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getName() == name) {
            vec.erase(itr);
            return ;
        }
}

ASpell *SpellBook::createSpell(const std::string &name) {
    for (std::vector<ASpell *>::iterator itr = vec.begin(); itr != vec.end(); itr++)
        if ((*itr)->getName() == name)
            return ((*itr)->clone());
    return (NULL);
}
        
SpellBook::~SpellBook() {
    vec.clear();
}
