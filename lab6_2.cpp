#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double a){
    a = (a*M_PI)/180.00;
    return a;
}
double rad2deg(double b){
    b = (b*180.00)/M_PI;
    return b;
}
double findXComponent(double l1,double l2,double a1,double a2){
    double xcomp = (cos(a1)*l1)+(cos(a2)*l2);
    return xcomp;
}
double findYComponent(double l1,double l2,double a1,double a2){
    double ycomp = (sin(a1)*l1)+(sin(a2)*l2);
    return ycomp;
}
double pythagoras(double c,double d){
    c = sqrt((c*c)+(d*d));
    return c;
}
void showResult(double e,double f){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
    cout << "\nLength of the resultant vector = " << e;
    cout << "\nDirection of the resultant vector (deg) = " << f;
    cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}