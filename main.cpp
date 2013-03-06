//==============================
// Project Build Manager(PBM)
//==============================
#include <stdio>
#include <stdint>
#include "modes.h"
////{pack:supervisor,preprocesser,deptree}
bool quiet=false;
bool isRunning=true;
string arch="auto"
string runningdir="";
void raise(string reason, bool debuggable)
{
    if (!quiet)
    {
        printf("error| Aborted! Reason:\n");
        printf("abcm | %s\n",reason);
        if(debuggable) {printf("Try running with -G for debug info!");}
        else { printf("abcm | Launch with --help for help!\n"); }
        
    }
    //kill
    isRunning=false;
}
int main( int argc, char* argv[] ) //TODO: allow arguments
{
    string input_file=""	;
    if(argc=<1)
    {
         raise("No input file. What was I going to do, knit?", false);
    }
    //
    input_file=argv[1];
    if(!isRunning) {return -1;}
    //do_preprocessing();
    //build_dependancy_table();
    //do_apply_args();
    //sort_deps();
    //do_build();
    //do_post_build();
}