# Tugas Pemrograman B - Kelompok 9

## Judul: Implementasi Aturan Trapesium (*Trapezoidal Rule*) untuk Menghitung Jarak Tempuh

### Anggota Kelompok:
- Andrew Kristofer Jian (NPM. 2206059673)
- Hanif Nur Ilham Sanjaya (NPM. 2206059692)
- Farhan Ramadhani Zakiyyandi (NPM. 2206081945) - Filaga Tifira Muthi (NPM. 2206811323) ### Deskripsi
Program ini mengimplementasikan metode numerik **Aturan Trapesium (*Trapezoidal Rule*)** untuk menghitung jarak tempuh benda berdasarkan fungsi kecepatan linear \( v(t) = 2t + 3 \) (dalam m/s) pada rentang waktu \( t = 0 \) hingga \( t = 5 \) detik. Aturan Trapesium, yang dijelaskan dalam buku *Numerical Methods for Engineers* oleh Chapra dan Canale, digunakan untuk mengaproksimasi integral definit \( \int_0^5 v(t) \, dt \), yang mewakili jarak tempuh.

Program ditulis dalam bahasa C dan menghasilkan:
- Jarak tempuh numerik (40.0000000000 meter untuk \( n = 100 \) subinterval).
- Solusi analitik (40.0000000000 meter).
- Kesalahan Absolut (0.0000000000 meter).
- Kesalahan Relatif (0.0000000000%).

Untuk fungsi linear seperti yang digunakan dalam studi kasus ini, Aturan Trapesium secara teoritis memberikan hasil yang eksak. Kesalahan yang sangat kecil (mendekati nol dan ditampilkan sebagai nol oleh program dengan presisi tinggi) yang mungkin muncul dalam beberapa implementasi disebabkan oleh keterbatasan presisi aritmetika floating-point komputer, bukan oleh metode itu sendiri.

Kode dilengkapi dengan komentar untuk menjelaskan setiap langkah, termasuk inisialisasi parameter, perhitungan integral, dan verifikasi hasil. Program ini dapat dimodifikasi untuk fungsi kecepatan lain atau data tabel dengan menyesuaikan fungsi `velocity()`. Laporan juga membahas potensi peningkatan metode Aturan Trapesium berdasarkan literatur terkini untuk fungsi non-linear.

### Cara Menjalankan
1.  **Prasyarat**: Pastikan kompiler C (misalnya, GCC) terinstal.
2.  **Kompilasi**:
    ```bash
    gcc trapezoidal.c -o trapezoidal -lm
    ```
3.  **Jalankan**:
    ```bash
    ./trapezoidal
    ```
4.  **Output**: Program akan menampilkan batas integrasi, jumlah subinterval, jarak tempuh numerik, solusi analitik, serta analisis kesalahan (absolut dan relatif).

### Struktur File
-   `trapezoidal.c`: Kode sumber utama dalam bahasa C yang mengimplementasikan *Trapezoidal Rule*.
-   `TugasPemrogramanB_Kelompok_1.tex`: Laporan tertulis **Implementasi Aturan Trapesium (\textit{Trapezoidal Rule}) untuk Menghitung Jarak Tempuh Benda** dalam format LaTeX.
-   `TugasPemrogramanB_Kelompok_1.pdf`: Versi PDF dari laporan tertulis.
-   `images/velocity_plot.png`: Plot fungsi kecepatan \( v(t) = 2t + 3 \) dan area di bawah kurva yang mewakili jarak tempuh, digunakan dalam laporan.
-   `README.md`: Dokumentasi ini.

### Contoh Output Program C

Perhitungan Numerik (Aturan Trapesium): Batas bawah (a) = 0.0 detik Batas atas (b) = 5.0 detik Jumlah subinterval (n) = 100 Jarak tempuh (integral v(t) dari t=0.0 ke t=5.0): 40.0000000000 meter
Perhitungan Analitik (Solusi Eksak): Jarak tempuh analitik: 40.0000000000 meter
Analisis Kesalahan: Kesalahan Absolut: 0.0000000000 meter Kesalahan Relatif: 0.0000000000%
Catatan: Untuk fungsi linear seperti v(t)=2t+3, Aturan Trapesium secara teoritis
memberikan hasil eksak. Kesalahan yang muncul (jika ada dan sangat kecil)
kemungkinan besar disebabkan oleh keterbatasan presisi floating-point komputer.


### Catatan Tambahan
-   Kode ini diuji pada sistem dengan GCC. Pastikan *library* matematika (`-lm`) disertakan saat kompilasi.
-   Untuk visualisasi hasil, data output dapat diplot menggunakan alat seperti Python atau Excel (lihat laporan untuk contoh plot).
-   Detail implementasi, analisis hasil yang lebih mendalam, diskusi mengenai perilaku metode untuk fungsi linear, dan tinjauan literatur mengenai potensi peningkatan metode tersedia dalam laporan tugas (format PDF).

### Referensi Utama
1.  S. C. Chapra and R. P. Canale, \textit{Numerical Methods for Engineers}, 7th ed. New York, NY, USA: McGraw-Hill Education, 2015.
2.  S.-T. Yeh, "Using trapezoidal rule for the area under a curve calculation," in \textit{Proc. 27th Annu. SAS® User Group Int. (SUGI’02)}, Cary, NC, USA, 2002, Paper 265-27.
3.  A. F. Abdulhameed and Q. A. Memon, "An improved Trapezoidal rule for numerical integration," \textit{J. Phys.: Conf. Ser.}, vol. 2090, no. 1, p. 012104, Nov. 2021, doi: 10.1088/1742-6596/2090/1/012104.
