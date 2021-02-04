#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <vector>
#include "ASpell.hpp"

class SpellBook {
    private:
        SpellBook(const SpellBook &other);
        SpellBook &operator=(const SpellBook &other);
        std::vector<ASpell *> vec;

    public:
        SpellBook();

        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);

        ~SpellBook();
};

#endif