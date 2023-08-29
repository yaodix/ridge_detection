
cmake_minimum_required(VERSION 3.19 )

project("demo")
# set(CMAKE_BUILD_TYPE Release)  
# set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -std=c++14 -Ofast")
set(CMAKE_BUILD_TYPE Debug)  # 没有这句话vscode无法单步调试
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -std=c++14 -O0")
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

# OpenCV
message(STATUS "ZHITO_THIRD_PARTY_DIR:${ZHITO_THIRD_PARTY_DIR}")
set(OpenCV_DIR "${ZHITO_THIRD_PARTY_DIR}/OpenCV320/share/OpenCV")
find_package(OpenCV 3.2 REQUIRED) # 版本设置
include_directories(${OpenCV_INCLUDE_DIRS})
message(STATUS "OpenCV version: ${OpenCV_VERSION}")
message(STATUS "OpenCV_LIBS:${OpenCV_LIBS}")
message(STATUS "OpenCV_INCLUDE_DIRS:${OpenCV_INCLUDE_DIRS}")

add_executable(demo main.cc)

target_link_libraries(demo ${OpenCV_LIBS} pthread)