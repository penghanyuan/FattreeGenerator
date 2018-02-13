//
// Created by PENG Hanyuan on 08/02/2018.
//

#ifndef TP1_AGGRSWITCH_H
#define TP1_AGGRSWITCH_H


#include <sstream>
#include "Node.h"

class AggrSwitch:public Node {
private:
    int name_a;
    int name_b;
    int name_c;
public:

    AggrSwitch() {
        Node::Node();
        n_type = "Switch";
    }

    AggrSwitch(const int a, const int b, const int c, int numPort) {
        Node::Node();
        name_a = a;
        name_b = b;
        name_c = c;
        n_type = "Switch";
        ostringstream ostr;
        ostr << a<<" "<<b<<" "<<c;
        n_name = "\"Aggr("+ostr.str()+")\"";
        n_num_port = numPort;
    }
    void setName(const int a, const int b, const int c);

    int getName_a() const;

    void setName_a(int name_a);

    int getName_b() const;

    void setName_b(int name_b);

    int getName_c() const;

    void setName_c(int name_c);
};


#endif //TP1_AGGRSWITCH_H
