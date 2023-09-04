#include <iostream>
#include <ctime>
#include <cmath>

#include "circle.h"
#include "curve.h"
#include "ellipse.h"
#include "spiral.h"

using namespace std;

string point_out(std::tuple<double,double,double> point) {
    string s = "";
    s=(std::to_string(get<0>(point))+" ");
    s+=(std::to_string(get<1>(point))+" ");
    s+=std::to_string(get<2>(point));
    return s;
}


int main()
{
    srand(time(0));
    std::vector<Curve*> curves;
    int total = rand()%100;
    for (int i = 0; i < total; ++i) {
        int variant = rand()%3;
        if (variant==0) {
            curves.push_back(new Circle(rand()%100));
            cout<<i<<" Circle: ";
        }
        if (variant==1) {
            curves.push_back(new Ellipse(rand()%100, rand()%100));
            cout<<i<<" Ellipse: ";
        }
        if (variant==2) {
            curves.push_back(new Spiral(rand()%100, rand()%10/10.0));
            cout<<i<<" Helix: ";
        }
        cout<<"S(PI/4)="<<point_out(curves.back()->getPoint(M_PI_4))<<" ";
        cout<<"S'(PI/4)="<<point_out(curves.back()->getDerivative(M_PI_4))<<endl;

    }

      // Fill container with random curves

      std::list<Circle*> circles;
      for (auto curve : curves) {
        Circle* circle = dynamic_cast<Circle*>(curve);
        if (circle) circles.push_back(circle);
      }

      // Sort circles by radius
      circles.sort([](Circle* a, Circle* b) { return a->getter() < b->getter(); });

      // Compute total radius
      double totalRadius = 0;
      int j=0;
      for (auto circle : circles) {
          cout<<circle->getter()<<endl;
          j++;
        totalRadius += circle->getter();
      }

      std::cout << "Total radius: " << totalRadius << std::endl;
    return 0;
}
