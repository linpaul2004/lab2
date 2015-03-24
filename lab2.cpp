#include "bmi.h"
#include <cstdio>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    ofstream outfile("file.out");
    ifstream infile("file.in");
    if((!outfile) || (!infile)){
        puts("Error Creating File");
        exit(1);
    }
    bmi ind;
    int a,b;
    double c;
    char cline[60];
    while(infile>>a>>b){
		if(a==0) break;
        ind.set(a,b);
        c=ind.get();
        sprintf(cline,"%.2f %s\n",c,ind.category().c_str());
        string outline(cline);
        outfile << outline;
    }
    infile.close();
    outfile.close();
    return 0;
}
