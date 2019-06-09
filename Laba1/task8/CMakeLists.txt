cmake_minimum_required (VERSION 3.8)

add_library(lab1_task8_lib STATIC "../task7/task7_func.c")
target_include_directories(lab1_task8_lib PUBLIC "")
add_executable(lab1_task8 "../task7/task7_main.c")
target_link_libraries(lab1_task8 lab1_task8_lib)