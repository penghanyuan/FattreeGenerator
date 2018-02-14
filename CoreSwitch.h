//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#ifndef TP1_CORESWITCH_H
#define TP1_CORESWITCH_H

#include <sstream>
#include "Node.h"
class CoreSwitch:public Node {
private:
    int name_a;//first bit
    int name_b;//second bit
    int name_c;//third bit
public:

    CoreSwitch() {
        Node::Node();
        n_type = "Switch";
    }
    /**
     *
     * @param a first bit
     * @param b second bit
     * @param c third bit
     * @param numPort number of port
     */
    CoreSwitch(const int a, const int b, const int c, int numPort) {
        Node::Node();
        name_a = a;
        name_b = b;
        name_c = c;
        n_type = "Switch";
        ostringstream ostr;
        ostr << a<<" "<<b<<" "<<c;
        n_name = "\"Core("+ostr.str()+")\"";
        n_num_port = numPort;
    }

    void setName(const int a, const int b, const int c);
};


#endif //TP1_CORESWITCH_H
