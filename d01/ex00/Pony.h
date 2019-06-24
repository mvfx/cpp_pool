#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
public:
    Pony (void);
    Pony (std::string newName, int newAge);
    ~Pony(void);
    std::string getName() const;
    std::string setName(std::string newName);
    int getAge() const;
    int setAge(int n);

private:
    std::string _name;
    int 		_age;
};

#endif