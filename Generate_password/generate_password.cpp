#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string genrate_password(int l){
    string password = "";
    string c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*";
    srand(time(0));
    
    for(int i=0; i<l; i++){
        int random_index = rand() % c.size();
        password += c[random_index];
    }
    
    return password;
}

int main (){
    int length;
    cout << "enter the length of password to be genrated : ";
    cin >> length;
    
    cout << "password genrated : " << genrate_password(length);
    
    return 0;
}