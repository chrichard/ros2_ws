#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cpp_pubsub::cpp_pubsub__rosidl_typesupport_cpp" for configuration "RelWithDebInfo"
set_property(TARGET cpp_pubsub::cpp_pubsub__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(cpp_pubsub::cpp_pubsub__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libcpp_pubsub__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libcpp_pubsub__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS cpp_pubsub::cpp_pubsub__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_cpp_pubsub::cpp_pubsub__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libcpp_pubsub__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)