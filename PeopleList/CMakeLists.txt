cmake_minimum_required(VERSION 3.30)
project(PeopleList)

set(CMAKE_CXX_STANDARD 20)

add_executable(PeopleList main.cpp
        Person.cpp
        Person.h
        PeopleList.cpp
        PeopleList.h)
