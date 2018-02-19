//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#ifndef TP1_HOST_H
#define TP1_HOST_H

#include <string>
#include <iostream>
#include <sstream>
#include "Node.h"

using namespace std;

class Host:public Node {

public:
    Host() {
        Node::Node();
        n_type = "Hca";
    }

    Host(int id,int numPort) {
        Node::Node();
        ostringstream ostr;
        ostr << id;
        n_name = "\"Node("+ostr.str()+")\"";
        n_type = "Hca";
        n_num_port = numPort;
    }

    void setName(const int num);

};


#endif //TP1_HOST_H
