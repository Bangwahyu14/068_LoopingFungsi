#include <iostream>
using namespace std;

string nama ;
int nXpander,nPorce, nAvansa, nBrio, nLamborgini;

int hXpander = 300, hPorce = 8000, hAvansa = 250, hBrio = 200, hLamborgini = 5000

void input(){
    cout << "Nama pembeli : ";
    cin >> nama;
    cout << "jumlah Xpander : ";
    cin >> nXpander;

    cout <<"jumlah Porce : ";
    cin >> nPorce;

    cout << "jumlah Avansa : ";
    cin >> nAvansa;

    cout << "jumlah Brio : ";
    cin >> nBrio;

    cout << "jumlah Lamborgini :";
    cin >> nLamborgini;
}

int TotalHarga(){
    return (nXpander * hXpander) +(nPorce * hPorce) + (nAvansa * hAvansa) + (nBrio * hBrio) + (nLamborgini * hLamborgini);
}

void Display (){
    cout << "Total harganya : " << TotalHarga() << endl;
}

int main(){
    char pilihan;
    do{
    
    input();
    Display();
    cout << "Apakah ingin membeli kembali ? ";
    cin >> pilihan;
    }while(pilihan == 'y' ||pilihan == 'Y');
}

