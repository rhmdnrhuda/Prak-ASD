#include <iostream>
using namespace std;

#define Nil -1         /* Nil adalah queue dengan elemen kosong */
#define MaxEl 20       /* MaxEl adalah ukuran maksimum table penampung */

typedef int infotype;
typedef struct {
	infotype T[MaxEl]; /* tabel penyimpan elemen */
	                   /* Indeks yang digunakan: 0..MaxEl-1 */
	int HEAD;          /* HEAD: alamat penghapusan */
	int TAIL;          /* TAIL: alamat penambahan */
} Queue;

/*** Konstruktor/Kreator  ***/
void CreateEmpty (Queue *Q){
/* I.S. sembarang */
/* F.S. Sebuah Q kosong terbentuk dengan elemen sebanyak MaxEl.*/
/*      Ciri Q kosong: HEAD=Nil dan TAIL=Nil */

	
}

/* Tes Kosong atau Penuh */
boolean IsEmpty (Queue Q){
/* Mengirim true jika Q kosong, false jika tidak */	
	
}

boolean IsFull(Queue Q){
/* Mengirim true jika tabel penampung elemen Q sudah penuh */
/* yaitu mengandung elemen sebanyak MaxEl */
	
}


/* Banyaknya elemen Queue */
int NbElmt(Queue Q){
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong. */

}


/*** Primitif Add/Delete ***/
void Add (Queue *Q, infotype X){
/* Proses: Menambahkan X pada Q dengan aturan FIFO */
/* I.S. Q mungkin kosong, tabel penampung elemen Q TIDAK penuh */
/* F.S. X menjadi TAIL yang baru, TAIL "maju" */
	
}


void Del(Queue *Q, infotype * X){
/* Proses: Menghapus X pada Q dengan aturan FIFO */
/* I.S. Q tidak mungkin kosong */
/* F.S. X = nilai elemen HEAD pd I.S., HEAD "maju";
        Q mungkin menjadi kosong */	
	
	
}