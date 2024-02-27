#include <iostream>

using namespace std;

int main()
{
    string name;
    int id;
    cout << "What is your name?" << endl;
    cin>>name;
    cout<<"Hello "<<name<<endl;

    cout << "What is your Student ID?" <<endl;
    cin>>id;
    cout<<"Your ID is "<<id<<endl;

    int var1;
    int var2;
    int sum;
    int diff;
    int prod;
    cout<<"enter var1"<<endl;
    cin>>var1;
    cout<<"enter var2"<<endl;
    cin>>var2;
    sum=var1+var2;
    cout<<"sum"<<sum<<endl;
    prod=var1*var2;
    cout<<"prod "<<prod<<endl;
    if(var1>var2)diff=var1-var2;
    else
        diff=var2-var1;
    cout<<"diff "<<diff<<endl;

     int lab;
     int mid;
     int fin;
     int score;
     cout<<"enter lab not"<<endl;
     cin>>lab;
     cout<<"lab"<<lab<<endl;
     cout<<"enter mid not"<<endl;
     cin>>mid;
     cout<<"mid"<<mid<<endl;;
     cout<<"enter final not"<<endl;
     cin>>fin;
     cout<<"final"<<fin<<endl;;
     score=lab*0.25+mid*0.35+fin*0.40;
     cout<<"score"<<score<<endl;

     cout<<"*\n**\n***\n**\n*";
    return 0;
}
