//
// Created by PENG Hanyuan on 08/02/2018.
//

#include "CoreSwitch.h"

void CoreSwitch::setName(const int a, const int b, const int c) {
    ostringstream ostr;
    ostr << a<<" "<<b<<" "<<c;
    n_name = "\"Core("+ostr.str()+")\"";
}