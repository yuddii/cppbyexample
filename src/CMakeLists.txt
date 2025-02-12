project(cppbyexample)

add_subdirectory(account)
add_subdirectory(animal)
add_subdirectory(base)
add_subdirectory(thread)


add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} 
PUBLIC 
${Account_Dir}
${Animal_Dir}
${Base_Dir}
${Thread_Dir}
)

target_link_libraries(${PROJECT_NAME}
PUBLIC
account
animal
base
thread
)  