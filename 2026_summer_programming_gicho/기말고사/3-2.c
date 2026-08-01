// 2023020378 이다윤

# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <stdlib.h>

typedef struct Product {
	int num;
	char name[30];
	int count;
}Product;

int compare(Product* a, Product* b);
void printStock(Product* p, int n);

int main() {
	FILE* f;
	f = fopen("f3.txt", "r");
	if (f == NULL) {
		printf("file open failed\n");
		return 1;
	}

	int n;
	fscanf(f, "%d", &n);

	Product* p;
	if ((p = (Product*)malloc(sizeof(Product) * n)) == NULL) {
		printf("failed\n");
		return 1;
	}
	
	for (int i = 0; i < n; i++) {
		fscanf(f, "%d %s %d", &p[i].num, p[i].name, &p[i].count);
	}

	qsort(p, n, sizeof(Product), compare);
	printf("===== 재고수량 기준 정렬 =====\n");
	printStock(p, n);

	printf("===== 재고가 가장 적은 상품 =====\n");
	printf("상품번호 : %d\n", p[0].num);
	printf("상품명   : %s\n", p[0].name);
	printf("재고수량 : %d\n", p[0].count);

	fclose(f);
	free(p);
	return 0;
}

int compare(Product* a, Product* b){
	return a->count - b->count;
}

void printStock(Product* p, int n) {
	for (int i = 0; i < n; i++) {
		printf("%d      %-12s       %d\n", p[i].num, p[i].name, p[i].count);
	}
}