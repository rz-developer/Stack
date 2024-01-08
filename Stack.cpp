#include <iostream>
#define MAX 16 //Maksimum data stack
using namespace std;

struct Stack {
    int top; 
	int data[MAX];
} S;

void init() {
    S.top = -1;
}
 
bool isEmpty() {
    return S.top == -1;
}
 
bool isFull() {
    return S.top == MAX -1;
}
 
void push() {
    if (isFull()) {
        cout << "\nStack Telah Penuh" << endl;
    } else {
        S.top++;
        cout << "\nMasukkan Data yang Diinginkan: ";
        cin >> S.data[S.top];
        cout << "\n Data : '" << S.data[S.top] <<endl; 
		cout << "Data  Telah Ditambahkan"<< endl;
    }
}
 
void pop() {
    if (isEmpty()) {
        cout << "\nStack kosong!! " << endl;
    } else {
        cout << "\n Data :"<<S.data[S.top] <<endl;
        cout << "Data Telah Dihapus" << endl;
        S.top--;
    }
}
 
void printStack() {
    if (isEmpty()) {
        cout<< "\nStack Kosong\n";
    } else {
        cout << "Data Pada Stack : ";
        for (int i = S.top; i >= 0; i--)
            cout << S.data[i] <<  ( ",");
    }
}

int main() {
	int choose;
	do
	{
		cout <<"=============STACK==============\n"
			<<"================================\n"
			<< " 1. Tambahkan Data  \n"
			<< " 2. Hapus Data \n"
			<< " 3. Tampilkan Data \n"
			<< " 4. Keluar \n"
			<< "================================\n"
			<< "Masukkan Pilihan Yang Diinginkan : "; cin >> choose;
		switch (choose)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			printStack();
			break;
		default:
			cout << "Pilihan Tidak Tersedia, Silahkan Masukkan Kembali";
			break;
		}
	} while (choose !=3);
	return 0;
}
