#include <stdio.h>
#include <math.h> // Diperlukan untuk fungsi fabs() dan pow()

/**
 * @brief Menghitung nilai fungsi kecepatan v(t) = 2t + 3.
 *
 * Fungsi ini mendefinisikan hubungan antara waktu (t) dan kecepatan (v).
 * Dalam studi kasus ini, fungsi kecepatan adalah linear.
 *
 * @param t Waktu dalam satuan detik.
 * @return Nilai kecepatan pada waktu t, dalam satuan meter/detik.
 */
double velocity(double t) {
    return 2.0 * t + 3.0;
}

/**
 * @brief Mengaproksimasi integral suatu fungsi menggunakan Aturan Trapesium.
 *
 * Metode Aturan Trapesium membagi area di bawah kurva fungsi menjadi
 * sejumlah n trapesium dan menjumlahkan luas masing-masing trapesium
 * untuk mendapatkan nilai integral aproksimasi.
 * Formula yang digunakan: Integral = (h/2) * [f(x0) + 2*sum(f(xi)) + f(xn)]
 *
 * @param a Batas bawah interval integrasi.
 * @param b Batas atas interval integrasi.
 * @param n Jumlah subinterval (segmen) yang digunakan untuk aproksimasi.
 * Semakin besar n, umumnya hasil aproksimasi semakin akurat.
 * @return Nilai aproksimasi dari integral fungsi velocity(t) dari a sampai b.
 */
double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n; // Menghitung lebar setiap subinterval (trapesium)
    double sum;

    // Term awal dan akhir dari formula Aturan Trapesium
    // f(x0) dan f(xn) hanya dikalikan dengan 1 (atau 0.5 jika h/2 langsung diterapkan)
    sum = velocity(a) + velocity(b);

    // Menjumlahkan nilai fungsi pada titik-titik interior (batas antar segmen)
    // Setiap f(xi) untuk i = 1 sampai n-1 dikalikan dengan 2
    for (int i = 1; i < n; i++) {
        double t = a + i * h;
        sum += 2.0 * velocity(t); // Mengalikan dengan 2 sesuai formula
    }

    // Mengalikan dengan h/2 untuk mendapatkan hasil akhir integral
    return (h / 2.0) * sum;
}

int main() {
    double a = 0.0; // Batas bawah integrasi (misalnya, waktu awal t = 0 detik)
    double b = 5.0; // Batas atas integrasi (misalnya, waktu akhir t = 5 detik)
    int n = 100;   // Jumlah subinterval (segmen). Semakin besar, hasil cenderung lebih akurat.

    // Menghitung jarak tempuh (integral dari fungsi kecepatan) menggunakan Aturan Trapesium
    double distance_numerical = trapezoidal(a, b, n);

    // Menampilkan hasil perhitungan numerik
    printf("Perhitungan Numerik (Aturan Trapesium):\n");
    printf("Batas bawah (a) = %.1f detik\n", a);
    printf("Batas atas (b)  = %.1f detik\n", b);
    printf("Jumlah subinterval (n) = %d\n", n);
    printf("Jarak tempuh (integral v(t) dari t=%.1f ke t=%.1f): %.10f meter\n", a, b, distance_numerical);
    printf("--------------------------------------------------\n");

    // Verifikasi dengan solusi analitik (eksak)
    // Integral dari v(t) = 2t + 3 adalah s(t) = t^2 + 3t
    // Jarak tempuh = s(b) - s(a)
    double distance_analytic = (pow(b, 2) + 3.0 * b) - (pow(a, 2) + 3.0 * a);

    // Menampilkan hasil perhitungan analitik
    printf("Perhitungan Analitik (Solusi Eksak):\n");
    printf("Jarak tempuh analitik: %.10f meter\n", distance_analytic);
    printf("--------------------------------------------------\n");

    // Menghitung dan menampilkan kesalahan (error)
    double absolute_error = fabs(distance_numerical - distance_analytic);
    double relative_error_percentage = 0.0;

    // Menghindari pembagian dengan nol jika solusi analitik adalah 0
    if (fabs(distance_analytic) > 1e-9) { // 1e-9 adalah toleransi kecil untuk angka mendekati nol
        relative_error_percentage = (absolute_error / distance_analytic) * 100.0;
    }

    printf("Analisis Kesalahan:\n");
    printf("Kesalahan Absolut: %.10f meter\n", absolute_error);
    printf("Kesalahan Relatif: %.10f%%\n", relative_error_percentage);
    printf("--------------------------------------------------\n");
    printf("Catatan: Untuk fungsi linear seperti v(t)=2t+3, Aturan Trapesium secara teoritis\n");
    printf("memberikan hasil eksak. Kesalahan yang muncul (jika ada dan sangat kecil)\n");
    printf("kemungkinan besar disebabkan oleh keterbatasan presisi floating-point komputer.\n");


    return 0; // Mengindikasikan program berakhir dengan sukses
}
