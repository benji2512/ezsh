#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../cu/cu.h"
#include "../../../src/utils/explorer.h"

static const char PATH[] = "/home/nohclu/2019-ca326-mcdermj7-ezsh/code/tests/suites/explorer/staticTestDir";

//Testing expls from explorer.h
//Test ensures that expls is able to count the correct number of files in a directory
TEST(test1) {

    FILE *fp;
    char **dirFiles;
    chdir(PATH);

    dirFiles = mallocStrArr(3,20);
    int lscount = expls(fp, dirFiles);
    assertEquals(3, lscount);
    
}

//Testing isDir from explorer.h (1/2)
//Test will use expls to retrieve samples from PATH and check the directory
TEST(test2) {
    
    FILE *fp;
    char **files;
    files = mallocStrArr(3,20);
    chdir(PATH);

    expls(fp, files);
    /*Index of files is: [0] = "..", [1] = "file.txt", [2] = "testDir"*/
    //strTok removing Newlines
    assertTrue(isDir(files[2]));
}

//Testing isDir from explorer.h (2/2)
//Test will use expls to retrieve samples from PATH and check the file
TEST(test3) {
    
    FILE *fp;
    char **files;
    files = mallocStrArr(3,20);
    chdir(PATH);

    expls(fp, files);
    /*Index of files is: [0] = "..", [1] = "file.txt", [2] = "testDir"*/
    //strTok removing Newlines
    assertFalse(isDir(files[1]));
}

//Testing isFile from explorer.h (1/2)
//Test will use expls to retrieve samples from PATH and check the file
TEST(test4) {
    
    FILE *fp;
    char **files;
    files = mallocStrArr(3,20);
    chdir(PATH);

    expls(fp, files);
    /*Index of files is: [0] = "..", [1] = "file.txt", [2] = "testDir"*/
    //strTok removing Newlines
    assertTrue(isFile(files[1]));
}

//Testing isFile from explorer.h (1/2)
//Test will use expls to retrieve samples from PATH and check the file
TEST(test5) {
    
    FILE *fp;
    char **files;
    files = mallocStrArr(3,20);
    chdir(PATH);

    expls(fp, files);
    /*Index of files is: [0] = "..", [1] = "file.txt", [2] = "testDir"*/
    //strTok removing Newlines
    assertFalse(isFile(files[2]));
}