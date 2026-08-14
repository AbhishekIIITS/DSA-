#include <bits/stdc++.h>
using namespace std;

int main() {
 int a , b ,c;
 cin >> a >> b >> c;
 if(a >= b){
    if(a >= c){
        cout << "largest is A" << endl;
    }
    else{
        cout << "largest is c" << endl;
    }
}
    else if(b >= c){
        cout << "largest is B" << endl;

    }
    else{
        cout << "largest is c" << endl;
    }
 
 return 0;
}