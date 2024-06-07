#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <vector>
#include <string>
#include <limits>

#include "View.h"
#include "ASCIIText.h"
#include "LinAlg.h"

class Control
{
    public:
        Control();
        ~Control();
        void launch();
    
    private:
        View view;
        void linearAlgebra();

};

#endif
