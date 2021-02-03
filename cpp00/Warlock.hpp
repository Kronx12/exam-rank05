#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
    public:
        Warlock(std::string pname, std::string ptitle);
        Warlock &operator=(const Warlock &other);
        ~Warlock();

        const std::string getName() const;
        const std::string getTitle() const;

        void introduce() const;

        void setTitle(const std::string &ptitle);

    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(const Warlock &other);
};

#endif // !1
