cmake_minimum_required(VERSION 3.2)

project(MyCv)
file(GLOB SOURCES "${MyCv_SOURCE_DIR}/*.cpp")
set(OpenCV_DIR ~/Downloads/package_extract/opencv-4.9.0/build)
find_package(OpenCV REQUIRED)
add_executable(regex ${SOURCES})
target_link_libraries(regex ${OpenCV_LIBS})
