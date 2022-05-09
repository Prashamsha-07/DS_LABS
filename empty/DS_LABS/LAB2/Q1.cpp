#include<iostream>
using namespace std;


int ext_eu(int a,int b,int &x, int &y){
        if(b == 0){
            x=1;
            y=0;
            return a;
        }
        if(b>a){
            std :: swap(a,b);
        }
        int x1,y1,d;
        d = ext_eu(b,a%b,x1,y1);
        x = y1;
        y = x1 - (a/b)*y1;
        return d;
    }

int main(){
    int a,b,x,y;
    cin>>a>>b;
    int g = ext_eu(a,b,x,y);
    cout << g << " " << x << " " << y;
}