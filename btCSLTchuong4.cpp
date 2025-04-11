#include <stdio.h>
#include <conio.h>
#include <math.h>
using namespace std;
void bai1(){
    int n,m; 
    printf("Bai 1:\nNhap 2 so: ");
    scanf("%d %d",&n,&m);
    printf("tong la: %d\n",n+m);
    printf("hieu la: %d\n",abs(n-m));
    printf("tich la: %d\n",n*m);
    printf("trung binh cong la: %f\n",0.5*(n+m));
}

void bai2(){
    printf("Bai 2:\nNhap ho ten: ");

    char ten[30];
    fgets(ten,30,stdin);
    fgets(ten,30,stdin);
    printf("Xin chao %s \n",ten);
}

void bai3(){
    printf("Bai 3:\nNhap ki tu: ");
    char a; scanf("%c",&a);
    printf ("Ki tu dung truoc la: %c\n",a-1);
    printf ("Ki tu dung sau la: %c\n",a+1);
}

void bai4(){
    printf("Bai 4:\nNhap so nguyen he 10: ");
    int s; scanf("%d",&s);
    printf("He 8: %o\n", s);
    printf("He 16: %x\n", s);
}

void bai5(){
    printf("Bai 5:\nNhap so nguyen he 16: ");
    char h[20];
    scanf("%s", h);

    int d = strtol(h, NULL, 16);
    printf("He 10: %d\n", d);
    printf("He 2: ");
    for (int i = 16; i >= 0; i--) {
        int bit = (d >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

}

void bai6(){
    printf("Bai 6:\nNhap so nguyen he 8: ");
    int o;
    scanf("%o", &o);
    printf("He 10: %d\n", o);
    printf("He 16: %X\n", o);  
    printf("He 2: ");
    for (int i = 16; i >= 0; i--) {
        int bit = (o >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

void bai7(){
    printf("Bai 7:\nNhap ban kinh r: ");

    int r; scanf("%d",&r);
    printf("Dien tich S= %f\n", 4*3.14*r*r );
    printf("The tich V= %f\n", (4/3)*3.14*r*r*r);
}

void bai8(){
    printf("Bai 8:\nNhap 3 so nguyen: ");

    int ng,th,n; scanf("%d %d %d", &ng, &th, &n);
    printf("%d/%d/%d\n",ng,th,n%100);
}

void bai9(){
    printf("Bai 9:\nNhap so giay: ");

    int s; scanf("%d",&s);
    int h,m;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s%=60;
    printf ("%02d:%02d:%02d",h,m,s);
}
int main(){
    bai1();
    bai2();
    bai3();
    bai4();
    bai5();
    bai6();
    bai7();
    bai8();
    bai9();
}