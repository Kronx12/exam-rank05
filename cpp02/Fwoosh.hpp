#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell {
    public:
        Fwoosh();
        ASpell *clone() const;
        ~Fwoosh();
};

#endif // !FWOOSH_HPP