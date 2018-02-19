//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#include <fstream>
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
        cout<<(*this).getName()<<"No more port"<<endl;
    }
}

bool Node::compareConnect(Connect * c1,Connect * c2)
{

    return c1->getI_ori_port()<c2->getI_ori_port();
}
void Node::sortConnectList() {
    sort(v_connect.begin(),v_connect.end(),compareConnect);
}

void Node::printNode(ofstream &outputfFile) {

    outputfFile << n_type<< "\t";
    outputfFile << n_num_port << "\t";
    outputfFile << n_name << endl;
    sortConnectList();
    for(int i=0;i<v_connect.size();i++){
        outputfFile <<"[" <<v_connect[i]->getI_ori_port()<<"]"<<"\t"
                    << v_connect[i]->getPN_connect_with()->getName()<<"\t"
                    <<"[" <<v_connect[i]->getI_des_port()<<"]"
                    << endl;
    }
}
