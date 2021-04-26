#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <windows.h>
#include <chrono>

using namespace std;

void exitconsole() {
    cout<<endl<<endl<<"Console will automaticly close in 10 seconds.";
    chrono::steady_clock::time_point tend = chrono::steady_clock::now()
                                               + chrono::seconds(10);
    while (chrono::steady_clock::now() < tend)
    {
        //
    }
}

int main() {
    int i = 0;
    int num1;
    int num = 0;
    int idk;
    char random;
    float progress = 0;
    char pORu;
    char tgmb;
    ofstream makefile("generated.txt");
    cout<<"BytesGenV1|"<<endl<<"----------|"<<endl<<endl<<endl;
    cout<<"Do you want to write in terabytes, gigabytes, megabytes or bytes?"<<endl<<endl<<"  Terabytes: t"<<endl<<"  Gigabytes: g"<<endl<<"  Megabytes: m"<<endl<<"  Bytes: b"<<endl<<endl<<"[t/g/m/b]: ";
    cin>>tgmb;

    /*
                    Checking if user selected tb, gb, mb or b and transfering them to bytes
                                                                                                    */

    if (tgmb == 't') {
        cout<<"How many terabytes do you want to write: ";
        cin>>num1;
            if (num1 > 0) {
                num = num1*1099511627776; //1tb = 1024gb = 1099511627776 bytes
            }
            else {
                cout<<"Number must be better than zero";
                exitconsole();
                return 0;
            }
    }
    else if (tgmb == 'g') {
        cout<<"How many gigabytes do you want to write: ";
        cin>>num1;
            if (num1 > 0) {
                num = num1*1073741824; //1gb = 1,073,741,824 bytes
            }
            else {
                cout<<"Number must be better than zero";
                exitconsole();
                return 0;
            }
    }
    else if (tgmb == 'm') {
        cout<<"How many gigabytes do you want to write: ";
        cin>>num1;
            if (num1 > 0) {
                num = num1*1048576; //1mb = 1048576 bytes
            }
            else {
                cout<<"Number must be better than zero";
                exitconsole();
                return 0;
            }
    }
    else if (tgmb == 'b') {
        cout<<"How many bytes do you want to write: ";
        cin>>num1;
            if (num1 > 0) {
                num = num1; //1b = 1 byte, no maths needed
            }
            else {
                cout<<"Number must be better than zero";
                exitconsole();
                return 0;
            }
    }
    else {
        cout<<tgmb<<" is not a choice"<<endl;
        exitconsole();
        return 0;
    }

     /*
                    Generating file...
                                                                                                    */



    cout<<endl<<"Select performance or undetectable:"<<endl<<endl<<"   Performance [p] (Generates the file faster)"<<endl<<"   Undetectable [u] (Generates the file slower but the generated file cannot be detected as a spam file)"<<endl<<endl<<"[p/u]: ";
    cin>>pORu;
    if (pORu == 'u') {  //undetectable generated file
        if (num > 0) {  //double checking if the number is > than zero
                while(i < num) {
                    idk = rand()%26;
                    random = 'a' + idk;
                    makefile << random;       //  x1 char = 1 byte
                    i++;
                }
              char filename[] = "generated.txt";
              char fullFilename[MAX_PATH];
              GetFullPathName(filename, MAX_PATH, fullFilename, nullptr);
              cout<<num<<" bytes file has been generated in "<<fullFilename<<endl;
        }
        else {
            return 0; //If number is zero or less than zero even after the above check (line 38-81) kill the console
        }
    }
    else if (pORu == 'p') {
        if (num > 0) {  //double checking if the number is > than zero
                while(i < num) {        //faster file generation (does not generate a random number every time
                    makefile << "a";       //  x1 "a" = 1 byte
                    i++;
                }
              char filename[] = "generated.txt";
              char fullFilename[MAX_PATH];
              GetFullPathName(filename, MAX_PATH, fullFilename, nullptr);
              cout<<num<<" bytes file has been generated in "<<fullFilename<<endl;
        }
        else {
            return 0; //If number is zero or less than zero even after the above check (line 38-81) kill the console
        }
    }
    exitconsole();
    return 0;
}
