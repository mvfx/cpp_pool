#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
public:
    Pony (std::string name, int weight);
    ~Pony(void);
    std::string getName() const;
    std::string setName(std::string name);
    int     getWeight() const;
    int     setWeight(int weight);
    void    sayHello(void) const;

private:
    std::string _name;
    int 		_weight;
};

#endif