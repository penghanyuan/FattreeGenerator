//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#include "Host.h"
#include <fstream>

void Host::setName(const int num) {
    ostringstream ostr;
    ostr << num;
    n_name = "\"Node("+ostr.str()+")\"";
}

