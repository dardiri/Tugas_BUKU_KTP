#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>

using namespace std;

char get[1];
int a=0,i;
string laki = "L";
string perempuan = "P";

struct ktp
{
    char nik    [99];
    char nama   [99];
    char tempat [99];
    char tanggal[99];
    char bulan  [99];
    int  tahun;
    char kelamin[99];
    char alamat [99];
    char agama  [99];
    char pekerjaan [99];
};
ktp data[10];

void input ()
{
    cout << "Masukan Jumlah Data KTP Yang Akan di Masukkan : "; cin >> a;
    cout <<endl;
    for (i=0;i<a;i++)
    {
        cin.getline (get,1);
        cout << "NIK\t\t: ";        cin.getline(data[i].nik,99);

        cout << "Nama\t\t: ";       cin.getline(data[i].nama,99);

        cout << "Tempat Lahir\t\t: "; cin.getline(data[i].tempat,99);

        cout << "Tanggal\t\t: ";    cin.getline(data[i].tanggal,99);

        cout << "Bulan\t\t: ";      cin.getline(data[i].bulan,99);

        cout << "Tahun\t\t: ";      cin >> data[i].tahun;

        cin.getline (get,1);

        cout << "Jenis Kelamin(L/P)\t\t: "; cin.getline (data[i].kelamin,99);

        cout << "Alamat\t\t: ";     cin.getline (data[i].alamat,99);

        cout << "Agama\t\t: ";      cin.getline (data[i].agama,99);

        cout << "Pekerjaan\t\t :";  cin.getline (data[i].pekerjaan,50);
    }
    system("cls");
}

void mencari ()
{
    int thn,c,d=0;
    cout << "Masukan Tahun Kelahiran";
    cin >> thn;

    cout << "\n\n\n";
    cout << setfill('-')
            << setw(1) << "+" << setw(75) << "-" << setw (1) << "+" << endl;
    cout << setfill(' ')
            << setw(1) << "|" << setw(38) << "Output" << setw(38) << "|" << endl;
    cout << setfill('-')
            << setw(1) << "+" << setw(10) << "-"
            << setw(1) << "+" << setw(23) << "-"
            << setw(1) << "+" << setw(14) << "-"
            << setw(1) << "+" << setw(14) << "-"
            << setw(1) << "+" << setw(10) << "-"
            << setw(1) << endl;
    cout << setfill(' ')
            << setw(1) << "|" << setw(10) << left << "NIK"
            << setw(1) << "|" << setw(23) << left << "Nama"
            << setw(1) << "|" << setw(14) << left << "TTL"
            << setw(1) << "|" << setw(14) << left << "Jenis Kelamin"
            << setw(1) << "|" << setw(10) << left << "Alamat"
            << setw(1) << "|" << endl;
    cout << setfill('-')
            << setw(1) << "+" << setw(10) << "-"
            << setw(1) << "+" << setw(23) << "="
            << setw(1) << "+" << setw(14) << "="
            << setw(1) << "+" << setw(14) << "="
            << setw(1) << "+" << setw(10) << "="
            << setw(1) << "+" << endl;

    for (c=0;c<a;c++)
    {
        if (data[c].tahun==thn)
        {
            cout << setfill(' ')
                        << setw(1) << "|" << setw(10) << left << data[c].nik
                        << setw(1) << "|" << setw(23) << left << data[c].nama
                        << setw(1) << "|" << setw(14) << left << data[c].tempat<<", "<<data[c].tanggal<<"-"<<data[c].bulan<<"-"<<data[c].tahun
                        << setw(1) << "|" << setw(14) << left << data[c].kelamin
                        << setw(1) << "|" << setw(10) << left << data[c].alamat
                        << setw(1) << "|" << endl;
            cout << setfill('-')
                        << setw(1) << "+" << setw(10) << "-"
                        << setw(1) << "+" << setw(23) << "-"
                        << setw(1) << "+" << setw(14) << "-"
                        << setw(1) << "+" << setw(14) << "-"
                        << setw(1) << "+" << setw(10) << "-"
                        << setw(1) << "+" << endl;

            d++;
        }

        else if (c+1==a && d==0)
        {
            cout << "DATA TIDAK DITEMUKAN!!";
        }
    }
    getch(); system("cls");

}

