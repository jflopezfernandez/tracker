CMAKE_MINIMUM_REQUIRED (VERSION 3.7.1)
PROJECT (TRACKER)

SET (CMAKE_C_STANDARD 99)

SET (CMAKE_C_COMPILER /opt/intel/bin/icc)
SET (CMAKE_C_FLAGS "-fast -static -mkl -pthread -I /usr/include/x86_64-linux-gnu")

MESSAGE (STATUS "Compiler: ${CMAKE_C_COMPILER}")
MESSAGE (STATUS "Compilation Flags: ${CMAKE_C_FLAGS} ${CMAKE_C_FLAGS_RELEASE}")

SET (SOURCE_FILES main.c includes/main.h includes/timer.h timer.c file-io.c includes/file-io.h includes/countdown.h countdown.c includes/program-procedures.h program-procedures.c)
ADD_EXECUTABLE (tracker ${SOURCE_FILES})