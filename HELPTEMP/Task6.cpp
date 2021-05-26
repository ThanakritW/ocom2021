#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y;
    void ass(int a,int b){
        x=a;
        y=b;
    }
};
void pswap(point &a,point &b){
    int tx,ty;
    tx=a.x;
    ty=a.y;
    a.ass(b.x,b.y);
    b.ass(tx,ty);

}
void rswap(point *a,point *b){
    int tx,ty;
    tx=a -> x;
    ty=a -> y;
    a->x=b->x;
    a->y=b->y;
    b->x=tx;
    b->y=ty;
}
void rpswap(int *ax,int *ay,int *bx,int *by){
    int tx,ty;
    tx=*ax;
    ty=*ay;
    *ax=*bx;
    *ay=*by;
    *bx=tx;
    *by=ty;
}
main(){
    int x,y,z,w;
    point p1;
    point p2;
    cin >> x >> y;
    cin >> z >> w;
    p1.ass(x,y);
    p2.ass(z,w);
    cout << "& swap\n";
    pswap(p1,p2);
    cout << p1.x << " " << p1.y << endl;
    cout << p2.x << " " << p2.y << endl;
    rswap(&p1,&p2);
    cout << "ref swap\n";
    cout << p1.x << " " << p1.y << endl;
    cout << p2.x << " " << p2.y << endl;
    rpswap(&p1.x,&p1.y,&p2.x,&p2.y);
    cout << "ref swap by point.x and point.y\n";
    cout << p1.x << " " << p1.y << endl;
    cout << p2.x << " " << p2.y;
}
