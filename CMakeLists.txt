project(metar_updater)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)
#aux_source_directory(./mdsplib/src SRC_LIST)
include_directories(/usr/include/libxml2)
add_executable(${PROJECT_NAME} ${SRC_LIST})

# Set link to external libraries
target_link_libraries(metar_updater curl)
target_link_libraries(metar_updater xml2)
target_link_libraries(metar_updater mysqlcppconn)