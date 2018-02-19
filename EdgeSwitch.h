//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#ifndef TP1_EAGESWITCH_H
#define TP1_EAGESWITCH_H

#include <sstream>
#include "Node.h"

class EdgeSwitch:public Node {
private:
    int name_a;//first bit
    int name_b;//second bit
    int name_c;//third bit
public:

    EdgeSwitch() {
        n_type = "Switch";
    }

    /**
     *
     * @param a first bit
     * @param b second bit
     * @param c third bit
     * @param numPort number of port
     */
    EdgeSwitch(const int a, const int b, const int c, int numPort) {
        name_a = a;
        name_b = b;
        name_c = c;
        n_type = "Switch";
        ostringstream ostr;
        ostr << a<<" "<<b<<" "<<c;
        n_name = "\"Edge("+ostr.str()+")\"";
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


#endif //TP1_EAGESWITCH_H
