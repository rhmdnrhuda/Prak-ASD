int KonversiGanjil(List L, int x[]){
	/* I.S. L berisi Bit bit biner dan x[i] berisi bilangan biner  */
	/* Mengkonversi mulai dari Elemen pertama List, lalu ke elemen list selanjutnya*/
	/* Hanya mengkonversi Element List yang memiliki nilai 2^bilangan ganjil*/
	/* Membuat keluaran sesuai dengan test case. Contoh : 
		2^7 = 128
		2^5 = 32 
		2^3 = 8 
		2^1 = 2 
	*/
	/* F.S. Mengemabalikan nilai yang berisi jumlah dari hasil konversi tiap-tiap elemen (bit).
		Misal dari contoh diatas jumlahnya adalah 170.		
	*/
}

int KonversiGenap(List L, int x[]){
	/* I.S. L berisi Bit bit biner dan x[i] berisi bilangan biner  */
	/* Mengkonversi mulai dari Elemen List terakhir, lalu ke elemen list sebelumnya*/
	/* Hanya mengkonversi Element List yang memiliki nilai 2^bilangan genap*/
	/* Membuat keluaran sesuai dengan test case. Contoh :
		2^0 = 1 
		2^2 = 4 
		2^4 = 16 
		2^6 = 6
	*/
	/* F.S. Mengemabalikan nilai yang berisi jumlah dari hasil konversi tiap-tiap elemen (bit).
	Misal dari contoh diatas jumlahnya adalah 27.
	*/
}

int main() {
	List L;
	address ps;
	createList(&L);
	/* Insert List awal berturut turut 2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0 */
	int x[8];
	/*Input x[i]*/
	/*Menampilkan hasil konversi ganjil ditambah hasil konversi genap*/

	return 0;
} 