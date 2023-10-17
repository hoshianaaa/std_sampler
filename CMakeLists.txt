cmake_minimum_required(VERSION 3.0.2)
project(std_sampler)


find_package(catkin REQUIRED COMPONENTS
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)

add_executable(bind src/bind.cpp)
target_link_libraries(
  bind
  ${catkin_LIBRARIES}
)

add_executable(shared_ptr src/shared_ptr.cpp)
target_link_libraries(
  shared_ptr
  ${catkin_LIBRARIES}
)
