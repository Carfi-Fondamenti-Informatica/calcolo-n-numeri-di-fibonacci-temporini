#include <iostream>
using namespace std;

    int main() {

        int n = 0, i =i, a = 0, b = 1,  int c;

        cin >> n;

        if (n >= 2) {
            for ( i=0 ; i < n; i++){
              
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
