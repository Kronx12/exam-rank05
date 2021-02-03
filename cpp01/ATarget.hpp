#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
    public:
        ATarget(const ATarget &other);
        ATarget(std::string type);
        ATarget &operator=(const ATarget &other);
        virtual ~ATarget();

        const std::string &getType() const;

        void getHitBySpell(const ASpell &ref) const;

        virtual ATarget *clone() const = 0;
    protected:
        ATarget();
        std::string type;
};

#endif