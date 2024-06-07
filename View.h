#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
#include <string>

class View
{
    public:
        void menu(std::vector<std::string>&, int& choice);
        void linAlgMenu(std::vector<std::string>&, int& choice);
};

#endif
