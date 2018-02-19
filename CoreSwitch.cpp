//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#include <map>
#include "CoreSwitch.h"
#include <fstream>


void CoreSwitch::setName(const int a, const int b, const int c) {
    ostringstream ostr;
    ostr << a<<" "<<b<<" "<<c;
    n_name = "\"Core("+ostr.str()+")\"";
}

