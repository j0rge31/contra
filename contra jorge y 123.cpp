#include<iostream>
#include <string>
#include<stdlib.h>

using namespace std;

int main()
{
    cout<<"ingrese el ususario";
    string user = "";
    cin >> user;
    if(user=="jorge")
{
    cout<<endl<<"acceso correcto"<<endl;

}
else
{
    cout<<endl<<"contrase�a incorrecta"<<endl;
}

    cout<<"ingrese la contrase�a";
    string password = "";
    cin >> password;
    if(password=="123")
{
    cout<<endl<<"acceso correcto"<<endl;

}
else
{
    cout<<endl<<"contrase�a incorrecta"<<endl;
}
return 0;
}
