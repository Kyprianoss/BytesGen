#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
#include <chrono>

using namespace std;

void exitconsole() {
    cout<<endl<<"Console will automaticly close in 5 seconds.";
    chrono::steady_clock::time_point tend = chrono::steady_clock::now()
                                               + chrono::seconds(5);
    while (chrono::steady_clock::now() < tend)
    {
        //
    }
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
    }
    exitconsole();
}
