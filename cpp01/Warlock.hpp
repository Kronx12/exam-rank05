#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <vector>
#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
    public:
        Warlock(std::string pname, std::string ptitle);
        Warlock &operator=(const Warlock &other);
        ~Warlock();

        const std::string getName() const;
        const std::string getTitle() const;

        void introduce() const;

        void setTitle(const std::string &ptitle);

        void learnSpell(ASpell *pspell);
        void launchSpell(std::string pspell, ATarget &ref);
        void forgetSpell(std::string pspell);

    private:
        std::string name;
        std::string title;
        std::vector<ASpell*> spells;

        Warlock();
        Warlock(const Warlock &other);
};

#endif // !1
