#include <iostream>
using namespace std;
class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPerdana;
	int uangBangunan;
	int totalBiaya;

public:
	MasukUniversitas() {
		uangPendaftaran = 100000;
	}
	virtual void namaJalurMasuk() { return; }
	class SNBT {
		int uangPendaftaran;
		int uangSemesterPerdana;
		int uangBangunan;
		int TotalBiaya;
	};

	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}
	void setUangSemesterPerdana(int nilai) {
		this->uangSemesterPerdana = nilai;
	}
	float getUangSemesterPerdana() {
		return uangSemesterPerdana;
	}
	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangBangunan() {
		return uangBangunan;
	}
	void setHitungTotalBiaya(int nilai) {
		this->nilai = (uangPendaftaran + uangBangunan + uangSemesterPerdana);
	}
	float getHitungTotalBiaya() {
		return totalBiaya;
	}
	
};
class SNBT : public MasukUniversitas {
	int uangPendaftaran;
	int uangSemesterPerdana;
	int uangBangunan;
	int TotalBiaya;
};
class SNBP : public MasukUniversitas {
	int uangPendaftaran;
	int uangSemesterPerdana; 
	int totalBiaya;
};
int main() {
	// isi disini untuk fungsi main
};