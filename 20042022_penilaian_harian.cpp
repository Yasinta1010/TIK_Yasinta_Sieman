#include <iostream>
using namespace std;

int main(){
    int a,b,c, hasil;
    string keterangan;
    
    cout << "Masukkan Nilai Tugas :";
    cin >> a;
    if ( a > 100){
        cout << "Ulangi kembali program"; return 0;
    }
    
    cout << "Masukkan Nilai UTS :";
    cin >> b;
    if ( b > 100){
        cout << "Ulangi kembali program"; return 0;
    }
    
    cout << "Masukkan Nilai UAS :";
    cin >> c;
    if ( c > 100){
        cout << "Ulangi kembali program"; return 0;
    }
    
    if (a <= 100 || b <= 100 || c <= 100) {
        hasil = a * 30/100 + b * 30/100 + c* 40/100;
    cout << hasil << endl;
    }
    return 0;
    }
