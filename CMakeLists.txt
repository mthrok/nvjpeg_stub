cmake_minimum_required(VERSION 3.17)

project(nvjpeg_stub
  VERSION 0.1.0
  LANGUAGES
  C CUDA)

enable_language(CUDA)
find_package(CUDAToolkit REQUIRED COMPONENT cudart nvjpeg)

add_library(nvjpeg-stub SHARED stub.c)
set_target_properties(nvjpeg-stub PROPERTIES OUTPUT_NAME "nvjpeg")
target_link_libraries(nvjpeg-stub CUDA::cudart)
