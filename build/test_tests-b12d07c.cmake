<<<<<<< HEAD
add_test( [==[Testing if Test Cases work]==] /workspaces/FinalProject/cs225FinalProject/build/test [==[Testing if Test Cases work]==]  )
set_tests_properties( [==[Testing if Test Cases work]==] PROPERTIES WORKING_DIRECTORY /workspaces/FinalProject/cs225FinalProject/build)
add_test( [==[Test Reads CSV]==] /workspaces/FinalProject/cs225FinalProject/build/test [==[Test Reads CSV]==]  )
set_tests_properties( [==[Test Reads CSV]==] PROPERTIES WORKING_DIRECTORY /workspaces/FinalProject/cs225FinalProject/build)
=======
add_test( [==[Testing if Test Cases work]==] /workspaces/finalProject/cs225FinalProject/build/test [==[Testing if Test Cases work]==]  )
set_tests_properties( [==[Testing if Test Cases work]==] PROPERTIES WORKING_DIRECTORY /workspaces/finalProject/cs225FinalProject/build)
add_test( [==[Test Reads CSV]==] /workspaces/finalProject/cs225FinalProject/build/test [==[Test Reads CSV]==]  )
set_tests_properties( [==[Test Reads CSV]==] PROPERTIES WORKING_DIRECTORY /workspaces/finalProject/cs225FinalProject/build)
>>>>>>> refs/remotes/origin/main
set( test_TESTS [==[Testing if Test Cases work]==] [==[Test Reads CSV]==])
