project(base)

add_library(${PROJECT_NAME} SHARED const.cpp control.cpp function.cpp labatro.cpp print.cpp srand.cpp)

# target_include_directories(${PROJECT_NAME} PUBLIC ${Account_Dir})
target_include_directories(${PROJECT_NAME} PUBLIC ${Animal_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Thread_Dir})

# target_link_libraries(${PROJECT_NAME} PUBLIC account)
target_link_libraries(${PROJECT_NAME} PUBLIC animal)
# target_link_libraries(${PROJECT_NAME} PUBLIC thread)