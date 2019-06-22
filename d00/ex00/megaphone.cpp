#include <cstring>
#include <iostream>

void    megaphone(char *str)
{
    while (*str != '\0')
        std::cout << std::toupper(*(str++));
}

int main(int argc, char *argv[])
{
    int i;

    if (argc > 1)
    {
        i = 0;
        while (++i < argc)
            megaphone(argv[i]);
        std::cout << std::endl;

    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        std::cout << std::endl;
    }
    return (0);
}