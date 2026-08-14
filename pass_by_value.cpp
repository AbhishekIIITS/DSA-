#include<bits/stdc++.h>
using namespace std;
void explainPaassByValueAndReference(int &x){
    x = x + 10;
}
int main(){
    int num = 5;
    explainPaassByValueAndReference(num);
    cout << num << endl;
    return 0;
}