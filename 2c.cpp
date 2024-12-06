#include<bits/stdc++.h>
using namespace std;
#define MAX 100

/*void nhap (double a[MAX][MAX], int& m, int& n) {
    cin>>m>>n;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    }
}

void chuyenvi(double a[MAX][MAX], int m, int n) {
    double c[n][m];
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
            c[j][i]=a[i][j];
    }
}

void xuat (double c[MAX][MAX], int m, int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            if (j==n-1) {cout<<c[i][j]<<" "<<endl;}
            else cout<<c[i][j]<<" ";
        }
    }
}*/

int main(){
    double a[MAX][MAX]; double m,n; double c[MAX][MAX];
    //nhap(a, m, n);
    //chuyenvi(a, m, n);
    //xuat(c, m, n);
    cin>>m>>n;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
            cin>>a[i][j];
    }
        for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++)
            c[j][i]=a[i][j];
    }
        for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++){
            if (j==m-1) {cout<<c[i][j]<<" "<<endl;}
            else cout<<c[i][j]<<" ";
        }
    }
    return 0;
}

