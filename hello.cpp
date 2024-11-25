#include <stdio.h>
#include <iostream>
#include <vector>
#include<algorithm>
#include<cstring>
using namespace std;
enum color { red, green=5, blue }c;
int main(){
    vector<int> nums = {1, 8, 3, 4};
    int a[]={1,2,3};
    int p = 100;
    int *pp = &p;
    int **ppp = &pp;
    char s[]="123421";
    char ss[]="123419";

    // strcpy(s,ss);
    printf("hello world\n");
    sort(nums.begin(),nums.end());
    cout <<  red << green << blue << endl;
    cout << sizeof(wchar_t) << endl;
    cout << strcmp(s,ss) <<endl;
    nums.push_back(5);
    cout << a[0] << endl;
    *a = 9;
    cout << *a << ' '<< *(a+1) << endl;
    cout << p <<' '<<*pp<<' '<<**ppp<<endl;
    cout <<&p<<' '<<pp<<' '<<*ppp<<' '<< endl;
    cout <<&pp<<' '<<ppp<<endl;
    cout <<&ppp<<endl;
    return 0;
}