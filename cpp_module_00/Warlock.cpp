#include "Warlock.hpp"

Warlock::Warlock(const std::string &pname, const std::string &ptitle) : name(pname), title(ptitle) {
    std::cout << name << ": This looks like another boring day." << std::endl;
}

const std::string &Warlock::getName() const { return (name); }
const std::string &Warlock::getTitle() const { return (title); }

void Warlock::setTitle(const std::string &ptitle) { title = ptitle; }

void Warlock::introduce() const {
    std::cout << name << ": I am " << name << ", " << title << "!" << std::endl;
}
       
Warlock::~Warlock() {
    std::cout << name << ": My job here is done!" << std::endl;
}