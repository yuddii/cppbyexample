project(animal)

add_library(${PROJECT_NAME} SHARED cat.cpp dog.cpp)

# target_include_directories(${PROJECT_NAME} PUBLIC ${Account_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Base_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Thread_Dir})

# target_link_libraries(${PROJECT_NAME} PUBLIC account)
# target_link_libraries(${PROJECT_NAME} PUBLIC base)
# target_link_libraries(${PROJECT_NAME} PUBLIC thread)