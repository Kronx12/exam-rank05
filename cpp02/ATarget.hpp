#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    private:
        ATarget();

    protected:
        std::string type;

    public:
        ATarget(const ATarget &other);
        ATarget(std::string ptype);
        ATarget &operator=(const ATarget &other);

        const std::string &getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(const ASpell &ref) const;

        virtual ~ATarget();
};

#endif // !ATARGET_HPP