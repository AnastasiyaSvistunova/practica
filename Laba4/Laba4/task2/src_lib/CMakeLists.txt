add_library (Laba4_task2_lib STATIC "")

target_include_directories (Laba4_task2_lib PUBLIC "../Includes")

target_sources (Laba4_task2_lib PRIVATE "writeArray.c" "readArray.c" "sort.c" "sortStackArray.c")