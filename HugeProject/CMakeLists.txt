cmake_minimum_required(VERSION 3.21)
project(HugeProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(HugeProject main.cpp Student.h Student.cpp Semester.h Semester.cpp PhoneNumber.h PhoneNumber.cpp
        MailingAddress.h MailingAddress.cpp Email.h Email.cpp
        Date.h Date.cpp Course.cpp Course.h CourseList.cpp CourseList.h StudentList.cpp StudentList.h Advisor.cpp Advisor.h OfficeHours.cpp OfficeHours.h AdvisorList.cpp AdvisorList.h)
