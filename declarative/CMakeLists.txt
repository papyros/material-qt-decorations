file(GLOB_RECURSE SOURCES *.cpp *.h)
file(GLOB_RECURSE QML_FILES *.qml)

include_directories(
    ${Qt5Gui_PRIVATE_INCLUDE_DIRS}
    ${Qt5WaylandClient_PRIVATE_INCLUDE_DIRS}
)

link_directories(${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/wayland-decoration-client)
add_library(papyrosmaterial SHARED ${SOURCES})
target_link_libraries(papyrosmaterial
                      Qt5::Core
                      Qt5::Qml
                      Qt5::Quick
                      Qt5::Gui
                      Qt5::WaylandClient
                      Papyros::MaterialDecorations)

install(FILES qmldir ${QML_FILES}
        DESTINATION ${QML_INSTALL_DIR}/io/papyros/decorations)
install(TARGETS papyrosmaterial
        DESTINATION ${QML_INSTALL_DIR}/io/papyros/decorations)
