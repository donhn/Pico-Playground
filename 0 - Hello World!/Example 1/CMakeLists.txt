add_executable(hello_world_main
    hello_world_main.cpp
)

target_link_libraries(hello_world_main
    pico_stdlib
)

pico_add_extra_outputs(hello_world_main)