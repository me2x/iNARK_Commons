cmake_minimum_required(VERSION 2.6)
project(inark_commons)



add_library ( inark_commons STATIC
       common.cpp
       )
install(inark_commons)