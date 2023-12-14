#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    //cpp does not allow instantiating a string with dynamic length;
    //and I don't want to use malloc/realloc
    //so this is my solution

    //mb, forgot the standard lib
    string str;
    cout<<"Input number: ";
    cin>>str;
    reverse(str.begin(), str.end());
    if (str[0] == '0'){
        do {
            str.erase(0, 1);
        } while (str[0] == '0');
    }
    cout<<"Reverse number: "<<str;
    return 0;
}