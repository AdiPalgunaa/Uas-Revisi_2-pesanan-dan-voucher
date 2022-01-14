#include<iostream>
using namespace std;



int main ()
{
    int kode,pri,jml = 0 ,tot = 0,byr = 0,kem = 0, tot1 = 0;
    string menu[7]={"1. Espresso     = 18k","2. Americano    = 18k","3. Cappuccino   = 26k","4. Latte        = 26k","5. Vanilla      = 28k","6. Caramel      = 28k","7. Macchiato    = 35k"};
    string top[2]={"1. Ices ","2. Hot"};
    int i, baru = 1, selama, byrulang, pesan, voucher = 0, es;

    tambah :
    while(baru==1)
    { 
    cout<<"==============================\n";    
    cout<<"SELAMAT DATANG DI GOD'S COFFEE\n";
    cout<<"             ====             \n";
    cout<<"             MENU             \n";
    cout<<"==============================\n";
        for(i=0;i<7;i++)
        {
            cout<<menu[i]<<endl;
        }

    cout<<"-------------------------------";
    cout<<"\n"<<"MASUKKAN PILIHAN ANDA = ";
    cin>>kode;
    cout<<"-------------------------------\n";
    
    if(kode>7 || kode<1)
    {
        cout<<"\nPilihan Tidak Ditemukan!\n";
    }

    selama=1;
while(selama == 1)
{
    switch(kode)
    {
        case 1:
        cout<<"\n"<<" Espresso "<<endl;
        pri=18000;
        cout<<"=================\n";
            for(i=0;i<2;i++)
            {
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else{
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error;
                        }            
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang1 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error1 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang1;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error1;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else{
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang2 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error2 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang2;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error2;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang3 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error3 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang3;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error3;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;
        
        case 2:
        cout<<"\n"<<" Americano "<<endl;
        pri=18000;
        cout<<"=================\n";
            for(i=0;i<2;i++)
            {
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else{
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang4 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                if(byr<tot)
                {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error4 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang4;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error4;
                        }
                }
                else if(byr>=tot)
                {
                cout<<"Kembali = Rp. "<<kem<<endl;
                }
                }
                else
                {
                    ulang5 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                if(byr<tot)
                {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error5 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang5;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error5;
                        }
                }
                else if(byr>=tot)
                {
                cout<<"Kembali = Rp. "<<kem<<endl;
                }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else{
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang6 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error6 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang6;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error6;
                        }
                    }
                    else if(byr>=tot)
                    {
                cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang7 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                  if(byr<tot)
                  {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error7 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang7;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error7;
                        }
                  }
                  else if(byr>=tot)
                  {
                cout<<"Kembali = Rp. "<<kem<<endl;
                  }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;
        
        case 3:
        cout<<"\n"<<" Cappuccino "<<endl;
        pri=26000;
        cout<<"=================\n";
            for(i=0;i<2;i++)
            {
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else{
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 10%\n";
                tot1=tot1-(tot1*10/100);
                ulang8 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error8 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang8;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error8;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang9 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error9 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang9;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error9;
                        }
                    }
                    else if(byr>=tot)
                    {
                cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else{
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 10%\n";
                tot1=tot1-(tot1*10/100);
                ulang10 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error10 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang10;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error10;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang11 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error11 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang11;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error11;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;

        case 4:
        cout<<"\n"<<" Latte "<<endl;
        pri=26000;
        cout<<"=================\n";
            for(i=0;i<2;i++)
            {
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang12 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error12 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang12;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error12;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang13 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error13 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang13;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error13;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang14 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error14 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang14;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error14;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang15 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error15 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang15;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error15;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;

        case 5:
        cout<<"\n"<<" Vanilla "<<endl;
        pri=28000;
        cout<<"=================\n";
            for(i=0;i<2;i++)
            {
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang16 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error16 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang16;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error16;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang17 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error17 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang17;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error17;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 15%\n";
                tot1=tot1-(tot1*15/100);
                ulang18 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error18 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang18;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error18;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang19 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error19 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang19;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error19;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;

        case 6:
        cout<<"\n"<<" Caramel "<<endl;
        pri=28000;
        cout<<"=================\n";
            for(i=0;i<2;i++){
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 10%\n";
                tot1=tot1-(tot1*10/100);
                ulang20 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error20 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang20;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error20;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang21 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error21 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang21;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error21;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 10%\n";
                tot1=tot1-(tot1*10/100);
                ulang22 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error22 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang22;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error22;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang23 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error23 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang23;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error23;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;

        case 7:
        cout<<"\n"<<" Macchiato "<<endl;
        pri=35000;
        cout<<"=================\n";
            for(i=0;i<2;i++){
                cout<<top[i]<<endl;
            }
        cout<<"Masukan Pilihan = ";
        cin>>es;
        if(es==1)
        {
            
            tot=pri;
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=tot*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 10%\n";
                tot1=tot1-(tot1*10/100);
                ulang24 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error24 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang24;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error24;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang25 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error25 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang25;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error25;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
        else if(es==2)
        {
            cout<<"Masukkan Jumlah = ";
            cin>>jml;
            tot1+=pri*jml;
            cout<<"Apakah anda ingin menambah pesanan ?\n";
            cout<<"1. Ya || 2. Tidak = ";
            cin>>pesan;
            if(pesan == 1)
            {
                goto tambah;
            }
            else
            {
                cout<<"Apakah anda ingin menggunakan voucher?\n";
                cout<<"1. Ya || 2. Tidak = ";
                cin>>voucher;
                if(voucher == 1)
                {
                cout<<"Anda mendapat diskon 10%\n";
                tot1=tot1-(tot1*10/100);
                ulang26 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error26 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang26;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error26;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
                else
                {
                    ulang27 :
                cout<<"Total harga = Rp. "<<tot1<<endl;
                cout<<"Bayar = Rp. ";
                cin>>byr;
                kem=byr-tot;
                    if(byr<tot)
                    {
                    cout<<"==============================\n";
                    cout<<"Maaf Uang anda tidak mencukupi\n";
                    cout<<"==============================\n";
                    error27 : 
                    cout<<"Apakah anda ingin mengulang pembayaran ?\n";
                    cout<<"1. Ya || 2. Tidak = ";
                    cin>>byrulang;
                        if(byrulang==1) 
                        {
                            goto ulang27;
                        } 
                        else if(byrulang>2 || byrulang<1)
                        {
                            cout<<"=============================================\n";
                            cout<<"         Pilihan Tidak Ditemukan!\n";
                            cout<<"=============================================\n";
                            goto error27;
                        }
                    }
                    else if(byr>=tot)
                    {
                    cout<<"Kembali = Rp. "<<kem<<endl;
                    }
                }
            }
        }
            else
            {
            cout<<"=============================================\n";
            cout<<"         Pilihan Tidak Ditemukan!\n";
            cout<<"=============================================\n";
            }
            break;
        cout<<endl;
    }
        tambah1 :
            cout <<"===============================================\n";
            cout <<"Apakah anda ingin memesan kopi yang sama lagi ?\n";
            cout <<"1. Ya || 2. Tidak = ";
            cin >> selama;
            cout <<"===============================================\n";
            } 
        cout<<"\nApakah Anda Ingin Memesan lagi ? \n";
        cout<<"1. Ya\n2. Tidak \n";
        cout<<"\nMasukan Pilihan = ";
        cin >> baru;
        if(baru!=1)
        {
            cout<<endl;
            cout<<"=============================================\n";
            cout<<"Terimakasih Sudah berbelanja di GOD'S COFFEE \n";
            cout<<"         Selamat Berkunjung Kembali          \n";
            cout<<"=============================================\n";
        }
        } 
    return 0;
}
