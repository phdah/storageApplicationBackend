cmake_minimum_required(VERSION 3.0)

project(postgresBackend VERSION 0.0.1)

set(SOURCES main.cpp database_connect.h)

add_executable(main ${SOURCES})
target_link_libraries(main PRIVATE pq)
