cmake_minimum_required(VERSION 2.6)

project(tradecoin)

set(SRC_DIR src)
set(OUT_DIR bin)

set(SRC
    ${SRC_DIR}/main.cpp
)

add_executable(${OUT_DIR}/tradecoin ${SRC}) 
