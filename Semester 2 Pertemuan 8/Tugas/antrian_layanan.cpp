#include <iostream>
#include <string>
using namespace std;

const int MAX = 100;

class Queue {
    private:
        int rear;
        int front;
        int arr[MAX];
        int count;

    public:
        Queue() {
            front = 0;
            rear = MAX - 1;
            count = 0;
        }

        // Menambahkan elemen ke antrian
        void enqueue(int x) {
            if (isFull()) {
                cout << "[!] Antrian penuh! Tidak dapat menambah pengunjung baru." << endl;
                return;
            }
            rear = (rear + 1) % MAX;
            arr[rear] = x;
            count++;
            cout << "[+] Pengunjung dengan nomor antrian " << x << " berhasil masuk antrian." << endl;
        }

        // Menghapus elemen terdepan dari antrian
        int dequeue() {
            if (isEmpty()) {
                cout << "[!] Antrian kosong. Tidak ada pengunjung yang dilayani." << endl;
                return -1;
            }
            int x = arr[front];
            front = (front + 1) % MAX;
            count--;
            return x;
        }

        // Melihat elemen terdepan tanpa menghapus
        int peek() {
            if (isEmpty()) {
                cout << "[!] Antrian kosong." << endl;
                return -1;
            }
            return arr[front];
        }

        // Mengecek apakah antrian kosong
        bool isEmpty() {
            return count == 0;
        }

        // Mengecek apakah antrian penuh
        bool isFull() {
            return count == MAX;
        }

        // Mengembalikan jumlah elemen dalam antrian
        int size() {
            return count;
        }

        // Menampilkan seluruh isi antrian
        void display() {
            if (isEmpty()) {
                cout << "[!] Antrian kosong. Tidak ada data untuk ditampilkan." << endl;
                return;
            }
            cout << "\n====================================================" << endl;
            cout << "         DAFTAR ANTRIAN LOKET LAYANAN PUBLIK        " << endl;
            cout << "====================================================" << endl;
            cout << "  Posisi   | Nomor Antrian | Status" << endl;
            cout << "----------------------------------------------------" << endl;
            for (int i = 0; i < count; i++) {
                int index = (front + i) % MAX;
                if (i == 0) {
                    cout << "  [" << i + 1 << "] DEPAN  |    A-" << arr[index] << "          | Menunggu Dipanggil" << endl;
                } else {
                    cout << "  [" << i + 1 << "]        |    A-" << arr[index] << "          | Menunggu" << endl;
                }
            }
            cout << "====================================================" << endl;
            cout << "  Total Antrian : " << count << " orang" << endl;
            cout << "====================================================" << endl;
        }
};

// Mencetak header aplikasi
void printHeader() {
    cout << "\n+===================================================+" << endl;
    cout << "|     SISTEM ANTRIAN DIGITAL LAYANAN PUBLIK         |" << endl;
    cout << "|          Kantor Pelayanan Masyarakat              |" << endl;
    cout << "+===================================================+" << endl;
}

// Mencetak menu utama
void printMenu() {
    cout << "\n+---------------------------------------------------+" << endl;
    cout << "|                    MENU UTAMA                    |" << endl;
    cout << "+---------------------------------------------------+" << endl;
    cout << "|  (1) Ambil Nomor Antrian  (Enqueue)              |" << endl;
    cout << "|  (2) Panggil Antrian      (Dequeue)              |" << endl;
    cout << "|  (3) Lihat Antrian Depan  (Peek)                 |" << endl;
    cout << "|  (4) Cek Status Antrian   (isEmpty / isFull)     |" << endl;
    cout << "|  (5) Jumlah Antrian       (Size)                 |" << endl;
    cout << "|  (6) Tampilkan Semua      (Display)              |" << endl;
    cout << "|  (0) Keluar                                      |" << endl;
    cout << "+---------------------------------------------------+" << endl;
    cout << "  Pilihan Anda: ";
}

int main() {
    Queue* antrian = new Queue();
    int pilihan;
    int nomorUrut = 100; // Nomor antrian mulai dari A-101

    printHeader();

    do {
        printMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                // Enqueue
                nomorUrut++;
                cout << "\n[AMBIL NOMOR ANTRIAN]" << endl;
                antrian->enqueue(nomorUrut);
                break;
            }
            case 2: {
                // Dequeue
                cout << "\n[PANGGIL ANTRIAN]" << endl;
                int nomor = antrian->dequeue();
                if (nomor != -1) {
                    cout << "[>>] Memanggil nomor antrian A-" << nomor << "..." << endl;
                    cout << "     Silakan menuju loket pelayanan." << endl;
                }
                break;
            }
            case 3: {
                // Peek
                cout << "\n[ANTRIAN TERDEPAN]" << endl;
                int depan = antrian->peek();
                if (depan != -1) {
                    cout << "[i] Nomor antrian berikutnya: A-" << depan << endl;
                }
                break;
            }
            case 4: {
                // isEmpty & isFull
                cout << "\n[STATUS ANTRIAN]" << endl;
                if (antrian->isEmpty()) {
                    cout << "[i] Status: ANTRIAN KOSONG" << endl;
                } else if (antrian->isFull()) {
                    cout << "[i] Status: ANTRIAN PENUH (kapasitas " << MAX << " orang)" << endl;
                } else {
                    cout << "[i] Status: ANTRIAN AKTIF" << endl;
                    cout << "[i] isEmpty : false (antrian tidak kosong)" << endl;
                    cout << "[i] isFull  : false (antrian belum penuh)" << endl;
                }
                break;
            }
            case 5: {
                // Size
                cout << "\n[JUMLAH ANTRIAN]" << endl;
                cout << "[i] Jumlah pengunjung dalam antrian: " << antrian->size() << " orang" << endl;
                break;
            }
            case 6: {
                // Display
                antrian->display();
                break;
            }
            case 0: {
                cout << "\n[*] Terima kasih telah menggunakan Sistem Antrian Digital." << endl;
                cout << "[*] Sampai jumpa!\n" << endl;
                break;
            }
            default: {
                cout << "\n[!] Pilihan tidak valid. Silakan pilih menu 0-6." << endl;
                break;
            }
        }

    } while (pilihan != 0);

    delete antrian;
    return 0;
}
