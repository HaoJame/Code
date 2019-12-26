#include<iostream>
using namespace std;
int Tong(int a, int b)
{
    return a+b; //Tinh tong
}
int Hieu(int a,int b)
{
    return a-b; 
}

int Tich(int a ,int b)
{
    return a*b;
}

//Thuong thì có 2 kiểu số chia hết(%) và số dư(/) 
float ThuongChiaHet(int a,int b)
{
    return float (a%b);
}
float ThuongChiaDu(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b ;//2 tham số sẽ truyền vào 
    cin >> a >> b; // Nhập vào 2 tham số
    cout << "Tong la " << Tong(a,b) << endl; // In ra màn hình  Tổng khi truyển vào 2 số a và b 
    cout << "Hieu la " << Hieu(a,b) << endl; // In ra màn hình Hiệu khi chuyển vào 2 số a và b
    cout << "Tich la " << Tich(a,b) << endl;
    cout << "Thuong chia het la " <<ThuongChiaHet(a,b) << endl;
    cout << "Thuong chia du la  " << ThuongChiaDu(a,b) << endl;
}