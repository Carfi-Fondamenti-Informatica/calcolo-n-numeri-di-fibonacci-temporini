#include <iostream>
using namespace std;

    int main() {

        int n = 0, a = 0, b = 1,  c=0;

        cin >> n;

        if (n >= 2) {
            cout <<a<<b<<endl;
            for (int i=0 ; i < n; i++){
              
                c = a + b;
            cout << c << endl;
            a = b;
            b = c;
        }
        }else{
            cout<<"errore"<<endl;
        }


        return 0;

    }
