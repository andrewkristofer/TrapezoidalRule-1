#include <stdio.h>
#include <math.h>

// Fungsi yang digunakan sebagai contoh:
// Fungsi kecepatan v(t) = 2t + 3
double velocity(double t) {
    return 2.0 * t + 3.0;
}

// Fungsi Aturan Trapesium untuk menghitung integral
double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n; // Lebar subinterval
    double sum = 0.5 * (velocity(a) + velocity(b)); // Term awal dan akhir
    
    // Menjumlahkan nilai fungsi pada titik tengah
    for (int i = 1; i < n; i++) {
        double t = a + i * h;
        sum += velocity(t);
    }
    
    return h * sum; // Hasil integral (jarak tempuh)
}

int main() {
    double a = 0.0; // Batas bawah (t = 0 detik)
    double b = 5.0; // Batas atas (t = 5 detik)
    int n = 100; // Jumlah subinterval (semakin besar, semakin akurat)
    
    // Menghitung jarak tempuh menggunakan Aturan Trapesium
    double distance = trapezoidal(a, b, n);
    
    // Menampilkan hasil
    printf("Jarak tempuh (integral v(t) dari t=%.1f ke t=%.1f): %.4f meter\n", a, b, distance);
    
    // Verifikasi dengan solusi analitik (opsional untuk laporan)
    // Integral v(t) = 2t + 3 adalah t^2 + 3t
    double analytic = (pow(b, 2) + 3 * b) - (pow(a, 2) + 3 * a);
    printf("Solusi analitik: %.4f meter\n", analytic);
    printf("Kesalahan relatif: %.6f%%\n", fabs((distance - analytic) / analytic) * 100);
    
    return 0;
}