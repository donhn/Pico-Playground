add_executable(blinky_main
    blinky_main.cpp
)

target_link_libraries(blinky_main
    pico_stdlib
)

pico_add_extra_outputs(blinky_main)