//
// Created by PENG Hanyuan on 11/02/2018.
//

#ifndef TP1_CONNECT_H
#define TP1_CONNECT_H

#include "Node.h"
class Node;
class Connect {
private:
    Node *pN_connect_with;
    int i_ori_port;//self port
    int i_des_port;//port that connect with
public:

    Connect() {};

    Connect(Connect&);

    ~Connect(){};

    Node *getPN_connect_with();

    void setPN_connect_with(Node *pN_connect_with);

    int getI_ori_port() const;

    void setI_ori_port(int i_ori_port);

    int getI_des_port() const;

    void setI_des_port(int i_des_port);
};


#endif //TP1_CONNECT_H
