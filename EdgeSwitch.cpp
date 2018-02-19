//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#include "EdgeSwitch.h"
#include <fstream>


void EdgeSwitch::setName(const int a, const int b, const int c) {
    ostringstream ostr;
    ostr << a<<" "<<b<<" "<<c;
    n_name = "\"Edge("+ostr.str()+")\"";
}

int EdgeSwitch::getName_a() const {
    return name_a;
}

void EdgeSwitch::setName_a(int name_a) {
    EdgeSwitch::name_a = name_a;
}

int EdgeSwitch::getName_b() const {
    return name_b;
}

void EdgeSwitch::setName_b(int name_b) {
    EdgeSwitch::name_b = name_b;
}

int EdgeSwitch::getName_c() const {
    return name_c;
}

void EdgeSwitch::setName_c(int name_c) {
    EdgeSwitch::name_c = name_c;
}



