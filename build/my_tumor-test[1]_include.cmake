if(EXISTS "/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/my_tumor-test[1]_tests.cmake")
  include("/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/my_tumor-test[1]_tests.cmake")
else()
  add_test(my_tumor-test_NOT_BUILT my_tumor-test_NOT_BUILT)
endif()
