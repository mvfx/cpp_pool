//
// Created by Maksim KACHANOVSKIY on 2019-06-24.
//


void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}