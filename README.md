# Tugas Pemrograman B - Kelompok 9

## Judul  
**Implementasi Aturan Trapesium (*Trapezoidal Rule*) untuk Menghitung Jarak Tempuh**

### Anggota Kelompok  
- Andrew Kristofer Jian (NPM 2206059673)  
- Hanif Nur Ilham Sanjaya (NPM 2206059692)  
- Farhan Ramadhani Zakiyyandi (NPM 2206081945)  
- Filaga Tifira Muthi (NPM 2206811323)

---

### Deskripsi  
Program ini mengimplementasikan metode numerik **Aturan Trapesium (*Trapezoidal Rule*)** untuk menghitung jarak tempuh benda berdasarkan fungsi kecepatan linear  
\[
v(t) = 2t + 3 \quad (\text{m/s})
\]
pada rentang waktu \( t = 0 \) hingga \( t = 5 \) detik. Aturan Trapesium, yang dijelaskan dalam buku *Numerical Methods for Engineers* oleh Chapra dan Canale, digunakan untuk mengaproksimasi integral  
\[
\int_{0}^{5} v(t)\,dt,
\]
yang mewakili jarak tempuh.

Program ditulis dalam bahasa C dan menghasilkan:
- Jarak tempuh numerik (40.0000000000 m untuk \( n = 100 \) subinterval).
- Solusi analitik (40.0000000000 m).
- Kesalahan Absolut (0.0000000000 m).
- Kesalahan Relatif (0.0000000000 %).

Untuk fungsi linear seperti pada studi kasus ini, Aturan Trapesium secara teoritis memberikan hasil yang eksak. Setiap kesalahan kecil (ditampilkan sebagai nol) disebabkan oleh keterbatasan presisi aritmetika floating-point komputer.

Kode disertai komentar yang menjelaskan setiap langkah: inisialisasi parameter, perhitungan integral, dan verifikasi hasil. Program ini dapat dimodifikasi untuk fungsi kecepatan lain atau data tabel dengan menyesuaikan fungsi `velocity()`. Laporan juga membahas potensi peningkatan metode untuk fungsi non-linear.

---

### Cara Menjalankan

1. **Prasyarat**  
   Pastikan kompiler C (misalnya GCC) terinstal.

2. **Kompilasi**  
   ```bash
   gcc trapezoidal.c -o trapezoidal -lm
````

3. **Jalankan**

   ```bash
   ./trapezoidal
   ```

4. **Output**
   Program akan menampilkan:

   * Batas integrasi (a, b)
   * Jumlah subinterval (n)
   * Jarak tempuh numerik
   * Solusi analitik
   * Analisis kesalahan (absolut dan relatif)

---

### Struktur File

* `trapezoidal.c`
  Kode sumber utama dalam bahasa C yang mengimplementasikan *Trapezoidal Rule*.

* `TugasPemrogramanB_Kelompok_1.tex`
  Laporan tertulis dalam format LaTeX.

* `TugasPemrogramanB_Kelompok_1.pdf`
  Versi PDF dari laporan tertulis.

* `images/velocity_plot.png`
  Plot fungsi kecepatan $v(t) = 2t + 3$ dan area di bawah kurva.

* `README.md`
  Dokumentasi proyek.

---

### Contoh Output Program C

```
Perhitungan Numerik (Aturan Trapesium):
  Batas bawah (a) = 0.0 detik
  Batas atas (b)  = 5.0 detik
  Jumlah subinterval (n) = 100
  Jarak tempuh (integral v(t) dari 0.0 ke 5.0): 40.0000000000 meter

Perhitungan Analitik (Solusi Eksak):
  Jarak tempuh analitik: 40.0000000000 meter

Analisis Kesalahan:
  Kesalahan Absolut: 0.0000000000 meter
  Kesalahan Relatif: 0.0000000000%

Catatan: Untuk fungsi linear seperti \( v(t)=2t+3 \), Aturan Trapesium secara teoritis memberikan hasil eksak. 
Kesalahan kecil (jika muncul) disebabkan oleh presisi floating-point komputer.
```

---

### Catatan Tambahan

* Kode diuji pada sistem dengan GCC; sertakan library matematika (`-lm`) saat kompilasi.
* Untuk visualisasi, data output dapat diproses dengan Python, Excel, atau alat lain (lihat laporan untuk contoh).
* Laporan PDF berisi detail implementasi, analisis mendalam, serta tinjauan literatur mengenai peningkatan metode.

---

### Referensi Utama

1. S. C. Chapra & R. P. Canale, *Numerical Methods for Engineers*, 7th ed., McGraw-Hill, 2015.
2. S.-T. Yeh, “Using trapezoidal rule for the area under a curve calculation,” *Proc. 27th Annu. SAS® User Group Int. (SUGI’02)*, Cary, NC, 2002.
3. A. F. Abdulhameed & Q. A. Memon, “An improved Trapezoidal rule for numerical integration,” *J. Phys.: Conf. Ser.*, vol. 2090, no. 1, p. 012104, Nov. 2021.
