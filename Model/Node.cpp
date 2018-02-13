//
// Created by PENG Hanyuan on 08/02/2018.
//

#include "Node.h"

const string &Node::getName() const {
    return n_name;
}

void Node::setName(const string &name) {
    Node::n_name = name;
}

const string &Node::getType() const {
    return n_type;
}

void Node::setType(const string &type) {
    Node::n_type = type;
}

int Node::getNum_port() const {
    return n_num_port;
}

void Node::setNum_port(int num_port) {
    Node::n_num_port = num_port;
}

vector<Connect*> &Node::getV_connect(){
    return v_connect;
}

void Node::setV_connect(const vector<Connect*> &v_connect) {
    Node::v_connect = v_connect;
}


void Node::addConnect(Connect &connect) {
    if(v_connect.size()<n_num_port) {
        v_connect.push_back(&connect);
    }else{
        cout<<"No more port"<<endl;
    }
}