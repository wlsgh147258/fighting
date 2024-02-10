#include <iostream>
using namespace std;

int main()
{
    int b, s; 
    cin >> b >> s;
    
    while(b != 0 && s != 0){
        if(b > s){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        cin >> b >> s;
    }
   
}