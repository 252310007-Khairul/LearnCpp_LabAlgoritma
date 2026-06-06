#include <iostream>
using namespace std;

const int MAX = 5;

class Queue {
private:
    int front;
    int rear;
    int count;
    int arr[MAX];

public:
    Queue() {
        front = 0;
        rear = MAX - 1;
        count = 0;
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Antrian penuh!" << endl;
            return;
        }

        rear = (rear + 1) % MAX;
        arr[rear] = data;
        count++;

        cout << "Nomor antrian A-" << data << " berhasil ditambahkan." << endl;
    }


    int dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
            return -1;
        }

        int data = arr[front];
        front = (front + 1) % MAX;
        count--;

        return data;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
            return -1;
        }

        return arr[front];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == MAX;
    }

    int size() {
        return count;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Antrian kosong!" << endl;
            return;
        }

        cout << "\nDaftar Antrian:" << endl;

        for (int i = 0; i < count; i++) {
            int index = (front + i) % MAX;
            cout << i + 1 << ". A-" << arr[index] << endl;
        }
    }
};

int main() {
    Queue antrian;
    int pilihan;
    int nomorUrut = 0;

    do {
        cout << "\n=== SISTEM ANTRIAN LAYANAN PUBLIK ===" << endl;
        cout << "1. Ambil Nomor Antrian (Enqueue)" << endl;
        cout << "2. Panggil Antrian (Dequeue)" << endl;
        cout << "3. Lihat Antrian Depan (Peek)" << endl;
        cout << "4. Cek Status Antrian" << endl;
        cout << "5. Jumlah Antrian" << endl;
        cout << "6. Tampilkan Antrian" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            nomorUrut++;
            antrian.enqueue(nomorUrut);
            break;

        case 2: {
            int nomor = antrian.dequeue();

            if (nomor != -1) {
                cout << "Nomor antrian A-" << nomor
                     << " dipanggil." << endl;
            }
            break;
        }

        case 3:
            if (!antrian.isEmpty()) {
                cout << "Antrian terdepan : A-"
                     << antrian.peek() << endl;
            }
            break;

        case 4:
            cout << "\nStatus Antrian" << endl;

            if (antrian.isEmpty()) {
                cout << "Antrian kosong" << endl;
            } else if (antrian.isFull()) {
                cout << "Antrian penuh" << endl;
            } else {
                cout << "Antrian tersedia" << endl;
            }
            break;

        case 5:
            cout << "Jumlah antrian : "
                 << antrian.size() << endl;
            break;

        case 6:
            antrian.display();
            break;

        case 0:
            cout << "Program selesai." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 0);

    return 0;
}
