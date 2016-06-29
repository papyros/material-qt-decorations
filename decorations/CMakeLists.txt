set(SOURCES main.cpp icons.qrc)

include_directories(
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${Qt5WaylandClient_PRIVATE_INCLUDE_DIRS}
)

add_library(material SHARED ${SOURCES})
add_library(Papyros::MaterialDecorations ALIAS material)
target_link_libraries(material
                      Qt5::Core
                      Qt5::Gui
                      Qt5::WaylandClient)

install(TARGETS material
        LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/wayland-decoration-client)

message("${Qt5WaylandClient_INCLUDE_DIRS} ${Qt5WaylandClient_PRIVATE_INCLUDE_DIRS}")
