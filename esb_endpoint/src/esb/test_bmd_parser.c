<<<<<<< HEAD
#include "../test/munit.h"
=======
#include "/home/sohan/Desktop/new_team3/jhelum/esb_endpoint/src/test/munit.h"
>>>>>>> 991e76b09ec7a2ef213925c71fb6aecfed392a4e
#include "esb.h"
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD
#include "../bmdParse/bmd_parser.h"
=======
#include "/home/sohan/Desktop/new_team3/jhelum/esb_endpoint/src/bmdParse/bmd_parser.h"
>>>>>>> 991e76b09ec7a2ef213925c71fb6aecfed392a4e
//#include "xmljson.c" //Uncomment this when using munit testing

/*gcc test_esb.c munit.c bmd_parser.c database.c esb.c  `mysql_config --cflags --libs` `xml2-config --cflags --libs` -o test_esb
 */
static void *
test_process_xml_setup(const MunitParameter params[], void *user_data)
{
    char cwd[100];
    getcwd(cwd, sizeof(cwd));
    char path[100];
    sprintf(path, "%s/Test_files/%s", cwd,"HelloABC.xml");
    return strdup(path);
}

static void
test_parse_bmd_xml_tear_down(void *fixture)
{
 
}

static MunitResult
test_parse_bmd_xml(const MunitParameter params[], void *fixture)
{
    return MUNIT_OK;
}


