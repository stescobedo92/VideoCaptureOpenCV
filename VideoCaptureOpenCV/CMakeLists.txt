set(OpenCV_DIR "${VCPKG_INSTALLED_DIR}/x64-windows/share/opencv2")

add_executable (VideoCaptureOpenCV "VideoCaptureOpenCV.cpp" "VideoCaptureOpenCV.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET VideoCaptureOpenCV PROPERTY CXX_STANDARD 20)
endif()

find_package(OpenCV REQUIRED)

target_link_libraries(VideoCaptureOpenCV PRIVATE ${OpenCV_LIBS})
