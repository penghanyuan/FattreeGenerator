cmake_minimum_required(VERSION 3.9)
project(Tp1)

set(CMAKE_CXX_STANDARD 11)

add_executable(Tp1 main.cpp Pod.cpp Pod.h Host.cpp Host.h Node.cpp Node.h EdgeSwitch.cpp EdgeSwitch.h AggrSwitch.cpp AggrSwitch.h CoreSwitch.cpp CoreSwitch.h Connect.cpp Connect.h)