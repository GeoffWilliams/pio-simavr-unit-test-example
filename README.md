# PlatformIO SimAVR Unit Test example for Arduino

Simple project to show how to build native Arduino ATmega328 codes for phsical device and also be able to unit test the exact same code in SimAVR.


## Run tests on SimAVR

In a PIO terminal (vscode)

```shell
pio test --environment simavr --without-uploading  -vvv
```

The result:

```
Testing...
Loaded 3072 bytes at 0
Loaded 194 bytes at 800100
whatever you like..
test/test_suite.cpp:24:test_function_should_doBlahAndBlah:PASS.
test/test_suite.cpp:25:test_function_should_doAlsoDoBlah:PASS.
.
-----------------------.
2 Tests 0 Failures 0 Ignored .
OK.
signal caught, simavr terminating

----------------------------- simavr:* [PASSED] Took 60.56 seconds -----------------------------

=========================================== SUMMARY ===========================================
Environment    Test    Status    Duration
-------------  ------  --------  ------------
physical       *       SKIPPED
simavr         *       PASSED    00:01:00.561
========================== 2 test cases: 2 succeeded in 00:01:00.561 ==========================
```

That is all, have fun!