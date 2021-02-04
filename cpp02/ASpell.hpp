#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
    private:
        ASpell();

    protected:
        std::string name;
        std::string effects;

    public:
        ASpell(const ASpell &other);
        ASpell(std::string pname, std::string peffects);
        ASpell &operator=(const ASpell &other);

        const std::string &getName() const;
        const std::string &getEffects() const; 

        virtual ASpell *clone() const = 0;

        void launch(const ATarget &ref);

        virtual ~ASpell();
};

#endif // !ASPELL_HPP