project(bln_mp_common)

add_library(${PROJECT_NAME} "")

set_target_properties(${PROJECT_NAME} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib/"
)

target_sources(${PROJECT_NAME} PRIVATE
    include/bln_mp/common/json.h
    include/bln_mp/common/log.h
    include/bln_mp/common/types.h

    src/json.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_23)

target_link_libraries(${PROJECT_NAME} PUBLIC
    bln_log
    nlohmann_json
)
