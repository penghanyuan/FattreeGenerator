//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#include "AggrSwitch.h"

void AggrSwitch::setName(const int a, const int b, const int c) {
    ostringstream ostr;
    ostr << a<<" "<<b<<" "<<c;
    n_name = "\"Aggr("+ostr.str()+")\"";
}

int AggrSwitch::getName_a() const {
    return name_a;
}

void AggrSwitch::setName_a(int name_a) {
    AggrSwitch::name_a = name_a;
}

int AggrSwitch::getName_b() const {
    return name_b;
}

void AggrSwitch::setName_b(int name_b) {
    AggrSwitch::name_b = name_b;
}

int AggrSwitch::getName_c() const {
    return name_c;
}

void AggrSwitch::setName_c(int name_c) {
    AggrSwitch::name_c = name_c;
}
