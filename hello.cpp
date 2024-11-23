#include <stdio.h>
#include <iostream>
using namespace std;
enum color { red, green=5, blue }c;
int main(){
    printf("hello world\n");
    cout <<  red << green << blue << endl;
    cout << sizeof(long) << endl;
    return 0;
}