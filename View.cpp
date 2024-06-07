#include "View.h"

void View::menu(std::vector<std::string>& menu, int& choice)
{
    std::cout << std::endl;
    std::cout << "Please choose a directory: " <<std::endl<<std::endl;
    for (int i = 0; i < menu.size(); ++i){
    std::cout<<"  ("<<i+1<<") "<<menu[i]<<std::endl;
    }
    std::cout << "  (0) Exit" << std::endl<<std::endl;

    std::cout << "Enter your selection: ";
    std::cin >> choice;
    if (choice == 0)
        return;

    while (choice < 0 || choice > menu.size()) {
        std::cout << "Enter your selection: ";
        std::cin >> choice;
  }
}
