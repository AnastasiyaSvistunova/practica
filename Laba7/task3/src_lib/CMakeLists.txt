add_library (Laba7_task3_lib STATIC "")

target_include_directories (Laba7_task3_lib PUBLIC "../Includes")

target_sources (Laba7_task3_lib PRIVATE "delete.c" "find.c" "insert.c" "strcat.c" "strcpy.c")