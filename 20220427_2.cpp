#include <iostream>
using namespace std;
int main() {
    
    
    int batasbawah,batasatas;
    cout<<"Masukkan Batas Bawah = ";cin>>batasbawah;
    cout<<"Masukkan Batas Atas = ";cin>>batasatas;
    if (batasbawah < batasatas) {
            while (batasbawah++ <batasatas){
        cout<<"Data ke - "<<batasbawah<<endl;   
    }
    }
    else {
        cout<<"Batas Bawah tidak boleh lebih dari Batas Atas";
    }

    return 0;
}
