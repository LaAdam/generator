#include <iostream>
#include <random>
#include <time.h>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
void gen(), enc(), denc(), login();
int i; int p=0;
string trash;
vector<char>password;
int main(){
if(!p)
login();
else;
cout<<"\n#############MainMenu#############"<<endl;
cout<<"\nchoos op : "<<endl;
cout<<"(1)\tgen\n(2)\tenc\n(3)\tdec\n(4)\tquit\nDO NOT DARE TO PUT A LETTER HERE"<<endl;
int an;
cin>>an;
getline(cin,trash);
switch (an)
{
case 1:
   gen();
    break;
    case 2:
   enc();
    break;
    case 3:
   denc();
    break;
    case 4:
   cout<<"see you later my love mwah, press enter to leave, i love you <3";
   cin.get();
    break;
default:
 cout<<"invalid input, restarting\n";
 main();
    break;
}
}

void gen(){
cout<<"\n#############gen#############"<<endl;
cout<<"how long? ";
cin>>i;
getline(cin,trash);
cout<<"\nthe password is  :   ";
srand(time(0));
for (int j = 0; j < i; j++)
{

    int rando = rand()%93;
    password.push_back(rando+33);
}
for (int j = 0; j < i; j++){
    cout<<password[j];
}
main();
}

void enc(){
    cout<<"put your password to enc : ";
    string pass2enc = "";
    getline(cin,pass2enc);
    cout<<"the enc is   :   ";
    int s=pass2enc.length();
    char l[s];
   strcpy(l,pass2enc.c_str());
    
    for(int j= 0; j<s; j++){
      int m = l[j];
      cout<<(char(m-8));
       
    }
    main();
}

void denc(){
    cout<<"\n#############Denc#############"<<endl;
    cout<<"put your password to denc  : ";
    string pass2denc;
    getline(cin,pass2denc);
    int s = pass2denc.length();
    char ca[s];
    strcpy(ca,pass2denc.c_str());
    cout<<"\nthe denc is    :   ";

    for(int j = 0; j < s; j++){
        int m = ca[j];
        cout<<char(m + 8 );
    }
    main();
}
void login(){
    p++;
    cout<<"enter the password : ";
    string n;
    getline(cin,n);
    if (n == "ExamplePassword")
    {
       
    }else{
        cout<<"lol, wrong\n";
        login();
    }
    
}