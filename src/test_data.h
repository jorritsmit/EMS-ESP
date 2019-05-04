
#ifdef TESTS

static const char * TEST_DATA[] = {

    "08 00 34 00 3E 02 1D 80 00 31 00 00 01 00 01 0B AE 02",                                        // test 1 - EMS
    "10 00 FF 00 01 A5 80 00 01 30 28 00 30 28 01 54 03 03 01 01 54 02 A8 00 00 11 01 03 FF FF 00", // test 2 - RC310 ems+
    "10 00 FF 19 01 A5 06 04 00 00 00 00 FF 64 37 00 3C 01 FF 01",                                  // test 3 - RC310 ems+
    "30 00 FF 00 02 62 00 A1 01 3F 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00",    // test 4 - SM100
    "10 00 FF 00 01 A5 00 D7 21 00 00 00 00 30 01 84 01 01 03 01 84 01 F1 00 00 11 01 00 08 63 00", // test 5 - Moduline 1010
    "18 00 FF 00 01 A5 00 DD 21 23 00 00 23 00 00 00 00 00 00 00 00 00 00 00 00 00 01 00",          // test 6 - RC300
    "90 00 FF 00 00 6F 01 01 00 46 00 B9",                                                          // test 7 - FR10
    "30 00 FF 00 02 62 01 FB 01 9E 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 2B", // test 8 - SM100
    "30 00 FF 00 02 64 00 00 00 04 00 00 FF 00 00 1E 0C 20 64 00 00 00 00 E9",                      // test 9 - SM100
    "30 09 FF 00 00 01",                                                                            // test 10 - EMS+
    "30 0B 97 00",                                                                                  // test 11 - SM100
    "30 00 FF 00 02 62 01 CA",                                                                      // test 12 - SM100
    "30 00 FF 00 02 8E 00 00 00 00 00 00 05 19 00 00 75 D3",                                        // test 13 - SM100
    "30 00 FF 00 02 63 80 00 80 00 00 00 80 00 80 00 80 00 00",                                     // test 14 - SM100
    "30 00 FF 00 02 64 00 00 00 04 00 00 FF 00 00 1E 0B 09 64 00 00 00 00",                         // test 15 - SM100
    "30 00 FF 00 02 62 01 CA 01 93 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00",    // test 16 - SM100
    "30 00 FF 00 02 6A 03 03 03 00 03 03 03 03 03 00 03 03",                                        // test 17 - SM100
    "30 00 FF 00 02 6A 03 03 03 00 03 03 03 03 03 00 04 03",                                        // test 18 - SM100
    "30 00 FF 00 02 64 00 00 00 04 00 00 FF 00 00 1E 09 08 64 00 00 00 00",                         // test 19 - SM100
    "10 00 FF 07 01 A5 32",                                                                         // test 20 - RC EMS+
    "38 10 FF 00 03 2B 00 D1 08 2A 01",                                                             // test 21 - heatpump
    "38 10 FF 00 03 7B 08 24 00 4B",                                                                // test 22 - heatpump
    "08 00 FF 31 03 94 00 00 00 00 00 00 00",                                                       // test 23 - heatpump
    "08 00 FF 00 03 95 00 6D C5 0E 00 05 BA 7C 00 68 0A 92 00 00 00 00 00 00 00 00 00 00 00 CD",    // test 24 - heatpump
    "08 00 FF 48 03 95 00 00 01 47 00 00 00 00 00 00 00 00",                                        // test 25 - heatpump
    "08 00 FF 00 03 A2 10 01 02 02 00",                                                             // test 26 - heatpump
    "08 00 FF 00 03 A3 00 0B 00 00 00 00 00 00 00 00 00 09 00 00 00 00 00 00 00 00 08 00 00 00 0A", // test 27 - heatpump
    "30 00 FF 0A 02 6A 04",                                                                         // test 28 - SM100 pump on
    "30 00 FF 0A 02 6A 03",                                                                         // test 29 - SM100 pump off
    "48 90 02 00 01",                                                                               // test 30 - version test
    "10 48 02 00 9E",                                                                               // test 31 - version test
    "30 00 FF 00 02 8E 00 00 0C F3 00 00 06 02 00 00 76 33",                                        // test 32 - SM100 energy
    "30 00 FF 00 02 8E 00 00 07 9E 00 00 06 C5 00 00 76 35",                                        // test 33 - SM100 energy
    "30 00 FF 00 02 8E 00 00 00 00 00 00 06 C5 00 00 76 35",                                        // test 34 - SM100 energy
    "10 48 F9 00 FF 01 6C 08 4F 00 00 00 02 00 00 00 02 00 03 00 03 00 03 00 02",                   // test 35 - F9
    "48 90 F9 00 11 FF 01 6D 08",                                                                   // test 36 - F9
    "10 48 F9 00 FF 01 6D 08",                                                                      // test 37 - F9
    "10 00 F7 00 FF 01 B9 35 19",                                                                   // test 38 - F7
    "30 00 FF 00 02 62 00 E7 01 AE 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00 80 00",    // test 39 - SM100
    "30 00 FF 00 02 62 00 E4",                                                                      // test 40 - SM100
    "10 48 F7 00 FF 01 A5 DF FF F7 7F 1F"                                                           // test 41 - gateway

};

#endif
