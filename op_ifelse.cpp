#include <iostream>
using namespace std;
int main(){
    char op;
    int n1,n2;
    cout << "enter operator(+,-,*,/)";
    cin >> n1 >> n2;
    if(op == '+'){
        cout << "n1 + n2" << n1 + n2;
    }
    else if (op == '-'){;
        cout << "n1-n2" << n1-n2;
    }
    else if (op == '/'){
        cout << "n1/n2" <<n1/n2;
    }
    else{
        cout << "invalid operator";
    }
    return 0;

}