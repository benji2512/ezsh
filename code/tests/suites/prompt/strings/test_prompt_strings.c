#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <errno.h>

#include "../../../cu/cu.h"

TEST(test19) {
    char line[4] = "ezsh";
    strrev(line);
    assertTrue(strcmp("hsze", line) == 0);
}

TEST(test20) {
    char line[10] = "thisstring";
    strrev(line);
    assertTrue(strcmp("gnirtssiht", line) == 0);
}

