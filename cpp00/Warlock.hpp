#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock {
    private:
        std::string name;
        std::string title;

        Warlock();
        Warlock(const Warlock &other);
        Warlock &operator=(const Warlock &other);
    public:
        Warlock(std::string pname, std::string ptitle);

        const std::string &getName() const;
        const std::string &getTitle() const;

        void setTitle(std::string title);

        void introduce() const;

        ~Warlock();
};

#endif // !WARLOCK_HPP