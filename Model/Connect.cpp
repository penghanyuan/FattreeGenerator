//
// Created by PENG Hanyuan & YAN Wenli on 11/02/2018.
//

#include "Connect.h"

Connect::Connect(Connect &connect){
    pN_connect_with = new Node();
    pN_connect_with->setName(connect.pN_connect_with->getName());
    pN_connect_with->setNum_port(connect.pN_connect_with->getNum_port());
    pN_connect_with->setType(connect.pN_connect_with->getType());
    pN_connect_with->setV_connect(connect.pN_connect_with->getV_connect());

}
Node *Connect::getPN_connect_with() {
    return pN_connect_with;
}

void Connect::setPN_connect_with(Node *pN_connect_with) {
    Connect::pN_connect_with = pN_connect_with;
}

int Connect::getI_ori_port() const {
    return i_ori_port;
}

void Connect::setI_ori_port(int i_ori_port) {
    Connect::i_ori_port = i_ori_port;
}

int Connect::getI_des_port() const {
    return i_des_port;
}

void Connect::setI_des_port(int i_des_port) {
    Connect::i_des_port = i_des_port;
}


