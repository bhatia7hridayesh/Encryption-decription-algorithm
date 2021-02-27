#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
//Code for encryption
string encrypt(string &str,int val){
    for(int i=0;str[i]!='\0';i++){
        str[i] = str[i]+val;
    }
    return str;
}
//Code for decryption
string decrypt(string &str,int val){
    for(int i=0;str[i]!='\0';i++){
        str[i] = str[i]-val;
    }
    return str;
}

int main(){
    string msg;
    cout<<"Enter your message\n";
    getline(cin,msg);
    srand(time(0));
    cout<<"original message: "<<msg<<endl;
    int val  = rand();
    cout<<"encrypted message: "<<encrypt(msg,val)<<endl;
    cout<<"decrypted message: "<<decrypt(msg,val)<<endl;
    return 0;
}