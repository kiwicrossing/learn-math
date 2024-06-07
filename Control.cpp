#include "Control.h"


Control::Control()
{}

Control::~Control()
{}

void Control::launch()
{
    std::cout << "Launching..." << std::endl;
    ASCIIText::mainMenu();
    int choice = -1;

    while (true)
    {
        choice = -1;
        std::vector<std::string> menu ={
            "Linear algebra",
            "testing"
        };

        view.menu(menu, choice);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 0) break;
        switch(choice)
        {
        case 1:
            linearAlgebra(); break;
        case 2:
            break;
        default:
            break;
        }
    }

    std::cout << "Thanks for learning!" << std::endl;
}


void Control::linearAlgebra()
{
    ASCIIText::linearAlgebra();
    int choice = -1;

    while (choice != 0)
    {
        choice = -1;
        std::vector<std::string> menu ={
            "Row reduction",
            "Matrix multiplication",
            "Transposing matricies"
        };

        view.menu(menu, choice);
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 0) break;
        switch(choice)
        {
        case 1:
            LinAlg::rowReduction(); break;
        case 2:
            LinAlg::matrixMultiplication(); break;
        default:
            break;
        }
    }
}