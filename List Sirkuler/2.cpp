void PrintKanan (List L, address x){
/* I.S. List tidak mungkin kosong */
/* F.S. List dicetak dari alamat x ke kanan hingga elemen terakhir list */
	cout<<"[";
	if(...(a)...){
		address temp = ...(b)...;
		while(...(c)...){
			cout << Info(temp) <<", ";
			temp = ...(d)...;
		}
		cout<<Info(temp);
	}
	cout<<"]";
}

void PrintKiri (List L, address x){
/* I.S. List tidak mungkin kosong */
/* F.S. List dicetak dari alamat x ke kiri hingga elemen pertama list */
	cout<<"[";
	if(...(e)...){
		address temp = ...(f)...;
		while(...(g)...){
			cout<<Info(temp) <<", ";
			temp = ...(h)...;
		}
		cout<<Info(temp);	
	}
	cout<<"]";
}

float rataKanan(List L, address x){
/* Mengembalikan nilai yang merupakan rata-rata elemen-elemen yang berada di sebelah kanan alamat x */
/* Jika tidak ada elemen yang berada di sebelah kanan elemen x, maka mengembalikan nilai 0*/
	int sum=0, count=0;
	float avg;
	if(...(i)...){
		address temp = ...(j)...;
		while(...(k)...){
			...(l)...; //bisa lebih dari 1 baris / perintah
		}
		...(m)...;
		return avg;
	} else{
		return 0;
	}
}

int rataKiri(List L, address x){
/* Mengembalikan nilai yang merupakan rata-rata elemen-elemen yang berada di sebelah kiri alamat x */
/* Jika tidak ada elemen yang berada di sebelah kiri elemen x, maka mengembalikan nilai 0 */
	int sum=0, count=0;
	float avg;
	if(...(n)...){
		address temp = ...(o)...;
		while(...(p)...){
			...(q)...; //bisa lebih dari satu baris / perintah
		}
		...(r)...;
		return avg;
	} else {
		return 0;
	}
}

int main() {
	List L;
	address A;
	createList(&L);
	int n;
	infotype a,x;
	
	cin >> n;
	for(int i =0; i<n;i++){
		cin>>x;
		if(i%2 == 0) 
			...(s)...; // insert first
		else
			...(t)...; // insert last
	}
	cin >> a;
	A = ...(u)...;
	PrintKiri(L,A);
	cout << " = " << rataKiri(L,A) << endl;
	PrintKanan(L,A);
	cout << " = " << rataKanan(L,A);
} 