cmake_minimum_required(VERSION 3.21)
project(RunnableProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(RunnableProject main.cpp Student.cpp Student.h MailingAddress.cpp MailingAddress.h)
