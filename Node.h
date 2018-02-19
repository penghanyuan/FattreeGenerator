//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#ifndef TP1_NODE_H
#define TP1_NODE_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Connect.h"

using namespace std;

class Connect;
class Node {
protected:
    string n_name;
    string n_type;
    int n_num_port;
    vector<Connect*> v_connect;

public:
    Node(){};

    ~Node(){};

    const string &getName() const;

    void setName(const string &name);

    const string &getType() const;

    void setType(const string &type);

    int getNum_port() const;

    void setNum_port(int num_port);

    vector<Connect*> &getV_connect();

    void setV_connect(const vector<Connect*> &v_connect);

    void addConnect(Connect &connect);

    static bool compareConnect(Connect * c1,Connect * c2);

    void sortConnectList();

    void printNode(ofstream &outputfFile);
};


#endif //TP1_NODE_H
