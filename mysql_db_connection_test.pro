QT += core
QT -= gui
QT += sql
QT += sql widgets

CONFIG += c++11
CONFIG -= console
CONFIG -= app_bundle

TEMPLATE = app

TARGET = mysql_db_connection_test

SOURCES += main.cpp

QTPLUGIN += sqldrivers

QMAKE_CXXFLAGS += -std=c++11
