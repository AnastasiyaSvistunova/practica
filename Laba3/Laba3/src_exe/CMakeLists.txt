# CMakeList.txt: ������ CMake ��� Laba3; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#
cmake_minimum_required (VERSION 3.8)

# �������� �������� � ����������� ���� ����� �������.
add_executable(Laba3_FOR "main.c")
target_link_libraries(Laba3_FOR task1Laba3lib)



add_executable(Laba3_WHILE "main.c")
target_link_libraries(Laba3_WHILE task2Laba3lib)



add_executable(Laba3_DO_WHILE "main.c")
target_link_libraries(Laba3_DO_WHILE task3Laba3lib)
