cmake_minimum_required(VERSION 3.16)
project(Employee_management_system)

set(CMAKE_CXX_STANDARD 14)

add_executable(Employee_management_system
        main.cpp
        workerManager.h
        workerManager.cpp worker.h employee.h employee.cpp manager.h manager.cpp boss.cpp boss.h)