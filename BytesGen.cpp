#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
using namespace std;

void exitconsole() {
    char exitcons;
    cout<<endl<<endl<<"You can now close this window"<<endl;
    cin>>exitcons;
}

int main() {
    int i = 0;
    int num = 0;
    int idk;
    char random;
    float progress = 0.0;
    ofstream makefile("generated.txt");
    cout<<"BytesGenV1|"<<endl<<"----------|"<<endl;
    cout<<"Enter an amount of bytes to be written (1 mb = 1m bytes, 1gb = 1b bytes):"<<endl;
    cin>>num;
    if (num != NULL) {
            cout<<"This may take a while..."<<endl;
            while(i < num) {
                idk = rand()%26;
                random = 'a' + idk;
                makefile << random;       //  1 char = 1 byte
                i++;
            }
              char filename[] = "generated.txt";
              char fullFilename[MAX_PATH];
              GetFullPathName(filename, MAX_PATH, fullFilename, nullptr);
              cout<<num<<" bytes file has been generated in "<<fullFilename<<endl;
              exitconsole();
    }
    return 0;
}
