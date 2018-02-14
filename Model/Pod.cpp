//
// Created by PENG Hanyuan & YAN Wenli on 08/02/2018.
//

#include "Pod.h"

void Pod::addHost(Host &host){
    v_host.insert(pair<string,Host>(host.getName(),host));
}

void Pod::addEageSwitch(EdgeSwitch &edgeSwitch){
    v_edgeSwitch.insert(pair<string,EdgeSwitch>(edgeSwitch.getName(),edgeSwitch));
}

void Pod::addAggrSwitch(AggrSwitch &aggrSwitch){
    v_aggrSwitch.insert(pair<string,AggrSwitch>(aggrSwitch.getName(),aggrSwitch));
}


Pod::Pod(int nPod, int numMaxHost, int numMaxEageS, int numMaxAggrS) : nPod(nPod), numMaxHost(numMaxHost),
                                                                       numMaxEdgeS(numMaxEageS),
                                                                       numMaxAggrS(numMaxAggrS) {

}

int Pod::getNPod() const {
    return nPod;
}

void Pod::setNPod(int nPod) {
    Pod::nPod = nPod;
}

int Pod::getNumMaxHost() const {
    return numMaxHost;
}

void Pod::setNumMaxHost(int numMaxHost) {
    Pod::numMaxHost = numMaxHost;
}

int Pod::getNumMaxEageS() const {
    return numMaxEdgeS;
}

void Pod::setNumMaxEageS(int numMaxEageS) {
    Pod::numMaxEdgeS = numMaxEageS;
}

int Pod::getNumMaxAggrS() const {
    return numMaxAggrS;
}

void Pod::setNumMaxAggrS(int numMaxAggrS) {
    Pod::numMaxAggrS = numMaxAggrS;
}

multimap<string, Host> &Pod::getV_host() {
    return v_host;
}

void Pod::setV_host(const multimap<string, Host> &v_host) {
    Pod::v_host = v_host;
}

multimap<string, EdgeSwitch> &Pod::getV_edgeSwitch() {
    return v_edgeSwitch;
}

void Pod::setV_eageSwitch(const multimap<string, EdgeSwitch> &v_eageSwitch) {
    Pod::v_edgeSwitch = v_eageSwitch;
}

multimap<string, AggrSwitch> &Pod::getV_aggrSwitch() {
    return v_aggrSwitch;
}

void Pod::setV_aggrSwitch(const multimap<string, AggrSwitch> &v_aggrSwitch) {
    Pod::v_aggrSwitch = v_aggrSwitch;
}

