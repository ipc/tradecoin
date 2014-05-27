cmake_minimum_required(VERSION 2.6)
project(tradecoin)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SRC_DIR src)

set(COMMON_SRC_DIR src/common)

set(PLATFORM_SRC_DIR ${COMMON_SRC_DIR}/platform)

set(PLATFORM_SRC
    ${PLATFORM_SRC_DIR}/APlatform.cpp
    ${PLATFORM_SRC_DIR}/ARestPlatform.cpp
    ${PLATFORM_SRC_DIR}/test/Test.cpp
)

set(GATHERER_SRC_DIR src/gatherer)
set(GATHERER_OUT_DIR bin)
set(GATHERER_NAME gatherer)

set(GATHERER_INCLUDE_PATHS
    ${SRC_DIR}
    ${GATHERER_SRC_DIR}
)

include_directories(${GATHERER_INCLUDE_PATHS})

set(GATHERER_SRC
    ${PLATFORM_SRC}
    ${GATHERER_SRC_DIR}/main.cpp
    ${GATHERER_SRC_DIR}/Gatherer.cpp
)


add_executable(${GATHERER_OUT_DIR}/${GATHERER_NAME} ${GATHERER_SRC}) 
