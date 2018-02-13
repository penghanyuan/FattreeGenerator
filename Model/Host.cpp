//
// Created by PENG Hanyuan on 08/02/2018.
//

#include "Host.h"


void Host::setName(const int num) {
    ostringstream ostr;
    ostr << num;
    n_name = "\"Node("+ostr.str()+")\"";
}
