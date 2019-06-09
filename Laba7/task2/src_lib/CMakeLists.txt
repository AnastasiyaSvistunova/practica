add_library (Laba7_task2_lib STATIC "")

target_include_directories (Laba7_task2_lib PUBLIC "../Includes")

target_sources (Laba7_task2_lib PRIVATE "readArray.c" "sort.c" "sortHeapArray.c" "writeArray.c")