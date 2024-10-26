cmake_minimum_required(VERSION 3.10)
project(mybot)

set(CMAKE_CXX_STANDARD 17)

# Include your project headers
include_directories(${PROJECT_SOURCE_DIR}/include)

# Find system-wide libraries
find_package(OpenSSL REQUIRED)
find_package(dpp REQUIRED)

# Find dotenv-cpp library (make sure it is installed system-wide)

# Add source files
file(GLOB SOURCES src/*.cpp src/*/*.cpp)
add_executable(mybot ${SOURCES})

# Link libraries (DPP, dotenv-cpp, OpenSSL)
target_link_libraries(mybot dpp)

