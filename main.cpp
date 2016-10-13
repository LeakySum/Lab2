#include <iostream>

using namespace std;
double sum (double a, double b);
double subtraction (double a, double b);
double divison (double a, double b);
double multiplication (double a, double b);
double square (double a);
double power (double a, unsigned int b);


int main() {
    cout << "Hello, World!" << endl;
    return 0;
}


double sum (double a, double b){
    return(a+b);}

double subtraction (double a, double b){
    return(a-b);
}

double division (double a, double b){
    if (b==0) {cout << "error\n";
        return(0);} else
        return(a/b);
}

double multyplication (double a, double b){
    return(a*b);
}

double square (double a){
        double x=1; double y;
        int i=0;
        while(1) {
            y=x;
            x=1./2*(x+a/x);
            if (x>=y) { i++; if (i>1) { break;}};
        }

        return(x);
}//уточнить про return!

double power (double a, unsigned int b){
    if (b==0) a=0; else{
        for(int i=0; i<b; i++){a=a*a;};}
    return(a);
}