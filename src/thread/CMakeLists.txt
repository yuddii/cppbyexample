project(thread)

add_library(${PROJECT_NAME} SHARED event_thread.cpp task.cpp)

# target_include_directories(${PROJECT_NAME} PUBLIC ${Account_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Animal_Dir})
# target_include_directories(${PROJECT_NAME} PUBLIC ${Thread_Dir})

# target_link_libraries(${PROJECT_NAME} PUBLIC account)
# target_link_libraries(${PROJECT_NAME} PUBLIC animal)
# target_link_libraries(${PROJECT_NAME} PUBLIC thread)