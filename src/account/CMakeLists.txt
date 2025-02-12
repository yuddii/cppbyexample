project(account)

add_library(${PROJECT_NAME} SHARED account.cpp object.cpp)

# target_include_directories(${PROJECT_NAME} PUBLIC ${Animal_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Base_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Thread_Dir})

# target_link_libraries(${PROJECT_NAME} PUBLIC animal)
# target_link_libraries(${PROJECT_NAME} PUBLIC base)
# target_link_libraries(${PROJECT_NAME} PUBLIC thread)