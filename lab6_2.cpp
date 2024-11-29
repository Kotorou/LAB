#include <iostream>
#include <cmath>
using namespace std;
double pi = 2*acos(0.0);
double sumlen,sumx,sumy = 0;

double deg2rad(double rad){
        rad = rad * pi/(180.0);
        return rad;
    }
double rad2deg(double deg){
        deg = deg * 180.0/pi;
        return deg;
    }
double findXComponent(double l1,double l2,double a1,double a2){
    double sumx =  l1 * cos(a1) + l2 * cos(a2);
    return sumx;
}
double findYComponent(double l1,double l2,double a1,double a2){
    double sumy = l1 * sin(a1) + l2 * sin(a2);
    return sumy;
}
double pythagoras(double sumx, double sumy){
    double sumlen = sqrt(pow(sumx,2)+pow(sumy,2));
    return sumlen;
}
void showResult(double sumlen,double sumdeg){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";

    cout << "Length of the resultant vector = " << sumlen << "\n";

    cout << "Direction of the resultant vector (deg) = " << sumdeg << "\n";

    cout<< "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << "\n";
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
