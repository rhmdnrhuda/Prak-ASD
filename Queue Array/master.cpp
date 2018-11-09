#include <iostream>
using namespace std;

#define Nil 0 /* Nil adalah queue dengan elemen kosong */

/*selektor*/
/* Jika Q adalah Queue, maka akses elemen : */
#define Head(Q) (Q).HEAD
#define Tail(Q) (Q).TAIL
#define InfoHead(Q) (Q).T[(Q).HEAD]
#define InfoTail(Q) (Q).T[(Q).TAIL]
#define MaxEl(Q) (Q).MaxEl

/*** Definisi elemen dan address ***/
typedef int infotype; 
typedef int address; /* indeks tabel */

/* *** Definisi Type Queue *** */
typedef struct {
	infotype *T; /* tabel penyimpan elemen */
	address HEAD; /*alamat penghapusan*/
	address TAIL; /*alamat penambahan*/
	int MaxEl; /*maksimum banyaknya elemen queue*/
}Queue;

/* Definisi Queue kosong Head = Nil; TAIL = Nil. */
/* Catatan : implementasi T[0] tidak pernah dipakai */
/* Definisi akses dengan Selektor : Isilah dengan selektor yang tepat */
/* *** Predikat Pemeriksaan Kondisi Queue *** */

bool IsEmpty (Queue Q)  
/* Mengirim true jika Q kosong */
{
	/*kamus lokal*/

	/*algoritma*/
	return (Head(Q) == Nil && Tail(Q) == Nil);

}

bool IsFull (Queue Q) 
/* Mengirim true jika tabel penampung elemen Q sudah penuh yaitu mengandung MaxEl
elemen */
{
	/*kamus lokal*/
	int m = Head(Q) - Tail(Q);
	/*algoritma*/
	return (m == 1) || (m == (-1*MaxEl(Q)+1)); 
}

int NBElmt (Queue Q) 
/* Mengirimkan banyaknya elemen queue. Mengirimkan 0 jika Q kosong. */
{
	/*kamus lokal*/
	int n;
	/*algoritma*/
	if (IsEmpty(Q)) n = 0;
	else if (Head(Q) <= Tail(Q)) n = Tail(Q) - Head(Q) + 1;
	else n = Q.MaxEl - Tail(Q) + Head(Q) + 1; 
	return n;
}

/* *** Konstruktor *** */

void CreateEmpty (Queue *Q,int Max)
/* I.S. Max terdefinisi */
/* F.S. Sebuah Q kosong terbentuk dan salah satu kondisi sbb 
/*
Jika alokasi berhasil, tabel memori dialokasi berukuran Max
/*
atau  jika alokasi gagal, Q kosong dg Maksimum elemen=0
/* Proses  Melakukan alokasi memori dan membuat sebuah Q kosong
*/
{
	/*algoritma*/
	(*Q).T = (infotype *) malloc ((Max+1) * sizeof(infotype));
	if ((*Q).T != NULL) {
	MaxEl(*Q) = Max;
	Head(*Q) = Nil;
	Tail(*Q) = Nil;
	} else /* alokasi gagal */ {
	MaxEl(*Q) = Nil;
	}
}

/* *** Destruktor *** */
void DeAlokasi (Queue *Q)
/* Proses  Mengembalikan memori Q */
/* I.S. Q pernah dialokasi */
/* F.S. Q menjadi tidak terdefinisi lagi, MaxEl(Q) diset 0 */
{
	/*algoritma*/
	MaxEl(*Q) = Nil;
	free((*Q).T);	
}

void Add (Queue *Q,infotype X)
/* Proses  Menambahkan X pada Q dengan aturan FIFO */
/* I.S. Q mungkin kosong, tabel penampung elemen Q TIDAK penuh */
/* F.S. X menjadi TAIL yang baru, TAIL "maju". */
/*
Jika TAIL baru = MaxEl + 1, maka TAIL diset = 1. */
{
	/*kamus lokal*/

	/*algoritma*/ 
	if (IsEmpty(*Q))
	{	
		Tail(*Q) = 1;
		Head(*Q) = 1;
	}
	else
	{		
		Tail(*Q) += 1;
		if (Tail(*Q) == (*Q).MaxEl + 1) Tail(*Q) = 1;
	}
	InfoTail(*Q) = X;
}

void Del (Queue *Q,infotype *X)
/* Proses  Menghapus elemen pertama pada Q dengan aturan FIFO */
/* I.S. Q tidak kosong */
/* F.S. X = nilai elemen HEAD pada I.S.,
Jika Queue masih isi  HEAD "maju".
Jika HEAD baru menjadi MaxEl + 1, maka HEAD diset = 1;
Jika Queue menjadi kosong, HEAD = TAIL = Nil. */
{
	/*kamus lokal*/

	/*algoritma*/  
		(*X) = InfoHead(*Q);
		if (Head(*Q) == Tail(*Q))	{
			Head(*Q) = Nil;
			Tail(*Q) = Nil;
		}
		else {	
			Head(*Q)++;
			if (Head(*Q) == MaxEl(*Q) + 1) Head(*Q) = 1;
		}
}

void Print (Queue Q) {
/* I.S. : Q terdefinisi, mungkin kosong */
/* F.S. : Semua elemen Q tertulis di layar, dengan format:
[ el-head ... el-tail ], misalnya [4 8 12 9 10].
Jika kosong, tampilan di layar adalah []. */
/*kamus lokal*/
int i;
/*algoritma*/
	cout << "[";
	if(!IsEmpty(Q)) {
		i = Head(Q);
		if(i<=Tail(Q)) {
			while(i<=Tail(Q)) {
				cout << Q.T[i] << " ";
				i++;
			}
		} else {
			while(i<=MaxEl(Q)) {
				cout << Q.T[i] << " ";
				i++;
			} i=1;
			while(i<=Tail(Q)) {
				cout << Q.T[i] << " ";
				i++;
			}
		}
	}
	cout << "]\n";
}