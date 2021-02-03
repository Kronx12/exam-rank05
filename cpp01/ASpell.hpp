#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    public:
        ASpell();
        ASpell(const ASpell &other);
        ASpell(std::string pname, std::string peffects);
        ASpell &operator=(const ASpell &other);
        virtual ~ASpell();

        const std::string getName() const;
        const std::string getEffects() const;

        void setEffects(const std::string &peffects);

        void launch(const ATarget &ref) const;

        virtual ASpell *clone() const = 0;

    protected:
        std::string name;
        std::string effects;
};

#endif // !1
