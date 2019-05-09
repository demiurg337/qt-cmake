cmake_minimum_required(VERSION 3.10)

#set(CMAKE_PREFIX_PATH /usr/lib/x86_64-linux-gnu/qt5)
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(QtCommon)

project(chat-client)

set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)


set(SOURCE_FILES
    main.cpp 
    mainwindow.cpp 
    mainwindow.ui
)


add_executable(chat ${SOURCE_FILES}) 
target_link_libraries(chat Qt5::Widgets)
