#include "Warlock.hpp"

Warlock::Warlock(std::string pname, std::string ptitle) : name(pname), title(ptitle) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}

const std::string Warlock::getName() const { return (name); }
const std::string Warlock::getTitle() const { return (title); }

void Warlock::setTitle(const std::string &ptitle) { title = ptitle; }

void Warlock::introduce() const {
    std::cout << getName() << ": I am " << getName() << ", " << getTitle() << " !" << std::endl;
}