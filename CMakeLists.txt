cmake_minimum_required(VERSION 3.9)
project(Tp1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Tp1 main.cpp Model/Pod.cpp Model/Pod.h Model/Host.cpp Model/Host.h Model/Node.cpp Model/Node.h Model/EdgeSwitch.cpp Model/EdgeSwitch.h Model/AggrSwitch.cpp Model/AggrSwitch.h Model/CoreSwitch.cpp Model/CoreSwitch.h Model/Connect.cpp Model/Connect.h)