#include <iostream>
using namespace std;
int main(){
    int unit;
    double bill;
    cout << "enter electricity unit";
    cin >> unit;
    if(unit <= 100){
        bill = unit * 2;
        cout << bill;
    }
    else if (unit <= 300){
        bill = (100*2) + (unit-100) * 3;
        cout << bill;
    }
    else{
        bill = (100 * 2) + (200 * 3) + (unit +- 300) * 5;
        cout << bill;
    }
    return 0;

}