#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream wr("Cnt54.txt");   //connecting file with wr stream
    string str1;
    // taking users name and storing it in file.
    cout<<"Enter your Name: "<<endl;
    cin>>str1;
    wr<<"MY name is "+ str1;
    wr.close(); //closing of he file is meditory

    string str2;
    ifstream rd("Cnt54.txt");
    rd >> str2;
    getline(rd, str2);
    cout << str2;
    return 0;
}

// 2nd method
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main()
{
    ofstream write;          //declare any like read, erite etc.
    write.open("Cnt54.txt"); //opening
    write << "this is me";
    write.close();

    ifstream read;      //declareay like write,read ec
    string str;
    read.open("Cnt54.txt");
    while(read.eof()==0){
        getline(read,str);
        cout<<str;
    }
    read.close();
    return 0;
}