void menampilkan ()
{
    int e,f=0;
    char x;

    cout << "Tampilkan Data KTP Berdasarkan Jenis Kelamin"<<endl;
    cout << "Masukan Pilihan L/P: ";
    cin >> x;
    cout << "\n\n\n";
    cout << setfill('-')
            << setw(1) << "+" << setw(75) << "-" << setw (1) << "+" << endl;
    cout << setfill(' ')
            << setw(1) << "|" << setw(38) << "Output" << setw(38) << "|" << endl;
    cout << setfill('-')
            << setw(1) << "+" << setw(10) << "-"
            << setw(1) << "+" << setw(23) << "-"
            << setw(1) << "+" << setw(14) << "-"
            << setw(1) << "+" << setw(14) << "-"
            << setw(1) << "+" << setw(10) << "-"
            << setw(1) << endl;
    cout << setfill(' ')
            << setw(1) << "|" << setw(10) << left << "NIK"
            << setw(1) << "|" << setw(23) << left << "Nama"
            << setw(1) << "|" << setw(14) << left << "TTL"
            << setw(1) << "|" << setw(14) << left << "Jenis Kelamin"
            << setw(1) << "|" << setw(10) << left << "Alamat"
            << setw(1) << "|" << endl;
    cout << setfill('-')
            << setw(1) << "+" << setw(10) << "-"
            << setw(1) << "+" << setw(23) << "="
            << setw(1) << "+" << setw(14) << "="
            << setw(1) << "+" << setw(14) << "="
            << setw(1) << "+" << setw(10) << "="
            << setw(1) << "+" << endl;


    if (x=='L')
    {
        for (e=0;e<a;e++)
        {
            if (data[e].kelamin[99] = 'L')
            {

                cout << setfill(' ')
                        << setw(1) << "|" << setw(10) << left << data[e].nik
                        << setw(1) << "|" << setw(23) << left << data[e].nama
                        << setw(1) << "|" << setw(14) << left << data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun
                        << setw(1) << "|" << setw(14) << left << data[e].kelamin[99]
                        << setw(1) << "|" << setw(10) << left << data[e].alamat
                        << setw(1) << "|" << endl;
            cout << setfill('-')
                        << setw(1) << "+" << setw(10) << "-"
                        << setw(1) << "+" << setw(23) << "-"
                        << setw(1) << "+" << setw(14) << "-"
                        << setw(1) << "+" << setw(14) << "-"
                        << setw(1) << "+" << setw(10) << "-"
                        << setw(1) << "+" << endl;
                f++;
            }
        }

    }

    else if (x=='P')
    {
        for (e=0;e<a;e++)
        {

            if (data[e].kelamin[99] == 'P')
            {

                cout << setfill(' ')
                        << setw(1) << "|" << setw(10) << left << data[e].nik
                        << setw(1) << "|" << setw(23) << left << data[e].nama
                        << setw(1) << "|" << setw(14) << left << data[e].tempat<<", "<<data[e].tanggal<<"-"<<data[e].bulan<<"-"<<data[e].tahun
                        << setw(1) << "|" << setw(14) << left << data[e].kelamin[99]
                        << setw(1) << "|" << setw(10) << left << data[e].alamat
                        << setw(1) << "|" << endl;
            cout << setfill('-')
                        << setw(1) << "+" << setw(10) << "-"
                        << setw(1) << "+" << setw(23) << "-"
                        << setw(1) << "+" << setw(14) << "-"
                        << setw(1) << "+" << setw(14) << "-"
                        << setw(1) << "+" << setw(10) << "-"
                        << setw(1) << "+" << endl;
                f++;
            }
        }

    }

        if (e+1==a && f==0)
        {
            cout << "DATA TIDAK DITEMUKAN!!";
        }
        getch();
        system("cls");

}
void mengedit ()
{
    int j;
    cout << "Edit Data KTP ke-"; cin >> j;
    j=j-1;
    cin.getline (get,1);
    cout << "NIK\t\t: "; cin.getline(data[j].nik,50);

    cout << "Nama\t\t: "; cin.getline(data[j].nama,50);

    cout << "Tempat Lahir\t\t: "; cin.getline(data[j].tempat,50);

    cout << "Tanggal\t\t: "; cin.getline(data[j].tanggal,50);

    cout << "Bulan\t\t: "; cin.getline (data[j].bulan,50);

    cout << "Tahun\t\t: "; cin >> data[j].tahun;
    cin.getline (get,1);

    cout << "Jenis Kelamin\t\t: "; cin.getline (data[j].kelamin,50);
    cout << endl;

    cout << "Alamat\t\t: "; cin.getline (data[j].alamat,50);

    cout << "Agama\t\t: "; cin.getline (data[j].agama,50);

    cout << "Pekerjaan\t\t :"; cin.getline (data[j].pekerjaan,50);


    menampilkan(); getch(); system("cls");

}

int main()
{
    int *b = new int;
    while (*b!=99)
    {
        cout << "1. Memasukan Data"<<endl;
        cout << "2. Mencari Data "<<endl;
        cout << "3. Menampilkan Data "<<endl;
        cout << "4. Mengedit Data"<<endl;
        cout << "99. Keluar"<<endl;
        cout << "Masukan Pilihan : "; cin >> *b;

        if (*b==1)
        {
            input();
        }

        else if (*b==2)
        {
            mencari();
        }

        else if (*b==3)
        {
            menampilkan();
        }
        else if (*b==4)
        {
            mengedit();
        }
        else if (*b==99)
        {
            return 0;
        }
        else
        {
            cout << "PILIHAN ANDA TIDAK DITEMUKAN!!";
        }
    }

}
