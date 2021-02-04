#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <vector>
#include <iostream>

#include "ASpell.hpp"

class Warlock {
    private:
        std::string name;
        std::string title;
        std::vector<ASpell *> vec;

        Warlock();
        Warlock(const Warlock &other);
        Warlock &operator=(const Warlock &other);
    public:
        Warlock(std::string pname, std::string ptitle);

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(std::string title);

        void introduce() const;

        void learnSpell(ASpell *spell);
        void forgetSpell(std::string name);
        void launchSpell(std::string name, ATarget &ref);

        ~Warlock();
};

#endif // !WARLOCK_HPP