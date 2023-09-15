cmake_minimum_required(VERSION 3.5)

project(ProgrammDesign VERSION 0.1 LANGUAGES CXX)

file(GLOB_RECURSE QRC_SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.qrc)

set(CMAKE_PREFIX_PATH D:/Qt/6.5.0/mingw_64)
add_compile_options(-l sqlite3)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(QRC_SOURCE_FILES "Resourse Files/image.qrc")

find_package(QT NAMES Qt6 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt6 REQUIRED COMPONENTS Core5Compat)
set(PROJECT_SOURCES
        "Source Files/main.cpp"
        "Source Files/mainwindow.cpp"
        "Header Files/mainwindow.h"
        "Header Files/mainwindow.ui"
        "SQLite/sqlite3.c"
        "SQLite/sqlite3.h"
        "Header Files/recover_password.h"
        "Source Files/recover_password.cpp"
        "Header Files/recover_password.ui"
        "Source Files/register.cpp"
        "Header Files/register.h"
        "Header Files/register.ui"
        "Source Files/system.cpp"
        "program/system.h"
        "Source Files/admin_login.cpp"
        "Header Files/admin_login.h"
        "Header Files/admin_login.ui"
        SQLite/SQLconnect.cpp
        SQLite/SQLconnect.h
        "Source Files/register_success.cpp"
        "Header Files/register_success.h"
        "Header Files/register_success.ui"
        "SQLite/MD5.cpp" "SQLite/MD5.h"
        "Source Files/recover_password_success.cpp"
        "Header Files/recover_password_success.h"
        "Header Files/recover_password_success.ui"
        "Source Files/execute_failed.cpp"
        "Header Files/execute_failed.h"
        "Header Files/execute_failed.ui"
        "Source Files/visitor_menu.cpp"
        "Header Files/visitor_menu.h"
        "Header Files/visitor_menu.ui"
        "Source Files/admin_menu.cpp"
        "Header Files/admin_menu.h"
        "Header Files/admin_menu.ui"
        program/User.cpp
        program/User.h
        program/Visitor.cpp
        program/Visitor.h
        program/Admin.cpp
        program/Admin.h
        "Source Files/schedule.cpp"
        "Header Files/schedule.h"
        "Header Files/schedule.ui"
        "Source Files/choose_time.cpp" "Header Files/choose_time.h" "Header Files/choose_time.ui" program/Time.cpp program/Time.h "Source Files/appoint_success.cpp" "Header Files/appoint_success.h" "Header Files/appoint_success.ui" "Source Files/appoint_fail_max.cpp" "Header Files/appoint_fail_max.h" "Header Files/appoint_fail_max.ui" "Source Files/appoint_fail_occupied.cpp" "Header Files/appoint_fail_occupied.h" "Header Files/appoint_fail_occupied.ui" "Source Files/appoint_block.cpp" "Header Files/appoint_block.h" "Header Files/appoint_block.ui" "Source Files/cancel_success.cpp" "Header Files/cancel_success.h" "Header Files/cancel_success.ui" "Source Files/cancel_fail.cpp" "Header Files/cancel_fail.h" "Header Files/cancel_fail.ui" "Source Files/visitor_manager.cpp" "Header Files/visitor_manager.h" "Header Files/visitor_manager.ui" "Source Files/add_menu.cpp" "Header Files/add_menu.h" "Header Files/add_menu.ui" "Source Files/add_new.cpp" "Header Files/add_new.h" "Header Files/add_new.ui" "Source Files/add_old.cpp" "Header Files/add_old.h" "Header Files/add_old.ui" "Source Files/add_fail_max.cpp" "Header Files/add_fail_max.h" "Header Files/add_fail_max.ui" "Source Files/add_success.cpp" "Header Files/add_success.h" "Header Files/add_success.ui" "Source Files/change_info.cpp" "Header Files/change_info.h" "Header Files/change_info.ui" "Source Files/change_success.cpp" "Header Files/change_success.h" "Header Files/change_success.ui" "Source Files/admin_time.cpp" "Header Files/admin_time.h" "Header Files/admin_time.ui" "Source Files/admin_choose_time.cpp" "Header Files/admin_choose_time.h" "Header Files/admin_choose_time.ui" "Source Files/record.cpp" "Header Files/record.h" "Header Files/record.ui")

