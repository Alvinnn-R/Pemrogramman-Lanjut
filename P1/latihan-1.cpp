#include <iostream>

using namespace std;

int main() {
//	SATUAN BIAYA BANTUAN BIAYA PENDIDIKAN ANAK (BBPA) PADA PERWAKILAN REPUBLIK INDONESIA DI LUAR NEGERI  (73 - 6)
//	Buat program yang meminta input tingkat pendidikan anak (SD, SMP, SMA, atau Perguruan Tinggi) dan menghitung 
//	berapa biaya bantuan pendidikan luar negeri yang diberikan berdasarkan satuan biaya pendidikan anak pada PMK 049 Tahun 2023.

//	string pendidikan, status;
//	float biaya_pendidikan = 0;
//	
//	switch (pendidikan){
//		case 'SD':
//			biaya_pendidikan = 8.580;
//			break;
//		case 'SMP':
//			biaya_pendidikan = 10.940;
//			break;
//		case 'SMA':
//			biaya_pendidikan = 13.560;
//			break;
//		case 'Sarjana':
//			biaya_pendidikan = 14.840;
//			break;
//		default:
//			status = 'Status Not Found!!!';
//			break;
//	}
//	
//	
//	if (!pendidikan) {
//		cout << status <<endl;
//	} else {
//		cout << "Status Pendidikan : " << pendidikan << ", Mendapatkan Biaya Pendidikan : $" << biaya_pendidikan;
//	}

	string pendidikan;
    float biaya_pendidikan = 0;

    // Meminta input dari pengguna
    cout << "Masukkan tingkat pendidikan anak (SD/SMP/SMA/Sarjana): ";
    cin >> pendidikan;

    // Menggunakan switch-case berdasarkan string untuk menentukan biaya pendidikan
    if (pendidikan == "SD") {
        biaya_pendidikan = 8.580;
    } else if (pendidikan == "SMP") {
        biaya_pendidikan = 10.940;
    } else if (pendidikan == "SMA") {
        biaya_pendidikan = 13.560;
    } else if (pendidikan == "Sarjana") {
        biaya_pendidikan = 14.840;
    } else {
        cout << "Status Not Found!!!" << endl;
        return 0;
    }

    // Menampilkan hasil
    cout << "Status Pendidikan: " << pendidikan << ", Mendapatkan Biaya Pendidikan: $" << biaya_pendidikan << endl;

	
}
