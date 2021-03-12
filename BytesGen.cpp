#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main() {
    ofstream makefile("generated.txt");
    int i = 0;
    int num = 0;
    cout<<"BytesGenV1|"<<endl<<"----------|"<<endl;
    cout<<"Enter an amount of bytes to be written (1 mb = 1m bytes, 1gb = 1b bytes):"<<endl;
    cin>>num;
    if (num != NULL) {
            while(i < num) {       //
            makefile << "1";       //  1 char = 1 byte
            i++;
        }
    }
    return 0;
}
