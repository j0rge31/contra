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
    cout<<endl<<"contraseña incorrecta"<<endl;
}

    cout<<"ingrese la contraseña";
    string password = "";
    cin >> password;
    if(password=="123")
{
    cout<<endl<<"acceso correcto"<<endl;

}
else
{
    cout<<endl<<"contraseña incorrecta"<<endl;
}
return 0;
}
