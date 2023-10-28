project(Simplifried)
cmake_minimum_required(VERSION 3.26)

add_executable (simplifried "src/simplifried.cpp")

find_package(VulkanHeaders REQUIRED CONFIG)
target_link_libraries(simplifried PRIVATE Vulkan::Headers)
message(STATUS "Vulkan Headers Version: ${VulkanHeaders_VERSION}")