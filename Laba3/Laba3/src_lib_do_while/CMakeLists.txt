# CMakeList.txt: проект CMake дл€ Laba3; включите исходный код и определени€,
# укажите здесь логику дл€ конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# ƒобавьте источник в исполн€емый файл этого проекта.
add_library(task3Laba3lib STATIC "func.c")
target_include_directories(task3Laba3lib PUBLIC "../Include")