SOURCE_GROUP("Resource Files" FILES ${QRC_SOURCE_FILES})

if (${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(ProgrammDesign
            MANUAL_FINALIZATION
            "Resourse Files/image.qrc"
            "Source Files/main.cpp"
            "SQLite/sqlite3.c"
            "SQLite/sqlite3.h"
            "Source Files/mainwindow.cpp"
            "Header Files/mainwindow.h"
            "Header Files/mainwindow.ui"
            "Header Files/recover_password.h" "Source Files/recover_password.cpp" "Header Files/recover_password.ui"
            "Source Files/register.cpp" "Header Files/register.h" "Header Files/register.ui"
            ${PROJECT_SOURCES}
            "Source Files/system.cpp"
            "program/system.h"
            "Source Files/admin_login.cpp"
            "Header Files/admin_login.h"
            "Header Files/admin_login.ui"
            SQLite/SQLconnect.cpp SQLite/SQLconnect.h "Source Files/register_success.cpp" "Header Files/register_success.h" "Header Files/register_success.ui" "SQLite/MD5.cpp" "SQLite/MD5.h" "Source Files/recover_password_success.cpp" "Header Files/recover_password_success.h" "Header Files/recover_password_success.ui" "Source Files/execute_failed.cpp" "Header Files/execute_failed.h" "Header Files/execute_failed.ui" "Source Files/visitor_menu.cpp" "Header Files/visitor_menu.h" "Header Files/visitor_menu.ui" "Source Files/admin_menu.cpp" "Header Files/admin_menu.h" "Header Files/admin_menu.ui"  program/User.cpp program/User.h program/Visitor.cpp program/Visitor.h program/Admin.cpp program/Admin.h "Source Files/schedule.cpp" "Header Files/schedule.h" "Header Files/schedule.ui"  "Source Files/choose_time.cpp" "Header Files/choose_time.h" "Header Files/choose_time.ui" program/Time.cpp program/Time.h "Source Files/appoint_success.cpp" "Header Files/appoint_success.h" "Header Files/appoint_success.ui" "Source Files/appoint_fail_max.cpp" "Header Files/appoint_fail_max.h" "Header Files/appoint_fail_max.ui" "Source Files/appoint_fail_occupied.cpp" "Header Files/appoint_fail_occupied.h" "Header Files/appoint_fail_occupied.ui" "Source Files/appoint_block.cpp" "Header Files/appoint_block.h" "Header Files/appoint_block.ui" "Source Files/cancel_success.cpp" "Header Files/cancel_success.h" "Header Files/cancel_success.ui" "Source Files/cancel_fail.cpp" "Header Files/cancel_fail.h" "Header Files/cancel_fail.ui" "Source Files/visitor_manager.cpp" "Header Files/visitor_manager.h" "Header Files/visitor_manager.ui" "Source Files/add_menu.cpp" "Header Files/add_menu.h" "Header Files/add_menu.ui" "Source Files/add_new.cpp" "Header Files/add_new.h" "Header Files/add_new.ui" "Source Files/add_old.cpp" "Header Files/add_old.h" "Header Files/add_old.ui" "Source Files/add_fail_max.cpp" "Header Files/add_fail_max.h" "Header Files/add_fail_max.ui" "Source Files/add_success.cpp" "Header Files/add_success.h" "Header Files/add_success.ui" "Source Files/change_info.cpp" "Header Files/change_info.h" "Header Files/change_info.ui" "Source Files/admin_time.cpp" "Header Files/admin_time.h" "Header Files/admin_time.ui" "Source Files/admin_choose_time.cpp" "Header Files/admin_choose_time.h" "Header Files/admin_choose_time.ui" "Source Files/record.cpp" "Header Files/record.h" "Header Files/record.ui")
endif ()


target_link_libraries(ProgrammDesign PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(ProgrammDesign PRIVATE Qt6::Core5Compat)
target_link_libraries(ProgrammDesign LINK_PUBLIC sqlite3.dll)


#set_target_properties(ProgrammDesign PROPERTIES
#        MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
#        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
#        MACOSX_BUNDLE TRUE
#        WIN32_EXECUTABLE TRUE
#        )

#install(TARGETS ProgrammDesign
#        BUNDLE DESTINATION .
#        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#        )

if (QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(ProgrammDesign)
endif ()


