//
// Created by PENG Hanyuan on 08/02/2018.
//

#ifndef TP1_POD_H
#define TP1_POD_H

#include "EdgeSwitch.h"
#include "AggrSwitch.h"
#include "Host.h"
#include <vector>
#include <map>
using namespace std;
class Pod {
private:
    int nPod;
    int numMaxHost;
    int numMaxEdgeS;
    int numMaxAggrS;
    multimap<string,Host> v_host;
    multimap<string,EdgeSwitch> v_edgeSwitch;
    multimap<string,AggrSwitch> v_aggrSwitch;

public:
    Pod(){};

    Pod(int nPod, int numMaxHost, int numMaxEageS, int numMaxAggrS);

    ~Pod(){};

    void addHost(Host &);

    void addEageSwitch(EdgeSwitch &);

    void addAggrSwitch(AggrSwitch &);

    //getter and setter
    int getNPod() const;

    void setNPod(int nPod);

    int getNumMaxHost() const;

    void setNumMaxHost(int numMaxHost);

    int getNumMaxEageS() const;

    void setNumMaxEageS(int numMaxEageS);

    int getNumMaxAggrS() const;

    void setNumMaxAggrS(int numMaxAggrS);

    multimap<string, Host> &getV_host();

    void setV_host(const multimap<string, Host> &v_host);

    multimap<string, EdgeSwitch> &getV_edgeSwitch();

    void setV_eageSwitch(const multimap<string, EdgeSwitch> &v_eageSwitch);

    multimap<string, AggrSwitch> &getV_aggrSwitch();

    void setV_aggrSwitch(const multimap<string, AggrSwitch> &v_aggrSwitch);
};


#endif //TP1_POD_H
