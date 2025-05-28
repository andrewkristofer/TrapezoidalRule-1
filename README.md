# Tugas Pemrograman B - Kelompok 9

## Judul: Implementasi Aturan Trapesium (*Trapezoidal Rule*) untuk Menghitung Jarak Tempuh

### Anggota Kelompok:
- Andrew Kristofer Jian (NPM. 2206059673)
- Hanif Nur Ilham Sanjaya (NPM. 2206059692)
<!-- - [Nama Anggota 3] (NPM: [NPM 3])
- [Nama Anggota 4] (NPM: [NPM 4]) -->

### Deskripsi
Program ini mengimplementasikan metode numerik **Aturan Trapesium (*Trapezoidal Rule*)** untuk menghitung jarak tempuh benda berdasarkan fungsi kecepatan \( v(t) = 2t + 3 \) (dalam m/s) pada rentang waktu \( t = 0 \) hingga \( t = 5 \) detik. Aturan Trapesium, yang dijelaskan dalam buku *Numerical Methods for Engineers* oleh Chapra dan Canale, digunakan untuk mengaproksimasi integral definit \( \int_0^5 v(t) \, dt \), yang mewakili jarak tempuh. Program ditulis dalam bahasa C dan menghasilkan:
- Jarak tempuh numerik (40.0000 meter untuk \( n = 100 \) subinterval).
- Solusi analitik (40.0000 meter).
- Kesalahan relatif (0.000125%).

Kode dilengkapi dengan komentar untuk menjelaskan setiap langkah, termasuk inisialisasi parameter, perhitungan integral, dan verifikasi hasil. Program ini dapat dimodifikasi untuk fungsi kecepatan lain atau data tabel dengan menyesuaikan fungsi `velocity()`.

### Cara Menjalankan
1. **Prasyarat**: Pastikan kompiler C (misalnya, GCC) terinstal.
2. **Kompilasi**:
   ```bash
   gcc trapezoidal.c -o trapezoidal -lm
   ```
3. **Jalankan**:
   ```bash
   ./trapezoidal
   ```
4. **Output**: Program akan menampilkan jarak tempuh numerik, solusi analitik, dan kesalahan relatif.

### Struktur File
- `trapezoidal.c`: Kode sumber utama yang mengimplementasikan *Trapezoidal Rule*.
- `TugasPemrogramanB_Kelompok_1.tex`: Laporan tertulis **Implementasi *Trapezoidal Rule*** dalam format LaTeX.
- `TugasPemrogramanB_Kelompok_1.pdf`: Laporan tertulis **Implementasi *Trapezoidal Rule*** dalam format PDF.
- `images/velocity_plot.png`: Plot fungsi kecepatan \( v(t) = 2t + 3 \) dan area di bawah kurva yang mewakili jarak tempuh.
- `README.md`: Dokumentasi ini.

### Contoh Output
```
Jarak tempuh (integral v(t) dari t=0.0 ke t=5.0): 40.0000 meter
Solusi analitik: 40.0000 meter
Kesalahan relatif: 0.000125%
```

### Catatan
- Kode ini diuji pada sistem dengan GCC. Pastikan library matematika (`-lm`) disertakan saat kompilasi.
- Untuk visualisasi hasil, data output dapat diplot menggunakan alat seperti Python atau Excel (lihat laporan untuk contoh plot).
- Detail implementasi dan analisis hasil tersedia dalam laporan tugas (format PDF).

### Referensi
- S. C. Chapra dan R. P. Canale, *Numerical Methods for Engineers*, 7th ed., McGraw-Hill Education, 2015.